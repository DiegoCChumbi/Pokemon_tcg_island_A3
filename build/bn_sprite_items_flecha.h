#ifndef BN_SPRITE_ITEMS_FLECHA_H
#define BN_SPRITE_ITEMS_FLECHA_H

#include "bn_sprite_item.h"

//{{BLOCK(flecha_bn_gfx)

//======================================================================
//
//	flecha_bn_gfx, 8x8@4, 
//	+ palette 16 entries, not compressed
//	+ 1 tiles not compressed
//	Total size: 32 + 32 = 64
//
//	Time-stamp: 2024-01-24, 19:50:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FLECHA_BN_GFX_H
#define GRIT_FLECHA_BN_GFX_H

#define flecha_bn_gfxTilesLen 32
extern const bn::tile flecha_bn_gfxTiles[1];

#define flecha_bn_gfxPalLen 32
extern const bn::color flecha_bn_gfxPal[16];

#endif // GRIT_FLECHA_BN_GFX_H

//}}BLOCK(flecha_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item flecha(sprite_shape_size(sprite_shape::SQUARE, sprite_size::SMALL), 
            sprite_tiles_item(span<const tile>(flecha_bn_gfxTiles, 1), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(flecha_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

