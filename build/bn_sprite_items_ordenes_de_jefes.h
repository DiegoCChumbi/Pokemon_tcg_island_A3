#ifndef BN_SPRITE_ITEMS_ORDENES_DE_JEFES_H
#define BN_SPRITE_ITEMS_ORDENES_DE_JEFES_H

#include "bn_sprite_item.h"

//{{BLOCK(ordenes_de_jefes_bn_gfx)

//======================================================================
//
//	ordenes_de_jefes_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-24, 19:50:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ORDENES_DE_JEFES_BN_GFX_H
#define GRIT_ORDENES_DE_JEFES_BN_GFX_H

#define ordenes_de_jefes_bn_gfxTilesLen 2048
extern const bn::tile ordenes_de_jefes_bn_gfxTiles[64];

#define ordenes_de_jefes_bn_gfxPalLen 32
extern const bn::color ordenes_de_jefes_bn_gfxPal[16];

#endif // GRIT_ORDENES_DE_JEFES_BN_GFX_H

//}}BLOCK(ordenes_de_jefes_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item ordenes_de_jefes(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(ordenes_de_jefes_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(ordenes_de_jefes_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

