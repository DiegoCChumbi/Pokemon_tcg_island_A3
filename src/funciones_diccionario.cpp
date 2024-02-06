#include "funciones_diccionario.h"

bool es_basico(carta _carta){
    if(_carta.obtener_tipo1() < NORMAL_C or _carta.obtener_tipo1() > V_H) return false;

    switch (_carta.obtener_tipo1())
    {
    case NORMAL_C:{
        return !diccionario_normal(_carta)->stage;
    }
    case NORMAL_C_H:{
        return !diccionario_normal_habilidad(_carta)->stage;
    }
    case V:{
        return !diccionario_v(_carta)->stage;
    }
    case V_H:{
        return !diccionario_v_habilidad(_carta)->stage;
    }
    default:
        break;
    }

}

carta_full* obtener_informacion_completa(carta _carta){
    switch (_carta.obtener_tipo1())
    {
    case NORMAL_C:{
        return diccionario_normal(_carta);
    }
    case NORMAL_C_H:{
        return diccionario_normal_habilidad(_carta);
    }
    case V:{
        return diccionario_v(_carta);
    }
    case V_H:{
        return diccionario_v_habilidad(_carta);
    }
    case VSTAR:{
        return diccionario_vstar(_carta);
    }
    case VSTAR_H:{
        return diccionario_vstar_habilidad(_carta);
    }
    case VMAX:{
        return diccionario_vmax(_carta);
    }
    case VMAX_H:{
        return diccionario_vmax_habilidad(_carta);
    }
    case NO_POKEMON:{
        return diccionario_no_pokemon(_carta);
    }
    case ENERGIAS_BASICA:{
        return diccionario_energias(_carta);
    }
    default:
        break;
    }

}

carta_full* diccionario_normal(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno"; 

    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        if(nombre == (bn::string<32>)"Meloetta"){
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
    case SINIESTRO:{       //sinietro
        break;
    }
    default:
        break;
    }
    return carta;

}

carta_full* diccionario_normal_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full* carta = new carta_full();
    carta->habilidad = false;
    carta->preevolucion = "Ninguno";

    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        if(nombre == (bn::string<32>)"Oricorio"){
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
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        break;
    }
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
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
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
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
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        break;
    }
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        break;
    }
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        break;
    }
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
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
    case SINIESTRO:{       //sinietro
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        break;
    }
    case SINIESTRO:{       //sinietro
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
    case OBJETO:{        //objeto
        if(nombre == (bn::string<32>)"Pase de Combate VIP"){
            bn::string<30> linea1 = "Puedes jugar esta carta";
            bn::string<30> linea2 = "solo durante tu primer";
            bn::string<30> linea3 = "turno.";
            bn::string<30> linea4 = " ";
            bn::string<30> linea5 = "Busca en tu baraja hasta";
            bn::string<30> linea6 = "2 Pokémon Básicos y";
            bn::string<30> linea7 = "ponlos en tu Banca.";
            bn::string<30> linea8 = "Después, baraja las";
            bn::string<30> linea9 = "cartas de tu baraja.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);

        }else if(nombre == (bn::string<32>)"Cinturón Elección"){
            bn::string<30> linea1 = "Los ataques del Pokémon";
            bn::string<30> linea2 = "al que esté unida esa";
            bn::string<30> linea3 = "carta hacen 30 puntos de";
            bn::string<30> linea4 = "daño mas al Pokémon V";
            bn::string<30> linea5 = "Activo de tu rival (antes";
            bn::string<30> linea6 = "de aplicar Debilida y ";
            bn::string<30> linea7 = "Resistencia.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
        }else if(nombre == (bn::string<32>)"Cramobot"){
            bn::string<30> linea1 = "Puedes usar esta carta";
            bn::string<30> linea2 = "solo si descartas otra";
            bn::string<30> linea3 = "carta de Objeto de tu";
            bn::string<30> linea4 = "mano.";
            bn::string<30> linea5 = " ";
            bn::string<30> linea6 = "Lanza 1 moneda. Si sale";
            bn::string<30> linea7 = "cara, busca en tu baraja";
            bn::string<30> linea8 = "1 carta y ponla en tu";
            bn::string<30> linea9 = "mano. Después, baraja las";
            bn::string<30> linea10= "cartas de tu baraja";

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
        }else if(nombre == (bn::string<32>)"Cuerda Huida"){
            bn::string<30> linea1 = "Cada jugador cambia a";
            bn::string<30> linea2 = "su Pokémon Activo por 1";
            bn::string<30> linea3 = "de sus Pokémon en Banca.";
            bn::string<30> linea4 = "(Tu rival lo cambia";
            bn::string<30> linea5 = "primero. Si algún jugador";
            bn::string<30> linea6 = "no tiene a un Pokémon en";
            bn::string<30> linea7 = "Banca, no cambiará a su";
            bn::string<30> linea8 = "Pokémon.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
        }else if(nombre == (bn::string<32>)"Cristal Niebla"){
            bn::string<30> linea1 = "Busca en tu baraja 1";
            bn::string<30> linea2 = "carta de Energía ";
            bn::string<30> linea3 = "Psíquica o 1 Pokémon";
            bn::string<30> linea4 = "Psíquico Básico, enseña";
            bn::string<30> linea5 = "esa carta y ponla en tu";
            bn::string<30> linea6 = "mano. Después, baraja";
            bn::string<30> linea7 = "las cartas de tu baraja.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
        }else if(nombre == (bn::string<32>)"Caramelo Energético"){
            bn::string<30> linea1 = "Durante este turno,";
            bn::string<30> linea2 = "los ataques de tus";
            bn::string<30> linea3 = "Pokémon Golpe Fusión";
            bn::string<30> linea4 = "hacen  30 puntos de ";
            bn::string<30> linea5 = "daño más al Pokémon";
            bn::string<30> linea6 = "Activo de tu rival";
            bn::string<30> linea7 = "(antes de aplicar"; 
            bn::string<30> linea8 = "Debilidad y Resistencia)."; 

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
        }else if(nombre == (bn::string<32>)"Cambio"){
            bn::string<30> linea1 = "Cambia 1 de tus";
            bn::string<30> linea2 = "Pokémon de la Banca";
            bn::string<30> linea3 = "con tus Pokémon";
            bn::string<30> linea4 = "Activo.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
        }else if(nombre == (bn::string<32>)"Ultra Ball"){
            bn::string<30> linea1 = "Descarta 2 cartas de tu";
            bn::string<30> linea2 = "mano. (Si no puedes";
            bn::string<30> linea3 = "descartar 2 cartas, no";
            bn::string<30> linea4 = "puedes jugar esta carta.)";
            bn::string<30> linea5 = "Busca en tu baraja un";
            bn::string<30> linea6 = "Pokémon, enséñalo y";
            bn::string<30> linea7 = "ponlo en tu mano.";
            bn::string<30> linea8 = "Baraja las cartas de tu";
            bn::string<30> linea9 = "baraja después.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
            carta->texto.push_back(linea9);
        }
        break;
    }
    case PARTIDARIO:{        //partidario
        if(nombre == (bn::string<32>)"Órdenes de Jefes"){
            bn::string<30> linea1 = "Cambia 1 de los Pokemon";
            bn::string<30> linea2 = "en Banca de tu rival";
            bn::string<30> linea3 = "por su Pokémon activo.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
        }else if(nombre == (bn::string<32>)"Brillo de Camila"){
            bn::string<30> linea1 = "Escoje hasta 2 Pokémon";
            bn::string<30> linea2 = "Golpe Fusión. Para cada";
            bn::string<30> linea3 = "uno de esos Pokémon,";
            bn::string<30> linea4 = "busca en tu baraja 1";
            bn::string<30> linea5 = "carta de Energia Golpe";
            bn::string<30> linea6 = "Fusión y únela a ese";
            bn::string<30> linea7 = "Pokémon. Después, baraja";
            bn::string<30> linea8 = "las cartas de tu baraja.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
            carta->texto.push_back(linea8);
        }
        break;
    }
    case ESTADIO:{        //estadio
        if(nombre == (bn::string<32>)"Viejo Cementerio"){
            bn::string<30> linea1 = "Cada vez que algún";
            bn::string<30> linea2 = "jugador una 1 carta de";
            bn::string<30> linea3 = "Energía de su mano a 1";
            bn::string<30> linea4 = "de sus Pokémon no ";
            bn::string<30> linea5 = "Psíquico, pon 2";
            bn::string<30> linea6 = "coontadores de daño";
            bn::string<30> linea7 = "en ese Pokémon.";

            carta->texto.push_back(linea1);
            carta->texto.push_back(linea2);
            carta->texto.push_back(linea3);
            carta->texto.push_back(linea4);
            carta->texto.push_back(linea5);
            carta->texto.push_back(linea6);
            carta->texto.push_back(linea7);
        }
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
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electrico
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psiquico
        bn::string<30> linea1 = "Energía Psíquica";
        bn::string<30> linea2 = "Básica";

        carta->texto.push_back(linea1);
        carta->texto.push_back(linea2);
        break;
    }
    case SINIESTRO:{       //sinietro
        break;
    }
    default:
        break;
    }

    return carta;

}

bn::sprite_ptr obtener_imagen(carta _carta,int x,int y){
    switch (_carta.obtener_tipo1())
    {
    case NORMAL_C:
    case NORMAL_C_H:{
        return obtener_imagen_normal(_carta,x,y);
    }
    case V:
    case V_H:{
        return obtener_imagen_v(_carta,x,y);
    }
    case VSTAR:
    case VSTAR_H:{
        return obtener_imagen_vstar(_carta,x,y);
    }
    case VMAX:
    case VMAX_H:{
        return obtener_imagen_vmax(_carta,x,y);
    }
    case NO_POKEMON:{
        return obtener_imagen_no_pokemon(_carta,x,y);
    }
    default:
        break;
    }
}

bn::sprite_ptr obtener_imagen_normal(carta _carta,int x,int y){
    bn::string<32> nombre = _carta.obtener_nombre();
    int ajuste_pos = 50; 
    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electricidad
        break;
    }
    case FUEGO:{        //fuego
        if(nombre == (bn::string<32>)"Oricorio"){
            bn::sprite_ptr imagen = bn::sprite_items::oricorio.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psquico
        if(nombre == (bn::string<32>)"Meloetta"){
            bn::sprite_ptr imagen = bn::sprite_items::meloetta.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Deoxys"){
            bn::sprite_ptr imagen = bn::sprite_items::deoxys.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case SINIESTRO:{       //siniestro
        break;
    }
    default:
        break;
    }
}

bn::sprite_ptr obtener_imagen_v(carta _carta,int x,int y){
    bn::string<32> nombre = _carta.obtener_nombre();
    int ajuste_pos = 64; 
    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electricidad
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        if(nombre == (bn::string<32>)"Genesect V"){
            bn::sprite_ptr imagen = bn::sprite_items::genesect_v.create_sprite(x,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psquico
        if(nombre == (bn::string<32>)"Mew V"){
            bn::sprite_ptr imagen = bn::sprite_items::mew_v.create_sprite(x,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case SINIESTRO:{       //siniestro
        break;
    }
    default:
        break;
    }
}

bn::sprite_ptr obtener_imagen_vstar(carta _carta,int x,int y){
    bn::string<32> nombre = _carta.obtener_nombre();
    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electricidad
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psquico
        break;
        }
    case SINIESTRO:{       //siniestro
        break;
    }
    default:
        break;
    }
}

bn::sprite_ptr obtener_imagen_vmax(carta _carta,int x,int y){
    bn::string<32> nombre = _carta.obtener_nombre();
    int ajuste_pos = 64; 
    switch (_carta.obtener_tipo2())
    {
    case NORMAL:{        //normal
        break;
    }
    case AGUA:{        //agua
        break;
    }
    case DRAGON:{        //dragon
        break;
    }
    case ELECTRICO:{        //electricidad
        break;
    }
    case FUEGO:{        //fuego
        break;
    }
    case LUCHA:{        //lucha
        break;
    }
    case METAL:{        //metal
        break;
    }
    case PLANTA:{        //planta
        break;
    }
    case PSIQUICO:{        //psquico
        if(nombre == (bn::string<32>)"Mew VMAX"){
            bn::sprite_ptr imagen = bn::sprite_items::mew_vmax.create_sprite(x,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case SINIESTRO:{       //siniestro
        break;
    }
    default:
        break;
    }
}

bn::sprite_ptr obtener_imagen_no_pokemon(carta _carta,int x,int y){
    bn::string<32> nombre = _carta.obtener_nombre();
    int ajuste_pos = 50; 
    switch (_carta.obtener_tipo2())
    {
    case OBJETO:{        //objeto
        if(nombre == (bn::string<32>)"Pase de Combate VIP"){
            bn::sprite_ptr imagen = bn::sprite_items::pase_de_combate_vip.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Cinturón Elección"){
            bn::sprite_ptr imagen = bn::sprite_items::cinturon_eleccion.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Cramobot"){
            bn::sprite_ptr imagen = bn::sprite_items::cramobot.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Cuerda Huida"){
            bn::sprite_ptr imagen = bn::sprite_items::cuerda_huida.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Cristal Niebla"){
            bn::sprite_ptr imagen = bn::sprite_items::cristal_niebla.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Caramelo Energético"){
            bn::sprite_ptr imagen = bn::sprite_items::caramelo_energetico.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Cambio"){
            bn::sprite_ptr imagen = bn::sprite_items::cambio.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Ultra Ball"){
            bn::sprite_ptr imagen = bn::sprite_items::ultra_ball.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case PARTIDARIO:{        //partidario
        if(nombre == (bn::string<32>)"Órdenes de Jefes"){
            bn::sprite_ptr imagen = bn::sprite_items::ordenes_de_jefes.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }else if(nombre == (bn::string<32>)"Brillo de Camila"){
            bn::sprite_ptr imagen = bn::sprite_items::brillo_de_camila.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    case ESTADIO:{        //estadio
        if(nombre == (bn::string<32>)"Viejo Cementerio"){
            bn::sprite_ptr imagen = bn::sprite_items::viejo_cementerio.create_sprite(x-1,y+ajuste_pos);
            return imagen;
        }
        break;
    }
    default:
        break;
    }
}