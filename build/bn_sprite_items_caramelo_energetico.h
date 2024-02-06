#ifndef BN_SPRITE_ITEMS_CARAMELO_ENERGETICO_H
#define BN_SPRITE_ITEMS_CARAMELO_ENERGETICO_H

#include "bn_sprite_item.h"

//{{BLOCK(caramelo_energetico_bn_gfx)

//======================================================================
//
//	caramelo_energetico_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-02-05, 14:21:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_CARAMELO_ENERGETICO_BN_GFX_H
#define GRIT_CARAMELO_ENERGETICO_BN_GFX_H

#define caramelo_energetico_bn_gfxTilesLen 2048
extern const bn::tile caramelo_energetico_bn_gfxTiles[64];

#define caramelo_energetico_bn_gfxPalLen 32
extern const bn::color caramelo_energetico_bn_gfxPal[16];

#endif // GRIT_CARAMELO_ENERGETICO_BN_GFX_H

//}}BLOCK(caramelo_energetico_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item caramelo_energetico(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(caramelo_energetico_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(caramelo_energetico_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

