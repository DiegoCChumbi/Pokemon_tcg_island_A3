
@{{BLOCK(playmat_bn_gfx)

@=======================================================================
@
@	playmat_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 83 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 2656 + 2048 = 4736
@
@	Time-stamp: 2024-02-05, 14:21:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global playmat_bn_gfxTiles		@ 2656 unsigned chars
	.hidden playmat_bn_gfxTiles
playmat_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xC0000000
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xCCCCCCCC
	.word 0xC0000000,0xC0000000,0xC0000000,0xC0000000,0xC0000000,0xC0000000,0xC0000000,0xC0000000
	.word 0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0xCCCCCCCC,0x99CCCCCC,0x999CCCCC,0x1199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x11111111,0x44444444,0x44444444,0x77777774,0x44444474
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x11111111,0x44444444,0x44444444,0x77777777,0x44444444

	.word 0xCCCCCCCC,0x99999999,0x99999999,0x11111111,0x55555A44,0x55555A44,0x55555A77,0x55555A44
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x11111111,0x55555555,0x55555555,0x55555555,0x55555555
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x11111111,0x4444444A,0x4444444A,0x7777777A,0x4444444A
	.word 0xCCCCCCCC,0xCCC99999,0xCC999999,0xC9911111,0xC9914444,0xC9914444,0xC9914477,0xC9914474
	.word 0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC,0x4199CCCC
	.word 0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474
	.word 0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44

	.word 0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555
	.word 0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A
	.word 0xC9914474,0xC9914474,0xC9914474,0xC9914474,0xC9914474,0xC9914474,0xC9914474,0xC9914474
	.word 0x55555A44,0x5555A444,0x555A4444,0xAAA44444,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444444,0x33444444,0x11334444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x33334444,0x11113333,0x11111111,0x22111111
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x43333333,0x31111111,0x11111111,0x11122222

	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444333,0x44433111,0x43311111
	.word 0x55555555,0xA5555555,0x4A555555,0x44AAAAAA,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x4444444A,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x44444444,0x44444444,0x44444444,0x34444444,0x13444444,0x11344444,0x11344444,0x11134444
	.word 0x11113444,0x11111334,0x22111113,0x22211111,0x22222111,0x22222211,0x22222221,0x22222222
	.word 0x22222111,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x31111111,0x11111222,0x11122222,0x11222222,0x22222222,0x22222222,0x22222222,0x22222222

	.word 0x44444444,0x44444433,0x44444311,0x44443111,0x44431111,0x44311112,0x44311122,0x43111222
	.word 0x11113444,0x21113444,0x22111344,0x22111344,0x22211134,0x22211134,0x22221134,0x22221134
	.word 0x31111222,0x31112222,0x11122222,0x11122222,0x11222222,0x11222222,0x12222222,0x12222222
	.word 0x44444444,0x44444444,0x44444443,0x44444443,0x44444431,0x44444431,0x44444431,0x44444431
	.word 0x4199CCCC,0x4199CCCC,0x4199CCCC,0x3199CCCC,0x3199CCCC,0x3199CCCC,0x3199CCCC,0x6199CCCC
	.word 0x44444474,0x77777774,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x66666666
	.word 0x44444444,0x77777777,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x66666666
	.word 0x22221113,0x22221113,0x22222113,0x22222113,0x11111113,0x11111113,0xDDDDD113,0xDDDDD113

	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x11111111,0x11111111,0xDDDDDDDD,0xDDDDDDDD
	.word 0x12222222,0xD1222222,0xDD122222,0xBDD12222,0xBBD11111,0xBBD11111,0xBDD1DDDD,0xDD1DDDDD
	.word 0x22222111,0x22221DDD,0x2221DDBB,0x221DDBBB,0x111DBBBB,0x111DBBBB,0xDD1DDBBB,0xDDD1DDBB
	.word 0x12222222,0x12222222,0x22222222,0x22222222,0x11111111,0x11111111,0xDDDDDDDD,0xDDDDDDDD
	.word 0x44444311,0x77777311,0x44444311,0x33333311,0x33333311,0x33333311,0x33333311,0x66666311
	.word 0xC9914474,0xC9914477,0xC9914444,0xC9913333,0xC9913333,0xC9913333,0xC9913333,0xC9916666
	.word 0x6199CCCC,0x6199CCCC,0x6199CCCC,0x6199CCCC,0x6199CCCC,0x6199CCCC,0x6199CCCC,0x6199CCCC
	.word 0x88888886,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686

	.word 0x88888888,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xDDDDD113,0xDDDD1113,0xDDDD1113,0xDDDD1136,0xDDDD1136,0xDDD11136,0xDDD11136,0xDD111366
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xD1DDDDDD,0x1DDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xDDDD1DDD,0xDDDDD111,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xDDDDDDDD,0x1DDDDDDD,0x1DDDDDDD,0x1DDDDDDD,0x1DDDDDDD,0x11DDDDDD,0x11DDDDDD,0x111DDDDD
	.word 0x88888311,0x66666311,0x66666311,0x66666631,0x66666631,0x66666631,0x66666631,0x66666663
	.word 0xC9916688,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686

	.word 0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686
	.word 0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xDD111366,0xD1113666,0x11113666,0x11136666,0x11366666,0x11366666,0x13666666,0x36666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDD1,0xDDDDDD11,0xDDDDD111,0xDDD11111
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x11DDDDDD
	.word 0x111DDDDD,0x3111DDDD,0x31111DDD,0x63111DDD,0x663111DD,0x6631111D,0x66631111,0x66663111
	.word 0x66666663,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686

	.word 0xDD111113,0x11111336,0x11113666,0x11336666,0x33666666,0x66666666,0x66666666,0x66666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDD11,0xDD111111,0x11111111,0x11113333,0x33336666,0x66666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x111DDDDD,0x11111111,0x31111111,0x63333333,0x66666666
	.word 0x111DDDDD,0x11111DDD,0x3111111D,0x63311111,0x66633111,0x66666333,0x66666666,0x66666666
	.word 0x66666311,0x66666633,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xAAA66666,0x555A6666,0x5555A666,0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66
	.word 0xAAAAAAAA,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555
	.word 0x66AAAAAA,0x6A555555,0xA5555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555

	.word 0x66666666,0x66666666,0x66666666,0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A
	.word 0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66
	.word 0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A
	.word 0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x88888886,0x66666666,0x66666666
	.word 0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x88888888,0x66666666,0x66666666
	.word 0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A66,0x55555A88,0x55555A66,0x55555A66
	.word 0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x6666666A,0x8888888A,0x6666666A,0x6666666A
	.word 0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916686,0xC9916688,0xC9916666,0xC9916666

	.word 0x1199CCCC,0x999CCCCC,0x99CCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0x11111111,0x99999999,0x99999999,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0xC9911111,0xCC999999,0xCCC99999,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC

	.section .rodata
	.align	2
	.global playmat_bn_gfxMap		@ 2048 unsigned chars
	.hidden playmat_bn_gfxMap
playmat_bn_gfxMap:
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0001,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002
	.hword 0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0005,0x0006,0x0007,0x0008,0x0009,0x0009,0x0009,0x0009
	.hword 0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009
	.hword 0x0009,0x0009,0x0009,0x000A,0x0007,0x000B,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x000C,0x000D,0x000E,0x000F,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0011,0x000E,0x0012,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x000C,0x000D,0x000E,0x000F,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0011,0x000E,0x0012,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x000C,0x000D,0x000E,0x0013,0x0014,0x0014,0x0014,0x0014
	.hword 0x0014,0x0015,0x0016,0x0017,0x0018,0x0014,0x0014,0x0014
	.hword 0x0014,0x0014,0x0019,0x001A,0x000E,0x0012,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x000C,0x000D,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E
	.hword 0x001B,0x001C,0x001D,0x001E,0x001F,0x0020,0x000E,0x000E
	.hword 0x000E,0x000E,0x000E,0x000E,0x000E,0x0012,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x000C,0x000D,0x000E,0x000E,0x000E,0x000E,0x000E,0x000E
	.hword 0x0021,0x001E,0x001E,0x001E,0x001E,0x0022,0x0023,0x000E
	.hword 0x000E,0x000E,0x000E,0x000E,0x000E,0x0012,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0024,0x0025,0x0026,0x0026,0x0026,0x0026,0x0026,0x0026
	.hword 0x0027,0x0028,0x0029,0x002A,0x0028,0x002B,0x002C,0x0026
	.hword 0x0026,0x0026,0x0026,0x0026,0x0026,0x002D,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x002F,0x0030,0x0030,0x0030,0x0030,0x0030,0x0030
	.hword 0x0031,0x0032,0x0033,0x0034,0x0032,0x0035,0x0036,0x0030
	.hword 0x0030,0x0030,0x0030,0x0030,0x0030,0x0037,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x0038,0x0039,0x0039,0x0039,0x0039,0x0039,0x0039
	.hword 0x003A,0x003B,0x0032,0x0032,0x003C,0x003D,0x003E,0x0039
	.hword 0x0039,0x0039,0x0039,0x0039,0x0039,0x003F,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x0038,0x0039,0x0039,0x0039,0x0039,0x0039,0x0039
	.hword 0x0039,0x0040,0x0041,0x0042,0x0043,0x0044,0x0039,0x0039
	.hword 0x0039,0x0039,0x0039,0x0039,0x0039,0x003F,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x0038,0x0039,0x0045,0x0046,0x0046,0x0046,0x0046
	.hword 0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046,0x0046
	.hword 0x0046,0x0046,0x0047,0x0048,0x0039,0x003F,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x0038,0x0039,0x0049,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x004A,0x0039,0x003F,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x002E,0x004B,0x004C,0x004D,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010,0x0010
	.hword 0x0010,0x0010,0x0010,0x004E,0x004C,0x004F,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0050,0x0051,0x0051,0x0051,0x0051,0x0051,0x0051,0x0051
	.hword 0x0051,0x0051,0x0051,0x0051,0x0051,0x0051,0x0051,0x0051
	.hword 0x0051,0x0051,0x0051,0x0051,0x0051,0x0052,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000

	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000
	.hword 0x0003,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004
	.hword 0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0004,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
	.hword 0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000

	.section .rodata
	.align	2
	.global playmat_bn_gfxPal		@ 32 unsigned chars
	.hidden playmat_bn_gfxPal
playmat_bn_gfxPal:
	.hword 0x03EC,0x0000,0x001C,0x2108,0x18D3,0x2529,0x4944,0x20F3
	.hword 0x4966,0x3E0E,0x4652,0x5AF7,0x2ADF,0x7BDE,0x0000,0x0000

@}}BLOCK(playmat_bn_gfx)
