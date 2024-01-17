
@{{BLOCK(flecha_bn_gfx)

@=======================================================================
@
@	flecha_bn_gfx, 8x8@4, 
@	+ palette 16 entries, not compressed
@	+ 1 tiles not compressed
@	Total size: 32 + 32 = 64
@
@	Time-stamp: 2024-01-16, 21:45:16
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global flecha_bn_gfxTiles		@ 32 unsigned chars
	.hidden flecha_bn_gfxTiles
flecha_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x44444444,0x43333334,0x01422410,0x00144100,0x00011000,0x00000000

	.section .rodata
	.align	2
	.global flecha_bn_gfxPal		@ 32 unsigned chars
	.hidden flecha_bn_gfxPal
flecha_bn_gfxPal:
	.hword 0x7C1B,0x2AC8,0x4E73,0x56B5,0x57A1,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(flecha_bn_gfx)
