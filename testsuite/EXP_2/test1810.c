#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x1 = 716U;
static int8_t x2 = -6;
int64_t t1 = INT64_MIN;
uint16_t x9 = 0U;
int64_t x13 = INT64_MIN;
static uint8_t x20 = UINT8_MAX;
int32_t t5 = 441699086;
int32_t t7 = 1;
uint16_t x35 = UINT16_MAX;
int16_t x41 = 1;
int16_t x47 = INT16_MIN;
uint16_t x49 = UINT16_MAX;
static int64_t x54 = -1LL;
volatile int16_t x58 = -69;
int16_t x59 = 589;
int64_t x60 = INT64_MIN;
static int32_t t18 = 0;
volatile int64_t x77 = 496770580460LL;
volatile int64_t x78 = INT64_MIN;
static uint32_t x82 = UINT32_MAX;
int16_t x86 = INT16_MIN;
volatile int32_t t21 = -83437921;
int8_t x95 = -1;
static int32_t x99 = INT32_MAX;
int8_t x100 = 1;
int32_t t24 = 1020642967;
int8_t x103 = -6;
uint16_t x106 = 2854U;
volatile int64_t x112 = 373768LL;
int32_t t28 = -26432;
int32_t x135 = INT32_MIN;
uint32_t t33 = 0U;
static volatile uint32_t x137 = UINT32_MAX;
static volatile int32_t t35 = -2;
static uint32_t x145 = 99U;
volatile uint64_t t36 = 413200314551LLU;
int32_t t37 = 308;
int16_t x156 = INT16_MIN;
static uint8_t x157 = 10U;
volatile uint64_t t40 = 1353221544269886894LLU;
int64_t x165 = -132LL;
volatile uint32_t x172 = 51463376U;
volatile uint32_t t42 = 82U;
uint64_t x173 = 28053416002398LLU;
uint32_t x177 = 742707246U;
static uint32_t x189 = 73U;
uint16_t x198 = 0U;
static int32_t x205 = INT32_MAX;
int8_t x207 = INT8_MIN;
volatile int16_t x216 = INT16_MIN;
int64_t x219 = INT64_MIN;
int64_t x220 = INT64_MIN;
static int16_t x221 = 58;
int64_t x228 = 503530674834LL;
int32_t x230 = 63853;
int64_t x234 = -21405557LL;
static uint16_t x235 = UINT16_MAX;
volatile uint64_t x243 = 10LLU;
static int32_t x248 = 1;
static volatile int32_t t62 = 1564;
int32_t x261 = INT32_MAX;
volatile uint64_t t65 = 51501LLU;
static int16_t x266 = INT16_MIN;
int8_t x269 = -2;
volatile int8_t x278 = -1;
int8_t x279 = INT8_MAX;
int32_t x280 = INT32_MIN;
int32_t t69 = INT32_MIN;
int64_t x285 = 439902745019680765LL;
int64_t x287 = INT64_MIN;
int32_t x288 = INT32_MIN;
volatile int64_t x292 = 217713LL;
volatile uint8_t x300 = 11U;
uint32_t x311 = UINT32_MAX;
volatile int32_t x314 = 1982;
volatile int64_t t81 = -257LL;
volatile uint64_t x329 = UINT64_MAX;
int32_t t82 = 0;
volatile int32_t t83 = -6594;
int16_t x348 = -2869;
int32_t t88 = -56904;
int64_t x360 = -143713436942579LL;
static int16_t x367 = 391;
int8_t x371 = INT8_MIN;
static uint8_t x375 = UINT8_MAX;
int32_t t93 = 452;
int32_t x379 = INT32_MAX;
volatile int32_t t97 = -1124178;
int16_t x394 = -204;
uint8_t x397 = UINT8_MAX;
int8_t x399 = -1;


void f0(void) {
	volatile int8_t x3 = INT8_MIN;
	uint32_t x4 = 250594603U;
	uint32_t t0 = 111U;

	t0 = ((x1<=(x2&x3))*x4);

	if (t0 != 250594603U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1U;
	uint64_t x6 = 179700LLU;
	int16_t x7 = 8039;
	volatile int64_t x8 = INT64_MIN;

	t1 = ((x5<=(x6&x7))*x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 51U;
	static int64_t x11 = -75176473738LL;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = ((x9<=(x10&x11))*x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = 4153;
	int64_t x15 = -23483LL;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = INT64_MIN;

	t3 = ((x13<=(x14&x15))*x16);

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	static volatile uint32_t x19 = 489U;
	static int32_t t4 = 74100;

	t4 = ((x17<=(x18&x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 13U;
	uint64_t x22 = 12913LLU;
	volatile int64_t x23 = -1LL;
	int32_t x24 = -1;

	t5 = ((x21<=(x22&x23))*x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int32_t x26 = INT32_MIN;
	int32_t x27 = INT32_MIN;
	uint16_t x28 = 3973U;
	int32_t t6 = -168;

	t6 = ((x25<=(x26&x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	volatile int32_t x30 = -1;
	static uint8_t x31 = UINT8_MAX;
	static int16_t x32 = INT16_MIN;

	t7 = ((x29<=(x30&x31))*x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 22U;
	static int32_t x34 = -1;
	int16_t x36 = -409;
	volatile int32_t t8 = -54487400;

	t8 = ((x33<=(x34&x35))*x36);

	if (t8 != -409) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1;
	volatile uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 7048122978LLU;

	t9 = ((x37<=(x38&x39))*x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 94719500U;
	static int32_t x43 = 0;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 0;

	t10 = ((x41<=(x42&x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x46 = 5U;
	static uint16_t x48 = UINT16_MAX;
	static volatile int32_t t11 = 790856;

	t11 = ((x45<=(x46&x47))*x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = -515;
	int16_t x51 = INT16_MAX;
	volatile int32_t x52 = -20;
	volatile int32_t t12 = -17;

	t12 = ((x49<=(x50&x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int32_t x55 = INT32_MAX;
	int16_t x56 = 3862;
	static int32_t t13 = -38;

	t13 = ((x53<=(x54&x55))*x56);

	if (t13 != 3862) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = UINT32_MAX;
	volatile int64_t t14 = 107975071950104LL;

	t14 = ((x57<=(x58&x59))*x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 27;
	int8_t x62 = -7;
	int16_t x63 = -41;
	volatile int64_t x64 = INT64_MIN;
	int64_t t15 = 237LL;

	t15 = ((x61<=(x62&x63))*x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	int64_t x67 = 171373992392LL;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = INT64_MIN;

	t16 = ((x65<=(x66&x67))*x68);

	if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 2024LLU;
	int16_t x70 = 43;
	volatile uint64_t x71 = UINT64_MAX;
	static int64_t x72 = -1LL;
	int64_t t17 = -416948212424LL;

	t17 = ((x69<=(x70&x71))*x72);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -1;
	int8_t x74 = -1;
	uint32_t x75 = 517151U;
	volatile int16_t x76 = INT16_MIN;

	t18 = ((x73<=(x74&x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x79 = UINT64_MAX;
	uint16_t x80 = 14U;
	int32_t t19 = 562;

	t19 = ((x77<=(x78&x79))*x80);

	if (t19 != 14) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -24;

	t20 = ((x81<=(x82&x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 248844728032LLU;
	int8_t x87 = INT8_MIN;
	static volatile int8_t x88 = INT8_MIN;

	t21 = ((x85<=(x86&x87))*x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 4020U;
	int8_t x90 = -1;
	static int16_t x91 = INT16_MIN;
	uint64_t x92 = 30677083826957774LLU;
	static uint64_t t22 = 60739992116596LLU;

	t22 = ((x89<=(x90&x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -95LL;
	static volatile uint8_t x94 = UINT8_MAX;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t23 = INT64_MIN;

	t23 = ((x93<=(x94&x95))*x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 4U;
	static uint16_t x98 = UINT16_MAX;

	t24 = ((x97<=(x98&x99))*x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	uint16_t x102 = 12777U;
	static int32_t x104 = 3;
	int32_t t25 = 91599;

	t25 = ((x101<=(x102&x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 60427768U;
	int16_t x107 = -1;
	uint32_t x108 = 16U;
	uint32_t t26 = 259716586U;

	t26 = ((x105<=(x106&x107))*x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 160U;
	static volatile int64_t x110 = INT64_MAX;
	volatile int32_t x111 = INT32_MIN;
	int64_t t27 = -817181302323LL;

	t27 = ((x109<=(x110&x111))*x112);

	if (t27 != 373768LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	int8_t x114 = INT8_MIN;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -1;

	t28 = ((x113<=(x114&x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = 11776345426308LL;
	uint8_t x119 = UINT8_MAX;
	static int32_t x120 = 7622456;
	volatile int32_t t29 = -17;

	t29 = ((x117<=(x118&x119))*x120);

	if (t29 != 7622456) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 42;
	uint16_t x122 = 3459U;
	int16_t x123 = INT16_MAX;
	int32_t x124 = INT32_MAX;
	static volatile int32_t t30 = INT32_MAX;

	t30 = ((x121<=(x122&x123))*x124);

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	volatile int64_t x126 = INT64_MIN;
	uint32_t x127 = UINT32_MAX;
	uint16_t x128 = 0U;
	volatile int32_t t31 = 2338;

	t31 = ((x125<=(x126&x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	uint16_t x130 = 126U;
	static int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MAX;
	int32_t t32 = -1026165;

	t32 = ((x129<=(x130&x131))*x132);

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 617463004386LLU;
	int16_t x134 = INT16_MIN;
	static uint32_t x136 = 3U;

	t33 = ((x133<=(x134&x135))*x136);

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x138 = UINT64_MAX;
	volatile uint64_t x139 = 1012651LLU;
	static volatile int32_t x140 = INT32_MIN;
	static int32_t t34 = 0;

	t34 = ((x137<=(x138&x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = 22169564LL;
	static volatile int8_t x142 = INT8_MAX;
	uint8_t x143 = 5U;
	volatile int32_t x144 = -31419;

	t35 = ((x141<=(x142&x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x146 = -513158628945980208LL;
	int32_t x147 = INT32_MIN;
	volatile uint64_t x148 = 14275663751875LLU;

	t36 = ((x145<=(x146&x147))*x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 5U;
	int8_t x150 = INT8_MIN;
	int64_t x151 = -1LL;
	volatile int8_t x152 = -8;

	t37 = ((x149<=(x150&x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -613;
	int16_t x154 = INT16_MIN;
	static volatile int64_t x155 = -14565253864LL;
	static int32_t t38 = 821628;

	t38 = ((x153<=(x154&x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = 1;
	int16_t x159 = 2;
	volatile int64_t x160 = INT64_MIN;
	int64_t t39 = -4173655LL;

	t39 = ((x157<=(x158&x159))*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	uint16_t x162 = 16U;
	uint16_t x163 = UINT16_MAX;
	uint64_t x164 = 20200922344751LLU;

	t40 = ((x161<=(x162&x163))*x164);

	if (t40 != 20200922344751LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = 257592029LLU;
	int16_t x167 = 0;
	int16_t x168 = -1;
	int32_t t41 = 12590047;

	t41 = ((x165<=(x166&x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MAX;
	int64_t x170 = 379889862549299065LL;
	volatile uint32_t x171 = 114817024U;

	t42 = ((x169<=(x170&x171))*x172);

	if (t42 != 51463376U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	uint64_t x176 = 163677053745941LLU;
	uint64_t t43 = 17914592LLU;

	t43 = ((x173<=(x174&x175))*x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = INT16_MIN;
	volatile int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -82441;

	t44 = ((x177<=(x178&x179))*x180);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -1;
	int32_t t45 = -1799;

	t45 = ((x181<=(x182&x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MAX;
	static int8_t x186 = -1;
	int64_t x187 = -1LL;
	volatile uint64_t x188 = UINT64_MAX;
	uint64_t t46 = 1573500715673689857LLU;

	t46 = ((x185<=(x186&x187))*x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = INT64_MIN;
	static int32_t x191 = -33391760;
	static int32_t x192 = 12513;
	static int32_t t47 = 0;

	t47 = ((x189<=(x190&x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x193 = 808676U;
	uint8_t x194 = 42U;
	static int8_t x195 = 30;
	volatile int16_t x196 = 7548;
	volatile int32_t t48 = 1119;

	t48 = ((x193<=(x194&x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int8_t x199 = -7;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 94;

	t49 = ((x197<=(x198&x199))*x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 568223698964LLU;
	uint64_t x202 = 4911609243LLU;
	uint32_t x203 = 1U;
	int32_t x204 = 7;
	volatile int32_t t50 = -2575342;

	t50 = ((x201<=(x202&x203))*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = INT64_MIN;
	int16_t x208 = INT16_MAX;
	static int32_t t51 = -1;

	t51 = ((x205<=(x206&x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 156484641993LL;
	uint8_t x210 = 122U;
	volatile int16_t x211 = -827;
	volatile int64_t x212 = INT64_MIN;
	static int64_t t52 = -15538860444447977LL;

	t52 = ((x209<=(x210&x211))*x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 4U;
	int32_t x214 = 293;
	static int32_t x215 = -1;
	volatile int32_t t53 = -703;

	t53 = ((x213<=(x214&x215))*x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -45024188LL;
	int8_t x218 = 8;
	volatile int64_t t54 = INT64_MIN;

	t54 = ((x217<=(x218&x219))*x220);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = 7;
	int8_t x223 = -32;
	static int64_t x224 = -126045433727LL;
	int64_t t55 = -257468535605105LL;

	t55 = ((x221<=(x222&x223))*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 29224U;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = 118U;
	volatile int64_t t56 = 4292910102343094LL;

	t56 = ((x225<=(x226&x227))*x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	volatile int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MAX;
	volatile int32_t t57 = -67587;

	t57 = ((x229<=(x230&x231))*x232);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	int32_t x236 = 17005;
	int32_t t58 = 229230639;

	t58 = ((x233<=(x234&x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int32_t x238 = INT32_MIN;
	uint64_t x239 = UINT64_MAX;
	uint16_t x240 = 2U;
	volatile int32_t t59 = -3;

	t59 = ((x237<=(x238&x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = 526;
	int64_t x242 = 45259LL;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 4035958;

	t60 = ((x241<=(x242&x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 13400U;
	uint32_t x246 = 248991U;
	int32_t x247 = -1;
	int32_t t61 = 1;

	t61 = ((x245<=(x246&x247))*x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x249 = -420;
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -183;

	t62 = ((x249<=(x250&x251))*x252);

	if (t62 != -183) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	int16_t x254 = -357;
	int8_t x255 = INT8_MIN;
	static int64_t x256 = 1767305671LL;
	int64_t t63 = 4LL;

	t63 = ((x253<=(x254&x255))*x256);

	if (t63 != 1767305671LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 140U;
	int32_t x258 = 3039126;
	int16_t x259 = INT16_MIN;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = -110998498;

	t64 = ((x257<=(x258&x259))*x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = -109914721LL;
	int16_t x263 = -1;
	volatile uint64_t x264 = UINT64_MAX;

	t65 = ((x261<=(x262&x263))*x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	uint16_t x268 = 364U;
	int32_t t66 = -8604834;

	t66 = ((x265<=(x266&x267))*x268);

	if (t66 != 364) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x270 = -1;
	uint8_t x271 = 63U;
	int8_t x272 = INT8_MAX;
	int32_t t67 = 34;

	t67 = ((x269<=(x270&x271))*x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -7297955;
	uint32_t x274 = 33292U;
	volatile uint32_t x275 = 981883U;
	uint32_t x276 = UINT32_MAX;
	uint32_t t68 = 258694U;

	t68 = ((x273<=(x274&x275))*x276);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;

	t69 = ((x277<=(x278&x279))*x280);

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	static uint8_t x282 = 4U;
	volatile int8_t x283 = -61;
	static int32_t x284 = -1;
	int32_t t70 = -3854;

	t70 = ((x281<=(x282&x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x286 = UINT32_MAX;
	static volatile int32_t t71 = -223910;

	t71 = ((x285<=(x286&x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -336561LL;
	int64_t x290 = INT64_MAX;
	volatile int32_t x291 = -1;
	static volatile int64_t t72 = -35153195LL;

	t72 = ((x289<=(x290&x291))*x292);

	if (t72 != 217713LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 57;
	uint8_t x294 = 0U;
	static int16_t x295 = INT16_MIN;
	volatile int8_t x296 = 12;
	int32_t t73 = -4;

	t73 = ((x293<=(x294&x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	volatile int64_t x298 = 40198148238563LL;
	volatile int8_t x299 = -21;
	volatile int32_t t74 = -27130667;

	t74 = ((x297<=(x298&x299))*x300);

	if (t74 != 11) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = UINT32_MAX;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MIN;
	uint8_t x304 = 60U;
	volatile int32_t t75 = 250;

	t75 = ((x301<=(x302&x303))*x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = -1;
	static volatile uint16_t x306 = 110U;
	uint32_t x307 = 889413557U;
	volatile int16_t x308 = 42;
	volatile int32_t t76 = -12;

	t76 = ((x305<=(x306&x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int32_t x310 = -1;
	volatile int16_t x312 = INT16_MAX;
	static int32_t t77 = 456747;

	t77 = ((x309<=(x310&x311))*x312);

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 1356;
	int32_t x315 = INT32_MIN;
	int32_t x316 = 661;
	int32_t t78 = -3;

	t78 = ((x313<=(x314&x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 2065U;
	int64_t x318 = INT64_MIN;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = 559U;
	volatile int32_t t79 = 126;

	t79 = ((x317<=(x318&x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = UINT64_MAX;
	volatile int8_t x323 = -1;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 128116407;

	t80 = ((x321<=(x322&x323))*x324);

	if (t80 != 255) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int64_t x326 = INT64_MIN;
	volatile int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MAX;

	t81 = ((x325<=(x326&x327))*x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	int16_t x332 = INT16_MIN;

	t82 = ((x329<=(x330&x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int32_t x334 = -161658;
	uint32_t x335 = UINT32_MAX;
	int32_t x336 = 193;

	t83 = ((x333<=(x334&x335))*x336);

	if (t83 != 193) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	int64_t x338 = -1132LL;
	int8_t x339 = -57;
	uint16_t x340 = 9U;
	volatile int32_t t84 = 30;

	t84 = ((x337<=(x338&x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 53U;
	static int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 29425537;

	t85 = ((x341<=(x342&x343))*x344);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x345 = 1;
	int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	int32_t t86 = 1;

	t86 = ((x345<=(x346&x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 19U;
	static uint16_t x350 = 1938U;
	static volatile int32_t x351 = 65753084;
	static int16_t x352 = INT16_MIN;
	volatile int32_t t87 = 963;

	t87 = ((x349<=(x350&x351))*x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 7U;
	static int64_t x354 = INT64_MAX;
	uint64_t x355 = 2105932491194LLU;
	static int8_t x356 = -1;

	t88 = ((x353<=(x354&x355))*x356);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	static volatile uint32_t x358 = 515U;
	int16_t x359 = INT16_MAX;
	volatile int64_t t89 = -2LL;

	t89 = ((x357<=(x358&x359))*x360);

	if (t89 != -143713436942579LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -41;
	uint16_t x362 = 63U;
	int32_t x363 = INT32_MIN;
	int32_t x364 = -1;
	volatile int32_t t90 = -5104;

	t90 = ((x361<=(x362&x363))*x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	static volatile uint16_t x366 = 84U;
	uint64_t x368 = 16972910874LLU;
	static volatile uint64_t t91 = 4537576692663199485LLU;

	t91 = ((x365<=(x366&x367))*x368);

	if (t91 != 16972910874LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static uint64_t x370 = 1329227230LLU;
	int16_t x372 = INT16_MAX;
	int32_t t92 = 0;

	t92 = ((x369<=(x370&x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	volatile int8_t x374 = INT8_MIN;
	int8_t x376 = INT8_MIN;

	t93 = ((x373<=(x374&x375))*x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 3960983129792876LLU;
	int32_t x378 = -1;
	uint32_t x380 = 5665U;
	volatile uint32_t t94 = 2804U;

	t94 = ((x377<=(x378&x379))*x380);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 0;
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 1914708;

	t95 = ((x381<=(x382&x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	uint8_t x386 = 41U;
	int32_t x387 = INT32_MAX;
	static int32_t x388 = -3944478;
	volatile int32_t t96 = -109;

	t96 = ((x385<=(x386&x387))*x388);

	if (t96 != -3944478) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -195LL;
	int32_t x390 = 109139903;
	uint16_t x391 = UINT16_MAX;
	volatile uint16_t x392 = UINT16_MAX;

	t97 = ((x389<=(x390&x391))*x392);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x393 = -1LL;
	int64_t x395 = INT64_MIN;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = 57;

	t98 = ((x393<=(x394&x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x398 = 3U;
	uint8_t x400 = 10U;
	volatile int32_t t99 = -853432;

	t99 = ((x397<=(x398&x399))*x400);

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
