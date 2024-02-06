#ifndef BN_SPRITE_ITEMS_BOTON_USAR_H
#define BN_SPRITE_ITEMS_BOTON_USAR_H

#include "bn_sprite_item.h"

//{{BLOCK(boton_usar_bn_gfx)

//======================================================================
//
//	boton_usar_bn_gfx, 16x16@4, 
//	+ palette 16 entries, not compressed
//	+ 4 tiles not compressed
//	Total size: 32 + 128 = 160
//
//	Time-stamp: 2024-02-05, 14:21:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_BOTON_USAR_BN_GFX_H
#define GRIT_BOTON_USAR_BN_GFX_H

#define boton_usar_bn_gfxTilesLen 128
extern const bn::tile boton_usar_bn_gfxTiles[4];

#define boton_usar_bn_gfxPalLen 32
extern const bn::color boton_usar_bn_gfxPal[16];

#endif // GRIT_BOTON_USAR_BN_GFX_H

//}}BLOCK(boton_usar_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item boton_usar(sprite_shape_size(sprite_shape::SQUARE, sprite_size::NORMAL), 
            sprite_tiles_item(span<const tile>(boton_usar_bn_gfxTiles, 4), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(boton_usar_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

