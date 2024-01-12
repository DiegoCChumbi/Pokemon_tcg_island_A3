#include "funciones_diccionario.h"

bool es_basico(carta _carta){
    if(_carta.obtener_tipo1()<1 or _carta.obtener_tipo1()>4) return false;

    switch (_carta.obtener_tipo1())
    {
    case 1:{
        return !diccionario_normal(_carta)->stage;
    }
    case 2:{
        return !diccionario_normal_habilidad(_carta)->stage;
    }
    case 3:{
        return !diccionario_v(_carta)->stage;
    }
    case 4:{
        return !diccionario_v_habilidad(_carta)->stage;
    }
    default:
        break;
    }

}

carta_full* obtener_informacion_completa(carta _carta){
    BN_LOG("Obtener tipo1:",_carta.obtener_tipo1());
    switch (_carta.obtener_tipo1())
    {
    case 1:{
        return diccionario_normal(_carta);
    }
    case 2:{
        return diccionario_normal_habilidad(_carta);
    }
    case 3:{
        return diccionario_v(_carta);
    }
    case 4:{
        return diccionario_v_habilidad(_carta);
    }
    case 5:{
        return diccionario_vstar(_carta);
    }
    case 6:{
        return diccionario_vstar_habilidad(_carta);
    }
    case 7:{
        return diccionario_vmax(_carta);
    }
    case 8:{
        return diccionario_vmax_habilidad(_carta);
    }
    case 9:{
        return diccionario_no_pokemon(_carta);
    }
    case 10:{
        return diccionario_energias(_carta);
    }
    default:
        break;
    }

}

carta_full* diccionario_normal(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();
    BN_LOG("Estoy buscando: ",nombre);

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno"; 

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        if(nombre == (bn::string<32>)"Meloetta"){
            BN_LOG("Ingrese donde meoleotta");
            carta->stage = 0;
            carta->ps = 90;

            bn::vector<int,10> ataque1;
            ataque1.push_back(9);
            ataque1.push_back(1);
            carta->energias.push_back(ataque1);

            bn::string<30> linea1 = "    Eco Melodioso  x70";
            bn::string<30> linea2 = "Este ataque hace 70 ";
            bn::string<30> linea3 = "puntos de daño por cada";
            bn::string<30> linea4 = "Energia Golpe Fusion";
            bn::string<30> linea5 = "unida a todos tus";
            bn::string<30> linea6 = "Pokémon.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);

            carta->arquetipo = "Golpe Fusion";
            carta->debilidad = 10;
            carta->resistencia = 6;
            carta->retirada = 1;
        }else if(nombre == (bn::string<32>)"Deoxys"){
            BN_LOG("Ingrese donde deoxys");
            carta->stage = 0;
            carta->ps = 120;

            bn::vector<int,10> ataque1;
            ataque1.push_back(1);
            ataque1.push_back(1);
            ataque1.push_back(1);
            carta->energias.push_back(ataque1);

            bn::string<30> linea1 = "    Impulso Fotonico 80+";
            bn::string<30> linea2 = "Si este Pokémon tiene";
            bn::string<30> linea3 = "alguna Energia Golpe";
            bn::string<30> linea4 = "Fusión unida a el, este";
            bn::string<30> linea5 = "ataque hace 80 de daño";
            bn::string<30> linea6 = "mas.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);

            carta->arquetipo = "Golpe";        //Si solo dice Golpe cuenta como fusion, brusco y fluido
            carta->debilidad = 10;
            carta->resistencia = 6;
            carta->retirada = 1;
        }
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    BN_LOG("Dentro del diccionario: ",carta->texto[0]);

    return carta;

}

carta_full* diccionario_normal_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno";

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        if(nombre == (bn::string<32>)"Oricorio"){
            BN_LOG("Entre donde oricorio");
            carta->stage = 0;
            carta->ps = 90;
            carta->habilidad = true;

            bn::vector<int,10> ataque1;
            ataque1.push_back(5);
            ataque1.push_back(1);
            carta->energias.push_back(ataque1);

            bn::string<30> linea1 = "HAB: Leccion de Fervor";
            bn::string<30> linea2 = "Los ataques de los";
            bn::string<30> linea3 = "Pokémon de tu rival";
            bn::string<30> linea4 = "hacen 20 puntos de";
            bn::string<30> linea5 = "daño menos a todos";
            bn::string<30> linea6 = "tus Pokémon Golpe";
            bn::string<30> linea7 = "Fusión (Despues de";
            bn::string<30> linea8 = "aplicar Debilidad y";
            bn::string<30> linea9 = "Resistencia).No puedes";
            bn::string<30> linea10= "aplicar mas de 1";
            bn::string<30> linea11= "habilidad Lección de";
            bn::string<30> linea12= "Fervor a la vez";
            bn::string<30> linea13= "---";
            bn::string<30> linea14= "    Gotas Brillantes";
            bn::string<30> linea15= "Pon 5 contadores de daño";
            bn::string<30> linea16= "en los Pokémon de tu";
            bn::string<30> linea17= "rival de la manera que";
            bn::string<30> linea18= "desees.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);
            carta->texto.push_back(linea10);
            carta->texto.push_back(linea11);
            carta->texto.push_back(linea12);
            carta->texto.push_back(linea13);
            carta->texto.push_back(linea14);
            carta->texto.push_back(linea15);
            carta->texto.push_back(linea16);
            carta->texto.push_back(linea17);
            carta->texto.push_back(linea18);

            carta->arquetipo = "Golpe Fusion";
            carta->debilidad = 2;
            carta->resistencia = 0;
            carta->retirada = 1;
        }
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }
    
    return carta;

}

carta_full* diccionario_v(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno"; 

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        if(nombre == (bn::string<32>)"Mew V"){
            carta->stage = 0;
            carta->ps = 180;
            
            bn::vector<int,10> ataque1;
            ataque1.push_back(9);
            carta->energias.push_back(ataque1);
            bn::vector<int,10> ataque2;
            ataque2.push_back(9);
            ataque2.push_back(1);
            carta->energias.push_back(ataque2);

            bn::string<30> linea1 = "    Mezcla de Energia";
            bn::string<30> linea2 = "Busca en tu baraja 1";
            bn::string<30> linea3 = "carta de Energia y";
            bn::string<30> linea4 = "únela a 1 de tus Pokémon";
            bn::string<30> linea5 = "Golpe Fusión. Después,";
            bn::string<30> linea6 = "baraja las cartas de tu";
            bn::string<30> linea7 = "baraja.";
            bn::string<30> linea8 = "---";
            bn::string<30> linea9 = "    Salto Psíquico  70";
            bn::string<30> linea10= "Puedes poner este";
            bn::string<30> linea11= "Pokémon y todas las";
            bn::string<30> linea12= "cartas unidas a el en tu";
            bn::string<30> linea13= "baraja y barajar todas";
            bn::string<30> linea14= "las cartas.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);
            carta->texto.push_back(linea10);
            carta->texto.push_back(linea11);
            carta->texto.push_back(linea12);
            carta->texto.push_back(linea13);
            carta->texto.push_back(linea14);

            carta->arquetipo = "Golpe Fusion";
            carta->debilidad = 10;
            carta->resistencia = 6;
            carta->retirada = 0;
        }
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_v_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno"; 

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        if(nombre == (bn::string<32>)"Genesect V"){
            carta->stage = 0;
            carta->ps = 190;
            carta->habilidad = true;
            
            bn::vector<int,10> ataque1;
            ataque1.push_back(7);
            ataque1.push_back(7);
            ataque1.push_back(1);
            carta->energias.push_back(ataque1);

            bn::string<30> linea1 = "HAB: Sistema de Golpe";
            bn::string<30> linea2 = "     Fusión";
            bn::string<30> linea3 = "Una vez durante tu turno,";
            bn::string<30> linea4 = "puedes robar cartas hasta";
            bn::string<30> linea5 = "que tengas tantas cartas";
            bn::string<30> linea6 = "en tu mano como Pokémon";
            bn::string<30> linea7 = "Golpe Fusión tengas en";
            bn::string<30> linea8 = "juego.";
            bn::string<30> linea9 = "---";
            bn::string<30> linea10= "     Tecno Shock  210";
            bn::string<30> linea11= "Durante tu próximo,este";
            bn::string<30> linea12= "Pokémon no puede atacar.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);
            carta->texto.push_back(linea10);
            carta->texto.push_back(linea11);
            carta->texto.push_back(linea12);

            carta->arquetipo = "Golpe Fusion";
            carta->debilidad = 10;
            carta->resistencia = 6;
            carta->retirada = 0;
        }
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_vstar(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    //siempre definir preevolucion

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_vstar_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    //siempre definir preevolucion

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_vmax(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    //siempre definir preevolucion

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        if(nombre==(bn::string<32>)"Mew VMAX"){
            carta->stage = 1;
            carta->ps = 310;
            carta->preevolucion = "Mew V";
            
            bn::vector<int,10> ataque1;
            ataque1.push_back(1);
            ataque1.push_back(1);
            carta->energias.push_back(ataque1);
            bn::vector<int,10> ataque2;
            ataque2.push_back(9);
            ataque2.push_back(9);
            carta->energias.push_back(ataque2);

            bn::string<30> linea1 = "  Golpe Fusion Cruzado";
            bn::string<30> linea2 = "Elige 1 de los ataques";
            bn::string<30> linea3 = "de tus Pokémon Golpe";
            bn::string<30> linea4 = "Fusión en Banca y úsalo";
            bn::string<30> linea5 = "para este ataque.";
            bn::string<30> linea6 = "---";
            bn::string<30> linea7 = "   Maximilagro     130";
            bn::string<30> linea8 = "El daño de este ataque";
            bn::string<30> linea9 = "no se ve afectado por";
            bn::string<30> linea10= "ningun efecto en el";
            bn::string<30> linea11= "Pokémon Activo de tu";
            bn::string<30> linea12= "rival";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);
            carta->texto.push_back(linea10);
            carta->texto.push_back(linea11);
            carta->texto.push_back(linea12);

            carta->arquetipo = "Golpe Fusion";
            carta->debilidad = 10;
            carta->resistencia = 6;
            carta->retirada = 0;
        }
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_vmax_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    //siempre definir preevolucion

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_no_pokemon(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

carta_full* diccionario_energias(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;

    switch (_carta.obtener_tipo2())
    {
    case 1:{        //normal
        break;
    }
    case 2:{        //agua
        break;
    }
    case 3:{        //dragon
        break;
    }
    case 4:{        //electrico
        break;
    }
    case 5:{        //fuego
        break;
    }
    case 6:{        //lucha
        break;
    }
    case 7:{        //metal
        break;
    }
    case 8:{        //planta
        break;
    }
    case 9:{        //psiquico
        break;
    }
    case 10:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}