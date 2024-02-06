#include "funciones_cartas.h"

void dibuja(int tipo1,int tipo2, int x,int y,bn::vector<bn::sprite_ptr,60>& imagenes){
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
    case ESPALDA:{
        imagenes.push_back(bn::sprite_items::carta_back.create_sprite(x,y));
        return;
    }
    case NORMAL_C:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.push_back(bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.push_back(bn::sprite_items::siniestro.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case NORMAL_C_H:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.push_back(bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.push_back(bn::sprite_items::siniestro_habilidad.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case V:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.push_back(bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.push_back(bn::sprite_items::siniestro_v.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case V_H:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.push_back(bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v_habilidad;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.push_back(bn::sprite_items::siniestro_v_habilidad.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case VSTAR:{
        imagenes.push_back(bn::sprite_items::vstar.create_sprite(x,y));
        return;
    }
    case VSTAR_H:{
        imagenes.push_back(bn::sprite_items::vstar_habilidad.create_sprite(x,y));
        return;
    }
    case VMAX:{
        imagenes.push_back(bn::sprite_items::vmax.create_sprite(x,y));
        return;
    }
    case VMAX_H:{
        imagenes.push_back(bn::sprite_items::vmax_habilidad.create_sprite(x,y));
        return;
    }
    case NO_POKEMON:{
        imagenes.push_back(bn::sprite_items::objeto.create_sprite(x,y));
        switch (tipo2)
        {
        case OBJETO:{
            return;
        }
        case PARTIDARIO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_partidario;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case ESTADIO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_estadio;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        default:
            break;
        }
    }
    case ENERGIAS_BASICA:{
        imagenes.push_back(bn::sprite_items::energia_agua.create_sprite(x,y));
        switch (tipo2)
        {
        case AGUA:{
            return;
        }
        case ELECTRICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_electrica;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case FUEGO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_fuego;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case LUCHA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_lucha;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case METAL:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_metal;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PLANTA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_planta;
            (imagenes.end()-1)->set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_psiquico;
            (imagenes.end()-1)->set_palette(paleta);
            return ;
        }
        case SINIESTRO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_energia_siniestro;
            (imagenes.end()-1)->set_palette(paleta);
            return ;
        }
        default:
            break;
        }
    }
    default:
        break;
    }

}

void dibuja_m(int tipo1,int tipo2, int x,int y,bn::vector<bn::sprite_ptr,60>& imagenes,bn::vector<bn::sprite_ptr,60>::iterator ite){
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
    case NORMAL_C:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua;
            (*ite).set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon;
            (*ite).set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico;
            (*ite).set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego;
            (*ite).set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha;
            (*ite).set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal;
            (*ite).set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta;
            (*ite).set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.insert(ite,bn::sprite_items::base.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico;
            (*ite).set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.insert(ite,bn::sprite_items::siniestro.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case NORMAL_C_H:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.insert(ite,bn::sprite_items::base_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.insert(ite,bn::sprite_items::siniestro_habilidad.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case V:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v;
            (*ite).set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v;
            (*ite).set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v;
            (*ite).set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v;
            (*ite).set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v;
            (*ite).set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v;
            (*ite).set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v;
            (*ite).set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.insert(ite,bn::sprite_items::base_v.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v;
            (*ite).set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.insert(ite,bn::sprite_items::siniestro_v.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case V_H:{
        switch (tipo2)
        {
        case NORMAL:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            return;
        }
        case AGUA:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_agua_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case DRAGON:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_dragon_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case ELECTRICO:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_electrico_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case FUEGO:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_fuego_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case LUCHA:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_lucha_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case METAL:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_metal_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case PLANTA:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_planta_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case PSIQUICO:{
            imagenes.insert(ite,bn::sprite_items::base_v_habilidad.create_sprite(x,y));
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_psiquico_v_habilidad;
            (*ite).set_palette(paleta);
            return;
        }
        case SINIESTRO:{
            imagenes.insert(ite,bn::sprite_items::siniestro_v_habilidad.create_sprite(x,y));
            return;
        }
        default:
            exit;
        }
    }
    case VSTAR:{
        imagenes.insert(ite,bn::sprite_items::vstar.create_sprite(x,y));
        return;
    }
    case VSTAR_H:{
        imagenes.insert(ite,bn::sprite_items::vstar_habilidad.create_sprite(x,y));
        return;
    }
    case VMAX:{
        imagenes.insert(ite,bn::sprite_items::vmax.create_sprite(x,y));
        return;
    }
    case VMAX_H:{
        imagenes.insert(ite,bn::sprite_items::vmax_habilidad.create_sprite(x,y));
        return;
    }
    default:
        break;
    }

}