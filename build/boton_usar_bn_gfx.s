
@{{BLOCK(boton_usar_bn_gfx)

@=======================================================================
@
@	boton_usar_bn_gfx, 16x16@4, 
@	+ palette 16 entries, not compressed
@	+ 4 tiles not compressed
@	Total size: 32 + 128 = 160
@
@	Time-stamp: 2024-02-05, 14:21:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global boton_usar_bn_gfxTiles		@ 128 unsigned chars
	.hidden boton_usar_bn_gfxTiles
boton_usar_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x33333333,0x11124413,0x44124413
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x33333333,0x34111414,0x32001241
	.word 0x21124413,0x24424413,0x22141143,0x33333333,0x00000333,0x00000033,0x00000003,0x00000000
	.word 0x34111211,0x34241241,0x32441241,0x33333333,0x00000000,0x00000000,0x00000000,0x00000000

	.section .rodata
	.align	2
	.global boton_usar_bn_gfxPal		@ 32 unsigned chars
	.hidden boton_usar_bn_gfxPal
boton_usar_bn_gfxPal:
	.hword 0x0BE0,0x44A2,0x2D6B,0x39CF,0x739C,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

@}}BLOCK(boton_usar_bn_gfx)
