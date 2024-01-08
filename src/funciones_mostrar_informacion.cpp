#include "funciones_mostrar_informacion.h"

void mostrar_informacion(carta _carta){

    carta_full* actual = obtener_informacion_completa(_carta);

    bn::vector<bn::sprite_ptr, 80> text_sprites;

    if(_carta.obtener_tipo1()>0 and _carta.obtener_tipo1()<9){
        int y = -50;

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
        small_variable_text_generator.generate(36,-75,_carta.obtener_nombre(),text_sprites);
        small_variable_text_generator.generate(85,-75,"PS "+bn::to_string<32>(actual->ps),text_sprites);

        for(bn::string<30> text_line : actual->texto)
        {
        small_variable_text_generator.generate(-6, y, text_line, text_sprites);
        y += 14;
        }

        if(actual->debilidad!=0) small_variable_text_generator.generate(5,y + 14,"x2",text_sprites);
        if(actual->resistencia!=0) small_variable_text_generator.generate(35,y + 14,"-30",text_sprites);
        small_variable_text_generator.generate(70,y + 14,"Retirada",text_sprites);

    }

    int y_max = -4;
    int y_min = -actual->texto.size()*14 + 81;      
    int y_act = -6;

    BN_LOG("y_min es: ",-251 + actual->texto.size()*14);

    while(!bn::keypad::l_released()){        //cambiar cuando L sea soltado
         while(bn::keypad::down_held() and y_act<y_max){ // and y_act<y_max
            for(bn::sprite_ptr linea : text_sprites){
                linea.set_y(linea.y()+1);
            }
            y_act++;
            BN_LOG(y_act);
            bn::core::update();
        }

        while(bn::keypad::up_held() and y_act>y_min){  //and y_act>y_min
            for(bn::sprite_ptr linea : text_sprites){
                linea.set_y(linea.y()-1);
            }
            y_act--;
            BN_LOG(y_act);
            bn::core::update();
        }
        BN_LOG(y_act);
        bn::core::update();
    }   

    delete actual;

}