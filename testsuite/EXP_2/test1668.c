#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
static int8_t x9 = INT8_MIN;
static volatile int64_t t2 = -388014LL;
uint32_t x14 = UINT32_MAX;
static uint32_t t4 = 26181776U;
static int8_t x21 = INT8_MIN;
static volatile int64_t x24 = INT64_MAX;
volatile int16_t x27 = INT16_MIN;
volatile int32_t t6 = -807476184;
int64_t x29 = -43LL;
int32_t x38 = INT32_MIN;
volatile int64_t t10 = -78337LL;
volatile int32_t x61 = INT32_MAX;
int64_t x66 = INT64_MAX;
uint32_t x67 = UINT32_MAX;
int64_t x73 = INT64_MIN;
static int16_t x76 = INT16_MIN;
int32_t x80 = -1;
volatile int32_t t19 = INT32_MAX;
volatile int32_t t20 = -147;
volatile uint8_t x93 = 3U;
int64_t x95 = -1LL;
int32_t x97 = INT32_MIN;
volatile int32_t t23 = 71;
int16_t x101 = INT16_MIN;
static int64_t x103 = INT64_MIN;
volatile int32_t t24 = 1272;
int32_t x112 = -27430;
int32_t x113 = 26;
int16_t x116 = INT16_MAX;
uint64_t x131 = UINT64_MAX;
uint32_t x137 = UINT32_MAX;
volatile int64_t t33 = -749698209LL;
int32_t x141 = 1;
int32_t x142 = INT32_MAX;
int32_t x143 = INT32_MAX;
static int32_t t36 = -1;
int32_t x154 = INT32_MAX;
int16_t x155 = INT16_MIN;
static volatile int8_t x160 = -1;
int64_t x166 = INT64_MIN;
int64_t t40 = 12016133LL;
int32_t x180 = INT32_MAX;
static volatile int64_t t43 = -242LL;
int8_t x186 = INT8_MIN;
volatile int8_t x187 = INT8_MAX;
volatile int8_t x191 = 1;
int64_t t47 = -39600770223LL;
volatile int16_t x200 = INT16_MAX;
static volatile int32_t t48 = 9065;
static int8_t x201 = INT8_MAX;
int8_t x209 = INT8_MIN;
static int64_t x218 = INT64_MIN;
uint8_t x219 = 10U;
static int16_t x226 = -1;
int32_t t54 = -12;
static uint64_t t56 = 3487LLU;
static uint16_t x241 = 24561U;
volatile int8_t x243 = -1;
int8_t x256 = INT8_MIN;
uint32_t t61 = 699999U;
static int64_t t62 = 817073030731LL;
int8_t x261 = 16;
int8_t x274 = -4;
volatile uint32_t t67 = 46U;
int8_t x284 = INT8_MAX;
int8_t x288 = INT8_MAX;
uint8_t x292 = 1U;
int64_t x293 = INT64_MIN;
static volatile int32_t x302 = INT32_MAX;
int16_t x319 = -1;
static uint8_t x325 = UINT8_MAX;
volatile int32_t t79 = -26;
static int32_t x332 = -1;
volatile int64_t t80 = 202592LL;
volatile int32_t t81 = -325;
int32_t t82 = -5818671;
uint8_t x341 = 62U;
uint32_t x349 = 49275970U;
uint32_t t85 = 162358U;
uint64_t x353 = 11481606260716757LLU;
int8_t x354 = INT8_MIN;
uint64_t x357 = 71LLU;
static volatile int16_t x358 = INT16_MAX;
int16_t x365 = INT16_MIN;
static uint8_t x367 = 2U;
uint64_t x373 = 17LLU;
volatile int32_t t92 = 123;
int16_t x383 = INT16_MAX;
int64_t x384 = INT64_MIN;
int32_t x404 = INT32_MIN;
uint8_t x407 = 49U;
int32_t x408 = 503;
int64_t t99 = -24263188LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = 0U;
	int16_t x3 = -90;
	int16_t x4 = 31;
	int32_t t0 = -993;

	t0 = ((x1|(x2<=x3))/x4);

	if (t0 != -4) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 1;
	uint8_t x6 = UINT8_MAX;
	int8_t x7 = INT8_MAX;
	volatile int32_t t1 = -1900;

	t1 = ((x5|(x6<=x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MAX;

	t2 = ((x9|(x10<=x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1148LL;
	volatile int64_t x15 = INT64_MAX;
	volatile int32_t x16 = INT32_MIN;
	volatile int64_t t3 = -138344935904212446LL;

	t3 = ((x13|(x14<=x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 21102293U;
	volatile int64_t x18 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	uint16_t x20 = 22U;

	t4 = ((x17|(x18<=x19))/x20);

	if (t4 != 959195U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 89842728;
	volatile uint8_t x23 = 6U;
	volatile int64_t t5 = -285540301915LL;

	t5 = ((x21|(x22<=x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	volatile int16_t x28 = -1;

	t6 = ((x25|(x26<=x27))/x28);

	if (t6 != 128) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	static volatile int64_t x31 = INT64_MAX;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = 659LL;

	t7 = ((x29|(x30<=x31))/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	volatile uint64_t x34 = 37800244883LLU;
	uint64_t x35 = 388LLU;
	static int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -6654591;

	t8 = ((x33|(x34<=x35))/x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 3487LLU;
	static int32_t x39 = 1978;
	uint64_t x40 = 18137LLU;
	uint64_t t9 = 2LLU;

	t9 = ((x37|(x38<=x39))/x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = -1;
	static int32_t x43 = INT32_MIN;
	int64_t x44 = -33LL;

	t10 = ((x41|(x42<=x43))/x44);

	if (t10 != -279496122328932600LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 76819353462015121LLU;
	static int64_t x46 = -71062564730LL;
	static uint64_t x47 = 254267LLU;
	uint8_t x48 = UINT8_MAX;
	volatile uint64_t t11 = 89204973134LLU;

	t11 = ((x45|(x46<=x47))/x48);

	if (t11 != 301252366517706LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -130249456;
	volatile int8_t x50 = INT8_MAX;
	int64_t x51 = -1LL;
	int16_t x52 = INT16_MAX;
	int32_t t12 = -6;

	t12 = ((x49|(x50<=x51))/x52);

	if (t12 != -3975) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = 0;
	int16_t x55 = -1745;
	static int32_t x56 = -96056;
	static volatile int32_t t13 = 2493896;

	t13 = ((x53|(x54<=x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = INT16_MAX;
	static int16_t x58 = INT16_MIN;
	volatile int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -965157499;

	t14 = ((x57|(x58<=x59))/x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x62 = 2003658234286519LLU;
	volatile int16_t x63 = -1;
	static uint32_t x64 = 780U;
	uint32_t t15 = 724766U;

	t15 = ((x61|(x62<=x63))/x64);

	if (t15 != 2753184U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 5;
	static volatile int32_t x68 = INT32_MIN;
	static volatile int32_t t16 = 512625940;

	t16 = ((x65|(x66<=x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	volatile int64_t x70 = INT64_MIN;
	static int32_t x71 = -1;
	uint64_t x72 = 785LLU;
	volatile uint64_t t17 = 92LLU;

	t17 = ((x69|(x70<=x71))/x72);

	if (t17 != 23499037033837029LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -1;
	int32_t x75 = -1;
	volatile int64_t t18 = -1441778290LL;

	t18 = ((x73|(x74<=x75))/x76);

	if (t18 != 281474976710655LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = INT32_MIN;
	int8_t x78 = -9;
	int8_t x79 = 63;

	t19 = ((x77|(x78<=x79))/x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = -1;
	int64_t x86 = -3LL;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -467;

	t20 = ((x85|(x86<=x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	static uint64_t x90 = 6625887LLU;
	int16_t x91 = INT16_MAX;
	static int16_t x92 = INT16_MIN;
	volatile int32_t t21 = 1805064;

	t21 = ((x89|(x90<=x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 8396686U;
	static int64_t x96 = -1LL;
	int64_t t22 = 191115LL;

	t22 = ((x93|(x94<=x95))/x96);

	if (t22 != -3LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x98 = INT8_MIN;
	uint64_t x99 = 7LLU;
	int32_t x100 = INT32_MAX;

	t23 = ((x97|(x98<=x99))/x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = -1;
	uint16_t x104 = UINT16_MAX;

	t24 = ((x101|(x102<=x103))/x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = UINT8_MAX;
	int64_t x108 = INT64_MIN;
	static volatile int64_t t25 = 48827872986LL;

	t25 = ((x105|(x106<=x107))/x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = UINT32_MAX;
	volatile uint16_t x110 = 222U;
	volatile int16_t x111 = -1;
	uint32_t t26 = 100438999U;

	t26 = ((x109|(x110<=x111))/x112);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = 590832233470716050LLU;
	int8_t x115 = INT8_MIN;
	volatile int32_t t27 = 677;

	t27 = ((x113|(x114<=x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = 188;
	uint64_t x118 = UINT64_MAX;
	static int16_t x119 = INT16_MIN;
	volatile uint8_t x120 = UINT8_MAX;
	volatile int32_t t28 = -1;

	t28 = ((x117|(x118<=x119))/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x122 = 5;
	int64_t x123 = INT64_MAX;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t29 = -5312538;

	t29 = ((x121|(x122<=x123))/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x125 = -545;
	volatile int32_t x126 = 37325165;
	static int64_t x127 = INT64_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t30 = 23LLU;

	t30 = ((x125|(x126<=x127))/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -1;
	int64_t x130 = 8117869LL;
	int64_t x132 = INT64_MAX;
	volatile int64_t t31 = -329419851500187306LL;

	t31 = ((x129|(x130<=x131))/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 487106365U;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -2109;
	volatile int8_t x136 = 1;
	static volatile uint32_t t32 = 529140U;

	t32 = ((x133|(x134<=x135))/x136);

	if (t32 != 487106365U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x138 = INT64_MAX;
	int32_t x139 = -1;
	static int64_t x140 = 8514921LL;

	t33 = ((x137|(x138<=x139))/x140);

	if (t33 != 504LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x144 = 113;
	volatile int32_t t34 = 5419088;

	t34 = ((x141|(x142<=x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = -1;
	int32_t x146 = 3901618;
	static int64_t x147 = INT64_MIN;
	int8_t x148 = -1;
	int32_t t35 = 45648008;

	t35 = ((x145|(x146<=x147))/x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = 56;
	int64_t x150 = -27782655852LL;
	int32_t x151 = -1;
	int16_t x152 = INT16_MIN;

	t36 = ((x149|(x150<=x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int8_t x156 = INT8_MIN;
	uint64_t t37 = 7693194532583LLU;

	t37 = ((x153|(x154<=x155))/x156);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 2U;
	static uint8_t x158 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	int32_t t38 = -976712;

	t38 = ((x157|(x158<=x159))/x160);

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -45082439793LL;
	uint16_t x162 = 1U;
	int32_t x163 = INT32_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t39 = 256278467LLU;

	t39 = ((x161|(x162<=x163))/x164);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MAX;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 6U;

	t40 = ((x165|(x166<=x167))/x168);

	if (t40 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = INT16_MAX;
	static uint64_t x170 = 2875387820750LLU;
	int16_t x171 = INT16_MAX;
	int32_t x172 = INT32_MIN;
	static int32_t t41 = -1;

	t41 = ((x169|(x170<=x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int16_t x174 = -17;
	uint32_t x175 = UINT32_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t42 = 7;

	t42 = ((x173|(x174<=x175))/x176);

	if (t42 != 516) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = INT64_MAX;
	static int64_t x178 = -1LL;
	uint32_t x179 = 1523020U;

	t43 = ((x177|(x178<=x179))/x180);

	if (t43 != 4294967298LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	static volatile int16_t x182 = INT16_MIN;
	int64_t x183 = -1LL;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t44 = 890238LLU;

	t44 = ((x181|(x182<=x183))/x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 140685815U;
	uint16_t x188 = UINT16_MAX;
	uint32_t t45 = 12U;

	t45 = ((x185|(x186<=x187))/x188);

	if (t45 != 2146U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	uint16_t x190 = UINT16_MAX;
	uint8_t x192 = UINT8_MAX;
	static int32_t t46 = 57;

	t46 = ((x189|(x190<=x191))/x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x193 = 62U;
	static int32_t x194 = INT32_MAX;
	volatile int16_t x195 = -1;
	static int64_t x196 = -1LL;

	t47 = ((x193|(x194<=x195))/x196);

	if (t47 != -62LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	volatile int16_t x198 = INT16_MIN;
	static volatile int32_t x199 = INT32_MIN;

	t48 = ((x197|(x198<=x199))/x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x202 = 330474482U;
	int64_t x203 = INT64_MIN;
	int64_t x204 = -193924379469289366LL;
	int64_t t49 = 4795453LL;

	t49 = ((x201|(x202<=x203))/x204);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x210 = -423;
	volatile int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	static int32_t t50 = 6;

	t50 = ((x209|(x210<=x211))/x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = 1072114155629LL;
	int64_t x214 = INT64_MAX;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;
	int64_t t51 = 340407873576287LL;

	t51 = ((x213|(x214<=x215))/x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 4877;
	int16_t x220 = -3836;
	int32_t t52 = 41634;

	t52 = ((x217|(x218<=x219))/x220);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 3459535694LLU;
	int16_t x222 = 15;
	static int16_t x223 = 539;
	int32_t x224 = 129167;
	uint64_t t53 = 420630LLU;

	t53 = ((x221|(x222<=x223))/x224);

	if (t53 != 26783LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MAX;
	volatile int16_t x227 = -1;
	int32_t x228 = INT32_MAX;

	t54 = ((x225|(x226<=x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = -1LL;
	int8_t x230 = -1;
	static uint16_t x231 = 232U;
	int8_t x232 = -15;
	volatile int64_t t55 = -6154135102181LL;

	t55 = ((x229|(x230<=x231))/x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = UINT64_MAX;
	uint16_t x234 = 2U;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MAX;

	t56 = ((x233|(x234<=x235))/x236);

	if (t56 != 8589934596LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x237 = 539U;
	int16_t x238 = 2;
	volatile int32_t x239 = 374728;
	uint16_t x240 = UINT16_MAX;
	volatile uint32_t t57 = 40167U;

	t57 = ((x237|(x238<=x239))/x240);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = -126;
	uint16_t x244 = 16477U;
	static int32_t t58 = 461;

	t58 = ((x241|(x242<=x243))/x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	uint16_t x246 = 4055U;
	uint64_t x247 = 0LLU;
	int64_t x248 = INT64_MAX;
	static volatile int64_t t59 = 2011221LL;

	t59 = ((x245|(x246<=x247))/x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = INT16_MIN;
	volatile int64_t x251 = -3LL;
	static int32_t x252 = INT32_MIN;
	int32_t t60 = -29;

	t60 = ((x249|(x250<=x251))/x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x253 = 118501287U;
	static int32_t x254 = 7447591;
	int32_t x255 = INT32_MIN;

	t61 = ((x253|(x254<=x255))/x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x257 = INT16_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MIN;
	int64_t x260 = INT64_MIN;

	t62 = ((x257|(x258<=x259))/x260);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x262 = UINT8_MAX;
	static volatile int8_t x263 = 0;
	uint64_t x264 = UINT64_MAX;
	uint64_t t63 = 22885LLU;

	t63 = ((x261|(x262<=x263))/x264);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = INT64_MAX;
	static uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	int64_t x268 = INT64_MIN;
	volatile int64_t t64 = -1446217408LL;

	t64 = ((x265|(x266<=x267))/x268);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	static int8_t x270 = INT8_MAX;
	int32_t x271 = INT32_MIN;
	static int8_t x272 = INT8_MAX;
	volatile int64_t t65 = 210044798663846619LL;

	t65 = ((x269|(x270<=x271))/x272);

	if (t65 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = INT8_MIN;
	int64_t x275 = -1LL;
	uint8_t x276 = 1U;
	volatile int32_t t66 = 284214286;

	t66 = ((x273|(x274<=x275))/x276);

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = 82U;
	static int8_t x278 = INT8_MIN;
	static int64_t x279 = -16512912LL;
	static uint32_t x280 = 14U;

	t67 = ((x277|(x278<=x279))/x280);

	if (t67 != 5U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 493815U;
	static uint32_t x283 = 1486230U;
	static int32_t t68 = 26532;

	t68 = ((x281|(x282<=x283))/x284);

	if (t68 != 516) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -1;
	static int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int32_t t69 = -1347145;

	t69 = ((x285|(x286<=x287))/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -1;
	uint64_t x290 = 169339590023500162LLU;
	volatile uint64_t x291 = UINT64_MAX;
	int32_t t70 = 4114447;

	t70 = ((x289|(x290<=x291))/x292);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	int32_t x296 = -3454;
	volatile int64_t t71 = -357462642442431052LL;

	t71 = ((x293|(x294<=x295))/x296);

	if (t71 != 2670345117792349LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	volatile int64_t x298 = INT64_MIN;
	uint64_t x299 = 12326LLU;
	uint32_t x300 = 9446403U;
	uint32_t t72 = 3751272U;

	t72 = ((x297|(x298<=x299))/x300);

	if (t72 != 454U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t73 = -803409555;

	t73 = ((x301|(x302<=x303))/x304);

	if (t73 != -65538) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = 4;
	static uint8_t x306 = 1U;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = 781LLU;
	volatile uint64_t t74 = 122618129478LLU;

	t74 = ((x305|(x306<=x307))/x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MIN;
	static uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 107023LLU;
	volatile int8_t x312 = -1;
	int64_t t75 = INT64_MAX;

	t75 = ((x309|(x310<=x311))/x312);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x313 = -1;
	int8_t x314 = INT8_MAX;
	uint64_t x315 = 2296141432LLU;
	int64_t x316 = -244LL;
	static int64_t t76 = 5LL;

	t76 = ((x313|(x314<=x315))/x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MIN;
	int16_t x318 = INT16_MIN;
	int8_t x320 = -1;
	int32_t t77 = -56218;

	t77 = ((x317|(x318<=x319))/x320);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = -74105LL;
	int64_t t78 = 260LL;

	t78 = ((x321|(x322<=x323))/x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x326 = 2037U;
	uint8_t x327 = 35U;
	uint8_t x328 = UINT8_MAX;

	t79 = ((x325|(x326<=x327))/x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -1LL;
	static uint8_t x330 = 0U;
	int64_t x331 = INT64_MAX;

	t80 = ((x329|(x330<=x331))/x332);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x333 = 11483U;
	int16_t x334 = INT16_MIN;
	int64_t x335 = 12LL;
	volatile uint8_t x336 = UINT8_MAX;

	t81 = ((x333|(x334<=x335))/x336);

	if (t81 != 45) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 0U;
	int16_t x338 = 1;
	int8_t x339 = -3;
	int16_t x340 = 3;

	t82 = ((x337|(x338<=x339))/x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x342 = INT64_MIN;
	volatile int8_t x343 = -32;
	int32_t x344 = INT32_MAX;
	static int32_t t83 = 1;

	t83 = ((x341|(x342<=x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x345 = 3U;
	static int16_t x346 = INT16_MIN;
	static int32_t x347 = INT32_MAX;
	static volatile int64_t x348 = -352LL;
	int64_t t84 = 48312LL;

	t84 = ((x345|(x346<=x347))/x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x350 = 2095;
	int32_t x351 = -18209;
	uint8_t x352 = UINT8_MAX;

	t85 = ((x349|(x350<=x351))/x352);

	if (t85 != 193239U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x355 = INT64_MAX;
	volatile int64_t x356 = -1LL;
	volatile uint64_t t86 = 4550LLU;

	t86 = ((x353|(x354<=x355))/x356);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x359 = INT16_MIN;
	static uint16_t x360 = UINT16_MAX;
	uint64_t t87 = 9LLU;

	t87 = ((x357|(x358<=x359))/x360);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = 23U;
	static int32_t x362 = INT32_MIN;
	int8_t x363 = 2;
	volatile int8_t x364 = -1;
	static volatile int32_t t88 = -7436048;

	t88 = ((x361|(x362<=x363))/x364);

	if (t88 != -23) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x366 = -230760;
	static int8_t x368 = INT8_MAX;
	static volatile int32_t t89 = 13;

	t89 = ((x365|(x366<=x367))/x368);

	if (t89 != -258) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = UINT8_MAX;
	volatile int16_t x371 = 1530;
	int8_t x372 = INT8_MIN;
	volatile int32_t t90 = 279;

	t90 = ((x369|(x370<=x371))/x372);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x374 = 7332U;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 1;
	volatile uint64_t t91 = 4287242746LLU;

	t91 = ((x373|(x374<=x375))/x376);

	if (t91 != 17LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -1;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = 3152920;
	volatile int8_t x380 = -15;

	t92 = ((x377|(x378<=x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = -11947;
	volatile int64_t t93 = 586LL;

	t93 = ((x381|(x382<=x383))/x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 1079419990316LLU;
	volatile int32_t x387 = INT32_MAX;
	volatile int16_t x388 = INT16_MIN;
	int32_t t94 = 775846672;

	t94 = ((x385|(x386<=x387))/x388);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x389 = INT8_MIN;
	int32_t x390 = INT32_MAX;
	int16_t x391 = -1;
	static int8_t x392 = INT8_MIN;
	int32_t t95 = 27;

	t95 = ((x389|(x390<=x391))/x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static int32_t x394 = -22;
	static uint16_t x395 = 2041U;
	static volatile uint64_t x396 = UINT64_MAX;
	uint64_t t96 = 230520104277426701LLU;

	t96 = ((x393|(x394<=x395))/x396);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x397 = INT64_MIN;
	static uint32_t x398 = UINT32_MAX;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MAX;
	int64_t t97 = 915080431183568LL;

	t97 = ((x397|(x398<=x399))/x400);

	if (t97 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x401 = 39192U;
	uint64_t x402 = 21499323LLU;
	int32_t x403 = -1;
	uint32_t t98 = 46U;

	t98 = ((x401|(x402<=x403))/x404);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = -1LL;
	volatile int32_t x406 = INT32_MIN;

	t99 = ((x405|(x406<=x407))/x408);

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
