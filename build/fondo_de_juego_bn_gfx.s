
@{{BLOCK(fondo_de_juego_bn_gfx)

@=======================================================================
@
@	fondo_de_juego_bn_gfx, 256x256@4, 
@	+ palette 16 entries, not compressed
@	+ 84 tiles (t|f|p reduced) not compressed
@	+ regular map (flat), not compressed, 32x32 
@	Total size: 32 + 2688 + 2048 = 4768
@
@	Time-stamp: 2024-02-05, 14:21:46
@	Exported by Cearn's GBA Image Transmogrifier, v0.9.2
@	( http://www.coranac.com/projects/#grit )
@
@=======================================================================

	.section .rodata
	.align	2
	.global fondo_de_juego_bn_gfxTiles		@ 2688 unsigned chars
	.hidden fondo_de_juego_bn_gfxTiles
fondo_de_juego_bn_gfxTiles:
	.word 0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0xC1111111
	.word 0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0x11111111,0xCCCCCCCC
	.word 0xC1111111,0xC1111111,0xC1111111,0xC1111111,0xC1111111,0xC1111111,0xC1111111,0xC1111111
	.word 0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0xCCCCCCCC,0x99CCCCCC,0x999CCCCC,0x0099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x00000000,0x44444444,0x44444444,0x77777774,0x44444474

	.word 0xCCCCCCCC,0x99999999,0x99999999,0x00000000,0x44444444,0x44444444,0x77777777,0x44444444
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x00000000,0x55555A44,0x55555A44,0x55555A77,0x55555A44
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x00000000,0x55555555,0x55555555,0x55555555,0x55555555
	.word 0xCCCCCCCC,0x99999999,0x99999999,0x00000000,0x4444444A,0x4444444A,0x7777777A,0x4444444A
	.word 0xCCCCCCCC,0xCCC99999,0xCC999999,0xC9900000,0xC9904444,0xC9904444,0xC9904477,0xC9904474
	.word 0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC,0x4099CCCC
	.word 0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474,0x44444474
	.word 0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444

	.word 0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44,0x55555A44
	.word 0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555,0x55555555
	.word 0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A,0x4444444A
	.word 0xC9904474,0xC9904474,0xC9904474,0xC9904474,0xC9904474,0xC9904474,0xC9904474,0xC9904474
	.word 0x55555A44,0x5555A444,0x555A4444,0xAAA44444,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444444,0x33444444,0x00334444
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x33334444,0x00003333,0x00000000,0x22000000

	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x43333333,0x30000000,0x00000000,0x00022222
	.word 0x55555555,0x55555555,0x55555555,0xAAAAAAAA,0x44444444,0x44444333,0x44433000,0x43300000
	.word 0x55555555,0xA5555555,0x4A555555,0x44AAAAAA,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x4444444A,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444,0x44444444
	.word 0x44444444,0x44444444,0x44444444,0x34444444,0x03444444,0x00344444,0x00344444,0x00034444
	.word 0x00003444,0x00000334,0x22000003,0x22200000,0x22222000,0x22222200,0x22222220,0x22222222
	.word 0x22222000,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222,0x22222222

	.word 0x30000000,0x00000222,0x00022222,0x00222222,0x22222222,0x22222222,0x22222222,0x22222222
	.word 0x44444444,0x44444433,0x44444300,0x44443000,0x44430000,0x44300002,0x44300022,0x43000222
	.word 0x00003444,0x20003444,0x22000344,0x22000344,0x22200034,0x22200034,0x22220034,0x22220034
	.word 0x30000222,0x30002222,0x00022222,0x00022222,0x00222222,0x00222222,0x02222222,0x02222222
	.word 0x44444444,0x44444444,0x44444443,0x44444443,0x44444430,0x44444430,0x44444430,0x44444430
	.word 0x4099CCCC,0x4099CCCC,0x4099CCCC,0x3099CCCC,0x3099CCCC,0x3099CCCC,0x3099CCCC,0x6099CCCC
	.word 0x44444474,0x77777774,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x66666666
	.word 0x44444444,0x77777777,0x44444444,0x33333333,0x33333333,0x33333333,0x33333333,0x66666666

	.word 0x22220003,0x22220003,0x22222003,0x22222003,0x00000003,0x00000003,0xDDDDD003,0xDDDDD003
	.word 0x22222222,0x22222222,0x22222222,0x22222222,0x00000000,0x00000000,0xDDDDDDDD,0xDDDDDDDD
	.word 0x02222222,0xD0222222,0xDD022222,0xBDD02222,0xBBD00000,0xBBD00000,0xBDD0DDDD,0xDD0DDDDD
	.word 0x22222000,0x22220DDD,0x2220DDBB,0x220DDBBB,0x000DBBBB,0x000DBBBB,0xDD0DDBBB,0xDDD0DDBB
	.word 0x02222222,0x02222222,0x22222222,0x22222222,0x00000000,0x00000000,0xDDDDDDDD,0xDDDDDDDD
	.word 0x44444300,0x77777300,0x44444300,0x33333300,0x33333300,0x33333300,0x33333300,0x66666300
	.word 0xC9904474,0xC9904477,0xC9904444,0xC9903333,0xC9903333,0xC9903333,0xC9903333,0xC9906666
	.word 0x6099CCCC,0x6099CCCC,0x6099CCCC,0x6099CCCC,0x6099CCCC,0x6099CCCC,0x6099CCCC,0x6099CCCC

	.word 0x88888886,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686
	.word 0x88888888,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xDDDDD003,0xDDDD0003,0xDDDD0003,0xDDDD0036,0xDDDD0036,0xDDD00036,0xDDD00036,0xDD000366
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xD0DDDDDD,0x0DDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xDDDD0DDD,0xDDDDD000,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD
	.word 0xDDDDDDDD,0x0DDDDDDD,0x0DDDDDDD,0x0DDDDDDD,0x0DDDDDDD,0x00DDDDDD,0x00DDDDDD,0x000DDDDD
	.word 0x88888300,0x66666300,0x66666300,0x66666630,0x66666630,0x66666630,0x66666630,0x66666663

	.word 0xC9906688,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686
	.word 0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686,0x66666686
	.word 0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
	.word 0xDD000366,0xD0003666,0x00003666,0x00036666,0x00366666,0x00366666,0x03666666,0x36666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDD0,0xDDDDDD00,0xDDDDD000,0xDDD00000
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x00DDDDDD
	.word 0x000DDDDD,0x3000DDDD,0x30000DDD,0x63000DDD,0x663000DD,0x6630000D,0x66630000,0x66663000
	.word 0x66666663,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666

	.word 0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686
	.word 0xDD000003,0x00000336,0x00003666,0x00336666,0x33666666,0x66666666,0x66666666,0x66666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDD00,0xDD000000,0x00000000,0x00003333,0x33336666,0x66666666
	.word 0xDDDDDDDD,0xDDDDDDDD,0xDDDDDDDD,0x000DDDDD,0x00000000,0x30000000,0x63333333,0x66666666
	.word 0x000DDDDD,0x00000DDD,0x3000000D,0x63300000,0x66633000,0x66666333,0x66666666,0x66666666
	.word 0x66666300,0x66666633,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666,0x66666666
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

	.word 0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906686,0xC9906688,0xC9906666,0xC9906666
	.word 0x0099CCCC,0x999CCCCC,0x99CCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0x00000000,0x99999999,0x99999999,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC
	.word 0xC9900000,0xCC999999,0xCCC99999,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC,0xCCCCCCCC

	.section .rodata
	.align	2
	.global fondo_de_juego_bn_gfxMap		@ 2048 unsigned chars
	.hidden fondo_de_juego_bn_gfxMap
fondo_de_juego_bn_gfxMap:
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0002,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003
	.hword 0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0003,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0006,0x0007,0x0008,0x0009,0x000A,0x000A,0x000A,0x000A
	.hword 0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A,0x000A
	.hword 0x000A,0x000A,0x000A,0x000B,0x0008,0x000C,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x000D,0x000E,0x000F,0x0010,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0012,0x000F,0x0013,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x000D,0x000E,0x000F,0x0010,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0012,0x000F,0x0013,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x000D,0x000E,0x000F,0x0014,0x0015,0x0015,0x0015,0x0015
	.hword 0x0015,0x0016,0x0017,0x0018,0x0019,0x0015,0x0015,0x0015
	.hword 0x0015,0x0015,0x001A,0x001B,0x000F,0x0013,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x000D,0x000E,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F
	.hword 0x001C,0x001D,0x001E,0x001F,0x0020,0x0021,0x000F,0x000F
	.hword 0x000F,0x000F,0x000F,0x000F,0x000F,0x0013,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x000D,0x000E,0x000F,0x000F,0x000F,0x000F,0x000F,0x000F
	.hword 0x0022,0x001F,0x001F,0x001F,0x001F,0x0023,0x0024,0x000F
	.hword 0x000F,0x000F,0x000F,0x000F,0x000F,0x0013,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0025,0x0026,0x0027,0x0027,0x0027,0x0027,0x0027,0x0027
	.hword 0x0028,0x0029,0x002A,0x002B,0x0029,0x002C,0x002D,0x0027
	.hword 0x0027,0x0027,0x0027,0x0027,0x0027,0x002E,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x0030,0x0031,0x0031,0x0031,0x0031,0x0031,0x0031
	.hword 0x0032,0x0033,0x0034,0x0035,0x0033,0x0036,0x0037,0x0031
	.hword 0x0031,0x0031,0x0031,0x0031,0x0031,0x0038,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x0039,0x003A,0x003A,0x003A,0x003A,0x003A,0x003A
	.hword 0x003B,0x003C,0x0033,0x0033,0x003D,0x003E,0x003F,0x003A
	.hword 0x003A,0x003A,0x003A,0x003A,0x003A,0x0040,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x0039,0x003A,0x003A,0x003A,0x003A,0x003A,0x003A
	.hword 0x003A,0x0041,0x0042,0x0043,0x0044,0x0045,0x003A,0x003A
	.hword 0x003A,0x003A,0x003A,0x003A,0x003A,0x0040,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x0039,0x003A,0x0046,0x0047,0x0047,0x0047,0x0047
	.hword 0x0047,0x0047,0x0047,0x0047,0x0047,0x0047,0x0047,0x0047
	.hword 0x0047,0x0047,0x0048,0x0049,0x003A,0x0040,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x0039,0x003A,0x004A,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x004B,0x003A,0x0040,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x002F,0x004C,0x004D,0x004E,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011,0x0011
	.hword 0x0011,0x0011,0x0011,0x004F,0x004D,0x0050,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0051,0x0052,0x0052,0x0052,0x0052,0x0052,0x0052,0x0052
	.hword 0x0052,0x0052,0x0052,0x0052,0x0052,0x0052,0x0052,0x0052
	.hword 0x0052,0x0052,0x0052,0x0052,0x0052,0x0053,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001

	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001
	.hword 0x0004,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005
	.hword 0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0005,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001
	.hword 0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001

	.section .rodata
	.align	2
	.global fondo_de_juego_bn_gfxPal		@ 32 unsigned chars
	.hidden fondo_de_juego_bn_gfxPal
fondo_de_juego_bn_gfxPal:
	.hword 0x0000,0x03EC,0x001C,0x2108,0x18D3,0x2529,0x4944,0x20F3
	.hword 0x4966,0x3E0E,0x4652,0x5AF7,0x2ADF,0x7BDE,0x0000,0x0000

@}}BLOCK(fondo_de_juego_bn_gfx)
