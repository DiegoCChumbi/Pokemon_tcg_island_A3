#ifndef BN_SPRITE_ITEMS_VMAX_HABILIDAD_H
#define BN_SPRITE_ITEMS_VMAX_HABILIDAD_H

#include "bn_sprite_item.h"

//{{BLOCK(vmax_habilidad_bn_gfx)

//======================================================================
//
//	vmax_habilidad_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-02-05, 14:21:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_VMAX_HABILIDAD_BN_GFX_H
#define GRIT_VMAX_HABILIDAD_BN_GFX_H

#define vmax_habilidad_bn_gfxTilesLen 2048
extern const bn::tile vmax_habilidad_bn_gfxTiles[64];

#define vmax_habilidad_bn_gfxPalLen 32
extern const bn::color vmax_habilidad_bn_gfxPal[16];

#endif // GRIT_VMAX_HABILIDAD_BN_GFX_H

//}}BLOCK(vmax_habilidad_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item vmax_habilidad(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(vmax_habilidad_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(vmax_habilidad_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

