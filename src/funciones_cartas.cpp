#include "funciones_cartas.h"

bn::sprite_ptr dibuja(int tipo1,int tipo2, int x,int y){
    //bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);

    /*  TIPO1
    (0)  espalda carta
    (1)  carta normal
    (2)  carta normal habilidad
    (3)  carta V
    (4)  carta V habilidad
    (5)  carta VSTAR
    (6)  carta VSTAR habilidad
    (7)  carta VMAX
    (8)  carta VMAX habilidad
    (9)  cartas no pokemon (1:objeto  2:partidario  3:estadio)
    (10) carta energias basica
    */

    /*  TIPO2
    (1)  normal
    (2)  agua
    (3)  dragon
    (4)  electrico
    (5)  fuego
    (6)  lucha
    (7)  metal
    (8)  planta
    (9)  psiquico
    (10) siniestro 
    */

    switch (tipo1)
    {
    case 0:{
        bn::sprite_ptr carta = bn::sprite_items::carta_back.create_sprite(x,y);
        return carta;
    }
    case 1:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua;
            carta.set_palette(paleta);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon;
            carta.set_palette(paleta);
            return carta;
        }
        case 4:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico;
            carta.set_palette(paleta);
            return carta;
        }
        case 5:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego;
            carta.set_palette(paleta);
            return carta;
        }
        case 6:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha;
            carta.set_palette(paleta);
            return carta;
        }
        case 7:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal;
            carta.set_palette(paleta);
            return carta;
        }
        case 8:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta;
            carta.set_palette(paleta);
            return carta;
        }
        case 9:{
            bn::sprite_ptr carta = bn::sprite_items::base.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico;
            carta.set_palette(paleta);
            return carta;
        }
        case 10:{
            bn::sprite_ptr carta = bn::sprite_items::siniestro.create_sprite(x,y);
            return carta;
        }
        default:
            exit;
        }
    }
    case 2:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 4:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 5:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 6:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 7:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 8:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 9:{
            bn::sprite_ptr carta = bn::sprite_items::base_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 10:{
            bn::sprite_ptr carta = bn::sprite_items::siniestro_habilidad.create_sprite(x,y);
            return carta;
        }
        default:
            exit;
        }
    }
    case 3:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 4:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 5:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 6:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 7:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 8:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 9:{
            bn::sprite_ptr carta = bn::sprite_items::base_v.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v;
            carta.set_palette(paleta);
            return carta;
        }
        case 10:{
            bn::sprite_ptr carta = bn::sprite_items::siniestro_v.create_sprite(x,y);
            return carta;
        }
        default:
            exit;
        }
    }
    case 4:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 4:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 5:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 6:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 7:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 8:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 9:{
            bn::sprite_ptr carta = bn::sprite_items::base_v_habilidad.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v_habilidad;
            carta.set_palette(paleta);
            return carta;
        }
        case 10:{
            bn::sprite_ptr carta = bn::sprite_items::siniestro_v_habilidad.create_sprite(x,y);
            return carta;
        }
        default:
            exit;
        }
    }
    case 5:{
        bn::sprite_ptr carta = bn::sprite_items::vstar.create_sprite(x,y);
        return carta;
    }
    case 6:{
        bn::sprite_ptr carta = bn::sprite_items::vstar_habilidad.create_sprite(x,y);
        return carta;
    }
    case 7:{
        bn::sprite_ptr carta = bn::sprite_items::vmax.create_sprite(x,y);
        return carta;
    }
    case 8:{
        bn::sprite_ptr carta = bn::sprite_items::vmax_habilidad.create_sprite(x,y);
        return carta;
    }
    case 9:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::objeto.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::objeto.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_partidario;
            carta.set_palette(paleta);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::objeto.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_estadio;
            carta.set_palette(paleta);
            return carta;
        }
        default:
            break;
        }
    }
    case 10:{
        switch (tipo2)
        {
        case 1:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            return carta;
        }
        case 2:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            return carta;
        }
        case 3:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            return carta;
        }
        case 4:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_electrica;
            carta.set_palette(paleta);
            return carta;
        }
        case 5:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_fuego;
            carta.set_palette(paleta);
            return carta;
        }
        case 6:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_lucha;
            carta.set_palette(paleta);
            return carta;
        }
        case 7:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_metal;
            carta.set_palette(paleta);
            return carta;
        }
        case 8:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_planta;
            carta.set_palette(paleta);
            return carta;
        }
        case 9:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_psiquico;
            carta.set_palette(paleta);
            return carta;
        }
        case 10:{
            bn::sprite_ptr carta = bn::sprite_items::energia_agua.create_sprite(x,y);
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_siniestro;
            carta.set_palette(paleta);
            return carta;
        }
        default:
            break;
        }
    }
    default:
        break;
    }

}