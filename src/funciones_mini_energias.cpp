#include "funciones_mini_energias.h"

bn::sprite_ptr dibuja_mini_energia(int n, int x, int y){
    
    bn::sprite_ptr mini_energia = bn::sprite_items::mini_energia_base.create_sprite(x,y);

    switch (n)
    {
    case 0:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_gratis;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 1:{
        return mini_energia;
    }
    case 2:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_agua;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 3:{
        return mini_energia;
    }
    case 4:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_electrico;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 5:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_fuego;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 6:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_lucha;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 7:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_metal;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 8:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_planta;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 9:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_psiquico;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    case 10:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_siniestro;
        mini_energia.set_palette(paleta);
        return mini_energia;
    }
    default:
        break;
    }
}