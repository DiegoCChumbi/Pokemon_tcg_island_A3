#ifndef BN_SPRITE_ITEMS_ENERGIA_FULL_PLANTA_H
#define BN_SPRITE_ITEMS_ENERGIA_FULL_PLANTA_H

#include "bn_sprite_item.h"

//{{BLOCK(energia_full_planta_bn_gfx)

//======================================================================
//
//	energia_full_planta_bn_gfx, 64x192@4, 
//	+ palette 16 entries, not compressed
//	+ 192 tiles not compressed
//	Total size: 32 + 6144 = 6176
//
//	Time-stamp: 2024-02-05, 23:27:42
//	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

#ifndef GRIT_ENERGIA_FULL_PLANTA_BN_GFX_H
#define GRIT_ENERGIA_FULL_PLANTA_BN_GFX_H

#define energia_full_planta_bn_gfxTilesLen 6144
extern const bn::tile energia_full_planta_bn_gfxTiles[192];

#define energia_full_planta_bn_gfxPalLen 32
extern const bn::color energia_full_planta_bn_gfxPal[16];

#endif // GRIT_ENERGIA_FULL_PLANTA_BN_GFX_H

//}}BLOCK(energia_full_planta_bn_gfx)

namespace bn::sprite_items
{
    constexpr inline sprite_item energia_full_planta(sprite_shape_size(sprite_shape::SQUARE, sprite_size::HUGE), 
            sprite_tiles_item(span<const tile>(energia_full_planta_bn_gfxTiles, 192), bpp_mode::BPP_4, compression_type::NONE, 3), 
            sprite_palette_item(span<const color>(energia_full_planta_bn_gfxPal, 16), bpp_mode::BPP_4, compression_type::NONE));
}

#endif

