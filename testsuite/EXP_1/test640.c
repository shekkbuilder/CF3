#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = INT64_MAX;
uint64_t x8 = 220125917LLU;
volatile int16_t x9 = -24;
int64_t x11 = INT64_MAX;
volatile int64_t t2 = -161023355814864LL;
int8_t x16 = -1;
volatile int32_t t3 = -12959534;
int8_t x17 = INT8_MIN;
volatile int8_t x22 = INT8_MIN;
int64_t t5 = 125222946403133867LL;
static uint16_t x30 = 1U;
uint8_t x47 = 1U;
volatile uint64_t t9 = 359051051808558LLU;
volatile int32_t x49 = INT32_MIN;
static uint32_t x50 = UINT32_MAX;
int64_t x53 = INT64_MAX;
static volatile int8_t x55 = INT8_MIN;
volatile uint64_t t11 = 0LLU;
volatile int16_t x59 = -1;
volatile int32_t t12 = 0;
int8_t x63 = -1;
int64_t t13 = -21818656LL;
int16_t x66 = INT16_MIN;
volatile int32_t x73 = INT32_MAX;
int64_t x75 = INT64_MIN;
int32_t x90 = INT32_MIN;
uint32_t x92 = 466700653U;
int32_t x99 = INT32_MIN;
int32_t x104 = 2481;
volatile int64_t t21 = -353453894LL;
static uint32_t x110 = 2206211U;
int64_t x114 = INT64_MIN;
int16_t x120 = 39;
int32_t x125 = -9498931;
int32_t x134 = INT32_MAX;
int32_t x136 = INT32_MAX;
volatile int16_t x138 = INT16_MIN;
int16_t x139 = -1;
int32_t t28 = -1;
volatile int32_t t30 = -3330;
uint8_t x156 = 9U;
int8_t x163 = INT8_MIN;
int16_t x164 = INT16_MAX;
volatile int64_t t34 = -441448709167406LL;
int32_t x177 = 1563;
int8_t x180 = -1;
static int16_t x183 = 1735;
static uint32_t t40 = 5560496U;
uint8_t x197 = 8U;
volatile int64_t t43 = -1LL;
static volatile int16_t x213 = INT16_MAX;
int8_t x215 = INT8_MAX;
volatile int32_t x216 = -1822;
uint64_t t46 = 292738568371665LLU;
uint64_t x230 = 29167719325736499LLU;
volatile uint32_t x235 = 12423U;
int16_t x236 = INT16_MAX;
static uint16_t x240 = 147U;
int64_t t50 = 8415726178057LL;
uint64_t x261 = UINT64_MAX;
int16_t x263 = 323;
static int32_t x264 = -1;
volatile uint32_t x266 = UINT32_MAX;
static int64_t x272 = -16316LL;
uint64_t t57 = 412379076651LLU;
int16_t x278 = INT16_MIN;
uint64_t x279 = 8502704119LLU;
int64_t x282 = INT64_MAX;
volatile int8_t x283 = -1;
uint64_t t60 = 917322116958LLU;
static int64_t x286 = INT64_MIN;
int64_t x287 = 660472657023381260LL;
int16_t x288 = -1;
int64_t t61 = 4346LL;
static int16_t x289 = -935;
volatile uint16_t x295 = UINT16_MAX;
static int16_t x297 = -88;
volatile int32_t t64 = -17618;
volatile int16_t x301 = 2462;
int8_t x306 = INT8_MIN;
static uint16_t x308 = 7U;
uint16_t x315 = 5765U;
uint64_t t71 = 460LLU;
int64_t x332 = -1LL;
int16_t x337 = -1;
int8_t x339 = -1;
static int32_t t75 = 64389;
int32_t x346 = -1;
int32_t x352 = INT32_MAX;
int32_t t77 = 0;
int8_t x357 = INT8_MAX;
uint8_t x358 = 26U;
volatile uint64_t x364 = UINT64_MAX;
volatile int64_t t81 = -6413183178LL;
int8_t x371 = 0;
static int8_t x374 = 3;
uint8_t x376 = UINT8_MAX;
static volatile int64_t x378 = INT64_MAX;
int16_t x381 = -1;
int32_t x383 = INT32_MIN;
static int8_t x387 = INT8_MAX;
static int32_t x388 = INT32_MIN;
volatile int64_t x395 = INT64_MIN;
int64_t t88 = 78429212408811020LL;
int8_t x399 = INT8_MAX;
volatile int64_t x406 = INT64_MIN;
static int64_t t91 = -34635349594614863LL;
volatile uint32_t x417 = 21091U;
int64_t x418 = INT64_MIN;
uint32_t x419 = UINT32_MAX;
int32_t x422 = INT32_MIN;
int64_t x424 = -3753981012578594LL;
int16_t x426 = -1;
int64_t x432 = -1LL;
uint16_t x435 = 2U;
volatile int32_t t97 = 1120;
int64_t x437 = INT64_MIN;
uint64_t x438 = UINT64_MAX;
int16_t x439 = INT16_MIN;
int32_t x442 = -1;
static int64_t x444 = 78502261012301LL;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = 107;
	static uint64_t x3 = 27776LLU;
	uint64_t t0 = 6516204872LLU;

	t0 = (((x1/x2)&x3)*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1LL;
	static volatile int8_t x6 = INT8_MIN;
	static int32_t x7 = -1;
	static uint64_t t1 = 15931626863LLU;

	t1 = (((x5/x6)&x7)*x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	volatile int32_t x12 = INT32_MIN;

	t2 = (((x9/x10)&x11)*x12);

	if (t2 != -51539607552LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int8_t x14 = -22;
	int8_t x15 = -1;

	t3 = (((x13/x14)&x15)*x16);

	if (t3 != -97612893) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 1463549LLU;
	uint32_t x19 = UINT32_MAX;
	uint16_t x20 = UINT16_MAX;
	uint64_t t4 = 234642904476LLU;

	t4 = (((x17/x18)&x19)*x20);

	if (t4 != 175882995723405LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static volatile int64_t x23 = -96443865658LL;
	int8_t x24 = INT8_MIN;

	t5 = (((x21/x22)&x23)*x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint8_t x26 = 1U;
	int8_t x27 = INT8_MIN;
	int64_t x28 = 59978LL;
	volatile int64_t t6 = 1604626431620877501LL;

	t6 = (((x25/x26)&x27)*x28);

	if (t6 != 128801766562560LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MIN;
	uint16_t x31 = 171U;
	int64_t x32 = 29316283441LL;
	volatile int64_t t7 = -8996999LL;

	t7 = (((x29/x30)&x31)*x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = -2531;
	static uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 913170790LLU;
	uint64_t t8 = 11520292693LLU;

	t8 = (((x37/x38)&x39)*x40);

	if (t8 != 59834602843960LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = UINT8_MAX;
	uint64_t x46 = UINT64_MAX;
	int8_t x48 = -1;

	t9 = (((x45/x46)&x47)*x48);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x51 = -3118LL;
	int16_t x52 = INT16_MAX;
	int64_t t10 = -6608857778LL;

	t10 = (((x49/x50)&x51)*x52);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x54 = 37055772LL;
	volatile uint64_t x56 = UINT64_MAX;

	t11 = (((x53/x54)&x55)*x56);

	if (t11 != 18446743824804413824LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;

	t12 = (((x57/x58)&x59)*x60);

	if (t12 != 16711680) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 5U;
	int64_t x62 = 7716LL;
	volatile int32_t x64 = -1572284;

	t13 = (((x61/x62)&x63)*x64);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = INT64_MIN;
	uint16_t x67 = 70U;
	volatile int64_t x68 = INT64_MIN;
	int64_t t14 = -17902719595LL;

	t14 = (((x65/x66)&x67)*x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x74 = INT8_MAX;
	int64_t x76 = INT64_MAX;
	int64_t t15 = -10LL;

	t15 = (((x73/x74)&x75)*x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MIN;
	volatile int8_t x79 = INT8_MIN;
	volatile int8_t x80 = 1;
	static int64_t t16 = 1657554579389949LL;

	t16 = (((x77/x78)&x79)*x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = 1U;
	int16_t x86 = 1;
	uint64_t x87 = UINT64_MAX;
	volatile int32_t x88 = -3769;
	uint64_t t17 = 156498LLU;

	t17 = (((x85/x86)&x87)*x88);

	if (t17 != 18446744073709547847LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = UINT16_MAX;
	int8_t x91 = -1;
	uint32_t t18 = 81452U;

	t18 = (((x89/x90)&x91)*x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x93 = 1U;
	volatile int64_t x94 = INT64_MIN;
	uint16_t x95 = 0U;
	int16_t x96 = -1;
	volatile int64_t t19 = 1020475385334LL;

	t19 = (((x93/x94)&x95)*x96);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = 148788LL;
	volatile uint32_t x98 = 19636U;
	volatile int64_t x100 = 15203133522941LL;
	volatile int64_t t20 = 106342153606429304LL;

	t20 = (((x97/x98)&x99)*x100);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = INT16_MIN;
	int32_t x102 = -1;
	static int64_t x103 = INT64_MIN;

	t21 = (((x101/x102)&x103)*x104);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = -3738;
	volatile uint8_t x107 = UINT8_MAX;
	uint8_t x108 = 15U;
	volatile uint32_t t22 = 9271543U;

	t22 = (((x105/x106)&x107)*x108);

	if (t22 != 15U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	uint64_t x111 = UINT64_MAX;
	volatile int64_t x112 = INT64_MIN;
	volatile uint64_t t23 = 2LLU;

	t23 = (((x109/x110)&x111)*x112);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	int16_t x115 = -1;
	static volatile int8_t x116 = -15;
	int64_t t24 = 57253LL;

	t24 = (((x113/x114)&x115)*x116);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -3;
	int32_t t25 = 92;

	t25 = (((x117/x118)&x119)*x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = 3U;
	int16_t x128 = INT16_MIN;
	int64_t t26 = -16088LL;

	t26 = (((x125/x126)&x127)*x128);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int32_t t27 = 1249901;

	t27 = (((x133/x134)&x135)*x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = -1;
	static int8_t x140 = INT8_MIN;

	t28 = (((x137/x138)&x139)*x140);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x141 = 50U;
	volatile int64_t x142 = -2LL;
	uint8_t x143 = 2U;
	int16_t x144 = -272;
	static int64_t t29 = 1LL;

	t29 = (((x141/x142)&x143)*x144);

	if (t29 != -544LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x145 = 2U;
	uint8_t x146 = 9U;
	volatile int32_t x147 = INT32_MAX;
	int32_t x148 = -28;

	t30 = (((x145/x146)&x147)*x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x149 = 1284926LL;
	static uint64_t x150 = 238263091LLU;
	int8_t x151 = -33;
	int8_t x152 = INT8_MIN;
	volatile uint64_t t31 = 746LLU;

	t31 = (((x149/x150)&x151)*x152);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	int32_t x155 = -1;
	uint32_t t32 = 1136767086U;

	t32 = (((x153/x154)&x155)*x156);

	if (t32 != 151587081U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MAX;
	int16_t x159 = 24;
	uint64_t x160 = 23534695430646LLU;
	volatile uint64_t t33 = 7LLU;

	t33 = (((x157/x158)&x159)*x160);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = 3735LL;

	t34 = (((x161/x162)&x163)*x164);

	if (t34 != -18840238592LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MAX;
	uint8_t x167 = 59U;
	int8_t x168 = 1;
	volatile int32_t t35 = 23272;

	t35 = (((x165/x166)&x167)*x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	static int32_t x171 = -1;
	uint64_t x172 = 573162929983635028LLU;
	volatile uint64_t t36 = 127071403553358LLU;

	t36 = (((x169/x170)&x171)*x172);

	if (t36 != 2617422667429052416LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MAX;
	volatile uint64_t x174 = 271279819LLU;
	int32_t x175 = INT32_MIN;
	volatile int64_t x176 = -1LL;
	static volatile uint64_t t37 = 90LLU;

	t37 = (((x173/x174)&x175)*x176);

	if (t37 != 18446744041497296896LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x178 = 3;
	int16_t x179 = 1052;
	volatile int32_t t38 = 218;

	t38 = (((x177/x178)&x179)*x180);

	if (t38 != -8) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -1;
	uint64_t x182 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	volatile uint64_t t39 = 7573595096832289LLU;

	t39 = (((x181/x182)&x183)*x184);

	if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = -1;
	int32_t x186 = -14;
	uint32_t x187 = 3U;
	uint16_t x188 = 13265U;

	t40 = (((x185/x186)&x187)*x188);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x189 = 1U;
	static volatile uint8_t x190 = 14U;
	int32_t x191 = INT32_MIN;
	static volatile int8_t x192 = -35;
	int32_t t41 = -30732;

	t41 = (((x189/x190)&x191)*x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x198 = 4U;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	volatile int64_t t42 = 2558217778420625LL;

	t42 = (((x197/x198)&x199)*x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = 6;
	uint8_t x202 = 7U;
	int64_t x203 = -1337172104220LL;
	volatile int64_t x204 = INT64_MAX;

	t43 = (((x201/x202)&x203)*x204);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x214 = INT64_MIN;
	volatile int64_t t44 = 1LL;

	t44 = (((x213/x214)&x215)*x216);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x218 = INT16_MIN;
	int8_t x219 = 17;
	volatile int32_t x220 = INT32_MAX;
	volatile uint32_t t45 = 585114U;

	t45 = (((x217/x218)&x219)*x220);

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = 3LLU;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = UINT16_MAX;

	t46 = (((x221/x222)&x223)*x224);

	if (t46 != 18446697161926464896LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x225 = UINT64_MAX;
	static uint32_t x226 = 216650447U;
	static uint8_t x227 = 29U;
	uint16_t x228 = 55U;
	volatile uint64_t t47 = 246280302001028LLU;

	t47 = (((x225/x226)&x227)*x228);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x229 = 1;
	volatile int32_t x231 = -823068649;
	volatile int32_t x232 = INT32_MIN;
	uint64_t t48 = 238666083LLU;

	t48 = (((x229/x230)&x231)*x232);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x233 = 27U;
	int16_t x234 = INT16_MIN;
	static uint32_t t49 = 63925U;

	t49 = (((x233/x234)&x235)*x236);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = -1;
	int64_t x239 = INT64_MIN;

	t50 = (((x237/x238)&x239)*x240);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = 7;
	uint64_t x246 = 8433202379125361LLU;
	uint8_t x247 = UINT8_MAX;
	int64_t x248 = 279365165565281182LL;
	volatile uint64_t t51 = 415781410170LLU;

	t51 = (((x245/x246)&x247)*x248);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x249 = 73873U;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = -2999001749119LL;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t52 = 1573724LLU;

	t52 = (((x249/x250)&x251)*x252);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = 375056362013471509LL;
	int16_t x254 = INT16_MIN;
	int32_t x255 = 98656;
	volatile uint64_t x256 = 65166240788693LLU;
	volatile uint64_t t53 = 2981477012422855LLU;

	t53 = (((x253/x254)&x255)*x256);

	if (t53 != 6412358093607391200LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x257 = 2U;
	int16_t x258 = -1;
	int8_t x259 = INT8_MAX;
	static volatile int8_t x260 = -1;
	volatile int32_t t54 = -169856854;

	t54 = (((x257/x258)&x259)*x260);

	if (t54 != -126) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x262 = -1;
	static volatile uint64_t t55 = UINT64_MAX;

	t55 = (((x261/x262)&x263)*x264);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = INT16_MIN;
	static uint64_t x267 = 1925986456416961LLU;
	int8_t x268 = INT8_MIN;
	volatile uint64_t t56 = 537073639541LLU;

	t56 = (((x265/x266)&x267)*x268);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x269 = 1LLU;
	int16_t x270 = -1;
	static int16_t x271 = 1781;

	t57 = (((x269/x270)&x271)*x272);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = UINT8_MAX;
	volatile int16_t x275 = INT16_MAX;
	static int16_t x276 = INT16_MIN;
	static volatile int32_t t58 = 13986845;

	t58 = (((x273/x274)&x275)*x276);

	if (t58 != -4194304) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -51472192;
	int32_t x280 = -125360900;
	volatile uint64_t t59 = 3357LLU;

	t59 = (((x277/x278)&x279)*x280);

	if (t59 != 18446743876892938616LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x281 = 82LLU;
	int64_t x284 = INT64_MIN;

	t60 = (((x281/x282)&x283)*x284);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x285 = INT64_MAX;

	t61 = (((x285/x286)&x287)*x288);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x290 = -8770595;
	int8_t x291 = 4;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t62 = 4484U;

	t62 = (((x289/x290)&x291)*x292);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = INT8_MIN;
	volatile uint64_t x294 = 212434928LLU;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t63 = 3LLU;

	t63 = (((x293/x294)&x295)*x296);

	if (t63 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = 0;
	int16_t x300 = INT16_MAX;

	t64 = (((x297/x298)&x299)*x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x302 = -1LL;
	uint8_t x303 = 24U;
	int8_t x304 = INT8_MAX;
	int64_t t65 = -18841024LL;

	t65 = (((x301/x302)&x303)*x304);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -97;
	static volatile uint8_t x307 = 46U;
	static volatile int32_t t66 = 1829324;

	t66 = (((x305/x306)&x307)*x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x309 = UINT32_MAX;
	uint64_t x310 = UINT64_MAX;
	volatile uint8_t x311 = UINT8_MAX;
	static int32_t x312 = INT32_MIN;
	volatile uint64_t t67 = 175LLU;

	t67 = (((x309/x310)&x311)*x312);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x313 = 103U;
	int8_t x314 = 5;
	uint16_t x316 = 309U;
	volatile int32_t t68 = 99;

	t68 = (((x313/x314)&x315)*x316);

	if (t68 != 1236) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = 12027U;
	int8_t x318 = INT8_MIN;
	int64_t x319 = 392706025620506213LL;
	uint16_t x320 = 0U;
	volatile int64_t t69 = -1952375043952LL;

	t69 = (((x317/x318)&x319)*x320);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x321 = 1;
	volatile int64_t x322 = INT64_MIN;
	volatile int16_t x323 = 0;
	int8_t x324 = INT8_MAX;
	int64_t t70 = -1808LL;

	t70 = (((x321/x322)&x323)*x324);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = UINT64_MAX;
	uint8_t x327 = UINT8_MAX;
	int32_t x328 = INT32_MIN;

	t71 = (((x325/x326)&x327)*x328);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x329 = 14U;
	int32_t x330 = -1;
	uint64_t x331 = UINT64_MAX;
	volatile uint64_t t72 = 47634911369183545LLU;

	t72 = (((x329/x330)&x331)*x332);

	if (t72 != 14LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MAX;
	volatile int64_t x334 = 348LL;
	int64_t x335 = INT64_MAX;
	int8_t x336 = -7;
	int64_t t73 = -1586418923850016LL;

	t73 = (((x333/x334)&x335)*x336);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x338 = 12030;
	int16_t x340 = -1;
	int32_t t74 = -745;

	t74 = (((x337/x338)&x339)*x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = UINT16_MAX;
	static int8_t x342 = INT8_MIN;
	int32_t x343 = 6889;
	uint8_t x344 = UINT8_MAX;

	t75 = (((x341/x342)&x343)*x344);

	if (t75 != 1697535) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -7;
	uint8_t x347 = UINT8_MAX;
	int8_t x348 = -43;
	volatile int32_t t76 = 81716100;

	t76 = (((x345/x346)&x347)*x348);

	if (t76 != -301) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x349 = -3;
	int16_t x350 = INT16_MIN;
	int32_t x351 = -8069;

	t77 = (((x349/x350)&x351)*x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x353 = UINT16_MAX;
	volatile int16_t x354 = -1;
	static volatile int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MAX;
	static int32_t t78 = -604;

	t78 = (((x353/x354)&x355)*x356);

	if (t78 != -8323072) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x359 = UINT16_MAX;
	static int16_t x360 = INT16_MIN;
	int32_t t79 = 6683;

	t79 = (((x357/x358)&x359)*x360);

	if (t79 != -131072) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = 2U;
	volatile int32_t x362 = INT32_MAX;
	static uint8_t x363 = UINT8_MAX;
	uint64_t t80 = 70802305LLU;

	t80 = (((x361/x362)&x363)*x364);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x365 = INT8_MAX;
	uint8_t x366 = UINT8_MAX;
	int64_t x367 = -274950298699193LL;
	int32_t x368 = 0;

	t81 = (((x365/x366)&x367)*x368);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x369 = 11U;
	uint16_t x370 = UINT16_MAX;
	uint32_t x372 = UINT32_MAX;
	uint32_t t82 = 13U;

	t82 = (((x369/x370)&x371)*x372);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = 2U;
	int32_t x375 = INT32_MIN;
	volatile int32_t t83 = -42;

	t83 = (((x373/x374)&x375)*x376);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x377 = 66U;
	volatile int16_t x379 = 1741;
	int32_t x380 = INT32_MIN;
	int64_t t84 = 17658102LL;

	t84 = (((x377/x378)&x379)*x380);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x382 = 10712U;
	int8_t x384 = 1;
	volatile uint32_t t85 = 45U;

	t85 = (((x381/x382)&x383)*x384);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = INT8_MAX;
	static volatile int64_t x386 = -50089233004LL;
	volatile int64_t t86 = 0LL;

	t86 = (((x385/x386)&x387)*x388);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x389 = UINT64_MAX;
	uint8_t x390 = 4U;
	int8_t x391 = 8;
	int16_t x392 = -1;
	uint64_t t87 = 1772928469262998109LLU;

	t87 = (((x389/x390)&x391)*x392);

	if (t87 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x393 = -1;
	uint8_t x394 = 31U;
	volatile int32_t x396 = 10;

	t88 = (((x393/x394)&x395)*x396);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x397 = INT64_MIN;
	uint8_t x398 = 28U;
	int8_t x400 = INT8_MAX;
	static int64_t t89 = -681940561LL;

	t89 = (((x397/x398)&x399)*x400);

	if (t89 != 13970LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MAX;
	static int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	uint32_t x404 = 327166U;
	uint32_t t90 = 104255958U;

	t90 = (((x401/x402)&x403)*x404);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x405 = 5U;
	volatile uint32_t x407 = 1626493U;
	int8_t x408 = INT8_MIN;

	t91 = (((x405/x406)&x407)*x408);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	static int64_t x410 = INT64_MIN;
	int64_t x411 = INT64_MAX;
	static int32_t x412 = -120;
	volatile int64_t t92 = -54072620376LL;

	t92 = (((x409/x410)&x411)*x412);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x420 = -192;
	int64_t t93 = 1LL;

	t93 = (((x417/x418)&x419)*x420);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = 1429507338U;
	static uint32_t x423 = UINT32_MAX;
	static volatile int64_t t94 = -115LL;

	t94 = (((x421/x422)&x423)*x424);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = 6LL;
	uint16_t x427 = UINT16_MAX;
	static int16_t x428 = -222;
	static int64_t t95 = -4350LL;

	t95 = (((x425/x426)&x427)*x428);

	if (t95 != -14547660LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x429 = 12U;
	int32_t x430 = 31388;
	static uint8_t x431 = 6U;
	volatile int64_t t96 = 260808LL;

	t96 = (((x429/x430)&x431)*x432);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x433 = 1U;
	int16_t x434 = INT16_MIN;
	int32_t x436 = INT32_MIN;

	t97 = (((x433/x434)&x435)*x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x440 = UINT8_MAX;
	static uint64_t t98 = 12794504267LLU;

	t98 = (((x437/x438)&x439)*x440);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = -560;
	int16_t x443 = 7;
	int64_t t99 = 16633050584LL;

	t99 = (((x441/x442)&x443)*x444);

	if (t99 != 0LL) { NG(); } else { ; }
	
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
