#include "bn_core.h"

#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_vector.h"

#include "funciones_combate.h"
#include "funciones_cartas.h"
#include "carta.h"

int main()
{
    bn::core::init();
    bn::random random;

    //Los decks no son creados en el main, los pasara la funcion historia a la funcion combate
    bn::vector<carta,60> deck1;

    deck1.push_back(carta("Mew V",V,PSIQUICO));
    deck1.push_back(carta("Mew V",V,PSIQUICO));
    deck1.push_back(carta("Mew VMAX",VMAX,PSIQUICO));
    deck1.push_back(carta("Mew VMAX",VMAX,PSIQUICO));
    deck1.push_back(carta("Genesect V",V_H,METAL));
    deck1.push_back(carta("Genesect V",V_H,METAL));
    deck1.push_back(carta("Meloetta",NORMAL_C,PSIQUICO));
    deck1.push_back(carta("Meloetta",NORMAL_C,PSIQUICO));
    deck1.push_back(carta("Meloetta",NORMAL_C,PSIQUICO));
    deck1.push_back(carta("Deoxys",NORMAL_C,PSIQUICO));
    deck1.push_back(carta("Deoxys",NORMAL_C,PSIQUICO));
    deck1.push_back(carta("Oricorio",NORMAL_C_H,FUEGO));

    deck1.push_back(carta("Pase de Combate VIP",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Pase de Combate VIP",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Pase de Combate VIP",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Pase de Combate VIP",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Órdenes de Jefes",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Órdenes de Jefes",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Órdenes de Jefes",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Órdenes de Jefes",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Cinturón Elección",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cinturón Elección",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cinturón Elección",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cramobot",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cramobot",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cramobot",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cramobot",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Brillo de Camila",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Brillo de Camila",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Brillo de Camila",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Brillo de Camila",NO_POKEMON,PARTIDARIO));
    deck1.push_back(carta("Cuera Huida",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cuera Huida",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cristal Niebla",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cristal Niebla",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cristal Niebla",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cristal Niebla",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Viejo Cementerio",NO_POKEMON,ESTADIO));
    deck1.push_back(carta("Viejo Cementerio",NO_POKEMON,ESTADIO));
    deck1.push_back(carta("Caramelo Energético",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Caramelo Energético",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Caramelo Energético",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Caramelo Energético",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cambio",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Cambio",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Ultra Ball",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Ultra Ball",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Ultra Ball",NO_POKEMON,OBJETO));
    deck1.push_back(carta("Ultra Ball",NO_POKEMON,OBJETO));

    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));
    deck1.push_back(carta("Enegia Basica Psiquica",ENERGIAS_BASICA,PSIQUICO));

    bn::vector<carta,60> deck2 = bn::vector(deck1);

    while(true)
    {   

        combate(deck1,deck2,random);

        bn::core::update();
    }
}
