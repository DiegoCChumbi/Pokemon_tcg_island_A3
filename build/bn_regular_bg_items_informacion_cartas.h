#ifndef BN_REGULAR_BG_ITEMS_INFORMACION_CARTAS_H
#define BN_REGULAR_BG_ITEMS_INFORMACION_CARTAS_H

#include "bn_regular_bg_item.h"

//{{BLOCK(informacion_cartas_bn_gfx)

//======================================================================
//
//	informacion_cartas_bn_gfx, 256x256@4, 
//	+ palette 16 entries, not compressed
//	+ 8 tiles (t|f|p reduced) not compressed
//	+ regular map (flat), not compressed, 32x32 
//	Total size: 32 + 256 + 2048 = 2336
//
//	Time-stamp: 2024-01-24, 19:50:45
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_INFORMACION_CARTAS_BN_GFX_H
#define GRIT_INFORMACION_CARTAS_BN_GFX_H

#define informacion_cartas_bn_gfxTilesLen 256
extern const bn::tile informacion_cartas_bn_gfxTiles[8];

#define informacion_cartas_bn_gfxMapLen 2048
extern const bn::regular_bg_map_cell informacion_cartas_bn_gfxMap[1024];

#define informacion_cartas_bn_gfxPalLen 32
extern const bn::color informacion_cartas_bn_gfxPal[16];

#endif // GRIT_INFORMACION_CARTAS_BN_GFX_H

//}}BLOCK(informacion_cartas_bn_gfx)

namespace bn::regular_bg_items
{
    constexpr inline regular_bg_item informacion_cartas(
            regular_bg_tiles_item(span<const tile>(informacion_cartas_bn_gfxTiles, 8), bpp_mode::BPP_4, compression_type::NONE), 
            bg_palette_item(span<const color>(informacion_cartas_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE),
            regular_bg_map_item(informacion_cartas_bn_gfxMap[0], size(32, 32), compression_type::NONE, 1, false));
}

#endif

