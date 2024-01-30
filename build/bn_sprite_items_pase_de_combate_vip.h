#ifndef BN_SPRITE_ITEMS_PASE_DE_COMBATE_VIP_H
#define BN_SPRITE_ITEMS_PASE_DE_COMBATE_VIP_H

#include "bn_sprite_item.h"

//{{BLOCK(pase_de_combate_vip_bn_gfx)

//======================================================================
//
//	pase_de_combate_vip_bn_gfx, 64x64@4, 
//	+ palette 16 entries, not compressed
//	+ 64 tiles not compressed
//	Total size: 32 + 2048 = 2080
//
//	Time-stamp: 2024-01-24, 19:50:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PASE_DE_COMBATE_VIP_BN_GFX_H
#define GRIT_PASE_DE_COMBATE_VIP_BN_GFX_H

#define pase_de_combate_vip_bn_gfxTilesLen 2048
extern const bn::tile pase_de_combate_vip_bn_gfxTiles[64];

#define pase_de_combate_vip_bn_gfxPalLen 32
extern const bn::color pase_de_combate_vip_bn_gfxPal[16];

#endif // GRIT_PASE_DE_COMBATE_VIP_BN_GFX_H

//}}BLOCK(pase_de_combate_vip_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item pase_de_combate_vip(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(pase_de_combate_vip_bn_gfxTiles, 64), bpp_mode::BPP_4, compression_type::NONE, 1), 
            sprite_palette_item(span<const color>(pase_de_combate_vip_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

