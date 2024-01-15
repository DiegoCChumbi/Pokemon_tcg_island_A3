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
   case 1:
   case 2:{

   }
   case 3:
   case 4:{
        switch (tipo2)
        {
        case 1:{
            for(int n = 0; n < 3;n++){
                bn::sprite_builder builder(bn::sprite_items::full_v_base,n);
                builder.set_position(x,y+64*n);
                bn::sprite_ptr temp = builder.release_build();
                imagen.push_back(temp);
            }
            break;
        }
        case 2:{
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
        case 3:{
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
        case 4:{
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
        case 5:{
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
        case 6:{
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
        case 7:{
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
        case 8:{
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
        case 9:{
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
        case 10:{
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
   case 5:
   case 6:{

   }
   case 7:
   case 8:{

   }
   case 9:{

   }
   case 10:{        //aca los case terminan con return en lugar de break
    
   }
   default:
    break;
   }

   imagen.push_back(obtener_imagen(_carta,x,y));

   return imagen;

}