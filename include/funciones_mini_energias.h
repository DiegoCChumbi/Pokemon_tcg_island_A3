#ifndef FUNCIONES_MINI_ENERGIAS_H
#define FUNCIONES_MINI_ENERGIAS_H

#include "bn_sprite_ptr.h"
#include "bn_sprite_palette_item.h"
#include "bn_sprite_palette_ptr.h"

//base
#include "bn_sprite_items_mini_energia_base.h"

//paletas
#include "bn_sprite_palette_items_p_mini_energia_agua.h"
#include "bn_sprite_palette_items_p_mini_energia_electrico.h"
#include "bn_sprite_palette_items_p_mini_energia_fuego.h"
#include "bn_sprite_palette_items_p_mini_energia_lucha.h"
#include "bn_sprite_palette_items_p_mini_energia_metal.h"
#include "bn_sprite_palette_items_p_mini_energia_planta.h"
#include "bn_sprite_palette_items_p_mini_energia_psiquico.h"
#include "bn_sprite_palette_items_p_mini_energia_siniestro.h"
#include "bn_sprite_palette_items_p_mini_energia_gratis.h"

bn::sprite_ptr dibuja_mini_energia(int n, int x, int y);

#endif // FUNCIONES_MINI_ENERGIAS_H