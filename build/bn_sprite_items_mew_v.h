#ifndef BN_SPRITE_ITEMS_MEW_V_H
#define BN_SPRITE_ITEMS_MEW_V_H

#include "bn_sprite_item.h"

//{{BLOCK(mew_v_bn_gfx)

//======================================================================
//
//	mew_v_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-15, 18:17:23
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MEW_V_BN_GFX_H
#define GRIT_MEW_V_BN_GFX_H

#define mew_v_bn_gfxTilesLen 2048
extern const bn::tile mew_v_bn_gfxTiles[64];

#define mew_v_bn_gfxPalLen 32
extern const bn::color mew_v_bn_gfxPal[16];

#endif // GRIT_MEW_V_BN_GFX_H

//}}BLOCK(mew_v_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item mew_v(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(mew_v_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(mew_v_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif
