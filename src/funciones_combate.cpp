#include "funciones_combate.h"



void combate(bn::vector<carta,60>& tronco_jugador,bn::vector<carta,60>& tronco_oponente,bn::random random){

    bn::regular_bg_ptr fondo = bn::regular_bg_items::playmat.create_bg(0,0);

    //Defino vector que contenga las imagenes
    bn::vector<bn::sprite_ptr,60> imagenes_jugador;
    bn::vector<bn::sprite_ptr,60> imagenes_oponente;
    
    // //Defino las posiciones del jugador
    
    //    //        [1]
    //    //  [2][3][4][5][6]
    
    // //Defino las posiciones del oponente
    
    //    //  [2][3][4][5][6]
    //    //        [1]
    
    bn::sprite_ptr jugador_inferior = dibuja(0,0,96,12);
    bn::sprite_ptr jugador_superior = dibuja(0,0,96,12);

    bn::sprite_ptr oponente_inferior = dibuja(0,0,96,-19);
    bn::sprite_ptr oponente_superior = dibuja(0,0,96,-19);
    
    // bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
    // bn::vector<bn::sprite_ptr, 2> text_sprites;
    // bn::fixed max_cpu_usage;
    // int counter = 1;

    // while(true){
    //     max_cpu_usage = bn::max(max_cpu_usage, bn::core::last_cpu_usage());
    //     --counter;
    //     if(! counter)
    //         {
    //             bn::string<32> text;
    //             bn::ostringstream text_stream(text);
    //             text_stream.append((max_cpu_usage * 100).right_shift_integer());
    //             text_stream.append("%");
    //             text_sprites.clear();
    //             text_generator.generate(0, 0, text, text_sprites);

    //             max_cpu_usage = 0;
    //             counter = 60;
    //         }

    //         //info.update();
    //         bn::core::update();
    // }

    /*Nuevo enfoque, solo se usa el vector deck
    el juego, la mano, el deck, descarte, premios estan identificador a travez de los indices

    Ejemplo
    Todo se llamara tronco, el tronco esta conformado por cartas en juego, mano, deck, descarte y premios
    [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
                       |                    |                                               |                                                                          |                  
                       a                    b                                               c                                                                          d                  
        juego               mano                                deck                                                        descarte                                        premios
    
    Las cartas jugadas son desde el indice 0 hasta el indice a
    La mano es desde el indice a hasta el indice b
    El deck es desde el indice b hasta el indice c
    La pila de descarte es del indice c hasta el indice d
    Los premios son desde el indice d hasta el indice 60

    En el primer turno cuando cuando solo halla mano , deck y premios los indices a y c seran -1, tendra que haber un boleano que indique cuando sera su primer poke puesto o su primer descarte

    */

//    int a = -1;
//    int b = 0;
//    int c = -1;
//    int d = -1;

   int indices_jugador[4]={0, 0,60,60};
//                          a  b  c  d
   robar_carta(tronco_jugador,imagenes_jugador,jugador_superior,indices_jugador,7);
   //BN_LOG(verificar_mano_inicial(tronco_jugador, indices_jugador));
   //log_tronco(tronco_jugador,indices_jugador);
   //barajear(tronco_jugador,indices_jugador,2,random);
//    log_tronco(tronco_jugador);
   
//    BN_LOG("a:",indices_jugador[0]);
//    BN_LOG("b:",indices_jugador[1]);

   while(true){
        BN_LOG(tronco_jugador[2].obtener_nombre());
        if(bn::keypad::l_pressed()) mostrar_informacion(tronco_jugador[1]);
        bn::core::update();
   }

}

void robar_carta(bn::vector<carta,60> tronco,bn::vector<bn::sprite_ptr,60>& imagenes,bn::sprite_ptr& carta,int indices[4],int cant_cartas){
    
    bn::fixed x_inicial = carta.x();
    bn::fixed y_inicial = carta.y();

    int velocidad = 2;

    for(int n=0;n<cant_cartas;n++){
        if((indices[1]+1)==indices[2]) break;
        
        for(int j=0;j<30;j++){
            carta.set_x(carta.x()+velocidad);
            bn::core::update();
        }
        carta.set_position(x_inicial,y_inicial);
        agrega_imagen(tronco,imagenes,tronco[indices[1]]);
        indices[1]++;
        reorganiza_imagen(imagenes,indices[0],indices[1]);
        
    }
}

void agrega_imagen(bn::vector<carta,60> tronco, bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta){
    imagenes.push_back(dibuja(_carta.obtener_tipo1(),_carta.obtener_tipo2(),0,62));
}

void reorganiza_imagen(bn::vector<bn::sprite_ptr,60>& imagenes,int a,int b){
    int n = b-a+1;
    int s = 10; //separacion entre cartas
    int distancia = 8 + s;
    int posicion_inicial = -distancia*((n-1)/2);

    for(int j=a;j<b;j++){
        //BN_LOG(j);
        imagenes[j].set_x(posicion_inicial+(distancia*j));
    }

    bn::core::update();

}

/*
    [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
                       |                    |                                               |                                                                          |                  
                       a                    b                                               c                                                                          d                  
        juego               mano                                deck                                                        descarte                                        premios
*/

carta retirar_carta(bn::vector<carta,60> &tronco,bn::vector<bn::sprite_ptr,60>& imagenes ,int indices_jugador[4],int indice_carta){
    
    class carta retirado = tronco[indice_carta];

    bn::vector<carta,60>::const_iterator posicion = tronco.begin()+indice_carta;
    tronco.erase(posicion);

    // if(indice_carta>=indices_jugador[0] and indice_carta<indices_jugador[1]){ //Mano
    //     if(indices_jugador[0]==-1){
    //         bn::vector<bn::sprite_ptr,60>::const_iterator posicion_imagen = imagenes.begin()+indice_carta;
    //         imagenes.erase(posicion_imagen);
    //     }else{
    //         bn::vector<bn::sprite_ptr,60>::const_iterator posicion_imagen = imagenes.begin()+indice_carta-indices_jugador[0]-1;
    //         imagenes.erase(posicion_imagen);
    //     }
    // }

    if(indice_carta>=0 and indice_carta<indices_jugador[0]){    //Cartas en juego
        indices_jugador[0]--;
        indices_jugador[1]--;
        indices_jugador[2]--;
        indices_jugador[3]--;
    }else if(indice_carta>=indices_jugador[0] and indice_carta<indices_jugador[1]){     //Cartas en la mano
        bn::vector<bn::sprite_ptr,60>::const_iterator posicion_imagen = imagenes.begin()+indice_carta-indices_jugador[0];
        imagenes.erase(posicion_imagen);
        

        indices_jugador[1]--;
        indices_jugador[2]--;
        indices_jugador[3]--;

        reorganiza_imagen(imagenes,indices_jugador[0],indices_jugador[1]);
    }else if(indice_carta>=indices_jugador[1] and indice_carta<indices_jugador[2]){     //Cartas en el deck
        BN_LOG("Longitud del vector: ",tronco.size());
        indices_jugador[2]--;
        indices_jugador[3]--;
    }else if(indice_carta>=indices_jugador[2] and indice_carta<indices_jugador[3]){     //cartas en la pila de descarte
        indices_jugador[3]--;
    }

    return retirado;

}

void log_tronco(bn::vector<carta,60> tronco,int indices[4]){
    int n = tronco.size();
    BN_LOG("-> Cantidad de cartas: ",n);

    // for(int j=0;j<n;j++){
    //     BN_LOG(tronco[j].obtener_nombre());
    // }

    BN_LOG("-Cartas en juego: ");
    if(indices[0]!=0){
        for(int j=0;j<indices[0];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("No hay cartas en juego");
    }

    BN_LOG("-Mano: ");
    if(indices[0]!=indices[1]){
        for(int j=indices[0];j<indices[1];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("La mano esta vacia");
    }

    BN_LOG("-Deck: ");
    if(indices[1]!=indices[2]){
        for(int j=indices[1];j<indices[2];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("El deck esta vacio");
    }

    BN_LOG("-Descarte: ");
    if(indices[2]!=indices[3]){
        for(int j=indices[2];j<indices[3];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("La pila de descarte esta vacia");
    }

    BN_LOG("-Premios: ");
    if(indices[3]!=60){
        for(int j=indices[3];j<60;j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("No hay premios");
    }

}

void barajear(bn::vector<carta,60>& tronco,int indices[4],int n,bn::random random){
    
    int indice1;
    int indice2;
    
    switch (n)
    {
    case 2:{        //Mano
        indice1 = indices[0];
        indice2 = indices[1];
        break;
    }
    case 3:{        //Deck
        indice1 = indices[1];
        indice2 = indices[2];
        break;
    }
    case 5:{        //Premios
        indice1 = indices[2];
        indice2 = 59;
        break;
    }
    case 6:{        //Deck completo, al inicio de la partida
        indice1 = 0;
        indice2 = 59;
        break;
    }
    default:
        break;
    }

    // BN_LOG(indice1);
    // BN_LOG(indice2);

    int cant = indice2-indice1;

    for(int n=indice1;n<indice2;n++){
        cambio(tronco,n,random.get_int(indice1,indice2));
    }

}

bool verificar_mano_inicial(bn::vector<carta,60> tronco, int indices[4]){
    int basicos = 0;
    
    for(int n = indices[0];n<indices[1];n++){
        if(es_basico(tronco[n])) basicos++;
    }

    if(basicos>0) return true;

    return false;
}

void cambio(bn::vector<carta,60>& tronco,int a, int b){

    //guardo los valores originales de tronco[a]
    bn::string<32> temp1 = tronco[a].obtener_nombre();
    int temp2 = tronco[a].obtener_tipo1();
    int temp3 = tronco[a].obtener_tipo2();

    //reasigno en tronco[a] lo que hay en tronco[b]
    tronco[a].establecer_nombre(tronco[b].obtener_nombre());
    tronco[a].establecer_tipo1(tronco[b].obtener_tipo1());
    tronco[a].establecer_tipo2(tronco[b].obtener_tipo2());

    //reasigno en tronco[b] los valores originales de tronco[a]
    tronco[b].establecer_nombre(temp1);
    tronco[b].establecer_tipo1(temp2);
    tronco[b].establecer_tipo2(temp3);

}

void agrega_carta(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,class carta _carta,int indices[4],int a){
    
    bn::vector<carta,60>::const_iterator posicion = tronco.begin();

    switch (a)
    {
    case 1:{    //Agregar a la zona de juego
        bn::vector<carta,60>::const_iterator posicion = tronco.begin();
        tronco.insert(posicion,_carta);
        indices[0]++;
        indices[1]++;
        indices[2]++;
        indices[3]++;
        break;
    }
    case 2:{    //Agregar a la mano
        //bn::vector<carta,60>::const_iterator posicion = tronco.begin() + indices[0];
        posicion += indices[0];
        tronco.insert(posicion,_carta);
        indices[1]++;
        indices[2]++;
        indices[3]++;
        agrega_imagen(tronco,imagenes,_carta);
        reorganiza_imagen(imagenes,indices[0],indices[1]);
        break;
    }
    case 3:{    //Agregar al deck
        //bn::vector<carta,60>::const_iterator posicion = tronco.begin() + indices[1];
        posicion += indices[1];
        tronco.insert(posicion,_carta);
        indices[2]++;
        indices[3]++;
        break;
    }
    case 4:{    //Agregar al descarte
        //bn::vector<carta,60>::const_iterator posicion = tronco.begin() + indices[2];
        posicion += indices[2];
        tronco.insert(posicion,_carta);
        indices[3]++;
        break;
    }
    case 5:{    //Agregar a los premios
        //bn::vector<carta,60>::const_iterator posicion = tronco.begin() + indices[3];
        posicion += indices[3];
        tronco.insert(posicion,_carta);
        break;
    }
    default:
        break;
    }
}

void mano_juego(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,1);
}

void mano_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,4);
}

void mano_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,3);
}

void deck_premios(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4]){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indices[1]);

    agrega_carta(tronco,imagenes,retirado,indices,5);
}

void deck_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4]){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indices[1]);

    agrega_carta(tronco,imagenes,retirado,indices,4);
}

void premios_mano(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,2);
}

void descarte_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,3);
}


/*

[A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][F]
                      |                    |                                               |                                                                    |                  
                       a                    b                                               c                                                                    d                  
        juego               mano                                deck                                                        descarte                                        premios

Quito [J]

[A][B][C][D][E][F][G][H][I][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][F]
                      |                    |                                               |                                                                    |                  
                       a                 b                                               c                                                                    d                  
        juego               mano                                deck                                                        descarte                                        premios

Agrego [J] al tope del descarte

[A][B][C][D][E][F][G][H][I][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][J][F][G][H][I][J][K][L][M][N][O][P][Q][R][S][T][U][V][W][X][Y][Z][A][B][C][D][E][F]
                      |                    |                                               |                                                                    |                  
                       a                 b                                               c                                                                    d                  
        juego               mano                                deck                                                        descarte                                        premios

*/