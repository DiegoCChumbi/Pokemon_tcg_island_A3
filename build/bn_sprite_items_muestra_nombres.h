#ifndef BN_SPRITE_ITEMS_MUESTRA_NOMBRES_H
#define BN_SPRITE_ITEMS_MUESTRA_NOMBRES_H

#include "bn_sprite_item.h"

//{{BLOCK(muestra_nombres_bn_gfx)

//======================================================================
//
//	muestra_nombres_bn_gfx, 64x256@4, 
//	+ palette 16 entries, not compressed
//	+ 256 tiles not compressed
//	Total size: 32 + 8192 = 8224
//
//	Time-stamp: 2024-01-17, 16:47:18
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MUESTRA_NOMBRES_BN_GFX_H
#define GRIT_MUESTRA_NOMBRES_BN_GFX_H

#define muestra_nombres_bn_gfxTilesLen 8192
extern const bn::tile muestra_nombres_bn_gfxTiles[256];

#define muestra_nombres_bn_gfxPalLen 32
extern const bn::color muestra_nombres_bn_gfxPal[16];

#endif // GRIT_MUESTRA_NOMBRES_BN_GFX_H

//}}BLOCK(muestra_nombres_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item muestra_nombres(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(muestra_nombres_bn_gfxTiles, 256), bpp_mode::BPP_4, compression_type::NONE, 4), 
            sprite_palette_item(span<const color>(muestra_nombres_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

