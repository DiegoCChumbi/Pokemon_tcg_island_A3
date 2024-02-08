#include "funciones_mini_energias.h"

void dibuja_mini_energia(int n, int x, int y,bn::vector<bn::sprite_ptr,10>& imagenes){
    
    bn::sprite_ptr mini_energia = bn::sprite_items::mini_energia_base.create_sprite(x,y);
    imagenes.push_back(bn::sprite_items::mini_energia_base.create_sprite(x,y));

    switch (n)
    {
    case GRATIS:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_gratis;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case NORMAL:{
        return;
    }
    case AGUA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_agua;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case DRAGON:{
        return;
    }
    case ELECTRICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_electrico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case FUEGO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_fuego;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case LUCHA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_lucha;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case METAL:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_metal;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PLANTA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_planta;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PSIQUICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_psiquico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case SINIESTRO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_siniestro;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    default:
        break;
    }
}

void dibuja_mini_energia(int n, bn::fixed x, bn::fixed y,bn::vector<bn::sprite_ptr,10>& imagenes){
    
    bn::sprite_ptr mini_energia = bn::sprite_items::mini_energia_base.create_sprite(x,y);
    imagenes.push_back(bn::sprite_items::mini_energia_base.create_sprite(x,y));

    switch (n)
    {
    case GRATIS:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_gratis;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case NORMAL:{
        return;
    }
    case AGUA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_agua;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case DRAGON:{
        return;
    }
    case ELECTRICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_electrico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case FUEGO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_fuego;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case LUCHA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_lucha;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case METAL:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_metal;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PLANTA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_planta;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PSIQUICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_psiquico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case SINIESTRO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_siniestro;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    default:
        break;
    }
}

void dibuja_mini_energia(int n, int x, int y,bn::vector<bn::sprite_ptr,5>& imagenes){
    
    bn::sprite_ptr mini_energia = bn::sprite_items::mini_energia_base.create_sprite(x,y);
    imagenes.push_back(bn::sprite_items::mini_energia_base.create_sprite(x,y));

    switch (n)
    {
    case GRATIS:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_gratis;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case NORMAL:{
        return;
    }
    case AGUA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_agua;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case DRAGON:{
        return;
    }
    case ELECTRICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_electrico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case FUEGO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_fuego;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case LUCHA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_lucha;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case METAL:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_metal;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PLANTA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_planta;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PSIQUICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_psiquico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case SINIESTRO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_siniestro;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    default:
        break;
    }
}

void dibuja_mini_energia(int n, int x, int y,bn::vector<bn::sprite_ptr,2>& imagenes){
    
    bn::sprite_ptr mini_energia = bn::sprite_items::mini_energia_base.create_sprite(x,y);
    imagenes.push_back(bn::sprite_items::mini_energia_base.create_sprite(x,y));

    switch (n)
    {
    case GRATIS:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_gratis;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case NORMAL:{
        return;
    }
    case AGUA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_agua;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case DRAGON:{
        return;
    }
    case ELECTRICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_electrico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case FUEGO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_fuego;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case LUCHA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_lucha;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case METAL:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_metal;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PLANTA:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_planta;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case PSIQUICO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_psiquico;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    case SINIESTRO:{
        const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_mini_energia_siniestro;
        (imagenes.end()-1)->set_palette(paleta);
        return;
    }
    default:
        break;
    }
}