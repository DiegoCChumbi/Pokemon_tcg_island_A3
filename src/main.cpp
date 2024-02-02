#include "bn_core.h"

#include "bn_keypad.h"
#include "bn_log.h"
#include "bn_vector.h"

#include "funciones_combate.h"
#include "funciones_cartas.h"
#include "carta.h"

// void espera_a_presionado() {        //se asegura que la accion de presionar y soltar sean contada una sola vez
//     // Espera a que se presione la tecla A
//     while (!bn::keypad::a_pressed()) {
//         bn::core::update();
//     }

//     // Espera a que se suelte la tecla A
//     while (bn::keypad::a_pressed()) {
//         bn::core::update();
//     }
// }

// void crea_sprite(int n,int m){
//     //BN_LOG(n);
//     //BN_LOG(m);
//     bn::sprite_ptr carta = dibuja(n, m, 0, 0);
//     espera_a_presionado();
// }

int main()
{
    bn::core::init();
    bn::random random;

    bn::vector<carta,60> deck1;
    deck1.push_back(carta("Meloetta",1,9));
    deck1.push_back(carta("Mew V",3,9));
    deck1.push_back(carta("Genesect V",4,7));
    deck1.push_back(carta("Mew V",3,9));
    deck1.push_back(carta("Pase de Combate VIP",9,1));
    
    deck1.push_back(carta("Mew VMAX",7,9));
    deck1.push_back(carta("Cramobot",9,1));
    
    deck1.push_back(carta("Mew VMAX",7,9));
    
    deck1.push_back(carta("Genesect V",4,7));
    
    deck1.push_back(carta("Meloetta",1,9));
    deck1.push_back(carta("Meloetta",1,9));
    
    
    deck1.push_back(carta("Oricorio",2,5));

    deck1.push_back(carta("Viejo Cementerio",9,3));
    deck1.push_back(carta("Pase de Combate VIP",9,1));
    deck1.push_back(carta("Pase de Combate VIP",9,1));
    deck1.push_back(carta("Pase de Combate VIP",9,1));
    deck1.push_back(carta("Órdenes de Jefes",9,2));
    deck1.push_back(carta("Órdenes de Jefes",9,2));
    deck1.push_back(carta("Órdenes de Jefes",9,2));
    deck1.push_back(carta("Órdenes de Jefes",9,2));
    deck1.push_back(carta("Cinturón Elección",9,1));
    deck1.push_back(carta("Cinturón Elección",9,1));
    deck1.push_back(carta("Cinturón Elección",9,1));
    deck1.push_back(carta("Deoxys",1,9));
    deck1.push_back(carta("Cramobot",9,1));
    deck1.push_back(carta("Cramobot",9,1));
    deck1.push_back(carta("Cramobot",9,1));
    deck1.push_back(carta("Brillo de Camila",9,2));
    deck1.push_back(carta("Brillo de Camila",9,2));
    deck1.push_back(carta("Brillo de Camila",9,2));
    deck1.push_back(carta("Brillo de Camila",9,2));
    deck1.push_back(carta("Cuera Huida",9,1));
    deck1.push_back(carta("Cuera Huida",9,1));
    deck1.push_back(carta("Cristal Niebla",9,1));
    deck1.push_back(carta("Cristal Niebla",9,1));
    deck1.push_back(carta("Cristal Niebla",9,1));
    deck1.push_back(carta("Cristal Niebla",9,1));
    deck1.push_back(carta("Viejo Cementerio",9,3));
    deck1.push_back(carta("Deoxys",1,9));
    
    deck1.push_back(carta("Caramelo Energético",9,1));
    deck1.push_back(carta("Caramelo Energético",9,1));
    deck1.push_back(carta("Caramelo Energético",9,1));
    deck1.push_back(carta("Caramelo Energético",9,1));
    deck1.push_back(carta("Cambio",9,1));
    deck1.push_back(carta("Cambio",9,1));
    deck1.push_back(carta("Ultra Ball",9,1));
    deck1.push_back(carta("Ultra Ball",9,1));
    deck1.push_back(carta("Ultra Ball",9,1));
    deck1.push_back(carta("Ultra Ball",9,1));

    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));
    deck1.push_back(carta("Enegia Basica Psiquica",10,9));

    bn::vector<carta,60> deck2 = bn::vector(deck1);

    // bn::vector<carta,60> deck2;

    // deck2.push_back(carta("Mew V",3,9));
    // deck2.push_back(carta("Mew V",3,9));
    // deck2.push_back(carta("Mew VMAX",7,9));
    // deck2.push_back(carta("Mew VMAX",7,9));
    // deck2.push_back(carta("Genesect V",4,7));
    // deck2.push_back(carta("Genesect V",4,7));
    // deck2.push_back(carta("Meloetta",1,9));
    // deck2.push_back(carta("Meloetta",1,9));
    // deck2.push_back(carta("Meloetta",1,9));
    // deck2.push_back(carta("Deoxys",1,9));
    // deck2.push_back(carta("Deoxys",1,9));
    // deck2.push_back(carta("Oricorio",2,5));

    // deck2.push_back(carta("Pase de Combate VIP",9,1));
    // deck2.push_back(carta("Pase de Combate VIP",9,1));
    // deck2.push_back(carta("Pase de Combate VIP",9,1));
    // deck2.push_back(carta("Pase de Combate VIP",9,1));
    // deck2.push_back(carta("Ordenes del Jefe",9,2));
    // deck2.push_back(carta("Ordenes del Jefe",9,2));
    // deck2.push_back(carta("Ordenes del Jefe",9,2));
    // deck2.push_back(carta("Ordenes del Jefe",9,2));
    // deck2.push_back(carta("Banda Elegida",9,1));
    // deck2.push_back(carta("Banda Elegida",9,1));
    // deck2.push_back(carta("Banda Elegida",9,1));
    // deck2.push_back(carta("Cramomatic",9,1));
    // deck2.push_back(carta("Cramomatic",9,1));
    // deck2.push_back(carta("Cramomatic",9,1));
    // deck2.push_back(carta("Cramomatic",9,1));
    // deck2.push_back(carta("Brillo de Camila",9,2));
    // deck2.push_back(carta("Brillo de Camila",9,2));
    // deck2.push_back(carta("Brillo de Camila",9,2));
    // deck2.push_back(carta("Brillo de Camila",9,2));
    // deck2.push_back(carta("Cuera Huida",9,1));
    // deck2.push_back(carta("Cuera Huida",9,1));
    // deck2.push_back(carta("Cristal Niebla",9,1));
    // deck2.push_back(carta("Cristal Niebla",9,1));
    // deck2.push_back(carta("Cristal Niebla",9,1));
    // deck2.push_back(carta("Cristal Niebla",9,1));
    // deck2.push_back(carta("Viejo Cementerio",9,3));
    // deck2.push_back(carta("Viejo Cementerio",9,3));
    // deck2.push_back(carta("Caramelo energetico",9,1));
    // deck2.push_back(carta("Caramelo energetico",9,1));
    // deck2.push_back(carta("Caramelo energetico",9,1));
    // deck2.push_back(carta("Caramelo energetico",9,1));
    // deck2.push_back(carta("Cambio",9,1));
    // deck2.push_back(carta("Cambio",9,1));
    // deck2.push_back(carta("Ultra Ball",9,1));

    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    // deck2.push_back(carta("Enegia Basica Psiquica",10,9));
    
    while(true)
    {   

        combate(deck1,deck2,random);

        bn::core::update();
    }
}
