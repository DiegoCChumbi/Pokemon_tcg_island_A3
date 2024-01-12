#include "funciones_mostrar_informacion.h"

void mostrar_informacion(carta _carta){

    carta_full* actual = obtener_informacion_completa(_carta);

    bn::regular_bg_ptr informacion = bn::regular_bg_items::informacion_cartas.create_bg(0,0);

    bn::blending::set_transparency_alpha(0.6);
    bn::affine_bg_builder builder(bn::affine_bg_items::pantalla_gris);
    builder.set_position(0,0);
    builder.set_blending_enabled(true);

    bn::affine_bg_ptr gris = builder.build();

    gris.set_priority(2);
    informacion.set_priority(1);

    bn::vector<bn::sprite_ptr, 80> text_sprites;

    if(_carta.obtener_tipo1()>0 and _carta.obtener_tipo1()<9){
        int y = -35;

        int y_primer_ataque = y;
        int y_segundo_ataque;

        bn::sprite_text_generator small_variable_text_generator(common::variable_8x8_sprite_font);
        small_variable_text_generator.set_left_alignment();

        switch (actual->stage)
        {
        case 0:{
            small_variable_text_generator.generate(-6,-75,"Básico",text_sprites);
            break;
        }
        case 1:{
            small_variable_text_generator.generate(-6,-75,"Fase 1",text_sprites);
            break;
        }   
        case 2:{
            small_variable_text_generator.generate(-6,-75,"Fase 2",text_sprites);
            break;
        }
        default:
            break;
        }
        small_variable_text_generator.generate(50,-68,_carta.obtener_nombre(),text_sprites);
        small_variable_text_generator.generate(-6,-61,"PS "+bn::to_string<32>(actual->ps),text_sprites);

        for(bn::string<30> text_line : actual->texto){
            if (text_line == (bn::string<30>)"---"){
                y_segundo_ataque = y;
            }else{
                small_variable_text_generator.generate(-6, y, text_line, text_sprites);
                y += 14;
            }
        }

        if(actual->debilidad!=0) small_variable_text_generator.generate(5,y + 14,"x2",text_sprites);
        if(actual->resistencia!=0) small_variable_text_generator.generate(35,y + 14,"-30",text_sprites);
        small_variable_text_generator.generate(70,y + 14,"Retirada",text_sprites);

        for(bn::sprite_ptr sprite : text_sprites){
            sprite.set_bg_priority(1);
        }

        //Impresion de los costos de ataque
        bn::vector<bn::sprite_ptr,10> primer_ataque;
        bn::vector<bn::sprite_ptr,10> segundo_ataque;
        bool tiene_habilidad = actual->habilidad;
        bool dos_ataques = actual->energias.size() > 1;

        if(!tiene_habilidad){
            primer_ataque = imprime_energias(actual->energias[0],-4,y_primer_ataque-1);
            if(dos_ataques) segundo_ataque = imprime_energias(actual->energias[1],-4,y_segundo_ataque-1);
        }else{
            primer_ataque = imprime_energias(actual->energias[0],-4,y_segundo_ataque-1);
        }

        for(bn::sprite_ptr a_mini : primer_ataque){
            a_mini.set_bg_priority(1);
        }

        if(dos_ataques){
            for(bn::sprite_ptr b_mini : segundo_ataque){
                b_mini.set_bg_priority(1);
            }
        }

        //Impresion de debilidad y resistencia
        bool hay_debilidad = actual->debilidad != 0;
        bool hay_resistencia = actual->resistencia != 0;

        bn::vector<bn::sprite_ptr,2> ultimos;
        if(hay_debilidad){
            ultimos.push_back(dibuja_mini_energia(actual->debilidad,0,y+14));
            
        }
        if(hay_resistencia){
            ultimos.push_back(dibuja_mini_energia(actual->resistencia,30,y+14));
        }

        for(bn::sprite_ptr mini : ultimos){
            mini.set_bg_priority(1);
        }

        //Imprime el costo de retirada
        bn::vector<bn::sprite_ptr, 5> costo_retirada;
        int c_retirada = actual->retirada;
        int x_retirada = 78;
        for(int n = 0;n<c_retirada;n++){
            bn::sprite_ptr normal = dibuja_mini_energia(1,x_retirada,y+22);
            normal.set_bg_priority(1);
            costo_retirada.push_back(normal);
            x_retirada += 5;
        }

        int y_max = -4;
        int y_min = -actual->texto.size()*14 + 81;      
        int y_act = -6;

        while(!bn::keypad::l_released()){        //cambiar cuando L sea soltado
            while(bn::keypad::down_held() and y_act<y_max){ // and y_act<y_max
                for(bn::sprite_ptr linea : text_sprites){
                    linea.set_y(linea.y()+1);
                }
                for(bn::sprite_ptr a_mini : primer_ataque){
                    a_mini.set_y(a_mini.y()+1);
                }
                if(dos_ataques){
                    for(bn::sprite_ptr b_mini : segundo_ataque){
                        b_mini.set_y(b_mini.y()+1);
                    }
                }
                for(bn::sprite_ptr mini : ultimos){
                    mini.set_y(mini.y()+1);
                }
                for(bn::sprite_ptr mini : costo_retirada){
                    mini.set_y(mini.y()+1);
                }
                y_act++;
                bn::core::update();
            }

            while(bn::keypad::up_held() and y_act>y_min){  //and y_act>y_min
                for(bn::sprite_ptr linea : text_sprites){
                    linea.set_y(linea.y()-1);
                }
                for(bn::sprite_ptr a_mini : primer_ataque){
                    a_mini.set_y(a_mini.y()-1);
                }
                if(dos_ataques){
                    for(bn::sprite_ptr b_mini : segundo_ataque){
                        b_mini.set_y(b_mini.y()-1);
                    }
                }
                for(bn::sprite_ptr mini : ultimos){
                    mini.set_y(mini.y()-1);
                }
                for(bn::sprite_ptr mini : costo_retirada){
                    mini.set_y(mini.y()-1);
                }
                y_act--;
                bn::core::update();
            }
            bn::core::update();
        }   

        delete actual;
    }

}

bn::vector<bn::sprite_ptr,10> imprime_energias(bn::vector<int,10> requerimientos,int x,int y){
    bn::vector<bn::sprite_ptr,10> imagenes;

    for(int energia : requerimientos){
        imagenes.push_back(dibuja_mini_energia(energia,x,y));
        x += 5;
    }

    return imagenes;

}