#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -3;
int32_t x7 = -215387;
static volatile uint32_t x10 = 36808547U;
int8_t x11 = -1;
uint8_t x13 = 1U;
int8_t x14 = -1;
static volatile int64_t x18 = -1LL;
volatile int8_t x23 = 0;
int8_t x27 = -1;
volatile int32_t t6 = 20095;
int16_t x29 = INT16_MIN;
uint8_t x31 = 0U;
int32_t t7 = -10762;
int8_t x48 = INT8_MIN;
uint32_t x50 = UINT32_MAX;
uint32_t x51 = UINT32_MAX;
volatile int8_t x55 = INT8_MIN;
volatile int16_t x58 = -1;
int16_t x59 = INT16_MIN;
uint64_t x67 = 2653116962891710179LLU;
uint16_t x76 = UINT16_MAX;
volatile int8_t x84 = INT8_MIN;
int32_t t17 = 3208148;
int8_t x89 = INT8_MIN;
static volatile int32_t x94 = -1;
uint8_t x95 = UINT8_MAX;
uint64_t x96 = UINT64_MAX;
uint16_t x98 = 2U;
int64_t x102 = INT64_MAX;
uint16_t x104 = 10338U;
static int32_t t22 = 1875;
int16_t x115 = -1;
uint16_t x116 = UINT16_MAX;
volatile int16_t x118 = -1;
static uint8_t x119 = 0U;
uint64_t x137 = 131362214660157LLU;
int64_t x138 = -18922107019LL;
int64_t x139 = -325481799LL;
volatile int32_t t30 = 1734334;
int64_t x147 = -206564046761614964LL;
static uint8_t x156 = UINT8_MAX;
volatile int32_t x162 = INT32_MIN;
volatile int64_t x163 = INT64_MIN;
static uint32_t x164 = UINT32_MAX;
static int64_t x165 = -1LL;
int32_t x167 = 1;
int32_t x168 = INT32_MIN;
int16_t x170 = -1;
uint64_t x172 = UINT64_MAX;
int32_t t37 = -14494;
int32_t x178 = INT32_MIN;
int8_t x185 = -11;
static int64_t x186 = 4502297766558LL;
uint16_t x189 = 818U;
int32_t x190 = INT32_MIN;
int64_t x193 = -1LL;
int8_t x194 = INT8_MAX;
volatile uint64_t x195 = 661488563697LLU;
static volatile int32_t t43 = -171;
int32_t t44 = -65591910;
static int64_t x209 = -9167266194101581LL;
int64_t x210 = -1LL;
volatile uint8_t x211 = 0U;
static uint64_t x213 = 253523470583LLU;
volatile int16_t x215 = INT16_MAX;
uint64_t x216 = 9024879463LLU;
static int32_t x222 = -75665416;
int32_t x225 = -39;
volatile int8_t x226 = -1;
volatile int32_t t51 = -25;
int32_t x234 = INT32_MIN;
uint16_t x235 = 217U;
static int32_t x245 = 1;
int64_t x246 = INT64_MAX;
int64_t x247 = 5713662LL;
int8_t x261 = -1;
static uint16_t x264 = 2965U;
int32_t x271 = INT32_MAX;
int32_t x273 = INT32_MAX;
static volatile uint64_t x275 = 1422025600930036LLU;
int32_t t60 = -9776538;
volatile int32_t x277 = 62154;
int16_t x283 = INT16_MIN;
int64_t x291 = INT64_MIN;
uint32_t x292 = UINT32_MAX;
uint8_t x294 = UINT8_MAX;
volatile uint32_t x307 = 6944U;
int64_t x320 = 7274237LL;
uint16_t x321 = UINT16_MAX;
static int8_t x337 = 0;
int32_t x338 = INT32_MAX;
int64_t x341 = INT64_MIN;
int32_t x344 = -73354;
int64_t x347 = -1LL;
volatile int64_t x355 = INT64_MIN;
int64_t x374 = 5535060937LL;
uint64_t x375 = UINT64_MAX;
volatile int64_t x391 = INT64_MIN;
static int32_t x394 = -1;
int16_t x395 = 86;
int64_t x400 = INT64_MIN;
static volatile int32_t t90 = 0;
int32_t x409 = -1;
int8_t x414 = -1;
volatile int32_t t94 = -99;
static int64_t x430 = INT64_MIN;
int32_t x433 = INT32_MIN;
volatile int16_t x434 = INT16_MIN;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MAX;
	volatile int16_t x3 = 1910;
	static int64_t x4 = -10911204630761082LL;

	t0 = ((x1%x2)<=(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = 46U;
	int64_t x6 = INT64_MAX;
	uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 903141;

	t1 = ((x5%x6)<=(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -913742;

	t2 = ((x9%x10)<=(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 3168LLU;
	volatile int32_t t3 = -77157;

	t3 = ((x13%x14)<=(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x19 = 90428825;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -31337;

	t4 = ((x17%x18)<=(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 0;
	int8_t x22 = -6;
	int8_t x24 = -1;
	volatile int32_t t5 = 3266392;

	t5 = ((x21%x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MAX;
	uint32_t x26 = 7U;
	int64_t x28 = -139916636870554LL;

	t6 = ((x25%x26)<=(x27/x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	uint8_t x32 = 5U;

	t7 = ((x29%x30)<=(x31/x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = 1075350329187LL;
	int16_t x47 = -1;
	int32_t t8 = -119;

	t8 = ((x45%x46)<=(x47/x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = 55348090;
	int16_t x52 = INT16_MIN;
	static int32_t t9 = 515124;

	t9 = ((x49%x50)<=(x51/x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 0U;
	uint16_t x54 = 4043U;
	volatile int32_t x56 = INT32_MAX;
	volatile int32_t t10 = 2532618;

	t10 = ((x53%x54)<=(x55/x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = -546285264245222763LL;
	int64_t x60 = INT64_MIN;
	int32_t t11 = -13250004;

	t11 = ((x57%x58)<=(x59/x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	int16_t x66 = 173;
	int16_t x68 = INT16_MAX;
	volatile int32_t t12 = -1337173;

	t12 = ((x65%x66)<=(x67/x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MAX;
	static int32_t x70 = INT32_MIN;
	static volatile int64_t x71 = INT64_MAX;
	int8_t x72 = -29;
	static volatile int32_t t13 = 28972;

	t13 = ((x69%x70)<=(x71/x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x73 = 6U;
	uint32_t x74 = 36094U;
	int64_t x75 = INT64_MAX;
	int32_t t14 = -2593;

	t14 = ((x73%x74)<=(x75/x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MIN;
	int8_t x79 = 2;
	int8_t x80 = INT8_MAX;
	volatile int32_t t15 = 418;

	t15 = ((x77%x78)<=(x79/x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	uint64_t x82 = 32449895249LLU;
	uint32_t x83 = 204U;
	volatile int32_t t16 = -5452767;

	t16 = ((x81%x82)<=(x83/x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = 35;
	int64_t x86 = INT64_MIN;
	volatile uint32_t x87 = 151U;
	static volatile int8_t x88 = -1;

	t17 = ((x85%x86)<=(x87/x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x90 = INT16_MIN;
	volatile uint8_t x91 = UINT8_MAX;
	int64_t x92 = INT64_MIN;
	volatile int32_t t18 = -8161;

	t18 = ((x89%x90)<=(x91/x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x93 = 718886U;
	volatile int32_t t19 = -2368908;

	t19 = ((x93%x94)<=(x95/x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = 23U;
	int16_t x99 = INT16_MIN;
	int8_t x100 = INT8_MAX;
	int32_t t20 = 42;

	t20 = ((x97%x98)<=(x99/x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 5U;
	uint32_t x103 = UINT32_MAX;
	volatile int32_t t21 = 1035027;

	t21 = ((x101%x102)<=(x103/x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x105 = -1823575794029LL;
	static int8_t x106 = INT8_MIN;
	static int8_t x107 = -1;
	int32_t x108 = -30739142;

	t22 = ((x105%x106)<=(x107/x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 0LLU;
	static int32_t x110 = INT32_MIN;
	int8_t x111 = 0;
	int64_t x112 = -147997419235125LL;
	volatile int32_t t23 = -2840172;

	t23 = ((x109%x110)<=(x111/x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x113 = 1846039LLU;
	uint64_t x114 = 7149157557LLU;
	int32_t t24 = 15715;

	t24 = ((x113%x114)<=(x115/x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = INT64_MIN;
	volatile int64_t x120 = INT64_MIN;
	int32_t t25 = -2321580;

	t25 = ((x117%x118)<=(x119/x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = UINT8_MAX;
	int32_t x122 = INT32_MIN;
	int32_t x123 = -30;
	int16_t x124 = INT16_MAX;
	int32_t t26 = 1396;

	t26 = ((x121%x122)<=(x123/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = -72465357;
	int32_t x126 = INT32_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	static int32_t x128 = INT32_MIN;
	static volatile int32_t t27 = 0;

	t27 = ((x125%x126)<=(x127/x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = -7;
	volatile uint16_t x130 = 3U;
	int64_t x131 = -196514LL;
	int16_t x132 = INT16_MIN;
	volatile int32_t t28 = 282;

	t28 = ((x129%x130)<=(x131/x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = INT32_MAX;
	int64_t x134 = INT64_MIN;
	volatile int32_t x135 = -1;
	int8_t x136 = INT8_MIN;
	volatile int32_t t29 = -1060;

	t29 = ((x133%x134)<=(x135/x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x140 = 2394U;

	t30 = ((x137%x138)<=(x139/x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	volatile uint16_t x148 = 102U;
	volatile int32_t t31 = -1;

	t31 = ((x145%x146)<=(x147/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 0U;
	volatile uint8_t x150 = UINT8_MAX;
	uint64_t x151 = 179596678306LLU;
	int8_t x152 = -15;
	volatile int32_t t32 = 102;

	t32 = ((x149%x150)<=(x151/x152));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -12;
	int8_t x154 = -26;
	volatile int8_t x155 = INT8_MIN;
	volatile int32_t t33 = 94385;

	t33 = ((x153%x154)<=(x155/x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x157 = 105853817970798LLU;
	static int64_t x158 = INT64_MIN;
	int32_t x159 = 327;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t34 = -101;

	t34 = ((x157%x158)<=(x159/x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int32_t t35 = -89149656;

	t35 = ((x161%x162)<=(x163/x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = INT64_MIN;
	int32_t t36 = -11893701;

	t36 = ((x165%x166)<=(x167/x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x169 = 2600U;
	int16_t x171 = -45;

	t37 = ((x169%x170)<=(x171/x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x174 = 5035U;
	uint16_t x175 = 1U;
	static int64_t x176 = -1LL;
	volatile int32_t t38 = 16110;

	t38 = ((x173%x174)<=(x175/x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = -1;
	int64_t x179 = INT64_MIN;
	int32_t x180 = 16471235;
	static int32_t t39 = 70;

	t39 = ((x177%x178)<=(x179/x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = INT64_MIN;
	uint32_t x183 = 0U;
	static int32_t x184 = 479590;
	int32_t t40 = -20993;

	t40 = ((x181%x182)<=(x183/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x187 = INT32_MIN;
	static int8_t x188 = 14;
	static int32_t t41 = -684292;

	t41 = ((x185%x186)<=(x187/x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MAX;
	static int32_t t42 = -30;

	t42 = ((x189%x190)<=(x191/x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x196 = 1920754003353351011LLU;

	t43 = ((x193%x194)<=(x195/x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = -1;
	uint64_t x198 = 69488450720539LLU;
	uint8_t x199 = UINT8_MAX;
	static uint32_t x200 = UINT32_MAX;

	t44 = ((x197%x198)<=(x199/x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = -1;
	int8_t x203 = INT8_MAX;
	int64_t x204 = 7275618005LL;
	volatile int32_t t45 = -6015092;

	t45 = ((x201%x202)<=(x203/x204));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x212 = INT32_MAX;
	volatile int32_t t46 = 18353491;

	t46 = ((x209%x210)<=(x211/x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x214 = 2123;
	static int32_t t47 = 114627;

	t47 = ((x213%x214)<=(x215/x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x217 = 19704U;
	int64_t x218 = INT64_MIN;
	uint64_t x219 = UINT64_MAX;
	volatile int64_t x220 = -1326417067LL;
	int32_t t48 = -4;

	t48 = ((x217%x218)<=(x219/x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x221 = 14U;
	uint64_t x223 = 4282984476218916LLU;
	int32_t x224 = INT32_MIN;
	volatile int32_t t49 = 325;

	t49 = ((x221%x222)<=(x223/x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x227 = 3455U;
	static int64_t x228 = INT64_MAX;
	int32_t t50 = -49;

	t50 = ((x225%x226)<=(x227/x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = 20709642491869LL;
	volatile int16_t x230 = -14912;
	uint16_t x231 = 148U;
	int16_t x232 = -120;

	t51 = ((x229%x230)<=(x231/x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	int16_t x236 = -7894;
	int32_t t52 = 1742608;

	t52 = ((x233%x234)<=(x235/x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = 1;
	uint16_t x242 = 3U;
	static int8_t x243 = -1;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t53 = -1097;

	t53 = ((x241%x242)<=(x243/x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x248 = -4807;
	int32_t t54 = -1983;

	t54 = ((x245%x246)<=(x247/x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x249 = -1;
	int16_t x250 = 3659;
	int64_t x251 = -1LL;
	volatile int64_t x252 = INT64_MIN;
	static volatile int32_t t55 = 672257862;

	t55 = ((x249%x250)<=(x251/x252));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 370130LLU;
	static int64_t x254 = -507153983648313647LL;
	volatile int64_t x255 = INT64_MIN;
	uint16_t x256 = 7U;
	volatile int32_t t56 = 145095785;

	t56 = ((x253%x254)<=(x255/x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x262 = -1LL;
	int32_t x263 = 5;
	volatile int32_t t57 = -10347821;

	t57 = ((x261%x262)<=(x263/x264));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = 7457U;
	int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MAX;
	int16_t x268 = -1;
	volatile int32_t t58 = 434;

	t58 = ((x265%x266)<=(x267/x268));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x269 = -2;
	uint8_t x270 = 119U;
	int16_t x272 = INT16_MIN;
	static int32_t t59 = 102496525;

	t59 = ((x269%x270)<=(x271/x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x274 = -9039;
	int32_t x276 = 7;

	t60 = ((x273%x274)<=(x275/x276));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x278 = INT64_MIN;
	static int16_t x279 = -16;
	static uint16_t x280 = UINT16_MAX;
	int32_t t61 = -3299981;

	t61 = ((x277%x278)<=(x279/x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MAX;
	int8_t x282 = INT8_MIN;
	int32_t x284 = 998;
	volatile int32_t t62 = 20;

	t62 = ((x281%x282)<=(x283/x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MIN;
	int32_t x286 = INT32_MAX;
	uint16_t x287 = UINT16_MAX;
	static int64_t x288 = INT64_MAX;
	int32_t t63 = 31331682;

	t63 = ((x285%x286)<=(x287/x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = -1;
	int32_t t64 = -438526;

	t64 = ((x289%x290)<=(x291/x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = INT32_MAX;
	static int8_t x295 = 3;
	uint8_t x296 = UINT8_MAX;
	static volatile int32_t t65 = 377940;

	t65 = ((x293%x294)<=(x295/x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = -2;
	int16_t x300 = INT16_MIN;
	volatile int32_t t66 = -2002699;

	t66 = ((x297%x298)<=(x299/x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x301 = 3500U;
	int32_t x302 = INT32_MAX;
	uint16_t x303 = 1812U;
	static int32_t x304 = 614;
	volatile int32_t t67 = -325647;

	t67 = ((x301%x302)<=(x303/x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x305 = 23055027746403056LL;
	uint8_t x306 = 39U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t68 = -1;

	t68 = ((x305%x306)<=(x307/x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -1;
	volatile int16_t x310 = INT16_MIN;
	int16_t x311 = -4;
	uint32_t x312 = 377U;
	int32_t t69 = -71;

	t69 = ((x309%x310)<=(x311/x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x317 = -1LL;
	uint8_t x318 = 7U;
	static uint64_t x319 = 57LLU;
	volatile int32_t t70 = 46093724;

	t70 = ((x317%x318)<=(x319/x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x322 = 200998LL;
	int8_t x323 = -1;
	int16_t x324 = -2;
	int32_t t71 = 5678;

	t71 = ((x321%x322)<=(x323/x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = 1;
	volatile int32_t t72 = -15089;

	t72 = ((x325%x326)<=(x327/x328));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x329 = UINT64_MAX;
	int16_t x330 = INT16_MIN;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = INT8_MAX;
	volatile int32_t t73 = 4990;

	t73 = ((x329%x330)<=(x331/x332));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = 13;
	static int8_t x334 = INT8_MIN;
	uint16_t x335 = UINT16_MAX;
	int8_t x336 = -1;
	volatile int32_t t74 = 6096410;

	t74 = ((x333%x334)<=(x335/x336));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x339 = 295LLU;
	volatile uint32_t x340 = 291U;
	int32_t t75 = 798838;

	t75 = ((x337%x338)<=(x339/x340));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x342 = -1;
	int16_t x343 = 8396;
	int32_t t76 = -14;

	t76 = ((x341%x342)<=(x343/x344));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	static uint16_t x348 = 62U;
	int32_t t77 = 6474;

	t77 = ((x345%x346)<=(x347/x348));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = -56566;
	static volatile int8_t x350 = 17;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = 1;
	volatile int32_t t78 = -1;

	t78 = ((x349%x350)<=(x351/x352));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x353 = 0LL;
	int32_t x354 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;
	static volatile int32_t t79 = -1;

	t79 = ((x353%x354)<=(x355/x356));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 2;
	volatile int32_t x358 = -102626;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -2;
	int32_t t80 = -1838;

	t80 = ((x357%x358)<=(x359/x360));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = INT32_MIN;
	volatile int16_t x362 = 295;
	volatile uint64_t x363 = 64191098LLU;
	volatile int8_t x364 = -48;
	static volatile int32_t t81 = -18529;

	t81 = ((x361%x362)<=(x363/x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;
	int8_t x367 = INT8_MAX;
	uint64_t x368 = UINT64_MAX;
	int32_t t82 = 66;

	t82 = ((x365%x366)<=(x367/x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = -1628;
	int64_t x370 = -96374444LL;
	int16_t x371 = INT16_MAX;
	int32_t x372 = -63050;
	int32_t t83 = 653;

	t83 = ((x369%x370)<=(x371/x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x373 = 0U;
	uint64_t x376 = 48LLU;
	int32_t t84 = -1;

	t84 = ((x373%x374)<=(x375/x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x377 = INT64_MIN;
	int64_t x378 = INT64_MIN;
	int8_t x379 = -1;
	int32_t x380 = -1;
	volatile int32_t t85 = -7;

	t85 = ((x377%x378)<=(x379/x380));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = 7601621U;
	volatile int8_t x382 = -1;
	static int16_t x383 = 20;
	int64_t x384 = INT64_MIN;
	int32_t t86 = 3;

	t86 = ((x381%x382)<=(x383/x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x389 = INT16_MAX;
	uint32_t x390 = 26063U;
	int64_t x392 = -6912070LL;
	int32_t t87 = 771194160;

	t87 = ((x389%x390)<=(x391/x392));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 2624U;
	int8_t x396 = 2;
	int32_t t88 = 2068263;

	t88 = ((x393%x394)<=(x395/x396));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x397 = 9194LL;
	int16_t x398 = -46;
	int16_t x399 = INT16_MAX;
	int32_t t89 = 775931;

	t89 = ((x397%x398)<=(x399/x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = 167566U;
	static uint16_t x402 = 14U;
	static uint8_t x403 = 2U;
	uint8_t x404 = 3U;

	t90 = ((x401%x402)<=(x403/x404));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -1;
	volatile int64_t x408 = -4126924693LL;
	static volatile int32_t t91 = -3239;

	t91 = ((x405%x406)<=(x407/x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MIN;
	int32_t t92 = -12932;

	t92 = ((x409%x410)<=(x411/x412));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 6U;
	int16_t x415 = -51;
	uint16_t x416 = 8U;
	volatile int32_t t93 = 80960495;

	t93 = ((x413%x414)<=(x415/x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 4476716537LLU;
	static uint32_t x418 = 4432U;
	int32_t x419 = 933147;
	int64_t x420 = INT64_MIN;

	t94 = ((x417%x418)<=(x419/x420));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x421 = -352;
	uint64_t x422 = 3280057745173806963LLU;
	int32_t x423 = INT32_MIN;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t95 = 4;

	t95 = ((x421%x422)<=(x423/x424));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x425 = INT8_MIN;
	uint64_t x426 = 1LLU;
	int64_t x427 = INT64_MIN;
	int16_t x428 = 4922;
	volatile int32_t t96 = 145;

	t96 = ((x425%x426)<=(x427/x428));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x429 = 31U;
	static volatile int64_t x431 = -1LL;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t97 = 938937950;

	t97 = ((x429%x430)<=(x431/x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x435 = 90547602;
	int32_t x436 = INT32_MIN;
	int32_t t98 = 886;

	t98 = ((x433%x434)<=(x435/x436));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x437 = INT16_MAX;
	static uint16_t x438 = 6U;
	uint8_t x439 = 0U;
	static int8_t x440 = INT8_MIN;
	volatile int32_t t99 = 21;

	t99 = ((x437%x438)<=(x439/x440));

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}
