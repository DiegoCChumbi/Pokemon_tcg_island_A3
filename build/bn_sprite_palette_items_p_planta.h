#ifndef BN_SPRITE_PALETTE_ITEMS_P_PLANTA_H
#define BN_SPRITE_PALETTE_ITEMS_P_PLANTA_H

#include "bn_sprite_palette_item.h"

//{{BLOCK(p_planta_bn_gfx)

//======================================================================
//
//	p_planta_bn_gfx, 8x8@4, 
//	+ palette 16 entries, not compressed
//	Total size: 32 = 32
//
//	Time-stamp: 2023-12-15, 18:32:28
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_P_PLANTA_BN_GFX_H
#define GRIT_P_PLANTA_BN_GFX_H

#define p_planta_bn_gfxPalLen 32
extern const bn::color p_planta_bn_gfxPal[16];

#endif // GRIT_P_PLANTA_BN_GFX_H

//}}BLOCK(p_planta_bn_gfx)

namespace bn::sprite_palette_items
{
    constexpr inline sprite_palette_item p_planta(span<const color>(p_planta_bn_gfxPal, 16), 
            bpp_mode::BPP_4, compression_type::NONE);
}

#endif

