#ifndef BN_SPRITE_ITEMS_MINI_ENERGIA_BASE_H
#define BN_SPRITE_ITEMS_MINI_ENERGIA_BASE_H

#include "bn_sprite_item.h"

//{{BLOCK(mini_energia_base_bn_gfx)

//======================================================================
//
//	mini_energia_base_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-11, 18:47:52
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_MINI_ENERGIA_BASE_BN_GFX_H
#define GRIT_MINI_ENERGIA_BASE_BN_GFX_H

#define mini_energia_base_bn_gfxTilesLen 2048
extern const bn::tile mini_energia_base_bn_gfxTiles[64];

#define mini_energia_base_bn_gfxPalLen 32
extern const bn::color mini_energia_base_bn_gfxPal[16];

#endif // GRIT_MINI_ENERGIA_BASE_BN_GFX_H

//}}BLOCK(mini_energia_base_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item mini_energia_base(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(mini_energia_base_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(mini_energia_base_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

