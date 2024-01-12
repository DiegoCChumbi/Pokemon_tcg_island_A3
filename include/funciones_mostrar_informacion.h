#ifndef FUNCIONES_MOSTRAR_INFORMACION
#define FUNCIONES_MOSTRAR_INFORMACION

#include "bn_core.h"
#include "bn_vector.h"
#include "bn_string.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"

#include "bn_log.h"

#include "bn_blending.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_builder.h"
#include "bn_affine_bg_item.h"
#include "bn_regular_bg_ptr.h"

#include "bn_regular_bg_items_informacion_cartas.h"
#include "bn_affine_bg_items_pantalla_gris.h"

#include "funciones_diccionario.h"
#include "carta.h"
#include "funciones_mini_energias.h"

void mostrar_informacion(carta _carta);
bn::vector<bn::sprite_ptr,10> imprime_energias(bn::vector<int,10> requerimientos,int x,int y);

#endif // FUNCIONES_MOSTRAR_INFORMACION