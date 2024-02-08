#include "funciones_combate.h"

void combate(bn::vector<carta,60>& tronco_jugador,bn::vector<carta,60>& tronco_oponente,bn::random& random){

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

    //ZONAS DE JUEGO        ESTO DEBERIA SER CONSTEXPR

    //posiciones de los activos jugador
    bn::fixed_point pos_activo_jugador(24,10);
    bn::fixed_point pos_banca5_j(74,36);
    bn::fixed_point pos_banca4_j(49,36);
    bn::fixed_point pos_banca3_j(24,36);
    bn::fixed_point pos_banca2_j(-1,36);
    bn::fixed_point pos_banca1_j(-26,36);

    //posiciones de los activos oponente
    bn::fixed_point pos_activo_oponente(24,-17);
    bn::fixed_point pos_banca5_o(74,-41);
    bn::fixed_point pos_banca4_o(49,-41);
    bn::fixed_point pos_banca3_o(24,-41);
    bn::fixed_point pos_banca2_o(-1,-41);
    bn::fixed_point pos_banca1_o(-26,-41);

    //posiciones de los decks
    bn::fixed_point pos_deck_j(97,11);
    bn::fixed_point pos_deck_o(-47,-18);

    //posiciones de los descartes
    bn::fixed_point pos_descarte_j(97,37);
    bn::fixed_point pos_descarte_o(-47,-40);

    //posiciones de los premios
    bn::fixed_point pos_premios_j(-47,13);
    bn::fixed_point pos_premios_o(97,-19);

    //posicion estadio
    bn::fixed_point pos_estadio(-26,-3);

    bn::vector<bn::fixed_point,19> pos;

    pos.push_back(pos_activo_jugador);
    pos.push_back(pos_banca1_j);
    pos.push_back(pos_banca2_j);
    pos.push_back(pos_banca3_j);
    pos.push_back(pos_banca4_j);
    pos.push_back(pos_banca5_j);

    pos.push_back(pos_activo_oponente);
    pos.push_back(pos_banca1_o);
    pos.push_back(pos_banca2_o);
    pos.push_back(pos_banca3_o);
    pos.push_back(pos_banca4_o);
    pos.push_back(pos_banca5_o);

    pos.push_back(pos_deck_j);      //12
    pos.push_back(pos_deck_o);

    pos.push_back(pos_descarte_j);
    pos.push_back(pos_descarte_o);

    pos.push_back(pos_premios_j);
    pos.push_back(pos_premios_o);

    pos.push_back(pos_estadio);

    bn::sprite_ptr jugador_inferior = bn::sprite_items::carta_back.create_sprite(pos_deck_j);
    bn::sprite_ptr jugador_superior = bn::sprite_items::carta_back.create_sprite(pos_deck_j);

    bn::sprite_ptr oponente_inferior = bn::sprite_items::carta_back.create_sprite(pos_deck_o);
    bn::sprite_ptr oponente_superior = bn::sprite_items::carta_back.create_sprite(pos_deck_o);
    
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
                       |                    |                    |                          |                                                                          |                  
                       0                    1                    2                          3                                                                          4                  
        juego               mano                    atachadas                deck                                          descarte                                        premios
    
    Las cartas jugadas son desde el indice 0 hasta el indice a
    La mano es desde el indice a hasta el indice b
    El deck es desde el indice b hasta el indice c
    La pila de descarte es del indice c hasta el indice d
    Los premios son desde el indice d hasta el indice 60

    En el primer turno cuando cuando solo halla mano , deck y premios los indices a y c seran -1, tendra que haber un boleano que indique cuando sera su primer poke puesto o su primer descarte

    */


    int indices_jugador[5]={0, 0, 0,60,60};
    //                      a  b  c  d  e
    int indices_oponente[5]={0,0,0,60,60};

    //Barajeo inicial
    barajear(tronco_jugador,indices_jugador,DECK_COMPLETO,random);
    barajear(tronco_oponente,indices_oponente,DECK_COMPLETO,random);

    //Mano inicial
    robar_carta(tronco_jugador,imagenes_jugador,jugador_superior,indices_jugador,7,JUGADOR);
    robar_carta(tronco_oponente,imagenes_oponente,oponente_superior,indices_oponente,7,OPONENTE);

    //Se corrobora que la mano sea valida, caso contrario se devuelve las cartas, se barajea y se roba 7 otra vez
    while(!verificar_mano_inicial(tronco_jugador,indices_jugador)){
        bn::vector<bn::sprite_ptr,6> anuncio;
        bn::sprite_text_generator text(common::variable_8x8_sprite_font);
        text.generate(-40,0,"No tienes Pokémon básicos",anuncio);
        wait(60);
        anuncio.clear();
        indices_jugador[1] = 0;
        indices_jugador[2] = 0;
        imagenes_jugador.clear();
        barajear(tronco_jugador,indices_jugador,DECK_COMPLETO,random);
        robar_carta(tronco_jugador,imagenes_jugador,jugador_superior,indices_jugador,7,JUGADOR);
    }

    while(!verificar_mano_inicial(tronco_oponente,indices_oponente)){
        bn::vector<bn::sprite_ptr,6> anuncio;
        bn::sprite_text_generator text(common::variable_8x8_sprite_font);
        text.generate(-55,0,"El rival no tiene Pokémon básicos",anuncio);
        wait(60);
        anuncio.clear();
        //Faltaria agregar una funcion que nos deje inspeccionar la mano del oponente
        indices_oponente[1] = 0;
        indices_oponente[2] = 0;
        imagenes_oponente.clear();
        barajear(tronco_oponente,indices_oponente,DECK_COMPLETO,random);
        robar_carta(tronco_oponente,imagenes_oponente,oponente_superior,indices_oponente,7,OPONENTE);
    }

    //Se agregan los premios
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);
    deck_premios(tronco_jugador,imagenes_jugador,indices_jugador,pos,JUGADOR);

    bn::sprite_ptr jugador_premios = bn::sprite_items::carta_back.create_sprite(pos_premios_j);

    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);
    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);
    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);
    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);
    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);
    deck_premios(tronco_oponente,imagenes_oponente,indices_oponente,pos,OPONENTE);

    bn::sprite_ptr oponente_premios = bn::sprite_items::carta_back.create_sprite(pos_premios_o);

    bn::vector<estatus,6> estatus_j;
    bn::vector<estatus,6> estatus_o;

    seteo_inicial(pos,imagenes_jugador,jugador_superior,imagenes_oponente,tronco_jugador,tronco_oponente,indices_jugador,indices_oponente,estatus_j,estatus_o);
    int n_turno = 0;

    while(true){
        turno_jugador(pos,imagenes_jugador,jugador_superior,imagenes_oponente,tronco_jugador,tronco_oponente,indices_jugador,indices_oponente,n_turno,estatus_j,estatus_o);
        //turno_oponente(pos,imagenes_jugador,jugador_superior,imagenes_oponente,tronco_jugador,tronco_oponente,indices_jugador,indices_oponente,n_turno);
        n_turno++;
        bn::core::update();
    }

}

void robar_carta(bn::vector<carta,60> tronco,bn::vector<bn::sprite_ptr,60>& imagenes,bn::sprite_ptr& carta,int indices[5],int cant_cartas,int a_quien){
    
    bn::fixed x_inicial = carta.x();
    bn::fixed y_inicial = carta.y();

    int velocidad = a_quien? -2 : 2;

    for(int n=0;n<cant_cartas;n++){
        for(int j=0;j<30;j++){
            carta.set_x(carta.x()+velocidad);
            bn::core::update();
        }
        carta.set_position(x_inicial,y_inicial);
        agrega_imagen(tronco,imagenes,tronco[indices[1]],a_quien);
        indices[1]++;
        indices[2]++;
        reorganiza_imagen(imagenes,indices[0],indices[1]);
        
    }
}

void agrega_imagen(bn::vector<carta,60> tronco, bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta,int a_quien){      //AGREGA IMAGENES A LA MANO
    if(!a_quien){
        dibuja(_carta.obtener_tipo1(),_carta.obtener_tipo2(),0,62,imagenes);
    }else{
        dibuja(0,0,0,-68,imagenes);
    }
}

void agregar_imagen(bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta,int indices[5]){   //AGREGA IMAGENES A LA MESA
    bn::vector<bn::sprite_ptr,60>::iterator ite = imagenes.begin() + indices[0];
    dibuja(_carta.obtener_tipo1(),_carta.obtener_tipo2(),0,0,imagenes,ite);
}

void reorganiza_imagen(bn::vector<bn::sprite_ptr,60>& imagenes,int a,int b){        //REORGANIZA IMAGENES DE LA MANO
    int n = b-a;
    int s = 10; //separacion entre cartas
    int distancia = 8 + s;
    int posicion_inicial = -distancia*((n-1)/2);
    int cont = 0;
    for(int j=a;j<b;j++){
        imagenes[j].set_x(posicion_inicial+(distancia*cont));
        cont++;
    }

    bn::core::update();

}
void reorganiza_imagen(bn::vector<bn::sprite_ptr, 60>& imagenes, int indices[5],bn::vector<bn::fixed_point,19> pos,int a_quien){        //REORGANIZA IMAGENES DE LA MESA
    int ajuste = a_quien? 6 : 0;
    for(int n = 0; n<indices[0]; n++){
        imagenes[n].set_position(pos[n+ajuste]);
    }
}

/*
    [ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ][ ]
                       |                    |                                               |                                                                          |                  
                       a                    b                                               c                                                                          d                  
        juego               mano                                deck                                                        descarte                                        premios
*/

carta retirar_carta(bn::vector<carta,60> &tronco,bn::vector<bn::sprite_ptr,60>& imagenes ,int indices_jugador[5],int indice_carta){
    
    class carta retirado = tronco[indice_carta];

    bn::vector<carta,60>::const_iterator posicion = tronco.begin()+indice_carta;
    tronco.erase(posicion);

    if(indice_carta>=0 and indice_carta<indices_jugador[0]){    //Cartas en juego
        indices_jugador[0]--;
        indices_jugador[1]--;
        indices_jugador[2]--;
        indices_jugador[3]--;
        indices_jugador[4]--;
    }else if(indice_carta>=indices_jugador[0] and indice_carta<indices_jugador[1]){     //Cartas en la mano
        bn::vector<bn::sprite_ptr,60>::const_iterator posicion_imagen = imagenes.begin()+indice_carta;
        imagenes.erase(posicion_imagen);
        
        indices_jugador[1]--;
        indices_jugador[2]--;
        indices_jugador[3]--;
        indices_jugador[4]--;
        reorganiza_imagen(imagenes,indices_jugador[0],indices_jugador[1]);
    }else if(indice_carta>=indices_jugador[1] and indice_carta<indices_jugador[2]){     //Cartas atachadas
        indices_jugador[2]--;
        indices_jugador[3]--;
        indices_jugador[4]--;
    }else if(indice_carta>=indices_jugador[2] and indice_carta<indices_jugador[3]){     //Cartas en el deck
        indices_jugador[3]--;
        indices_jugador[4]--;
    }else if(indice_carta>=indices_jugador[3] and indice_carta<indices_jugador[4]){     //cartas en la pila de descarte
        indices_jugador[4]--;
    }

    return retirado;

}

void log_tronco(bn::vector<carta,60> tronco,int indices[5]){
    int n = tronco.size();
    BN_LOG("-> Cantidad de cartas: ",n);

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

    BN_LOG("-Atachados: ");
    if(indices[1]!=indices[2]){
        for(int j=indices[1];j<indices[2];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("No hay cartas atachadas");
    }

    BN_LOG("-Deck: ");
    if(indices[2]!=indices[3]){
        for(int j=indices[2];j<indices[3];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("El deck esta vacio");
    }

    BN_LOG("-Descarte: ");
    if(indices[3]!=indices[4]){
        for(int j=indices[3];j<indices[4];j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("La pila de descarte esta vacia");
    }

    BN_LOG("-Premios: ");
    if(indices[4]!=60){
        for(int j=indices[4];j<60;j++){
            BN_LOG(tronco[j].obtener_nombre());
        }
    }else{
        BN_LOG("No hay premios");
    }

}

void barajear(bn::vector<carta,60>& tronco,int indices[5],int n,bn::random& random){
    
    int indice1;
    int indice2;
    
    switch (n)
    {
    case MANO:{        //Mano
        indice1 = indices[0];
        indice2 = indices[1];
        break;
    }
    case DECK:{        //Deck
        indice1 = indices[2];
        indice2 = indices[1];
        break;
    }
    case PREMIOS:{        //Premios
        indice1 = indices[3];
        indice2 = 59;
        break;
    }
    case DECK_COMPLETO:{        //Deck completo, al inicio de la partida
        indice1 = 0;
        indice2 = 59;
        break;
    }
    default:
        break;
    }

    for(int j=0;j<5;j++){
        for(int n=indice1;n<indice2;n++){
            cambio(tronco,n,random.get_int(indice1,indice2));
        }
    }
}

bool verificar_mano_inicial(bn::vector<carta,60> tronco, int indices[5]){
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

void agrega_carta(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,class carta _carta,int indices[5],int a,bn::vector<bn::fixed_point,19> pos,int a_quien){
    
    bn::vector<carta,60>::const_iterator posicion = tronco.begin();

    switch (a)
    {
    case CARTAS_JUEGO:{    //Agregar a la zona de juego
        posicion += indices[0];
        tronco.insert(posicion,_carta);
        agregar_imagen(imagenes,_carta,indices);//para agregar imagenes de la mano al juego estas van desde el inicio hasta el primer indice
        indices[0]++;
        indices[1]++;
        indices[2]++;
        indices[3]++;
        indices[4]++;
        reorganiza_imagen(imagenes,indices,pos,a_quien);
        break;
    }
    case MANO:{    //Agregar a la mano
        posicion += indices[0];
        tronco.insert(posicion,_carta);
        indices[1]++;
        indices[2]++;
        indices[3]++;
        indices[4]++;
        agrega_imagen(tronco,imagenes,_carta,a_quien);
        reorganiza_imagen(imagenes,indices[0],indices[1]);
        break;
    }
    case ATACHADAS:{    //agregar a cartas atachadas
        posicion += indices[1];
        tronco.insert(posicion,_carta);
        indices[2]++;
        indices[3]++;
        indices[4]++;
        break;
    }
    case DECK:{    //Agregar al deck
        posicion += indices[2];
        tronco.insert(posicion,_carta);
        indices[3]++;
        indices[4]++;
        break;
    }
    case DESCARTE:{    //Agregar al descarte
        posicion += indices[3];
        tronco.insert(posicion,_carta);
        indices[4]++;
        break;
    }
    case PREMIOS:{    //Agregar a los premios
        posicion += indices[4];
        tronco.insert(posicion,_carta);
        break;
    }
    default:
        break;
    }
}

void mano_juego(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien,bn::vector<estatus,6>& _estatus){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);
    
    _estatus.push_back(estatus(obtener_informacion_completa(retirado)->ps));

    agrega_carta(tronco,imagenes,retirado,indices,1,pos,a_quien);
}

void mano_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,5,pos,a_quien);
}

void mano_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien,bn::vector<estatus,6>& _estatus){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    //agregamos la mini enegia a estados.energias_atachadas

    agrega_carta(tronco,imagenes,retirado,indices,4,pos,a_quien);
}

void mano_atachadas(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,3,pos,a_quien);
}

void deck_premios(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indices[1]);

    agrega_carta(tronco,imagenes,retirado,indices,6,pos,a_quien);
}

void deck_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indices[1]);

    agrega_carta(tronco,imagenes,retirado,indices,5,pos,a_quien);
}

void premios_mano(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,2,pos,a_quien);
}

void descarte_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien){
    class carta retirado = retirar_carta(tronco,imagenes,indices,indice);

    agrega_carta(tronco,imagenes,retirado,indices,4,pos,a_quien);
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

bn::fixed_point mas_cercano(bn::fixed_point actual, bn::vector<bn::fixed_point,19> posiciones,bn::vector<bn::sprite_ptr,60> mano_j,bn::vector<bn::sprite_ptr,60> mano_o,int direccion,int indices[5]){
    switch (direccion)
    {
    case ARRIBA:{    //arriba
        bn::fixed_point optimo;
        bn::fixed distancia_menor = 240;

        if(actual.y() == -68) return actual;

        if(actual.y() == -41){
            for(bn::sprite_ptr temp : mano_o){
                bn::fixed_point pos(temp.x(),temp.y());
                bn::fixed d = distancia(pos,actual);
                if(d < distancia_menor){
                    optimo = pos;
                    distancia_menor = d;
                }
            }
        }else{
            for(bn::fixed_point temp : posiciones){
                if(temp.y() < actual.y() and !(actual == temp)){
                    bn::fixed d = distancia(temp,actual);
                    if(d < distancia_menor){
                        optimo = temp;
                        distancia_menor = d;
                    }
                }
            }
        }
        
        return optimo;
    }
    case ABAJO:{    //abajo
        bn::fixed_point optimo;
        bn::fixed distancia_menor = 240;

        if(actual.y() == 62) return actual;

        if(actual.y() == 36){
            for(int n = indices[0]; n <indices[1]; n++){
                bn::fixed_point pos(mano_j[n].x(),mano_j[n].y());
                bn::fixed d = distancia(pos,actual);
                if(d < distancia_menor){
                    optimo = pos;
                    distancia_menor = d;
                }
            }
        }else{
            for(bn::fixed_point temp : posiciones){
                if(temp.y() > actual.y() and !(actual == temp)){
                    bn::fixed d = distancia(temp,actual);
                    if(d < distancia_menor){
                        optimo = temp;
                        distancia_menor = d;
                    }
                }
            }
        }

        return optimo;
    }
    case DERECHA:{    //derecha
        bn::fixed_point optimo;
        bn::fixed distancia_menor = 240;
        bn::fixed a_y = actual.y();
        if(actual.x() == 97) return actual;
        if(a_y == 62){
            if(mano_j.back().position() == actual) return actual;
            bool actual_encontrado = false;
            for(bn::sprite_ptr temp : mano_j){
                if(actual_encontrado) return temp.position();
                if(temp.x() == actual.x()) actual_encontrado = true;
            }
        }else if(a_y == -68){
            if(mano_o.back().position() == actual) return actual;
            bool actual_encontrado = false;
            for(bn::sprite_ptr temp : mano_o){
                if(actual_encontrado) return temp.position();
                if(temp.x() == actual.x()) actual_encontrado = true;
            }
        }else{
            for(bn::fixed_point temp : posiciones){
                if(temp.x() > actual.x() and !(actual == temp)){
                    bn::fixed d = distancia(temp,actual);
                    if(d < distancia_menor){
                        optimo = temp;
                        distancia_menor = d;
                    }
                }
            }
        }
        
        return optimo;
    }
    case IZQUIERDA:{    //izquierda
        bn::fixed_point optimo;
        bn::fixed distancia_menor = 240;
        if(actual.x() == -47) return actual;
        bn::fixed a_y = actual.y();
        if(a_y == 62){
            if(mano_j.front().position() == actual) return actual;
            for(bn::sprite_ptr temp : mano_j){
                if(temp.x() == actual.x()) return optimo;
                optimo = temp.position();
            }
        }else if(a_y == -68){
            if(mano_o.front().position() == actual) return actual;
            for(bn::sprite_ptr temp : mano_o){
                if(temp.x() == actual.x()) return optimo;
                optimo = temp.position();
            }
        }else{
            for(bn::fixed_point temp : posiciones){
                if(temp.x() < actual.x() and !(actual == temp)){
                    bn::fixed d = distancia(temp,actual);
                    if(d < distancia_menor){
                        optimo = temp;
                        distancia_menor = d;
                    }
            }
        }
        }
        
        return optimo;
    }
    default:
        break;
    }
}

BN_CONST bn::fixed distancia(bn::fixed_point p1, bn::fixed_point p2){
    bn::fixed n_x = (p2.x()-p1.x())*(p2.x()-p1.x());
    bn::fixed n_y = (p2.y()-p1.y())*(p2.y()-p1.y());

    return sqrt(n_x+n_y);
}

void turno_jugador(bn::vector<bn::fixed_point,19> pos,
                    bn::vector<bn::sprite_ptr,60>& imagenes_jugador, 
                    bn::sprite_ptr& carta_j,
                    bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,
                    bn::vector<carta,60>& deck_j,
                    bn::vector<carta,60>& deck_o, 
                    int indices_j[5],int indices_o[5],int n_turno,
                    bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o){

    bool posible_energia = true; //es posible unir una energia
    bool posible_retirar = true; //es posible retirar el pokemon

    bn::vector<bn::sprite_ptr,6> nombre_carta_selec;

    bn::sprite_text_generator small_variable_text_generator(common::variable_8x8_sprite_font);
    small_variable_text_generator.generate(3,0,"Tu turno",nombre_carta_selec);

    wait(60);

    nombre_carta_selec.clear();

    robar_carta(deck_j,imagenes_jugador,carta_j,indices_j,1,0);
    
    bn::sprite_ptr flecha = bn::sprite_items::flecha.create_sprite(pos.front());
    flecha.set_bg_priority(2);

    carta vacia(" ",0,0);
    carta* seleccionada = &vacia;
    bool actualizado = false;
    int n = 0;

    small_variable_text_generator.generate(-118,75,(*seleccionada).obtener_nombre(),nombre_carta_selec);    

    while(true){

        if(bn::keypad::up_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ARRIBA,indices_j));
            actualizado = true;
        }else if(bn::keypad::down_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ABAJO,indices_j));
            actualizado = true;
        }else if(bn::keypad::right_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,DERECHA,indices_j));
            actualizado = true;
        }else if(bn::keypad::left_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,IZQUIERDA,indices_j));
            actualizado = true;
        }

        //Buscamos la carta seleccionada, fuerza bruta, se debe rehacer
        if(actualizado){
            if(flecha.y() > 0){
                n=0;
                for(bn::sprite_ptr temp : imagenes_jugador){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_j[n];
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
                
            }else{
                n=0;
                for(bn::sprite_ptr temp : imagenes_contrincante){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_o[n];
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
            }
            actualizado = false;
            nombre_carta_selec.clear();
            small_variable_text_generator.generate(-118,75,(*seleccionada).obtener_nombre(),nombre_carta_selec);
        }
        
        //Mostrar informacion, boton L en cartas y a en 
        if(bn::keypad::l_pressed()){
            mostrar_informacion((*seleccionada));            
        }

        //Seleccionar carta, boton a
        if(bn::keypad::a_pressed()){
            if(flecha.y() == 62){
                juega_carta(deck_j,deck_o,imagenes_jugador,imagenes_contrincante,seleccionada,n,flecha,indices_j,pos,estatus_j,estatus_o,posible_energia,posible_retirar);
                actualizado = true;
            }else {         //selecciona zonas de juego

                if(flecha.position() == pos[0]){
                    //ataque
                    break;
                }

                int informacion = -1;

                if(flecha.position() == pos[12]){           //deck jugador
                    informacion = indices_j[3] - indices_j[2];
                }else if(flecha.position() == pos[13]){     //deck oponente
                    informacion = indices_o[3] - indices_o[2];
                }else if(flecha.position() == pos[14]){     //descarte jugador
                    informacion = indices_j[4] - indices_j[3];
                }else if(flecha.position() == pos[15]){     //descarte oponente
                    informacion = indices_o[4] - indices_o[3];
                }else if(flecha.position() == pos[16]){     //premios jugador
                    informacion = 60 - indices_j[4];
                }else if(flecha.position() == pos[17]){     //premios oponente
                    informacion = 60 - indices_o[4];
                }

                if(flecha.position() == pos[14] or flecha.position() == pos[15]){       //se muestra la informacion con un boton para informacion destallada DESCARTES
                    while(!bn::keypad::b_pressed()){

                    }
                }else if(informacion != -1){          //solo se muestra el numero
                    bn::vector<bn::sprite_ptr,1> texto_informacion;
                    bn::sprite_text_generator text_i(common::variable_8x8_sprite_font);
                    text_i.generate(flecha.x()-8,flecha.y()-6,bn::to_string<32>(informacion),texto_informacion);

                    while(!bn::keypad::b_pressed()){
                        bn::core::update();         //falta poder inspeccionar la pila de descarte
                    }
                }
            }
            //log_tronco(deck_j,indices_j);
        }

        bn::core::update();
    }
}

void juega_carta(bn::vector<carta,60>& deck_j,bn::vector<carta,60>& deck_o,
                 bn::vector<bn::sprite_ptr,60>& imagenes_j,bn::vector<bn::sprite_ptr,60>& imagenes_o,
                 carta* carta,int indice,bn::sprite_ptr &flecha,int indices_j[5],bn::vector<bn::fixed_point,19> pos,
                 bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o,bool& posible_energia,bool& posible_retirar){

        bn::fixed_point pos_inicial = flecha.position();
        
        bn::sprite_ptr boton = bn::sprite_items::boton_usar.create_sprite(flecha.x()+7,flecha.y()-7);

        flecha.set_position(flecha.x()+8,flecha.y()-12);
        espera_a_presionado();

        int tipo1 = (*carta).obtener_tipo1();
        int tipo2 = (*carta).obtener_tipo2();

        while(!bn::keypad::b_pressed()){

            if(bn::keypad::a_pressed()){        //cuando a es presionado
                if(indices_j[0]<6){
                    if(tipo1 > ESPALDA && tipo1 < V){         //y si es una carta basica
                        if(es_basico(*carta)){
                            mano_juego(deck_j,imagenes_j,indices_j,indice,pos,JUGADOR,estatus_j);
                            break;
                        }
                    }else if(tipo1 > NORMAL_C_H && tipo1 < VSTAR){   //los V siempre son basicos
                        mano_juego(deck_j,imagenes_j,indices_j,indice,pos,JUGADOR,estatus_j);
                        break;
                    }else if(tipo1 == ENERGIAS_BASICA && posible_energia){         //si es energia basica
                        boton.set_visible(false);
                        int indice_seleccionada = 0;            //el indice de la carta que se selecciona como objetivo
                        class carta* resultado = seleccionar(deck_j,deck_o,pos,imagenes_j,imagenes_o,indices_j,flecha,DE_JUEGO_J,indice_seleccionada);
                        if(resultado != nullptr){
                            (*carta).establecer_atachado_a(resultado);
                            mano_atachadas(deck_j,imagenes_j,indices_j,indice,pos,JUGADOR);
                            BN_LOG("indice_seleccionada: ",indice_seleccionada);
                            estatus_j[indice_seleccionada].agrega_mini_energia(tipo2,imagenes_j[indice_seleccionada].position());
                            posible_energia = false;
                            return;
                        }else{
                            boton.set_visible(true);
                        }
                    }
                }
            }

            bn::core::update();
        }
        flecha.set_position(pos_inicial);
        bn::core::update();
        
}

carta* seleccionar(bn::vector<carta,60>& deck_j,bn::vector<carta,60>& deck_o,bn::vector<bn::fixed_point,19> pos,bn::vector<bn::sprite_ptr,60>& imagenes_jugador,bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,int indices_j[5],bn::sprite_ptr flecha,int condicion,int& indice_seleccionada){

    espera_a_presionado();

    bn::fixed_point pos_inicial = flecha.position();

    flecha.set_position(pos[0]);

    const bn::sprite_palette_ptr paleta_original = flecha.palette();
    const bn::sprite_palette_item& paleta_alt = bn::sprite_palette_items::p_flecha_alt;

    flecha.set_palette(paleta_alt);

    carta vacia(" ",0,0);
    carta* seleccionada = &vacia;
    bool actualizado = false;
        
    while(true){
        if(bn::keypad::b_pressed()){
            flecha.set_position(pos_inicial);
            flecha.set_palette(paleta_original);
            return nullptr;
        }

        if(bn::keypad::up_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ARRIBA,indices_j));
            actualizado = true;
        }else if(bn::keypad::down_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ABAJO,indices_j));
            actualizado = true;
        }else if(bn::keypad::right_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,DERECHA,indices_j));
            actualizado = true;
        }else if(bn::keypad::left_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,IZQUIERDA,indices_j));
            actualizado = true;
        }

        int n = 0;

        if(actualizado){
            if(flecha.y() > 0){
                n=0;
                for(bn::sprite_ptr temp : imagenes_jugador){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_j[n];
                            BN_LOG("Valor de n",n);
                            indice_seleccionada = n;
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
                
            }else{
                n=0;
                for(bn::sprite_ptr temp : imagenes_contrincante){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_o[n];
                            indice_seleccionada = n;
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
            }
            actualizado = false;
        }

        if(bn::keypad::a_pressed()){
            switch (condicion)
            {
            case DE_MANO:{
                if(flecha.y() == 62){
                    flecha.set_palette(paleta_original);
                    flecha.set_position(pos[0]);
                    return seleccionada;
                } 
                break;
            }
            case DE_JUEGO_J:{
                if(flecha.y() == 36 || flecha.y() == 10){
                    flecha.set_palette(paleta_original);
                    flecha.set_position(pos[0]);
                    return seleccionada;
                }
                break;
            }
            case DE_JUEGO_O:{
                if(flecha.y() == -41 || flecha.y() == -17){
                    flecha.set_palette(paleta_original);
                    flecha.set_position(pos[0]);
                    return seleccionada;
                }
                break;
            }
            default:
                break;
            }
        }

        bn::core::update();
    }
}

void espera_a_presionado() {        //se asegura que la accion de presionar y soltar sean contada una sola vez
    // Espera a que se presione la tecla A
    while (!bn::keypad::a_pressed()) {
        bn::core::update();
    }

    // Espera a que se suelte la tecla A
    while (bn::keypad::a_pressed()) {
        bn::core::update();
    }
}

void espera_b_presionado() {        //se asegura que la accion de presionar y soltar sean contada una sola vez
    // Espera a que se presione la tecla B
    while (!bn::keypad::b_pressed()) {
        bn::core::update();
    }

    // Espera a que se suelte la tecla B
    while (bn::keypad::b_pressed()) {
        bn::core::update();
    }
}

void wait(int tiempo){

    /*
        Cada 60 es un segundo
    */

    for(int n = 0;n < tiempo; n++){
        bn::core::update();
    }
}

void seteo_inicial(  bn::vector<bn::fixed_point,19> pos,
                bn::vector<bn::sprite_ptr,60>& imagenes_jugador, 
                bn::sprite_ptr& carta_j,
                bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,
                bn::vector<carta,60>& deck_j,
                bn::vector<carta,60>& deck_o, 
                int indices_j[5],int indices_o[5],
                bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o){

    bn::vector<bn::sprite_ptr,6> anuncio;

    bn::sprite_text_generator text(common::variable_8x8_sprite_font);

    text.generate(-40,0,"Coloca tus Pokemon Básicos",anuncio);

    bn::vector<bn::sprite_ptr,6> nombre_carta_selec;

    for(bn::sprite_ptr temp : anuncio){
        temp.set_bg_priority(0);
    }

    bn::sprite_text_generator small_variable_text_generator(common::variable_8x8_sprite_font);

    bn::sprite_ptr flecha = bn::sprite_items::flecha.create_sprite(pos.front());
    flecha.set_bg_priority(2);

    carta vacia(" ",0,0);
    carta* seleccionada = &vacia;
    bool actualizado = false;
    int n = 0;
    small_variable_text_generator.generate(-118,75,(*seleccionada).obtener_nombre(),nombre_carta_selec);

    //Moviminentos del oponente
    mano_juego(deck_o,imagenes_contrincante,indices_o,4,pos,OPONENTE,estatus_o);

    while(true){

        if(bn::keypad::up_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ARRIBA,indices_j));
            actualizado = true;
        }else if(bn::keypad::down_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,ABAJO,indices_j));
            actualizado = true;
        }else if(bn::keypad::right_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,DERECHA,indices_j));
            actualizado = true;
        }else if(bn::keypad::left_pressed()){
            flecha.set_position(mas_cercano(flecha.position(),pos,imagenes_jugador,imagenes_contrincante,IZQUIERDA,indices_j));
            actualizado = true;
        }

        //Buscamos la carta seleccionada, fuerza bruta, se debe rehacer
        if(actualizado){
            if(flecha.y() > 0){
                n=0;
                for(bn::sprite_ptr temp : imagenes_jugador){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_j[n];
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
                
            }else{
                n=0;
                for(bn::sprite_ptr temp : imagenes_contrincante){
                    if(temp.x() == flecha.x()) {
                        if(temp.y() == flecha.y()){
                            seleccionada = &deck_o[n];
                            break;
                        }
                    }
                    n++;
                    seleccionada = &vacia;
                }
            }
            actualizado = false;
            nombre_carta_selec.clear();
            small_variable_text_generator.generate(-118,75,(*seleccionada).obtener_nombre(),nombre_carta_selec);
        }
        
        //Mostrar informacion, boton L
        if(bn::keypad::l_pressed()){

            for(bn::sprite_ptr temp : anuncio){
                temp.set_visible(false);
            }

            mostrar_informacion((*seleccionada));

            for(bn::sprite_ptr temp : anuncio){
                temp.set_visible(true);
            }

        }

        //Seleccionar carta, boton A
        if(bn::keypad::a_pressed() and flecha.y()==62){
            bool temp1 = true;
            bool temp2 = true;
            juega_carta(deck_j,deck_o,imagenes_jugador,imagenes_contrincante,seleccionada,n,flecha,indices_j,pos,estatus_j,estatus_o,temp1,temp2);
            actualizado = true;
        }

        //Salir del seteo inicial
        if(bn::keypad::b_pressed() and indices_j[0]>0){
            espera_b_presionado();

            for(bn::sprite_ptr temp : anuncio){
                temp.set_visible(false);
            }
            bn::sprite_ptr boton = bn::sprite_items::boton_listo.create_sprite(25,0);
            flecha.set_x(25);
            flecha.set_y(-5);
            while(!bn::keypad::b_pressed()){
                if(bn::keypad::a_pressed()) return;
                bn::core::update();
            }

            for(bn::sprite_ptr temp : anuncio){
                temp.set_visible(true);
            }
        }

        bn::core::update();
    }
}