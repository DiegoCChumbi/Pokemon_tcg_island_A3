#include "funciones_diccionario.h"

bool es_basico(carta _carta){
    if(_carta.obtener_tipo1()<1 or _carta.obtener_tipo1()>4) return false;

    switch (_carta.obtener_tipo1())
    {
    case 1:{
        return diccionario_normal(_carta).stage;
    }
    case 2:{
        return diccionario_normal_habilidad(_carta).stage;
    }
    case 3:{
        return diccionario_v(_carta).stage;
    }
    case 4:{
        return diccionario_v_habilidad(_carta).stage;
    }
    default:
        break;
    }

}

carta_full diccionario_normal(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full carta;
    carta.habilidad=false;

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
            carta.stage = 0;
            carta.ps = 90;
            carta.debilidad = true;

            bn::vector<int,10> ataque1;
            ataque1.push_back(5);
            ataque1.push_back(1);
            carta.energias.push_back(ataque1);

            carta.texto =   "Habilidad:     Leccion de Fervor\n"
                            "Los ataques de los Pokemon de tu rival hacen\n"
                            "20 puntos de daño menos a todos tus Pokemon\n"
                            "Golpe Fusion (Despues de aplicar Debilidad y\n"
                            "Resistencia). No puedes aplicar mas de 1 habilidad\n"
                            "Leccion de Fervor a la vez\n"
                            "       Gotas Brillantes\n"
                            "Pon 5 contadores de daño en los Pokemon de tu\n"
                            "rival de la manera que desees\n";
            carta.arquetipo = "Golpe Fusion";
            carta.debilidad = 2;
            carta.resistencia = 0;
            carta.retirada = 1;
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
        if(nombre == (bn::string<32>)"Meloetta"){
            carta.stage = 0;
            carta.ps = 90;

            bn::vector<int,10> ataque1;
            ataque1.push_back(9);
            ataque1.push_back(1);
            carta.energias.push_back(ataque1);

            carta.texto =     "        Eco Melodioso              x70\n"
                        "Este ataque hace 70 puntos de daño por cada\n"
                        "Energia Golpe Fusion unida a todos tus\n"
                        "Pokemon.\n";
            carta.arquetipo = "Golpe Fusion";
            carta.debilidad = 10;
            carta.resistencia = 6;
            carta.retirada = 1;
        }else if(nombre == (bn::string<32>)"Deoxys"){
            carta.stage = 0;
            carta.ps = 120;

            bn::vector<int,10> ataque1;
            ataque1.push_back(1);
            ataque1.push_back(1);
            ataque1.push_back(1);
            carta.energias.push_back(ataque1);

            carta.texto =     "        Impulso Fotonico           80+\n"
                        "Si este pokemon tiene alguna Energia Golpe\n"
                        "Fusion unida a el, este ataque hace 80 de daño\n"
                        "mas.\n";
            carta.arquetipo = "Golpe";        //Si solo dice Golpe cuenta como fusion, brusco y fluido
            carta.debilidad = 10;
            carta.resistencia = 6;
            carta.retirada = 1;
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

carta_full diccionario_normal_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full carta;
    carta.habilidad=false;

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

carta_full diccionario_v(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full carta;
    carta.habilidad=false;

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
            carta.stage = 0;
            carta.ps = 180;
            
            bn::vector<int,10> ataque1;
            ataque1.push_back(9);
            carta.energias.push_back(ataque1);
            bn::vector<int,10> ataque2;
            ataque2.push_back(9);
            ataque2.push_back(1);
            carta.energias.push_back(ataque2);

            carta.texto =   "        Mezcla de Energia\n"
                            "Busca en tu baraja 1 carta de Energia y\n"
                            "unela a 1 de tus Pokemon Golpe Fusion. \n"
                            "Despues, baraja las cartas de tu baraja.\n"
                            "       Salto Psiquico                  70\n"
                            "Puedes poner este Pokemon y todas las \n"
                            "cartas unidas a el en tu baraja y barajar \n"
                            "todas la cartas\n";
            carta.arquetipo = "Golpe Fusion";
            carta.debilidad = 10;
            carta.resistencia = 6;
            carta.retirada = 0;
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

carta_full diccionario_v_habilidad(carta _carta){

    bn::string<32> nombre = _carta.obtener_nombre();

    carta_full carta;
    carta.habilidad=false;

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