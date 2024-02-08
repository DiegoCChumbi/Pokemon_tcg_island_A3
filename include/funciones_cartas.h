#ifndef FUNCIONES_CARTAS_H
#define FUNCIONES_CARTAS_H

#include "bn_sprite_ptr.h"
#include "bn_sprite_palette_item.h"
#include "bn_sprite_palette_ptr.h"
#include "bn_sprite_builder.h"
#include "bn_vector.h"

#include "enumeraciones.h"

//include la la espalda de las cartas
#include "bn_sprite_items_carta_back.h"

//include de la imagen basica de la carta
#include "bn_sprite_items_base.h"

#include "bn_sprite_items_base_habilidad.h"

#include "bn_sprite_items_base_v.h"

#include "bn_sprite_items_base_v_habilidad.h"

//include de las cartas siniestro (no se pudo implementar usando paletas)
#include "bn_sprite_items_siniestro.h"

#include "bn_sprite_items_siniestro_habilidad.h"

#include "bn_sprite_items_siniestro_v.h"

#include "bn_sprite_items_siniestro_v_habilidad.h"

//include de las paletas para que se convierta en otras cartas
#include "bn_sprite_palette_items_p_agua.h"
#include "bn_sprite_palette_items_p_dragon.h"
#include "bn_sprite_palette_items_p_electrico.h"
#include "bn_sprite_palette_items_p_fuego.h"
#include "bn_sprite_palette_items_p_lucha.h"
#include "bn_sprite_palette_items_p_metal.h"
#include "bn_sprite_palette_items_p_planta.h"
#include "bn_sprite_palette_items_p_psiquico.h"

#include "bn_sprite_palette_items_p_agua_habilidad.h"
#include "bn_sprite_palette_items_p_dragon_habilidad.h"
#include "bn_sprite_palette_items_p_electrico_habilidad.h"
#include "bn_sprite_palette_items_p_fuego_habilidad.h"
#include "bn_sprite_palette_items_p_lucha_habilidad.h"
#include "bn_sprite_palette_items_p_metal_habilidad.h"
#include "bn_sprite_palette_items_p_planta_habilidad.h"
#include "bn_sprite_palette_items_p_psiquico_habilidad.h"

#include "bn_sprite_palette_items_p_agua_v.h"
#include "bn_sprite_palette_items_p_dragon_v.h"
#include "bn_sprite_palette_items_p_electrico_v.h"
#include "bn_sprite_palette_items_p_fuego_v.h"
#include "bn_sprite_palette_items_p_lucha_v.h"
#include "bn_sprite_palette_items_p_metal_v.h"
#include "bn_sprite_palette_items_p_planta_v.h"
#include "bn_sprite_palette_items_p_psiquico_v.h"

#include "bn_sprite_palette_items_p_agua_v_habilidad.h"
#include "bn_sprite_palette_items_p_dragon_v_habilidad.h"
#include "bn_sprite_palette_items_p_electrico_v_habilidad.h"
#include "bn_sprite_palette_items_p_fuego_v_habilidad.h"
#include "bn_sprite_palette_items_p_lucha_v_habilidad.h"
#include "bn_sprite_palette_items_p_metal_v_habilidad.h"
#include "bn_sprite_palette_items_p_planta_v_habilidad.h"
#include "bn_sprite_palette_items_p_psiquico_v_habilidad.h"

//cartas vmax

#include "bn_sprite_items_vmax.h"
#include "bn_sprite_items_vmax_habilidad.h"

//cartas vstar

#include "bn_sprite_items_vstar.h"
#include "bn_sprite_items_vstar_habilidad.h"

//cartas objeto,partidario,estadio

#include "bn_sprite_items_objeto.h"

#include "bn_sprite_palette_items_p_partidario.h"
#include "bn_sprite_palette_items_p_estadio.h"

//cartas de energias, base agua demas paletas

#include "bn_sprite_items_energia_agua.h"

#include "bn_sprite_palette_items_p_energia_electrica.h"
#include "bn_sprite_palette_items_p_energia_fuego.h"
#include "bn_sprite_palette_items_p_energia_lucha.h"
#include "bn_sprite_palette_items_p_energia_metal.h"
#include "bn_sprite_palette_items_p_energia_planta.h"
#include "bn_sprite_palette_items_p_energia_psiquico.h"
#include "bn_sprite_palette_items_p_energia_siniestro.h"

void dibuja(int tipo1, int tipo2, int x,int y,bn::vector<bn::sprite_ptr,60>& imagenes);
void dibuja(int tipo1,int tipo2, int x,int y,bn::vector<bn::sprite_ptr,60>& imagenes,bn::vector<bn::sprite_ptr,60>::iterator ite);  //dibuja cartas en juego

#endif // FUNCIONES_CARTAS_H