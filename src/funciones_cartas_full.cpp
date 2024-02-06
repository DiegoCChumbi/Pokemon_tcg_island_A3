#include "funciones_cartas_full.h"

bn::vector<bn::sprite_ptr,4> dibuja_carta_full(carta _carta,int x, int y){
                                                            //x= -50 y = -70+64*n
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

   int tipo1 = _carta.obtener_tipo1();
   int tipo2 = _carta.obtener_tipo2();

   bn::vector<bn::sprite_ptr,4> imagen;

   switch (tipo1)
   {
   case NORMAL_C:
   case NORMAL_C_H:{         //normal
        switch (tipo2)
        {
        case NORMAL:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                imagen.push_back(temp);
            }
            break;
        }
        case AGUA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_agua;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case DRAGON:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_dragon;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case ELECTRICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_electrico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case FUEGO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_fuego;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case LUCHA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_lucha;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case METAL:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_metal;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PLANTA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_planta;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PSIQUICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_psiquico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case SINIESTRO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_normal_siniestro;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_normal_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        default:
            break;
        }
        break;
   }
   case V:
   case V_H:{         //V
        switch (tipo2)
        {
        case NORMAL:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                imagen.push_back(temp);
            }
            break;
        }
        case AGUA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_agua;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case DRAGON:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_dragon;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case ELECTRICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_electrico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case FUEGO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_fuego;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case LUCHA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_lucha;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case METAL:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_metal;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PLANTA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_planta;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PSIQUICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_psiquico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case SINIESTRO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_v_siniestro;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        default:
            break;
        }
        break;
   }
   case VSTAR:
   case VSTAR_H:{         //VSTAR
        break;
   }
   case VMAX:
   case VMAX_H:{         //VMAX
        switch (tipo2)
        {
        case NORMAL:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                imagen.push_back(temp);
            }
            break;
        }
        case AGUA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_agua;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case DRAGON:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_dragon;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case ELECTRICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_electrico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case FUEGO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_fuego;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case LUCHA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_lucha;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case METAL:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_metal;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PLANTA:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_planta;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case PSIQUICO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_psiquico;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case SINIESTRO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_vmax_siniestro;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_vmax_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        default:
            break;
        }
        break;
   }
   case NO_POKEMON:{     //no pokemon
        switch (tipo2)
        {
        case OBJETO:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_no_pokemon_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                imagen.push_back(temp);
            }
            break;
        }
        case PARTIDARIO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_no_pokemon_partidario;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_no_pokemon_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        case ESTADIO:{
            const bn::sprite_palette_item& paleta = bn::sprite_palette_items::p_full_no_pokemon_estadio;

            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_no_pokemon_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                temp.set_palette(paleta);
                imagen.push_back(temp);
            }
            break;
        }
        default:
            break;
        }
        break;
   }
   case ENERGIAS_BASICA:{
    switch (tipo2)
        {
        case AGUA:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_agua,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case ELECTRICO:{    //electrica
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_electrico,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case FUEGO:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_fuego,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case LUCHA:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_lucha,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case METAL:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_metal,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case PLANTA:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_planta,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case PSIQUICO:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_psiquico,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }
        case SINIESTRO:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::energia_full_siniestro,n);
                builder.set_position(x,y+64*n);
                imagen.push_back(builder.release_build());
            }
            return imagen;
        }    
        default:
            break;
        }
        break;
   }
    default:
    break;
   }

   imagen.push_back(obtener_imagen(_carta,x,y));

   return imagen;

}