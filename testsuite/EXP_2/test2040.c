#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -610251;
uint16_t x9 = 3U;
volatile int16_t x15 = 218;
volatile uint32_t t3 = UINT32_MAX;
int8_t x22 = -1;
int8_t x27 = 47;
uint32_t x29 = 1098948U;
int8_t x30 = INT8_MIN;
int16_t x34 = -1;
volatile uint16_t x37 = UINT16_MAX;
int32_t x42 = 199073;
int8_t x47 = 0;
uint64_t t11 = 414418LLU;
static int8_t x53 = INT8_MAX;
uint8_t x54 = 35U;
int32_t t12 = 19711699;
int32_t x58 = 6;
uint16_t x60 = UINT16_MAX;
uint8_t x73 = UINT8_MAX;
int64_t x74 = -1LL;
int32_t x75 = 2315;
int8_t x81 = INT8_MIN;
int64_t x87 = -1LL;
int8_t x96 = 14;
int16_t x97 = INT16_MIN;
static uint32_t x105 = 254169U;
volatile int16_t x106 = INT16_MIN;
int8_t x109 = -1;
int64_t t25 = -2048494432LL;
int64_t x131 = INT64_MIN;
volatile int16_t x132 = INT16_MAX;
int8_t x136 = INT8_MIN;
static volatile uint8_t x143 = 7U;
uint16_t x144 = 31U;
int64_t x146 = INT64_MIN;
int32_t x147 = -1;
uint8_t x149 = 0U;
uint32_t t34 = UINT32_MAX;
int16_t x159 = -1;
int8_t x164 = -1;
static int16_t x165 = INT16_MIN;
volatile int8_t x173 = -1;
int8_t x178 = INT8_MIN;
uint32_t x189 = 75768083U;
uint32_t t42 = 53256U;
volatile int16_t x194 = INT16_MAX;
static uint64_t x195 = 8454550744429LLU;
uint16_t x203 = 42U;
uint16_t x204 = 4U;
int8_t x207 = -1;
int64_t t47 = INT64_MAX;
static int32_t t48 = -2;
volatile int8_t x221 = 4;
static int16_t x234 = -924;
uint64_t x239 = 5446875996876LLU;
uint64_t t54 = 14800LLU;
uint8_t x247 = 42U;
uint16_t x250 = 77U;
volatile uint16_t x251 = UINT16_MAX;
volatile int16_t x256 = INT16_MIN;
static int32_t x257 = -1;
volatile uint64_t t58 = UINT64_MAX;
int8_t x262 = INT8_MAX;
int8_t x263 = 1;
int64_t x264 = INT64_MAX;
int8_t x266 = -1;
static int64_t x269 = INT64_MAX;
static uint32_t x270 = 1025642223U;
int64_t x272 = -475529350LL;
uint64_t t61 = 83593536004834532LLU;
int16_t x276 = 7650;
volatile int32_t x281 = 10120;
static uint32_t t63 = UINT32_MAX;
volatile int32_t x289 = -5016;
int32_t x292 = INT32_MIN;
int16_t x298 = -257;
int64_t x301 = -1LL;
static volatile int64_t t68 = -103736627472LL;
static volatile uint32_t x313 = 2163553U;
uint32_t x318 = 58U;
volatile int32_t x319 = -4;
uint8_t x325 = 1U;
volatile int32_t t73 = 472484306;
uint64_t x334 = 1220184240599904177LLU;
static volatile int16_t x336 = -1308;
volatile uint64_t t74 = 64LLU;
volatile uint32_t x354 = 0U;
int64_t x366 = -1LL;
int64_t x369 = -1LL;
uint8_t x376 = UINT8_MAX;
int16_t x378 = -7334;
int8_t x379 = -1;
volatile int32_t t81 = 85500597;
int32_t x385 = 27066;
static volatile uint64_t t84 = 13177478072357196LLU;
static int32_t x397 = INT32_MIN;
uint32_t x407 = 5U;
int64_t x412 = -485LL;
static uint64_t x413 = UINT64_MAX;
uint64_t x414 = 1160752942846LLU;
volatile uint64_t t89 = 55366777LLU;
volatile uint8_t x417 = UINT8_MAX;
int16_t x432 = -1;
volatile uint64_t t93 = 20598856137850953LLU;
int16_t x437 = INT16_MIN;
static int64_t x448 = INT64_MAX;
int64_t x450 = -1LL;
static int64_t t97 = 9149509946875LL;
uint16_t x454 = 12U;
volatile int64_t x457 = 11601129023LL;


void f0(void) {
	static int32_t x5 = 33515168;
	int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = 5651;

	t0 = ((x5+(x6^x7))|x8);

	if (t0 != 33519539) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = 1289;
	int64_t x11 = INT64_MAX;
	int8_t x12 = 5;
	volatile int64_t t1 = -49644794203749639LL;

	t1 = ((x9+(x10^x11))|x12);

	if (t1 != 9223372036854774525LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -1;
	volatile uint64_t x14 = 6040227998572LLU;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t2 = 3LLU;

	t2 = ((x13+(x14^x15))|x16);

	if (t2 != 6040227998719LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 16U;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;

	t3 = ((x17+(x18^x19))|x20);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MIN;
	volatile int32_t x23 = INT32_MIN;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t4 = 1452888981202LL;

	t4 = ((x21+(x22^x23))|x24);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -6;
	uint16_t x26 = UINT16_MAX;
	int32_t x28 = 11631;
	int32_t t5 = 428832;

	t5 = ((x25+(x26^x27))|x28);

	if (t5 != 65519) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x31 = -64852;
	volatile uint16_t x32 = 8U;
	uint32_t t6 = 7U;

	t6 = ((x29+(x30^x31))|x32);

	if (t6 != 1163768U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int16_t x35 = -1;
	uint64_t x36 = 211LLU;
	volatile uint64_t t7 = 7183456072LLU;

	t7 = ((x33+(x34^x35))|x36);

	if (t7 != 18446744071562068179LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x38 = 68U;
	static uint8_t x39 = 0U;
	int64_t x40 = INT64_MIN;
	int64_t t8 = 216LL;

	t8 = ((x37+(x38^x39))|x40);

	if (t8 != -9223372036854710205LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MAX;
	int32_t x43 = 936992883;
	static volatile int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 3521119;

	t9 = ((x41+(x42^x43))|x44);

	if (t9 != -5551) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x45 = INT32_MAX;
	static int32_t x46 = -1;
	static int16_t x48 = 33;
	volatile int32_t t10 = INT32_MAX;

	t10 = ((x45+(x46^x47))|x48);

	if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int32_t x50 = INT32_MIN;
	static uint64_t x51 = 10070097LLU;
	uint8_t x52 = UINT8_MAX;

	t11 = ((x49+(x50^x51))|x52);

	if (t11 != 18446744071572138239LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = INT8_MIN;
	uint8_t x56 = 1U;

	t12 = ((x53+(x54^x55))|x56);

	if (t12 != 35) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x57 = UINT64_MAX;
	volatile int32_t x59 = INT32_MIN;
	volatile uint64_t t13 = 762903793834LLU;

	t13 = ((x57+(x58^x59))|x60);

	if (t13 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x61 = UINT64_MAX;
	static volatile int16_t x62 = -1;
	int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x61+(x62^x63))|x64);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	volatile int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -1;
	int64_t x68 = -268LL;
	int64_t t15 = 1676LL;

	t15 = ((x65+(x66^x67))|x68);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x76 = 1U;
	int64_t t16 = 25941307998114LL;

	t16 = ((x73+(x74^x75))|x76);

	if (t16 != -2061LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = UINT64_MAX;
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MIN;
	volatile int32_t x80 = -1;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x77+(x78^x79))|x80);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x82 = INT16_MIN;
	int32_t x83 = -127462311;
	int32_t x84 = INT32_MAX;
	static int32_t t18 = INT32_MAX;

	t18 = ((x81+(x82^x83))|x84);

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x85 = 6006;
	int64_t x86 = 9755159036LL;
	volatile uint32_t x88 = 72U;
	int64_t t19 = -14378LL;

	t19 = ((x85+(x86^x87))|x88);

	if (t19 != -9755153031LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = UINT16_MAX;
	static uint16_t x90 = 3596U;
	int32_t x91 = -1;
	int64_t x92 = INT64_MAX;
	int64_t t20 = INT64_MAX;

	t20 = ((x89+(x90^x91))|x92);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -3;
	volatile int16_t x94 = -1;
	uint8_t x95 = 2U;
	int32_t t21 = 2383;

	t21 = ((x93+(x94^x95))|x96);

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x98 = INT64_MAX;
	int64_t x99 = -137622481918045LL;
	volatile uint16_t x100 = UINT16_MAX;
	static int64_t t22 = 3348890LL;

	t22 = ((x97+(x98^x99))|x100);

	if (t22 != -9223234414372847617LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MAX;
	static volatile int64_t x102 = -1141228039217324496LL;
	static uint64_t x103 = 1LLU;
	static uint64_t x104 = 1LLU;
	volatile uint64_t t23 = 17LLU;

	t23 = ((x101+(x102^x103))|x104);

	if (t23 != 17305516036639710769LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x107 = 481720U;
	int16_t x108 = INT16_MIN;
	volatile uint32_t t24 = 403U;

	t24 = ((x105+(x106^x107))|x108);

	if (t24 != 4294949521U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x110 = -86867353;
	int8_t x111 = INT8_MAX;
	static int64_t x112 = -13854LL;

	t25 = ((x109+(x110^x111))|x112);

	if (t25 != -13321LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 0LLU;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = -39;
	uint64_t t26 = UINT64_MAX;

	t26 = ((x121+(x122^x123))|x124);

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	volatile int32_t x126 = -251825;
	uint8_t x127 = 0U;
	int64_t x128 = 3536168101894447LL;
	volatile int64_t t27 = 11LL;

	t27 = ((x125+(x126^x127))|x128);

	if (t27 != -229393LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MAX;
	int64_t t28 = -1704993061251LL;

	t28 = ((x129+(x130^x131))|x132);

	if (t28 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = -1;
	volatile uint64_t x134 = 8388131809211409LLU;
	int16_t x135 = -1;
	volatile uint64_t t29 = 140LLU;

	t29 = ((x133+(x134^x135))|x136);

	if (t29 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 12944;
	uint8_t x138 = 0U;
	int32_t x139 = -8339979;
	volatile uint64_t x140 = 133LLU;
	static uint64_t t30 = 191LLU;

	t30 = ((x137+(x138^x139))|x140);

	if (t30 != 18446744073701224581LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	static volatile uint16_t x142 = 51U;
	int32_t t31 = 669293618;

	t31 = ((x141+(x142^x143))|x144);

	if (t31 != 65599) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x145 = UINT64_MAX;
	volatile int64_t x148 = INT64_MAX;
	static volatile uint64_t t32 = 5098399LLU;

	t32 = ((x145+(x146^x147))|x148);

	if (t32 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x150 = -2399258;
	int32_t x151 = INT32_MIN;
	static int16_t x152 = INT16_MIN;
	int32_t t33 = 0;

	t33 = ((x149+(x150^x151))|x152);

	if (t33 != -7194) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = 14476176;
	volatile uint16_t x154 = UINT16_MAX;
	uint32_t x155 = 13076292U;
	int32_t x156 = -1;

	t34 = ((x153+(x154^x155))|x156);

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x157 = UINT64_MAX;
	uint32_t x158 = 4057U;
	uint64_t x160 = UINT64_MAX;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = ((x157+(x158^x159))|x160);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = -1;
	volatile uint64_t x162 = UINT64_MAX;
	int64_t x163 = -1LL;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x161+(x162^x163))|x164);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x166 = INT16_MIN;
	static int16_t x167 = INT16_MAX;
	volatile int16_t x168 = -12996;
	int32_t t37 = 98;

	t37 = ((x165+(x166^x167))|x168);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x169 = 3106645937997285LLU;
	volatile int8_t x170 = INT8_MIN;
	int8_t x171 = 0;
	int16_t x172 = INT16_MAX;
	volatile uint64_t t38 = 27457856LLU;

	t38 = ((x169+(x170^x171))|x172);

	if (t38 != 3106645938012159LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x174 = -52;
	int8_t x175 = 1;
	uint16_t x176 = UINT16_MAX;
	int32_t t39 = -6723;

	t39 = ((x173+(x174^x175))|x176);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x177+(x178^x179))|x180);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x185 = INT64_MAX;
	int64_t x186 = -1LL;
	volatile int8_t x187 = INT8_MAX;
	uint32_t x188 = UINT32_MAX;
	int64_t t41 = INT64_MAX;

	t41 = ((x185+(x186^x187))|x188);

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = 10U;
	int8_t x191 = -1;
	uint8_t x192 = 1U;

	t42 = ((x189+(x190^x191))|x192);

	if (t42 != 75768073U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x193 = INT64_MIN;
	uint64_t x196 = 8960300173548027LLU;
	static uint64_t t43 = 562644610868665LLU;

	t43 = ((x193+(x194^x195))|x196);

	if (t43 != 9232335223415299067LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = UINT16_MAX;
	int32_t x198 = -1;
	static uint8_t x199 = 2U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t44 = 1216775;

	t44 = ((x197+(x198^x199))|x200);

	if (t44 != -2147418116) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int64_t x202 = INT64_MAX;
	static uint64_t t45 = 1LLU;

	t45 = ((x201+(x202^x203))|x204);

	if (t45 != 9223372036854775764LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x205 = 469178817LLU;
	static int8_t x206 = INT8_MAX;
	uint8_t x208 = 16U;
	uint64_t t46 = 215340628986742473LLU;

	t46 = ((x205+(x206^x207))|x208);

	if (t46 != 469178705LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x209 = 296U;
	volatile uint8_t x210 = 1U;
	uint8_t x211 = 1U;
	int64_t x212 = INT64_MAX;

	t47 = ((x209+(x210^x211))|x212);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MAX;
	int8_t x214 = INT8_MAX;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 9U;

	t48 = ((x213+(x214^x215))|x216);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x222 = INT16_MIN;
	int16_t x223 = 1;
	volatile uint64_t x224 = 8635816669883066LLU;
	volatile uint64_t t49 = 5626883LLU;

	t49 = ((x221+(x222^x223))|x224);

	if (t49 != 18446744073709529791LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x225 = -1;
	volatile int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MAX;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t50 = -1599308;

	t50 = ((x225+(x226^x227))|x228);

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = INT64_MAX;
	int64_t x230 = -3421179LL;
	int8_t x231 = INT8_MAX;
	static uint8_t x232 = UINT8_MAX;
	int64_t t51 = 102652129737LL;

	t51 = ((x229+(x230^x231))|x232);

	if (t51 != 9223372036851354879LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = 13U;
	volatile int32_t t52 = -28551712;

	t52 = ((x233+(x234^x235))|x236);

	if (t52 != 31725) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = -1LL;
	int32_t x240 = -1;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = ((x237+(x238^x239))|x240);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = 24;
	uint64_t x242 = 1277LLU;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = INT8_MIN;

	t54 = ((x241+(x242^x243))|x244);

	if (t54 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = -163123703;
	volatile uint32_t x248 = 1043974U;
	volatile uint32_t t55 = 181U;

	t55 = ((x245+(x246^x247))|x248);

	if (t55 != 4132433574U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x249 = 18233U;
	int64_t x252 = INT64_MIN;
	volatile int64_t t56 = 21877078934LL;

	t56 = ((x249+(x250^x251))|x252);

	if (t56 != -9223372036854692117LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x253 = -1;
	int64_t x254 = -34653906933269048LL;
	int32_t x255 = INT32_MAX;
	int64_t t57 = 725896577284674210LL;

	t57 = ((x253+(x254^x255))|x256);

	if (t57 != -15818LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x258 = -942;
	uint64_t x259 = 1039649LLU;
	uint64_t x260 = UINT64_MAX;

	t58 = ((x257+(x258^x259))|x260);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x261 = 649U;
	int64_t t59 = INT64_MAX;

	t59 = ((x261+(x262^x263))|x264);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x265 = INT64_MIN;
	int32_t x267 = -1;
	static int32_t x268 = -1;
	volatile int64_t t60 = -102907058047354LL;

	t60 = ((x265+(x266^x267))|x268);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x271 = UINT64_MAX;

	t61 = ((x269+(x270^x271))|x272);

	if (t61 != 18446744073239789439LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x273 = INT8_MIN;
	int8_t x274 = -18;
	int32_t x275 = INT32_MIN;
	volatile int32_t t62 = 3793;

	t62 = ((x273+(x274^x275))|x276);

	if (t62 != 2147483630) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x282 = INT8_MAX;
	int32_t x283 = -1;
	static uint32_t x284 = UINT32_MAX;

	t63 = ((x281+(x282^x283))|x284);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x285 = INT32_MIN;
	volatile uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 1U;
	int64_t x288 = 38238983762495LL;
	int64_t t64 = -48153LL;

	t64 = ((x285+(x286^x287))|x288);

	if (t64 != 38241131246335LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x290 = 3991;
	int16_t x291 = INT16_MIN;
	volatile int32_t t65 = -56;

	t65 = ((x289+(x290^x291))|x292);

	if (t65 != -33793) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 36U;
	volatile int64_t x294 = 50LL;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -6808210459937386LL;
	int64_t t66 = -119LL;

	t66 = ((x293+(x294^x295))|x296);

	if (t66 != -101009962LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x297 = -1;
	uint64_t x299 = UINT64_MAX;
	int16_t x300 = -1375;
	volatile uint64_t t67 = 1161110652132LLU;

	t67 = ((x297+(x298^x299))|x300);

	if (t67 != 18446744073709550335LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x302 = -129018034513LL;
	uint8_t x303 = 2U;
	uint32_t x304 = UINT32_MAX;

	t68 = ((x301+(x302^x303))|x304);

	if (t68 != -128849018881LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int16_t x310 = INT16_MIN;
	static uint8_t x311 = 30U;
	volatile int32_t x312 = INT32_MIN;
	static int32_t t69 = 1;

	t69 = ((x309+(x310^x311))|x312);

	if (t69 != -2147483619) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x314 = -99335LL;
	static int8_t x315 = 17;
	int8_t x316 = INT8_MAX;
	int64_t t70 = 2193268240957LL;

	t70 = ((x313+(x314^x315))|x316);

	if (t70 != 2064255LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x320 = 19U;
	uint32_t t71 = 68040776U;

	t71 = ((x317+(x318^x319))|x320);

	if (t71 != 4294967127U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x326 = INT16_MIN;
	uint32_t x327 = 885169333U;
	int16_t x328 = INT16_MAX;
	uint32_t t72 = 2090301U;

	t72 = ((x325+(x326^x327))|x328);

	if (t72 != 3409805311U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = -1;
	int32_t x330 = INT32_MAX;
	static volatile uint16_t x331 = 5U;
	int8_t x332 = INT8_MIN;

	t73 = ((x329+(x330^x331))|x332);

	if (t73 != -7) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x333 = 284U;
	uint8_t x335 = 17U;

	t74 = ((x333+(x334^x335))|x336);

	if (t74 != 18446744073709550332LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x353 = -1;
	uint16_t x355 = UINT16_MAX;
	int64_t x356 = INT64_MAX;
	volatile int64_t t75 = INT64_MAX;

	t75 = ((x353+(x354^x355))|x356);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = -1LL;
	uint8_t x358 = 12U;
	uint64_t x359 = UINT64_MAX;
	uint64_t x360 = 5558084387960311438LLU;
	volatile uint64_t t76 = 5774441LLU;

	t76 = ((x357+(x358^x359))|x360);

	if (t76 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x361 = UINT8_MAX;
	int16_t x362 = 1;
	volatile int32_t x363 = 13624435;
	int8_t x364 = INT8_MIN;
	int32_t t77 = -109541;

	t77 = ((x361+(x362^x363))|x364);

	if (t77 != -15) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x365 = INT64_MAX;
	uint8_t x367 = 20U;
	int64_t x368 = INT64_MIN;
	volatile int64_t t78 = 1828103012123946LL;

	t78 = ((x365+(x366^x367))|x368);

	if (t78 != -22LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x370 = 13U;
	uint32_t x371 = 13789165U;
	uint8_t x372 = 52U;
	volatile int64_t t79 = -48264678648LL;

	t79 = ((x369+(x370^x371))|x372);

	if (t79 != 13789183LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = 23;
	int32_t x375 = INT32_MAX;
	int32_t t80 = INT32_MAX;

	t80 = ((x373+(x374^x375))|x376);

	if (t80 != INT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x377 = INT16_MAX;
	volatile int8_t x380 = INT8_MIN;

	t81 = ((x377+(x378^x379))|x380);

	if (t81 != -92) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x382 = 564219021734683624LLU;
	int64_t x383 = -268LL;
	static uint32_t x384 = UINT32_MAX;
	volatile uint64_t t82 = 13681668169LLU;

	t82 = ((x381+(x382^x383))|x384);

	if (t82 != 8659153019381743615LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x386 = 40U;
	int16_t x387 = 121;
	static uint32_t x388 = 1U;
	uint32_t t83 = 18U;

	t83 = ((x385+(x386^x387))|x388);

	if (t83 != 27147U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x393 = INT32_MAX;
	static int8_t x394 = -1;
	uint64_t x395 = 791586785440LLU;
	static volatile int32_t x396 = INT32_MIN;

	t84 = ((x393+(x394^x395))|x396);

	if (t84 != 18446744072396748638LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x398 = -586164;
	int8_t x399 = INT8_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t85 = 106608103;

	t85 = ((x397+(x398^x399))|x400);

	if (t85 != -3636) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x401 = 0;
	volatile int8_t x402 = 7;
	static int32_t x403 = 3179168;
	int8_t x404 = INT8_MAX;
	static volatile int32_t t86 = 7326;

	t86 = ((x401+(x402^x403))|x404);

	if (t86 != 3179263) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MIN;
	static int64_t x408 = INT64_MIN;
	int64_t t87 = -22882114456102LL;

	t87 = ((x405+(x406^x407))|x408);

	if (t87 != -9223372032559808635LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int32_t x410 = INT32_MIN;
	static volatile int64_t x411 = INT64_MAX;
	volatile int64_t t88 = -15523LL;

	t88 = ((x409+(x410^x411))|x412);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x415 = 12592;
	static int64_t x416 = INT64_MAX;

	t89 = ((x413+(x414^x415))|x416);

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x418 = 16134233LLU;
	volatile int16_t x419 = 1965;
	uint16_t x420 = UINT16_MAX;
	static uint64_t t90 = 252256054054LLU;

	t90 = ((x417+(x418^x419))|x420);

	if (t90 != 16187391LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = INT16_MAX;
	uint8_t x426 = UINT8_MAX;
	uint8_t x427 = UINT8_MAX;
	static int8_t x428 = INT8_MAX;
	volatile int32_t t91 = 136;

	t91 = ((x425+(x426^x427))|x428);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x429 = 4142080;
	static int32_t x430 = 0;
	uint32_t x431 = 211586837U;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = ((x429+(x430^x431))|x432);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x433 = INT64_MAX;
	uint64_t x434 = 38LLU;
	uint32_t x435 = UINT32_MAX;
	static uint32_t x436 = 17U;

	t93 = ((x433+(x434^x435))|x436);

	if (t93 != 9223372041149743065LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x438 = 353;
	int8_t x439 = -38;
	int16_t x440 = -1530;
	static volatile int32_t t94 = -2061999;

	t94 = ((x437+(x438^x439))|x440);

	if (t94 != -321) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	uint8_t x443 = 6U;
	int8_t x444 = -1;
	int32_t t95 = 65;

	t95 = ((x441+(x442^x443))|x444);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = INT32_MIN;
	static int64_t x446 = 0LL;
	static volatile int16_t x447 = INT16_MIN;
	int64_t t96 = 3673934225LL;

	t96 = ((x445+(x446^x447))|x448);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 1870U;
	int32_t x451 = INT32_MIN;
	static int8_t x452 = 3;

	t97 = ((x449+(x450^x451))|x452);

	if (t97 != 2147485519LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x453 = INT16_MIN;
	int32_t x455 = -14010659;
	static int8_t x456 = 7;
	int32_t t98 = -824;

	t98 = ((x453+(x454^x455))|x456);

	if (t98 != -14043433) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x458 = INT8_MAX;
	uint8_t x459 = 92U;
	int32_t x460 = INT32_MAX;
	int64_t t99 = -153791113537LL;

	t99 = ((x457+(x458^x459))|x460);

	if (t99 != 12884901887LL) { NG(); } else { ; }
	
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
