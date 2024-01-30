#ifndef BN_SPRITE_ITEMS_DEOXYS_H
#define BN_SPRITE_ITEMS_DEOXYS_H

#include "bn_sprite_item.h"

//{{BLOCK(deoxys_bn_gfx)

//======================================================================
//
//	deoxys_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-24, 19:50:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_DEOXYS_BN_GFX_H
#define GRIT_DEOXYS_BN_GFX_H

#define deoxys_bn_gfxTilesLen 2048
extern const bn::tile deoxys_bn_gfxTiles[64];

#define deoxys_bn_gfxPalLen 32
extern const bn::color deoxys_bn_gfxPal[16];

#endif // GRIT_DEOXYS_BN_GFX_H

//}}BLOCK(deoxys_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item deoxys(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(deoxys_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(deoxys_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

