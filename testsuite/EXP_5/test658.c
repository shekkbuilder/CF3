#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MAX;
static volatile uint64_t x2 = 7019113LLU;
int16_t x8 = 111;
volatile int32_t t2 = -668127;
static int64_t x21 = INT64_MAX;
uint16_t x23 = 12U;
volatile int64_t x24 = 22111587936958499LL;
int32_t t5 = 1973;
static volatile uint8_t x27 = UINT8_MAX;
int16_t x29 = INT16_MIN;
static int32_t x39 = INT32_MIN;
static int32_t t8 = -982;
static int64_t x41 = INT64_MIN;
int8_t x44 = 30;
int32_t t9 = -9;
uint32_t x46 = UINT32_MAX;
volatile int32_t x47 = 3204534;
int32_t t10 = -816;
static int64_t x69 = -1LL;
static uint16_t x73 = UINT16_MAX;
static int8_t x76 = INT8_MIN;
int16_t x78 = -1;
int8_t x81 = INT8_MAX;
static int16_t x83 = INT16_MAX;
int32_t t21 = -1775;
uint16_t x97 = 1U;
int32_t x100 = -1;
int8_t x102 = 12;
int32_t x107 = 11345432;
int16_t x109 = INT16_MIN;
int64_t x115 = 616418737930775LL;
int32_t x116 = -115;
volatile int32_t t27 = -1490252;
int8_t x122 = -5;
static int32_t x125 = INT32_MAX;
static int32_t t30 = 1390;
int32_t t31 = 2;
int16_t x133 = INT16_MIN;
static volatile uint64_t x135 = 28444364102LLU;
static int32_t t32 = -594798;
int32_t x138 = INT32_MAX;
int32_t x140 = INT32_MIN;
int32_t x142 = -406610;
volatile int32_t t34 = 0;
int16_t x160 = -2;
int32_t t37 = -13001;
static uint8_t x164 = 1U;
uint8_t x171 = UINT8_MAX;
int64_t x173 = -503997188607LL;
uint8_t x178 = UINT8_MAX;
uint64_t x185 = 22LLU;
static int32_t t44 = -90;
static int32_t t45 = 2180935;
static int16_t x218 = -1;
int16_t x220 = -9349;
static uint8_t x223 = 95U;
volatile int32_t t53 = -16;
volatile int16_t x225 = -1;
int8_t x237 = -1;
volatile int32_t t57 = 1031;
int32_t x241 = INT32_MIN;
int8_t x242 = -1;
volatile int32_t x244 = INT32_MIN;
int64_t x247 = INT64_MIN;
static volatile uint8_t x254 = UINT8_MAX;
int32_t t62 = 0;
static int32_t x261 = INT32_MAX;
static int8_t x264 = INT8_MAX;
int8_t x266 = -1;
static int16_t x271 = -1;
int8_t x272 = -18;
int32_t t65 = 38826718;
uint8_t x273 = UINT8_MAX;
volatile int32_t t66 = 189;
int64_t x277 = INT64_MAX;
uint8_t x279 = 13U;
volatile int32_t x282 = 3417700;
static int64_t x286 = INT64_MIN;
volatile int32_t x288 = INT32_MIN;
int32_t t69 = -56665235;
uint16_t x293 = UINT16_MAX;
int8_t x295 = 15;
int64_t x299 = INT64_MAX;
volatile int64_t x302 = INT64_MIN;
int16_t x303 = 1943;
int8_t x304 = -40;
int8_t x306 = INT8_MIN;
static uint8_t x318 = UINT8_MAX;
uint64_t x330 = 189096272LLU;
int16_t x331 = INT16_MIN;
int64_t x333 = 923150550913525LL;
volatile int32_t x336 = INT32_MAX;
static int32_t x339 = INT32_MAX;
volatile int64_t x342 = INT64_MAX;
int16_t x348 = -1;
volatile uint64_t x349 = 13400LLU;
int32_t x354 = INT32_MIN;
static int32_t x364 = -1;
int16_t x365 = INT16_MIN;
uint64_t x369 = 365030LLU;
static uint16_t x377 = 1U;
int8_t x379 = -1;
int8_t x393 = INT8_MIN;
volatile uint32_t x394 = 0U;
int64_t x395 = 30LL;
static uint16_t x396 = 5U;
int16_t x399 = -1;
volatile uint16_t x405 = 1586U;
int32_t t97 = -62;
int16_t x409 = INT16_MIN;
static uint8_t x410 = 0U;
uint32_t x411 = UINT32_MAX;
int32_t t98 = -2;


void f0(void) {
	int16_t x3 = -65;
	static int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 7;

	t0 = (x1==((x2/x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int64_t x6 = -1LL;
	static int32_t x7 = 73;
	volatile int32_t t1 = -5;

	t1 = (x5==((x6/x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 12U;
	volatile int32_t x10 = INT32_MIN;
	static uint64_t x11 = UINT64_MAX;
	volatile int16_t x12 = INT16_MIN;

	t2 = (x9==((x10/x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int8_t x14 = -34;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t3 = -7;

	t3 = (x13==((x14/x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2234670U;
	uint64_t x18 = 6945781479LLU;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -1316;

	t4 = (x17==((x18/x19)|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;

	t5 = (x21==((x22/x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint16_t x26 = 6897U;
	static uint32_t x28 = 2U;
	volatile int32_t t6 = 77151361;

	t6 = (x25==((x26/x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 11312U;
	int32_t x31 = INT32_MAX;
	static volatile int32_t x32 = 778;
	int32_t t7 = 3753;

	t7 = (x29==((x30/x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	static int16_t x38 = INT16_MIN;
	int16_t x40 = 3;

	t8 = (x37==((x38/x39)|x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x42 = UINT16_MAX;
	int8_t x43 = INT8_MIN;

	t9 = (x41==((x42/x43)|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 2U;
	int64_t x48 = -14270237090LL;

	t10 = (x45==((x46/x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 1832661322504LL;
	int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MAX;
	int16_t x52 = INT16_MIN;
	int32_t t11 = -61515445;

	t11 = (x49==((x50/x51)|x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	volatile uint16_t x54 = 15218U;
	uint16_t x55 = 1321U;
	int16_t x56 = 0;
	int32_t t12 = -47;

	t12 = (x53==((x54/x55)|x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MAX;
	uint16_t x59 = 6947U;
	static int16_t x60 = -214;
	static volatile int32_t t13 = -12682390;

	t13 = (x57==((x58/x59)|x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -1;
	static int8_t x62 = INT8_MIN;
	int8_t x63 = INT8_MAX;
	int64_t x64 = -30LL;
	static int32_t t14 = -13;

	t14 = (x61==((x62/x63)|x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 28;
	volatile int64_t x66 = INT64_MIN;
	volatile uint32_t x67 = 27668U;
	volatile int32_t x68 = INT32_MAX;
	static volatile int32_t t15 = -15729484;

	t15 = (x65==((x66/x67)|x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MIN;
	int8_t x71 = 61;
	uint8_t x72 = 3U;
	volatile int32_t t16 = -4;

	t16 = (x69==((x70/x71)|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	int64_t x75 = -96285747377LL;
	int32_t t17 = -43197;

	t17 = (x73==((x74/x75)|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint32_t x79 = UINT32_MAX;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t18 = -21123761;

	t18 = (x77==((x78/x79)|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x82 = 125U;
	static int16_t x84 = -1;
	volatile int32_t t19 = 18132;

	t19 = (x81==((x82/x83)|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	static int16_t x86 = INT16_MIN;
	volatile int16_t x87 = INT16_MAX;
	uint8_t x88 = 4U;
	static int32_t t20 = 3163146;

	t20 = (x85==((x86/x87)|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 32U;
	volatile int32_t x90 = -26757440;
	static int16_t x91 = 65;
	uint16_t x92 = 1U;

	t21 = (x89==((x90/x91)|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	uint32_t x94 = 810U;
	int64_t x95 = -1382884299582LL;
	static uint64_t x96 = UINT64_MAX;
	volatile int32_t t22 = 3;

	t22 = (x93==((x94/x95)|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MIN;
	volatile int32_t t23 = -9;

	t23 = (x97==((x98/x99)|x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MAX;
	int16_t x104 = INT16_MAX;
	volatile int32_t t24 = 2542;

	t24 = (x101==((x102/x103)|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -2;
	volatile int64_t x106 = -1482694788331428426LL;
	static uint16_t x108 = 3518U;
	int32_t t25 = -275;

	t25 = (x105==((x106/x107)|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x110 = 3316248U;
	uint32_t x111 = 184805062U;
	static uint64_t x112 = UINT64_MAX;
	int32_t t26 = 23336618;

	t26 = (x109==((x110/x111)|x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 26LLU;
	int8_t x114 = INT8_MIN;

	t27 = (x113==((x114/x115)|x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 89;
	uint64_t x118 = UINT64_MAX;
	uint32_t x119 = 7719697U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t28 = 503031;

	t28 = (x117==((x118/x119)|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -776960LL;
	int8_t x123 = INT8_MAX;
	uint16_t x124 = 13555U;
	int32_t t29 = -466554354;

	t29 = (x121==((x122/x123)|x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 41799788415072101LLU;
	int8_t x127 = INT8_MAX;
	uint8_t x128 = UINT8_MAX;

	t30 = (x125==((x126/x127)|x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	static int32_t x130 = -78265866;
	int16_t x131 = 28;
	uint64_t x132 = UINT64_MAX;

	t31 = (x129==((x130/x131)|x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x134 = 1026U;
	volatile uint16_t x136 = 1U;

	t32 = (x133==((x134/x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 785U;
	int64_t x139 = -1LL;
	volatile int32_t t33 = 2;

	t33 = (x137==((x138/x139)|x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 5;
	int32_t x143 = INT32_MAX;
	int32_t x144 = INT32_MIN;

	t34 = (x141==((x142/x143)|x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 0U;
	int16_t x146 = INT16_MAX;
	int16_t x147 = INT16_MIN;
	volatile uint64_t x148 = 1407661811LLU;
	int32_t t35 = -1301;

	t35 = (x145==((x146/x147)|x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 1U;
	int64_t x150 = 94041LL;
	int16_t x151 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t36 = 544094569;

	t36 = (x149==((x150/x151)|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = -1;
	volatile int64_t x159 = 2485615844563577573LL;

	t37 = (x157==((x158/x159)|x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = 0;
	int8_t x162 = 6;
	int16_t x163 = INT16_MAX;
	int32_t t38 = -1635;

	t38 = (x161==((x162/x163)|x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MAX;
	int64_t x166 = -1LL;
	volatile uint8_t x167 = 15U;
	volatile int64_t x168 = INT64_MAX;
	int32_t t39 = -40;

	t39 = (x165==((x166/x167)|x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 434U;
	static int8_t x172 = 1;
	int32_t t40 = -1;

	t40 = (x169==((x170/x171)|x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = INT8_MIN;
	volatile uint8_t x175 = 105U;
	int64_t x176 = -859482129LL;
	volatile int32_t t41 = 123185;

	t41 = (x173==((x174/x175)|x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = 35;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MIN;
	static volatile int32_t t42 = -184;

	t42 = (x177==((x178/x179)|x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MIN;
	int32_t x183 = 541;
	static volatile uint64_t x184 = 191928LLU;
	int32_t t43 = 7589;

	t43 = (x181==((x182/x183)|x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x186 = 56932U;
	int8_t x187 = INT8_MAX;
	int8_t x188 = 14;

	t44 = (x185==((x186/x187)|x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	int16_t x190 = -1;
	int32_t x191 = -2003247;
	volatile uint8_t x192 = 26U;

	t45 = (x189==((x190/x191)|x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MAX;
	uint16_t x194 = 12U;
	int16_t x195 = -1;
	uint8_t x196 = 7U;
	int32_t t46 = -1;

	t46 = (x193==((x194/x195)|x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x197 = UINT16_MAX;
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 246363506457342LLU;
	static int32_t x200 = INT32_MAX;
	volatile int32_t t47 = 14230;

	t47 = (x197==((x198/x199)|x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	volatile int8_t x203 = 1;
	static volatile int8_t x204 = INT8_MIN;
	int32_t t48 = 1;

	t48 = (x201==((x202/x203)|x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int16_t x206 = 15417;
	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	static int32_t t49 = -55332864;

	t49 = (x205==((x206/x207)|x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x209 = 0U;
	uint16_t x210 = 2U;
	uint8_t x211 = 67U;
	int8_t x212 = 6;
	int32_t t50 = 125794;

	t50 = (x209==((x210/x211)|x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x213 = 418U;
	uint32_t x214 = 4011U;
	int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MIN;
	int32_t t51 = 13818731;

	t51 = (x213==((x214/x215)|x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = -15;
	int64_t x219 = -195086187961425LL;
	static volatile int32_t t52 = 6;

	t52 = (x217==((x218/x219)|x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 48U;
	static volatile uint16_t x222 = 3U;
	static uint8_t x224 = 1U;

	t53 = (x221==((x222/x223)|x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x226 = INT8_MIN;
	uint8_t x227 = 17U;
	int64_t x228 = INT64_MIN;
	volatile int32_t t54 = 42324;

	t54 = (x225==((x226/x227)|x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = -1;
	int8_t x230 = INT8_MIN;
	volatile uint64_t x231 = UINT64_MAX;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t55 = 14;

	t55 = (x229==((x230/x231)|x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	volatile int8_t x234 = INT8_MIN;
	static int8_t x235 = -1;
	volatile int8_t x236 = INT8_MAX;
	volatile int32_t t56 = 3506980;

	t56 = (x233==((x234/x235)|x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x238 = 3059U;
	int16_t x239 = -1;
	static int32_t x240 = INT32_MIN;

	t57 = (x237==((x238/x239)|x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x243 = INT64_MAX;
	int32_t t58 = 395893;

	t58 = (x241==((x242/x243)|x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MIN;
	static int64_t x246 = INT64_MAX;
	static int32_t x248 = INT32_MIN;
	volatile int32_t t59 = 127;

	t59 = (x245==((x246/x247)|x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x249 = INT16_MAX;
	static uint16_t x250 = 71U;
	int32_t x251 = INT32_MIN;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t60 = -638;

	t60 = (x249==((x250/x251)|x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 13;
	uint32_t x255 = 14U;
	uint8_t x256 = UINT8_MAX;
	int32_t t61 = 13;

	t61 = (x253==((x254/x255)|x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x257 = 12U;
	int32_t x258 = INT32_MAX;
	static uint64_t x259 = 1848100719613654LLU;
	int64_t x260 = 116240487633LL;

	t62 = (x257==((x258/x259)|x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = INT8_MIN;
	static volatile int32_t x263 = 13;
	volatile int32_t t63 = -786200;

	t63 = (x261==((x262/x263)|x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = -564371LL;
	int8_t x267 = INT8_MAX;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t64 = 307902;

	t64 = (x265==((x266/x267)|x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	volatile int32_t x270 = 0;

	t65 = (x269==((x270/x271)|x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = 77519833444LLU;
	int32_t x275 = 3;
	uint8_t x276 = 15U;

	t66 = (x273==((x274/x275)|x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = 3456;
	int16_t x280 = -1;
	volatile int32_t t67 = -6;

	t67 = (x277==((x278/x279)|x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = INT8_MIN;
	uint32_t x283 = 5U;
	int64_t x284 = INT64_MIN;
	int32_t t68 = 655275;

	t68 = (x281==((x282/x283)|x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x285 = 19LLU;
	volatile int16_t x287 = INT16_MAX;

	t69 = (x285==((x286/x287)|x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = 695;
	int16_t x290 = -1;
	uint16_t x291 = 1U;
	int32_t x292 = INT32_MIN;
	int32_t t70 = 1;

	t70 = (x289==((x290/x291)|x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x294 = -1;
	static volatile int32_t x296 = 529119837;
	static volatile int32_t t71 = -503316;

	t71 = (x293==((x294/x295)|x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = 6LL;
	static volatile int32_t x298 = INT32_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t72 = -33;

	t72 = (x297==((x298/x299)|x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = INT64_MIN;
	static int32_t t73 = -25;

	t73 = (x301==((x302/x303)|x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -13650404;
	volatile uint16_t x307 = 120U;
	int16_t x308 = INT16_MAX;
	static volatile int32_t t74 = -186292;

	t74 = (x305==((x306/x307)|x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x309 = UINT64_MAX;
	int8_t x310 = -1;
	static int8_t x311 = INT8_MAX;
	static volatile int64_t x312 = -1LL;
	int32_t t75 = 1;

	t75 = (x309==((x310/x311)|x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = UINT16_MAX;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	uint64_t x316 = 32592411612336514LLU;
	volatile int32_t t76 = -16486;

	t76 = (x313==((x314/x315)|x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MAX;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t77 = 0;

	t77 = (x317==((x318/x319)|x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x321 = INT64_MAX;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 11U;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t78 = 0;

	t78 = (x321==((x322/x323)|x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	static int32_t x326 = -3096618;
	int32_t x327 = INT32_MIN;
	int8_t x328 = 0;
	volatile int32_t t79 = 98232;

	t79 = (x325==((x326/x327)|x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	int8_t x332 = INT8_MAX;
	int32_t t80 = 11505687;

	t80 = (x329==((x330/x331)|x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x334 = 27LLU;
	static int32_t x335 = -1;
	volatile int32_t t81 = 7;

	t81 = (x333==((x334/x335)|x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	volatile int32_t x340 = 371;
	int32_t t82 = 74331307;

	t82 = (x337==((x338/x339)|x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x341 = -1;
	uint64_t x343 = 7754730895986913LLU;
	int32_t x344 = INT32_MIN;
	volatile int32_t t83 = 52;

	t83 = (x341==((x342/x343)|x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x345 = 2196127U;
	uint8_t x346 = 1U;
	static int16_t x347 = INT16_MIN;
	volatile int32_t t84 = 1;

	t84 = (x345==((x346/x347)|x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x350 = INT16_MAX;
	static volatile uint16_t x351 = 2U;
	int32_t x352 = 2993;
	int32_t t85 = 9596;

	t85 = (x349==((x350/x351)|x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x353 = 65742136;
	int8_t x355 = -5;
	int32_t x356 = -1;
	static int32_t t86 = -22;

	t86 = (x353==((x354/x355)|x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = -11555436643LL;
	int16_t x362 = -3815;
	int64_t x363 = INT64_MIN;
	int32_t t87 = -10195880;

	t87 = (x361==((x362/x363)|x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x366 = -170LL;
	static int16_t x367 = INT16_MIN;
	static uint32_t x368 = UINT32_MAX;
	int32_t t88 = 24838;

	t88 = (x365==((x366/x367)|x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	int64_t x372 = -1LL;
	volatile int32_t t89 = -2;

	t89 = (x369==((x370/x371)|x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x373 = INT64_MAX;
	uint32_t x374 = UINT32_MAX;
	int64_t x375 = -119690LL;
	int8_t x376 = -1;
	volatile int32_t t90 = 958;

	t90 = (x373==((x374/x375)|x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x378 = 15LLU;
	int64_t x380 = INT64_MAX;
	volatile int32_t t91 = -190810;

	t91 = (x377==((x378/x379)|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = 48846598632388LL;
	static uint8_t x386 = 6U;
	int64_t x387 = -1LL;
	int8_t x388 = -1;
	int32_t t92 = -87434;

	t92 = (x385==((x386/x387)|x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int8_t x390 = INT8_MIN;
	uint8_t x391 = UINT8_MAX;
	int32_t x392 = INT32_MIN;
	int32_t t93 = 1;

	t93 = (x389==((x390/x391)|x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t t94 = 593;

	t94 = (x393==((x394/x395)|x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = -1LL;
	static uint8_t x398 = 119U;
	int32_t x400 = -1496;
	int32_t t95 = -230406;

	t95 = (x397==((x398/x399)|x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x401 = 74481677207855LLU;
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = -15551;
	static int16_t x404 = INT16_MIN;
	static volatile int32_t t96 = 8;

	t96 = (x401==((x402/x403)|x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x406 = 1276U;
	int64_t x407 = INT64_MIN;
	static int64_t x408 = 1923LL;

	t97 = (x405==((x406/x407)|x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x412 = UINT8_MAX;

	t98 = (x409==((x410/x411)|x412));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MAX;
	uint32_t x414 = 17U;
	static uint64_t x415 = 26489455LLU;
	uint16_t x416 = 4850U;
	int32_t t99 = -1;

	t99 = (x413==((x414/x415)|x416));

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
