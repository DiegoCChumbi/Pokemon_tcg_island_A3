#ifndef BN_AFFINE_BG_ITEMS_PANTALLA_GRIS_H
#define BN_AFFINE_BG_ITEMS_PANTALLA_GRIS_H

#include "bn_affine_bg_item.h"

//{{BLOCK(pantalla_gris_bn_gfx)

//======================================================================
//
//	pantalla_gris_bn_gfx, 256x256@8, 
//	+ palette 16 entries, not compressed
//	+ 14 tiles (t reduced) not compressed
//	+ affine map, not compressed, 32x32 
//	Total size: 32 + 896 + 1024 = 1952
//
//	Time-stamp: 2024-02-05, 14:21:46
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_PANTALLA_GRIS_BN_GFX_H
#define GRIT_PANTALLA_GRIS_BN_GFX_H

#define pantalla_gris_bn_gfxTilesLen 896
extern const bn::tile pantalla_gris_bn_gfxTiles[28];

#define pantalla_gris_bn_gfxMapLen 1024
extern const bn::affine_bg_map_cell pantalla_gris_bn_gfxMap[1024];

#define pantalla_gris_bn_gfxPalLen 32
extern const bn::color pantalla_gris_bn_gfxPal[16];

#endif // GRIT_PANTALLA_GRIS_BN_GFX_H

//}}BLOCK(pantalla_gris_bn_gfx)

namespace bn::affine_bg_items
{
    constexpr inline affine_bg_item pantalla_gris(
            affine_bg_tiles_item(span<const tile>(pantalla_gris_bn_gfxTiles, 28), compression_type::NONE), 
            bg_palette_item(span<const color>(pantalla_gris_bn_gfxPal, 16), bpp_mode::BPP_8, compression_type::NONE),
            affine_bg_map_item(pantalla_gris_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

