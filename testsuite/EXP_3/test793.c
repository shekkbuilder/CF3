#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -5;
int16_t x5 = INT16_MIN;
volatile uint16_t x11 = 503U;
uint32_t x15 = UINT32_MAX;
uint32_t t3 = 223825U;
volatile int64_t x25 = INT64_MIN;
int8_t x29 = INT8_MAX;
int64_t t7 = 125LL;
int64_t x35 = INT64_MIN;
uint32_t x37 = UINT32_MAX;
volatile uint32_t x56 = 770U;
int16_t x65 = INT16_MAX;
int32_t t16 = -8;
static volatile int16_t x73 = -1;
volatile int8_t x78 = INT8_MIN;
uint16_t x86 = 13990U;
volatile int16_t x90 = 105;
int32_t t22 = -995;
int32_t x94 = INT32_MIN;
int32_t x108 = INT32_MIN;
int8_t x112 = INT8_MIN;
volatile uint32_t x116 = 7U;
int8_t x127 = -1;
static int8_t x142 = INT8_MIN;
uint32_t x143 = 414940503U;
uint16_t x146 = UINT16_MAX;
int64_t x150 = -25022LL;
int64_t x155 = -38708803LL;
volatile int64_t t38 = -117948716LL;
uint32_t x163 = 1076479288U;
uint32_t t40 = 4560032U;
int32_t x172 = -13346121;
volatile uint8_t x176 = UINT8_MAX;
int32_t x187 = 199922;
static volatile int64_t t48 = 4919918197641LL;
uint16_t x204 = 7284U;
uint32_t x209 = 12349209U;
int32_t x211 = INT32_MIN;
static volatile uint64_t x219 = 1LLU;
volatile uint64_t x221 = 104242LLU;
int16_t x222 = INT16_MIN;
static volatile int32_t x225 = INT32_MIN;
int32_t x226 = -846;
int64_t x229 = INT64_MIN;
int8_t x230 = -1;
int16_t x243 = INT16_MIN;
static uint32_t x246 = 1786U;
static int64_t x253 = -32634LL;
static uint16_t x260 = 126U;
int32_t x266 = 953487;
volatile int64_t x267 = INT64_MAX;
int8_t x272 = 12;
int32_t t67 = 72;
uint16_t x274 = UINT16_MAX;
static uint8_t x278 = 13U;
int64_t x280 = 28436349048LL;
volatile uint64_t t69 = 1489LLU;
int64_t x285 = -857946526651118998LL;
uint64_t t72 = 1511LLU;
int8_t x301 = INT8_MIN;
volatile int8_t x303 = INT8_MIN;
int16_t x304 = -166;
volatile uint64_t x306 = UINT64_MAX;
uint8_t x307 = 123U;
int16_t x308 = INT16_MIN;
static uint32_t x314 = 30553739U;
int64_t x316 = INT64_MIN;
static volatile int64_t x318 = INT64_MIN;
int32_t x324 = INT32_MIN;
volatile uint8_t x334 = UINT8_MAX;
int32_t x337 = -1;
int16_t x338 = INT16_MIN;
static volatile int64_t t84 = 48451LL;
int8_t x348 = -1;
uint64_t t87 = 207766LLU;
int64_t x353 = INT64_MIN;
static volatile int32_t t88 = 474;
static uint8_t x362 = 1U;
static volatile int16_t x372 = -883;
uint16_t x375 = UINT16_MAX;
volatile int64_t t93 = 2701092121040038782LL;
int16_t x377 = -1;
uint64_t x380 = UINT64_MAX;
volatile uint64_t t94 = 341063121118LLU;
int8_t x385 = 0;
static int64_t x389 = INT64_MIN;
volatile int32_t x392 = INT32_MAX;
int32_t x394 = INT32_MAX;
uint8_t x396 = UINT8_MAX;
volatile int32_t t98 = -2;
volatile uint32_t x397 = UINT32_MAX;
volatile uint8_t x399 = UINT8_MAX;


void f0(void) {
	static int8_t x1 = 16;
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 12U;
	int32_t t0 = 339111375;

	t0 = ((x1<x2)^(x3%x4));

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 0;
	static int32_t x7 = -1;
	int16_t x8 = 269;
	static volatile int32_t t1 = 1;

	t1 = ((x5<x6)^(x7%x8));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 55U;
	int8_t x10 = -1;
	volatile int32_t x12 = -216;
	volatile int32_t t2 = 1665715;

	t2 = ((x9<x10)^(x11%x12));

	if (t2 != 71) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 5;
	static int16_t x14 = INT16_MAX;
	volatile uint16_t x16 = 49U;

	t3 = ((x13<x14)^(x15%x16));

	if (t3 != 39U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int64_t x18 = 3433810LL;
	int64_t x19 = -1LL;
	uint8_t x20 = UINT8_MAX;
	int64_t t4 = 250862398633403LL;

	t4 = ((x17<x18)^(x19%x20));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	uint64_t x23 = 55977951LLU;
	int32_t x24 = INT32_MIN;
	volatile uint64_t t5 = 5838197941733LLU;

	t5 = ((x21<x22)^(x23%x24));

	if (t5 != 55977951LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 38582LLU;
	int8_t x27 = INT8_MIN;
	int64_t x28 = -412793LL;
	volatile int64_t t6 = 159262040345242LL;

	t6 = ((x25<x26)^(x27%x28));

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	int64_t x32 = -1LL;

	t7 = ((x29<x30)^(x31%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint32_t x34 = UINT32_MAX;
	uint8_t x36 = 33U;
	int64_t t8 = 83469LL;

	t8 = ((x33<x34)^(x35%x36));

	if (t8 != -7LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	int8_t x39 = INT8_MIN;
	int16_t x40 = 5471;
	volatile int32_t t9 = 1877523;

	t9 = ((x37<x38)^(x39%x40));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	uint8_t x42 = 25U;
	uint8_t x43 = UINT8_MAX;
	uint16_t x44 = 11U;
	volatile int32_t t10 = 446279;

	t10 = ((x41<x42)^(x43%x44));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	volatile int32_t x46 = 389524719;
	int8_t x47 = INT8_MIN;
	int16_t x48 = 15;
	volatile int32_t t11 = -1;

	t11 = ((x45<x46)^(x47%x48));

	if (t11 != -7) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 30917LLU;
	volatile int64_t x50 = INT64_MAX;
	static volatile uint8_t x51 = 33U;
	static uint16_t x52 = 29U;
	volatile int32_t t12 = -1676;

	t12 = ((x49<x50)^(x51%x52));

	if (t12 != 5) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 211;
	uint64_t x54 = UINT64_MAX;
	static int8_t x55 = INT8_MAX;
	uint32_t t13 = 1U;

	t13 = ((x53<x54)^(x55%x56));

	if (t13 != 126U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 0;
	uint8_t x58 = 1U;
	uint8_t x59 = 27U;
	static int16_t x60 = -1;
	int32_t t14 = -15331;

	t14 = ((x57<x58)^(x59%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = 507589;
	static int32_t x62 = INT32_MIN;
	int16_t x63 = 22;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 3;

	t15 = ((x61<x62)^(x63%x64));

	if (t15 != 22) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = 0;
	int32_t x67 = 0;
	static int16_t x68 = INT16_MAX;

	t16 = ((x65<x66)^(x67%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 3U;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t17 = 16353553254092313LLU;

	t17 = ((x69<x70)^(x71%x72));

	if (t17 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 307;
	uint64_t x75 = 210LLU;
	volatile int32_t x76 = 256;
	volatile uint64_t t18 = 65438LLU;

	t18 = ((x73<x74)^(x75%x76));

	if (t18 != 211LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 0;
	int32_t x79 = INT32_MIN;
	static int8_t x80 = 9;
	volatile int32_t t19 = 0;

	t19 = ((x77<x78)^(x79%x80));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = UINT64_MAX;
	static uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	static volatile uint32_t x84 = 4U;
	volatile uint32_t t20 = 2548U;

	t20 = ((x81<x82)^(x83%x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = 8345914188LL;
	static int16_t x87 = INT16_MIN;
	uint64_t x88 = 3LLU;
	uint64_t t21 = 0LLU;

	t21 = ((x85<x86)^(x87%x88));

	if (t21 != 2LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 13993LLU;
	int8_t x91 = -1;
	static int8_t x92 = INT8_MIN;

	t22 = ((x89<x90)^(x91%x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile int64_t x95 = 1LL;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t23 = -49LL;

	t23 = ((x93<x94)^(x95%x96));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = -109708414131975LL;
	int8_t x98 = 1;
	volatile uint64_t x99 = 9963611LLU;
	uint32_t x100 = UINT32_MAX;
	uint64_t t24 = 5023929LLU;

	t24 = ((x97<x98)^(x99%x100));

	if (t24 != 9963610LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint32_t x102 = UINT32_MAX;
	uint64_t x103 = UINT64_MAX;
	uint16_t x104 = 24U;
	volatile uint64_t t25 = 4551447249000394LLU;

	t25 = ((x101<x102)^(x103%x104));

	if (t25 != 14LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -2;
	static volatile int32_t t26 = -1298;

	t26 = ((x105<x106)^(x107%x108));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int8_t x110 = -1;
	int64_t x111 = INT64_MAX;
	volatile int64_t t27 = 124233LL;

	t27 = ((x109<x110)^(x111%x112));

	if (t27 != 127LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 4464137833LLU;
	int32_t x114 = 6;
	uint64_t x115 = 122124LLU;
	volatile uint64_t t28 = 1LLU;

	t28 = ((x113<x114)^(x115%x116));

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = 4;
	int32_t x119 = -1;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -5249;

	t29 = ((x117<x118)^(x119%x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -2109;
	int32_t x122 = 515370365;
	static int8_t x123 = 13;
	int16_t x124 = INT16_MIN;
	int32_t t30 = -1;

	t30 = ((x121<x122)^(x123%x124));

	if (t30 != 12) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -17715715050LL;
	static int64_t x126 = INT64_MIN;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = -802951;

	t31 = ((x125<x126)^(x127%x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int64_t x131 = -80LL;
	uint32_t x132 = 25822046U;
	int64_t t32 = -170576602756605873LL;

	t32 = ((x129<x130)^(x131%x132));

	if (t32 != -79LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x133 = INT64_MIN;
	int16_t x134 = -1;
	uint8_t x135 = 16U;
	int32_t x136 = 5140078;
	volatile int32_t t33 = -16728055;

	t33 = ((x133<x134)^(x135%x136));

	if (t33 != 17) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = 11513426416721430LL;
	int32_t x139 = 0;
	int8_t x140 = -1;
	int32_t t34 = -31;

	t34 = ((x137<x138)^(x139%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = 2U;
	static uint8_t x144 = UINT8_MAX;
	uint32_t t35 = 24U;

	t35 = ((x141<x142)^(x143%x144));

	if (t35 != 168U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = 14;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -4;
	static volatile int32_t t36 = -5844213;

	t36 = ((x145<x146)^(x147%x148));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static volatile int64_t x151 = INT64_MIN;
	int32_t x152 = INT32_MIN;
	volatile int64_t t37 = -1LL;

	t37 = ((x149<x150)^(x151%x152));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 185U;
	volatile int32_t x154 = INT32_MAX;
	static volatile int64_t x156 = INT64_MIN;

	t38 = ((x153<x154)^(x155%x156));

	if (t38 != -38708804LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	volatile int64_t x158 = 1LL;
	volatile uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	int32_t t39 = -5130877;

	t39 = ((x157<x158)^(x159%x160));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -182533;
	int64_t x162 = -12576987192LL;
	volatile int16_t x164 = INT16_MIN;

	t40 = ((x161<x162)^(x163%x164));

	if (t40 != 1076479288U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	volatile int16_t x166 = INT16_MAX;
	uint64_t x167 = 343262331LLU;
	volatile int64_t x168 = INT64_MIN;
	static uint64_t t41 = 114757568541LLU;

	t41 = ((x165<x166)^(x167%x168));

	if (t41 != 343262331LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x170 = 433;
	static uint32_t x171 = 11486641U;
	volatile uint32_t t42 = 1255519U;

	t42 = ((x169<x170)^(x171%x172));

	if (t42 != 11486641U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 78U;
	volatile uint16_t x174 = 1U;
	int16_t x175 = -17;
	int32_t t43 = -123775;

	t43 = ((x173<x174)^(x175%x176));

	if (t43 != -17) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	int32_t x180 = -166649692;
	int32_t t44 = 21;

	t44 = ((x177<x178)^(x179%x180));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 16744U;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = -31;
	volatile int32_t t45 = 31207474;

	t45 = ((x181<x182)^(x183%x184));

	if (t45 != -4) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	int8_t x186 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	int64_t t46 = 13458674LL;

	t46 = ((x185<x186)^(x187%x188));

	if (t46 != 199922LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = UINT8_MAX;
	static int32_t x190 = INT32_MIN;
	volatile int8_t x191 = INT8_MIN;
	volatile int64_t x192 = INT64_MIN;
	static volatile int64_t t47 = 4229452318927LL;

	t47 = ((x189<x190)^(x191%x192));

	if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	uint8_t x194 = UINT8_MAX;
	int64_t x195 = INT64_MAX;
	int64_t x196 = INT64_MIN;

	t48 = ((x193<x194)^(x195%x196));

	if (t48 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static volatile int8_t x198 = INT8_MAX;
	int64_t x199 = INT64_MAX;
	int32_t x200 = -66564;
	volatile int64_t t49 = -483078LL;

	t49 = ((x197<x198)^(x199%x200));

	if (t49 != 1158LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = UINT32_MAX;
	static int64_t x202 = 3688398937390143LL;
	volatile int16_t x203 = 6545;
	int32_t t50 = -88205680;

	t50 = ((x201<x202)^(x203%x204));

	if (t50 != 6544) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 1U;
	int32_t x207 = -1;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = 3272;

	t51 = ((x205<x206)^(x207%x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	volatile int64_t t52 = 288733LL;

	t52 = ((x209<x210)^(x211%x212));

	if (t52 != -2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile uint8_t x214 = 0U;
	int64_t x215 = 0LL;
	int32_t x216 = INT32_MIN;
	volatile int64_t t53 = -170569LL;

	t53 = ((x213<x214)^(x215%x216));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1755;
	uint16_t x218 = 8960U;
	uint32_t x220 = 98164U;
	uint64_t t54 = 42505699144LLU;

	t54 = ((x217<x218)^(x219%x220));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x223 = UINT64_MAX;
	int8_t x224 = INT8_MAX;
	volatile uint64_t t55 = 1753LLU;

	t55 = ((x221<x222)^(x223%x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x227 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	int64_t t56 = 1LL;

	t56 = ((x225<x226)^(x227%x228));

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x231 = UINT64_MAX;
	volatile int32_t x232 = INT32_MAX;
	uint64_t t57 = 10LLU;

	t57 = ((x229<x230)^(x231%x232));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MAX;
	volatile int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t58 = 52486LL;

	t58 = ((x233<x234)^(x235%x236));

	if (t58 != 2147483646LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = INT16_MIN;
	int64_t x238 = 4207638LL;
	volatile int16_t x239 = -1;
	volatile int16_t x240 = INT16_MAX;
	int32_t t59 = 633;

	t59 = ((x237<x238)^(x239%x240));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = 1;
	volatile int64_t x242 = -1LL;
	int32_t x244 = INT32_MIN;
	int32_t t60 = 0;

	t60 = ((x241<x242)^(x243%x244));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	uint8_t x247 = UINT8_MAX;
	volatile uint64_t x248 = 30981LLU;
	volatile uint64_t t61 = 668148LLU;

	t61 = ((x245<x246)^(x247%x248));

	if (t61 != 255LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 29U;
	volatile uint64_t x250 = UINT64_MAX;
	volatile int32_t x251 = -9214547;
	int8_t x252 = 1;
	int32_t t62 = 53162;

	t62 = ((x249<x250)^(x251%x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -1;
	static uint64_t x255 = 1561LLU;
	int32_t x256 = INT32_MAX;
	uint64_t t63 = 54734829322LLU;

	t63 = ((x253<x254)^(x255%x256));

	if (t63 != 1560LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MAX;
	volatile int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	volatile int32_t t64 = 3448678;

	t64 = ((x257<x258)^(x259%x260));

	if (t64 != 15) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = 11094;
	int8_t x263 = 1;
	uint64_t x264 = UINT64_MAX;
	static uint64_t t65 = 511862216153LLU;

	t65 = ((x261<x262)^(x263%x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 17832U;
	static volatile uint32_t x268 = 38U;
	volatile int64_t t66 = -1579479658472LL;

	t66 = ((x265<x266)^(x267%x268));

	if (t66 != 16LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MAX;
	int32_t x271 = 1;

	t67 = ((x269<x270)^(x271%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	volatile int8_t x275 = INT8_MIN;
	static int64_t x276 = -1858246869848327LL;
	static volatile int64_t t68 = -392153991LL;

	t68 = ((x273<x274)^(x275%x276));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 805U;
	uint64_t x279 = UINT64_MAX;

	t69 = ((x277<x278)^(x279%x280));

	if (t69 != 18751628103LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 57696104391404LLU;
	uint16_t x282 = 5499U;
	volatile uint16_t x283 = 112U;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t70 = -35302228;

	t70 = ((x281<x282)^(x283%x284));

	if (t70 != 112) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -18815324417389LL;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -1;
	int32_t t71 = 3642337;

	t71 = ((x285<x286)^(x287%x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 6U;
	int64_t x290 = -1LL;
	uint8_t x291 = 124U;
	uint64_t x292 = UINT64_MAX;

	t72 = ((x289<x290)^(x291%x292));

	if (t72 != 124LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = 1U;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	int8_t x296 = INT8_MIN;
	volatile uint64_t t73 = 34114370856143438LLU;

	t73 = ((x293<x294)^(x295%x296));

	if (t73 != 126LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -101;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 71U;
	int64_t x300 = INT64_MAX;
	volatile int64_t t74 = -527238267334494201LL;

	t74 = ((x297<x298)^(x299%x300));

	if (t74 != 71LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x302 = 0U;
	int32_t t75 = 133003;

	t75 = ((x301<x302)^(x303%x304));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	int32_t t76 = 2;

	t76 = ((x305<x306)^(x307%x308));

	if (t76 != 123) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	int8_t x310 = -3;
	int16_t x311 = -421;
	uint8_t x312 = 12U;
	int32_t t77 = -77;

	t77 = ((x309<x310)^(x311%x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 118569U;
	int8_t x315 = INT8_MIN;
	volatile int64_t t78 = -2702971362009LL;

	t78 = ((x313<x314)^(x315%x316));

	if (t78 != -127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	int64_t x319 = 76322112364359886LL;
	int64_t x320 = INT64_MIN;
	volatile int64_t t79 = 1533224027LL;

	t79 = ((x317<x318)^(x319%x320));

	if (t79 != 76322112364359886LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static int32_t x322 = INT32_MIN;
	volatile int16_t x323 = -1;
	int32_t t80 = 414195050;

	t80 = ((x321<x322)^(x323%x324));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x325 = UINT32_MAX;
	static uint16_t x326 = 223U;
	int32_t x327 = -1;
	uint32_t x328 = 579049148U;
	static volatile uint32_t t81 = 155320U;

	t81 = ((x325<x326)^(x327%x328));

	if (t81 != 241623259U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 17U;
	volatile int64_t x330 = 758751215LL;
	static int64_t x331 = -2342LL;
	int64_t x332 = INT64_MAX;
	volatile int64_t t82 = -12LL;

	t82 = ((x329<x330)^(x331%x332));

	if (t82 != -2341LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 8881U;
	static volatile uint8_t x335 = 21U;
	volatile uint16_t x336 = 2U;
	static volatile int32_t t83 = -2544407;

	t83 = ((x333<x334)^(x335%x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x339 = 1956U;
	static int64_t x340 = -1LL;

	t84 = ((x337<x338)^(x339%x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = 0;
	int32_t x342 = 13715070;
	int32_t x343 = INT32_MAX;
	int32_t x344 = -1;
	volatile int32_t t85 = -7124113;

	t85 = ((x341<x342)^(x343%x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -25;
	volatile int64_t x346 = INT64_MIN;
	uint64_t x347 = 1303646319965506LLU;
	static volatile uint64_t t86 = 154948229LLU;

	t86 = ((x345<x346)^(x347%x348));

	if (t86 != 1303646319965506LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 41;
	int64_t x350 = INT64_MIN;
	uint64_t x351 = 1987993008868LLU;
	uint8_t x352 = 18U;

	t87 = ((x349<x350)^(x351%x352));

	if (t87 != 4LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = -1;
	uint16_t x355 = 17280U;
	int32_t x356 = -80;

	t88 = ((x353<x354)^(x355%x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = 1;
	int64_t x359 = INT64_MIN;
	static int8_t x360 = INT8_MIN;
	int64_t t89 = 23724450894327510LL;

	t89 = ((x357<x358)^(x359%x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x361 = -1;
	int32_t x363 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	uint32_t t90 = 3U;

	t90 = ((x361<x362)^(x363%x364));

	if (t90 != 2147483649U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 3;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = 33339410U;
	static int64_t x368 = -879763929407LL;
	static int64_t t91 = 10175649329666003LL;

	t91 = ((x365<x366)^(x367%x368));

	if (t91 != 33339410LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 4U;
	static uint64_t x370 = 228436446328LLU;
	volatile int32_t x371 = INT32_MIN;
	volatile int32_t t92 = -143300;

	t92 = ((x369<x370)^(x371%x372));

	if (t92 != -276) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MIN;
	int64_t x376 = INT64_MAX;

	t93 = ((x373<x374)^(x375%x376));

	if (t93 != 65534LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x378 = 0U;
	volatile int16_t x379 = INT16_MIN;

	t94 = ((x377<x378)^(x379%x380));

	if (t94 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = 343585141LLU;
	int16_t x382 = -1;
	uint64_t x383 = 5033418547177599LLU;
	int32_t x384 = 575;
	uint64_t t95 = 41324943LLU;

	t95 = ((x381<x382)^(x383%x384));

	if (t95 != 475LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = -1;
	static volatile uint64_t t96 = 179LLU;

	t96 = ((x385<x386)^(x387%x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x390 = 19347185U;
	volatile uint16_t x391 = 98U;
	int32_t t97 = -232;

	t97 = ((x389<x390)^(x391%x392));

	if (t97 != 99) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 6U;
	static int32_t x395 = INT32_MIN;

	t98 = ((x393<x394)^(x395%x396));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	volatile uint16_t x400 = UINT16_MAX;
	int32_t t99 = -797540517;

	t99 = ((x397<x398)^(x399%x400));

	if (t99 != 255) { NG(); } else { ; }
	
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
