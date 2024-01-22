#ifndef BN_SPRITE_ITEMS_GENESECT_V_H
#define BN_SPRITE_ITEMS_GENESECT_V_H

#include "bn_sprite_item.h"

//{{BLOCK(genesect_v_bn_gfx)

//======================================================================
//
//	genesect_v_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-21, 19:49:55
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_GENESECT_V_BN_GFX_H
#define GRIT_GENESECT_V_BN_GFX_H

#define genesect_v_bn_gfxTilesLen 2048
extern const bn::tile genesect_v_bn_gfxTiles[64];

#define genesect_v_bn_gfxPalLen 32
extern const bn::color genesect_v_bn_gfxPal[16];

#endif // GRIT_GENESECT_V_BN_GFX_H

//}}BLOCK(genesect_v_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item genesect_v(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(genesect_v_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(genesect_v_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif
