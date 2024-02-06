#ifndef FUNCIONES_CARTAS_FULL_H
#define FUNCIONES_CARTAS_FULL_H

#include "bn_sprite_ptr.h"
#include "bn_sprite_palettes.h"
#include "bn_sprite_builder.h"
#include "bn_vector.h"

#include "carta.h"

//base imagenes normal
#include "bn_sprite_items_full_normal_base.h"

//paletas normal
#include "bn_sprite_palette_items_p_full_normal_agua.h"
#include "bn_sprite_palette_items_p_full_normal_dragon.h"
#include "bn_sprite_palette_items_p_full_normal_electrico.h"
#include "bn_sprite_palette_items_p_full_normal_fuego.h"
#include "bn_sprite_palette_items_p_full_normal_lucha.h"
#include "bn_sprite_palette_items_p_full_normal_metal.h"
#include "bn_sprite_palette_items_p_full_normal_planta.h"
#include "bn_sprite_palette_items_p_full_normal_psiquico.h"
#include "bn_sprite_palette_items_p_full_normal_siniestro.h"

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

//base imagenes VMAX
#include "bn_sprite_items_full_vmax_base.h"

//paletas vmax
#include "bn_sprite_palette_items_p_full_vmax_agua.h"
#include "bn_sprite_palette_items_p_full_vmax_dragon.h"
#include "bn_sprite_palette_items_p_full_vmax_electrico.h"
#include "bn_sprite_palette_items_p_full_vmax_fuego.h"
#include "bn_sprite_palette_items_p_full_vmax_lucha.h"
#include "bn_sprite_palette_items_p_full_vmax_metal.h"
#include "bn_sprite_palette_items_p_full_vmax_planta.h"
#include "bn_sprite_palette_items_p_full_vmax_psiquico.h"
#include "bn_sprite_palette_items_p_full_vmax_siniestro.h"

//base imagenes no pokemon
#include "bn_sprite_items_full_no_pokemon_base.h"

//paletas no pokemon
#include "bn_sprite_palette_items_p_full_no_pokemon_partidario.h"
#include "bn_sprite_palette_items_p_full_no_pokemon_estadio.h"

//energias basicas
#include "bn_sprite_items_energia_full_agua.h"
#include "bn_sprite_items_energia_full_electrico.h"
#include "bn_sprite_items_energia_full_fuego.h"
#include "bn_sprite_items_energia_full_lucha.h"
#include "bn_sprite_items_energia_full_metal.h"
#include "bn_sprite_items_energia_full_planta.h"
#include "bn_sprite_items_energia_full_psiquico.h"
#include "bn_sprite_items_energia_full_siniestro.h"

#include "funciones_diccionario.h"

bn::vector<bn::sprite_ptr,4> dibuja_carta_full(carta _carta,int x,int y);

#endif // FUNCIONES_CARTAS_FULL_H