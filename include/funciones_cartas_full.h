#ifndef FUNCIONES_CARTAS_FULL_H
#define FUNCIONES_CARTAS_FULL_H

#include "bn_sprite_ptr.h"
#include "bn_sprite_palettes.h"
#include "bn_sprite_builder.h"
#include "bn_vector.h"

#include "carta.h"

//base imagenes V
#include "bn_sprite_items_full_v_base.h"

//paletas V
#include "bn_sprite_palette_items_p_full_v_agua.h"
#include "bn_sprite_palette_items_p_full_v_dragon.h"
#include "bn_sprite_palette_items_p_full_v_electrico.h"
#include "bn_sprite_palette_items_p_full_v_fuego.h"
#include "bn_sprite_palette_items_p_full_v_lucha.h"
#include "bn_sprite_palette_items_p_full_v_metal.h"
#include "bn_sprite_palette_items_p_full_v_planta.h"
#include "bn_sprite_palette_items_p_full_v_psiquico.h"
#include "bn_sprite_palette_items_p_full_v_siniestro.h"

#include "funciones_diccionario.h"

bn::vector<bn::sprite_ptr,4> dibuja_carta_full(carta _carta,int x,int y);

#endif // FUNCIONES_CARTAS_FULL_H