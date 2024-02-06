#ifndef BN_SPRITE_ITEMS_FULL_NORMAL_BASE_H
#define BN_SPRITE_ITEMS_FULL_NORMAL_BASE_H

#include "bn_sprite_item.h"

//{{BLOCK(full_normal_base_bn_gfx)

//======================================================================
//
//	full_normal_base_bn_gfx, 64x192@4, 
//	+ palette 16 entries, not compressed
//	+ 192 tiles not compressed
//	Total size: 32 + 6144 = 6176
//
//	Time-stamp: 2024-02-05, 14:21:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_FULL_NORMAL_BASE_BN_GFX_H
#define GRIT_FULL_NORMAL_BASE_BN_GFX_H

#define full_normal_base_bn_gfxTilesLen 6144
extern const bn::tile full_normal_base_bn_gfxTiles[192];

#define full_normal_base_bn_gfxPalLen 32
extern const bn::color full_normal_base_bn_gfxPal[16];

#endif // GRIT_FULL_NORMAL_BASE_BN_GFX_H

//}}BLOCK(full_normal_base_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item full_normal_base(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(full_normal_base_bn_gfxTiles, 192), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(full_normal_base_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

