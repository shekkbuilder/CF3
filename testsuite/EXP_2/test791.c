
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t t0 = 0;
int8_t x9 = -16;
static int8_t x10 = -1;
uint64_t x18 = UINT64_MAX;
volatile uint8_t x19 = 1U;
uint64_t x24 = 569860LLU;
volatile uint16_t x26 = 5U;
volatile int32_t x29 = INT32_MIN;
int64_t x35 = 384999922498543LL;
static uint8_t x38 = UINT8_MAX;
uint64_t x49 = UINT64_MAX;
volatile int32_t t10 = -903;
volatile int32_t t11 = -7;
int64_t x60 = -56743962271046LL;
int32_t t13 = 208762;
volatile int16_t x81 = INT16_MIN;
volatile int32_t t16 = -312;
int64_t x91 = 39670LL;
int32_t t17 = 10;
static uint8_t x102 = 31U;
volatile int32_t x103 = INT32_MIN;
int8_t x105 = INT8_MIN;
volatile int32_t t24 = -549;
int32_t x125 = -1;
static int64_t x128 = -1LL;
int64_t x131 = 2552LL;
int32_t t27 = -555155495;
int32_t t28 = -4372;
static int32_t x138 = -67138310;
static uint8_t x141 = 2U;
int64_t x150 = INT64_MAX;
int8_t x154 = 1;
uint32_t x163 = 8074124U;
int64_t x165 = INT64_MIN;
volatile uint16_t x171 = UINT16_MAX;
int16_t x172 = -1;
static uint16_t x181 = UINT16_MAX;
int16_t x183 = INT16_MAX;
int16_t x186 = -425;
int64_t x187 = -46121298780720851LL;
volatile int32_t t38 = -63193799;
static volatile int32_t t39 = 85;
volatile int32_t t40 = -1693;
int16_t x202 = INT16_MAX;
int64_t x203 = -1LL;
int64_t x206 = 104332017177048634LL;
static int8_t x207 = INT8_MIN;
int32_t t44 = 2134517;
volatile int32_t t46 = -505;
int32_t x227 = INT32_MAX;
int32_t x228 = INT32_MIN;
static volatile int16_t x231 = -201;
volatile uint16_t x235 = UINT16_MAX;
int32_t t49 = -2144579;
volatile int32_t t52 = 364277881;
int16_t x254 = 0;
int32_t x258 = -1;
volatile int32_t x259 = -1;
int32_t t54 = 5949681;
uint32_t x281 = 9U;
volatile int64_t x283 = 176431772327849LL;
int64_t x286 = -3862110808653883LL;
int32_t x290 = 87195124;
int32_t t61 = 344124;
int16_t x293 = -1;
int32_t t62 = 25186365;
int32_t x306 = INT32_MAX;
volatile uint16_t x310 = 3U;
int8_t x312 = INT8_MAX;
int8_t x318 = INT8_MAX;
static uint64_t x319 = UINT64_MAX;
static int32_t t68 = 338287;
static volatile uint64_t x325 = 1394806525LLU;
volatile int32_t t69 = -31711;
uint32_t x334 = 917532194U;
volatile int8_t x335 = -1;
uint32_t x346 = 54476906U;
static volatile int32_t t75 = -1683;
static int16_t x353 = 29;
static int64_t x364 = -24075891281172LL;
int32_t t80 = -1;
static int16_t x388 = -1;
volatile int32_t t83 = -77;
uint64_t x391 = 236714LLU;
static volatile int8_t x395 = 21;
static volatile int32_t t85 = -3;
uint32_t x404 = UINT32_MAX;
uint64_t x407 = 2621530107790824641LLU;
uint64_t x409 = 1034627407935555334LLU;
static int8_t x425 = INT8_MAX;
int32_t x426 = 11;
int64_t x427 = INT64_MIN;
volatile int32_t t91 = 90;
int8_t x431 = INT8_MIN;
int64_t x433 = 14617LL;
static int32_t t94 = 0;
int8_t x442 = 22;
int64_t x444 = INT64_MIN;
static int32_t t96 = 28047;
int32_t x454 = INT32_MIN;
volatile int32_t x461 = 19414031;
static int16_t x464 = INT16_MIN;
int32_t t100 = 0;
int32_t x471 = 5407170;
uint8_t x473 = 9U;
volatile uint64_t x474 = 59LLU;
int32_t t104 = -4735419;
volatile int32_t x485 = INT32_MIN;
volatile int32_t t106 = 1205;
static int8_t x494 = -1;
volatile int32_t x496 = INT32_MIN;
uint32_t x503 = 38720603U;
static int8_t x505 = INT8_MIN;
volatile int64_t x508 = -1LL;
int8_t x514 = INT8_MAX;
static int32_t t113 = 24241;
int16_t x522 = -4;
uint64_t x528 = UINT64_MAX;
int8_t x533 = -1;
static volatile int32_t t118 = 0;
volatile int32_t t120 = 3494223;
int64_t x560 = INT64_MAX;
static uint64_t x569 = 267848959901473LLU;
int16_t x570 = INT16_MIN;
static volatile int32_t t125 = 205690;
int64_t x581 = INT64_MIN;
volatile int32_t t127 = 6;
int8_t x587 = 55;
static uint16_t x604 = 7456U;
int32_t t131 = 6;
volatile int32_t x610 = 0;
static int32_t x612 = INT32_MIN;
volatile int16_t x624 = -1;
int8_t x628 = -1;
int32_t t136 = 0;
int64_t x636 = -1LL;
static int32_t x639 = -157840;
int16_t x644 = 20;
uint8_t x649 = 48U;
volatile int16_t x666 = -47;
int16_t x670 = 399;
volatile int8_t x672 = -3;
int32_t x674 = -7943121;
int32_t x678 = INT32_MIN;
volatile int64_t x683 = -1LL;
volatile int32_t t148 = 518815909;
int32_t t149 = 236;
uint16_t x696 = 25137U;
uint32_t x698 = 101600965U;
int32_t t151 = 185756270;
volatile int32_t t153 = -2;
int8_t x710 = -1;
volatile uint64_t x717 = 0LLU;
volatile int32_t x740 = INT32_MAX;
int32_t x742 = -1;
volatile int8_t x751 = INT8_MIN;
int16_t x758 = 10113;
volatile int32_t t166 = -8268366;
int16_t x762 = -6;
static int8_t x763 = INT8_MIN;
static int16_t x771 = INT16_MIN;
uint16_t x772 = UINT16_MAX;
volatile uint16_t x773 = 3136U;
int16_t x774 = INT16_MAX;
int8_t x782 = -1;
uint64_t x789 = 34294534735373279LLU;
uint64_t x800 = 86613688065099839LLU;
volatile int16_t x801 = INT16_MIN;
volatile int64_t x807 = INT64_MIN;
uint16_t x809 = UINT16_MAX;
int16_t x813 = INT16_MIN;
uint32_t x817 = 2U;
static volatile uint64_t x818 = 8690054345291LLU;
volatile uint8_t x820 = 123U;
int32_t t181 = -15;
int8_t x821 = INT8_MIN;
uint16_t x826 = UINT16_MAX;
int8_t x833 = INT8_MIN;
volatile int32_t t185 = -2728140;
int64_t x843 = -1LL;
int16_t x846 = -1;
int8_t x847 = INT8_MIN;
static volatile int8_t x852 = INT8_MIN;
volatile int8_t x855 = -7;
uint16_t x858 = UINT16_MAX;
int16_t x868 = -2;
volatile int32_t x872 = -13;
int8_t x880 = -24;
int32_t x886 = 163;
static int8_t x888 = 1;
int64_t x889 = -1LL;
int64_t x890 = INT64_MIN;
volatile uint8_t x900 = 1U;


void f0(void) {
    	volatile uint64_t x1 = UINT64_MAX;
	int16_t x3 = -1;
	static int16_t x4 = 32;

    t0 = ((x1+(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x11 = 5040660744338LLU;
	uint32_t x12 = UINT32_MAX;
	static int32_t t1 = 702405;

    t1 = ((x9+(x10%x11))!=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	uint64_t x14 = 96251248767426LLU;
	uint16_t x15 = 172U;
	static int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 4;

    t2 = ((x13+(x14%x15))!=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x17 = 25LLU;
	int16_t x20 = 7073;
	volatile int32_t t3 = -63;

    t3 = ((x17+(x18%x19))!=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = INT16_MAX;
	uint8_t x22 = 4U;
	volatile int16_t x23 = -4;
	volatile int32_t t4 = 203965716;

    t4 = ((x21+(x22%x23))!=x24);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 69U;
	uint16_t x27 = 82U;
	int64_t x28 = -1LL;
	static int32_t t5 = -450;

    t5 = ((x25+(x26%x27))!=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x30 = UINT32_MAX;
	int8_t x31 = INT8_MAX;
	static int8_t x32 = INT8_MIN;
	int32_t t6 = -11636303;

    t6 = ((x29+(x30%x31))!=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x33 = -10382595683LL;
	int8_t x34 = 0;
	uint64_t x36 = 1515840LLU;
	int32_t t7 = -1695;

    t7 = ((x33+(x34%x35))!=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x37 = 1U;
	int32_t x39 = INT32_MIN;
	static int16_t x40 = 31;
	static int32_t t8 = 383992;

    t8 = ((x37+(x38%x39))!=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint32_t x41 = 207354U;
	int64_t x42 = INT64_MAX;
	int16_t x43 = 1358;
	int32_t x44 = INT32_MAX;
	int32_t t9 = 34790;

    t9 = ((x41+(x42%x43))!=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x50 = -1;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;

    t10 = ((x49+(x50%x51))!=x52);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = INT8_MAX;
	int16_t x54 = INT16_MAX;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;

    t11 = ((x53+(x54%x55))!=x56);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x57 = 8074U;
	static int64_t x58 = -1LL;
	volatile int32_t x59 = INT32_MIN;
	static int32_t t12 = -200417800;

    t12 = ((x57+(x58%x59))!=x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = 1;
	int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	int16_t x64 = 2545;

    t13 = ((x61+(x62%x63))!=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x73 = 9U;
	int8_t x74 = INT8_MAX;
	int32_t x75 = 809549481;
	uint16_t x76 = UINT16_MAX;
	int32_t t14 = 0;

    t14 = ((x73+(x74%x75))!=x76);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int16_t x84 = 11;
	volatile int32_t t15 = -140719574;

    t15 = ((x81+(x82%x83))!=x84);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x85 = -1;
	int64_t x86 = 103082788950LL;
	uint64_t x87 = 7546666LLU;
	int64_t x88 = -235523951991LL;

    t16 = ((x85+(x86%x87))!=x88);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MIN;
	volatile int16_t x90 = 1852;
	int64_t x92 = 1731943827314579110LL;

    t17 = ((x89+(x90%x91))!=x92);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x93 = UINT16_MAX;
	int8_t x94 = 0;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = UINT16_MAX;
	volatile int32_t t18 = -2814305;

    t18 = ((x93+(x94%x95))!=x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = -1LL;
	volatile int32_t x100 = INT32_MIN;
	volatile int32_t t19 = 3;

    t19 = ((x97+(x98%x99))!=x100);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x101 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	static int32_t t20 = -151220;

    t20 = ((x101+(x102%x103))!=x104);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x106 = 6LL;
	uint32_t x107 = 22U;
	static int32_t x108 = INT32_MAX;
	static int32_t t21 = -72199260;

    t21 = ((x105+(x106%x107))!=x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x109 = 25U;
	static int64_t x110 = 1LL;
	uint64_t x111 = UINT64_MAX;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t22 = -298919;

    t22 = ((x109+(x110%x111))!=x112);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x113 = INT64_MAX;
	int64_t x114 = INT64_MAX;
	volatile uint64_t x115 = UINT64_MAX;
	int16_t x116 = 1;
	volatile int32_t t23 = 211777;

    t23 = ((x113+(x114%x115))!=x116);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x117 = INT32_MIN;
	int64_t x118 = -871084291589176LL;
	volatile uint64_t x119 = 850268986123439548LLU;
	int64_t x120 = INT64_MIN;

    t24 = ((x117+(x118%x119))!=x120);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = INT16_MIN;
	volatile int16_t x124 = INT16_MIN;
	int32_t t25 = -642192142;

    t25 = ((x121+(x122%x123))!=x124);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x126 = -1;
	volatile int64_t x127 = 596153412557LL;
	int32_t t26 = 31758271;

    t26 = ((x125+(x126%x127))!=x128);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x129 = -7524265996423LL;
	static uint16_t x130 = 0U;
	volatile int16_t x132 = INT16_MIN;

    t27 = ((x129+(x130%x131))!=x132);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x133 = -534628868;
	static uint8_t x134 = UINT8_MAX;
	int16_t x135 = INT16_MIN;
	static volatile uint16_t x136 = 6570U;

    t28 = ((x133+(x134%x135))!=x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x137 = UINT64_MAX;
	int8_t x139 = 5;
	volatile uint8_t x140 = 0U;
	volatile int32_t t29 = 6769;

    t29 = ((x137+(x138%x139))!=x140);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x142 = INT64_MAX;
	uint32_t x143 = 10254085U;
	int64_t x144 = INT64_MIN;
	int32_t t30 = 0;

    t30 = ((x141+(x142%x143))!=x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x149 = -12LL;
	static int32_t x151 = INT32_MIN;
	volatile int8_t x152 = -47;
	volatile int32_t t31 = -107;

    t31 = ((x149+(x150%x151))!=x152);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = 102946012LL;
	int64_t x155 = -4409453141744LL;
	static int32_t x156 = INT32_MIN;
	static int32_t t32 = -245374642;

    t32 = ((x153+(x154%x155))!=x156);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x157 = INT8_MIN;
	int8_t x158 = -7;
	int16_t x159 = 5;
	int8_t x160 = -14;
	volatile int32_t t33 = 341876582;

    t33 = ((x157+(x158%x159))!=x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x161 = INT64_MIN;
	static uint64_t x162 = UINT64_MAX;
	int32_t x164 = -83;
	static volatile int32_t t34 = 15;

    t34 = ((x161+(x162%x163))!=x164);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x166 = 3;
	static int8_t x167 = -14;
	volatile uint8_t x168 = 30U;
	int32_t t35 = 192152313;

    t35 = ((x165+(x166%x167))!=x168);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x169 = 11U;
	volatile uint32_t x170 = 668858669U;
	int32_t t36 = -215;

    t36 = ((x169+(x170%x171))!=x172);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x182 = 1339U;
	uint8_t x184 = UINT8_MAX;
	static int32_t t37 = 765;

    t37 = ((x181+(x182%x183))!=x184);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x185 = 0;
	volatile uint16_t x188 = 35U;

    t38 = ((x185+(x186%x187))!=x188);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	static int64_t x191 = INT64_MIN;
	int32_t x192 = INT32_MAX;

    t39 = ((x189+(x190%x191))!=x192);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = 0;
	volatile int64_t x195 = -1063065892LL;
	int8_t x196 = INT8_MIN;

    t40 = ((x193+(x194%x195))!=x196);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x197 = INT16_MIN;
	static volatile uint8_t x198 = 2U;
	volatile uint8_t x199 = 1U;
	int32_t x200 = INT32_MIN;
	int32_t t41 = -7572811;

    t41 = ((x197+(x198%x199))!=x200);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x201 = 5U;
	int64_t x204 = INT64_MIN;
	int32_t t42 = -20;

    t42 = ((x201+(x202%x203))!=x204);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x205 = 69973991U;
	static uint64_t x208 = UINT64_MAX;
	volatile int32_t t43 = 39;

    t43 = ((x205+(x206%x207))!=x208);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x209 = INT8_MIN;
	static int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	uint32_t x212 = 0U;

    t44 = ((x209+(x210%x211))!=x212);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x213 = -13630;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;
	static int32_t x216 = -1;
	volatile int32_t t45 = -670459235;

    t45 = ((x213+(x214%x215))!=x216);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x221 = -1;
	static uint16_t x222 = 0U;
	int8_t x223 = -1;
	static int8_t x224 = INT8_MAX;

    t46 = ((x221+(x222%x223))!=x224);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = 327796U;
	int32_t x226 = -1;
	int32_t t47 = -29579;

    t47 = ((x225+(x226%x227))!=x228);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 15U;
	static volatile int32_t x230 = -298;
	static volatile uint16_t x232 = 5017U;
	int32_t t48 = 267565209;

    t48 = ((x229+(x230%x231))!=x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x233 = INT64_MIN;
	static int16_t x234 = INT16_MAX;
	static int16_t x236 = -486;

    t49 = ((x233+(x234%x235))!=x236);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x237 = 0U;
	int16_t x238 = -1;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t50 = -500064;

    t50 = ((x237+(x238%x239))!=x240);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t51 = 70;

    t51 = ((x245+(x246%x247))!=x248);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x249 = 19363U;
	int16_t x250 = INT16_MAX;
	uint8_t x251 = UINT8_MAX;
	int16_t x252 = -1;

    t52 = ((x249+(x250%x251))!=x252);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x253 = 764;
	int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile int32_t t53 = 159464299;

    t53 = ((x253+(x254%x255))!=x256);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x257 = 161592222069877523LLU;
	int64_t x260 = INT64_MIN;

    t54 = ((x257+(x258%x259))!=x260);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = 1LL;
	uint16_t x262 = UINT16_MAX;
	static uint32_t x263 = 177951U;
	int32_t x264 = INT32_MIN;
	volatile int32_t t55 = 419;

    t55 = ((x261+(x262%x263))!=x264);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x269 = INT16_MIN;
	int64_t x270 = INT64_MAX;
	int64_t x271 = INT64_MAX;
	volatile int16_t x272 = -892;
	int32_t t56 = 10226;

    t56 = ((x269+(x270%x271))!=x272);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x273 = UINT64_MAX;
	int16_t x274 = INT16_MIN;
	volatile int8_t x275 = -7;
	uint32_t x276 = 104U;
	int32_t t57 = -2194;

    t57 = ((x273+(x274%x275))!=x276);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x277 = 1;
	int16_t x278 = INT16_MAX;
	uint16_t x279 = 18733U;
	uint64_t x280 = UINT64_MAX;
	int32_t t58 = -1015922567;

    t58 = ((x277+(x278%x279))!=x280);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x282 = 0;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t59 = 3865;

    t59 = ((x281+(x282%x283))!=x284);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = -3391;
	int64_t x287 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	volatile int32_t t60 = 7192325;

    t60 = ((x285+(x286%x287))!=x288);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x289 = 1791645420LLU;
	volatile uint8_t x291 = 4U;
	static int32_t x292 = 312473079;

    t61 = ((x289+(x290%x291))!=x292);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x294 = 1U;
	static int16_t x295 = INT16_MAX;
	volatile uint32_t x296 = 90U;

    t62 = ((x293+(x294%x295))!=x296);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x297 = UINT64_MAX;
	int8_t x298 = 1;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t63 = 195969;

    t63 = ((x297+(x298%x299))!=x300);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x301 = 7524U;
	int32_t x302 = 15925888;
	volatile int64_t x303 = INT64_MIN;
	uint8_t x304 = 3U;
	int32_t t64 = 88537;

    t64 = ((x301+(x302%x303))!=x304);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x305 = UINT64_MAX;
	static volatile int32_t x307 = -1;
	volatile int16_t x308 = 3464;
	int32_t t65 = 0;

    t65 = ((x305+(x306%x307))!=x308);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x309 = INT8_MIN;
	int32_t x311 = INT32_MAX;
	volatile int32_t t66 = -3;

    t66 = ((x309+(x310%x311))!=x312);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x313 = 1720586;
	int16_t x314 = -1;
	static int16_t x315 = INT16_MAX;
	uint16_t x316 = 29607U;
	volatile int32_t t67 = -290607;

    t67 = ((x313+(x314%x315))!=x316);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x317 = INT8_MAX;
	int8_t x320 = -1;

    t68 = ((x317+(x318%x319))!=x320);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x326 = -1;
	int16_t x327 = -1;
	volatile int32_t x328 = INT32_MAX;

    t69 = ((x325+(x326%x327))!=x328);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x329 = 1838242802U;
	static volatile uint16_t x330 = 115U;
	uint16_t x331 = 88U;
	volatile int32_t x332 = 532091950;
	int32_t t70 = 186005;

    t70 = ((x329+(x330%x331))!=x332);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x333 = INT8_MIN;
	volatile int16_t x336 = INT16_MIN;
	int32_t t71 = 33041021;

    t71 = ((x333+(x334%x335))!=x336);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x337 = -1;
	uint64_t x338 = UINT64_MAX;
	uint16_t x339 = 6U;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t72 = -797;

    t72 = ((x337+(x338%x339))!=x340);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = -31;
	int8_t x342 = -15;
	int64_t x343 = 325857734LL;
	int32_t x344 = INT32_MIN;
	volatile int32_t t73 = -6863204;

    t73 = ((x341+(x342%x343))!=x344);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x345 = 7;
	int16_t x347 = -253;
	int16_t x348 = 6;
	volatile int32_t t74 = -1;

    t74 = ((x345+(x346%x347))!=x348);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	int64_t x352 = -1LL;

    t75 = ((x349+(x350%x351))!=x352);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x354 = 8364942U;
	int16_t x355 = 1;
	int32_t x356 = INT32_MAX;
	static int32_t t76 = 0;

    t76 = ((x353+(x354%x355))!=x356);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x357 = UINT32_MAX;
	int8_t x358 = 1;
	static int8_t x359 = -1;
	uint32_t x360 = 606U;
	volatile int32_t t77 = 407;

    t77 = ((x357+(x358%x359))!=x360);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x361 = INT32_MIN;
	int8_t x362 = INT8_MAX;
	int64_t x363 = -1LL;
	int32_t t78 = -1001;

    t78 = ((x361+(x362%x363))!=x364);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x365 = 46U;
	uint8_t x366 = UINT8_MAX;
	static int8_t x367 = -1;
	int8_t x368 = INT8_MAX;
	int32_t t79 = 263;

    t79 = ((x365+(x366%x367))!=x368);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x369 = 28829U;
	volatile int16_t x370 = -1;
	int32_t x371 = INT32_MIN;
	volatile int64_t x372 = INT64_MIN;

    t80 = ((x369+(x370%x371))!=x372);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x373 = -4535338180LL;
	uint16_t x374 = 68U;
	int32_t x375 = 3;
	uint16_t x376 = 9U;
	int32_t t81 = 30204;

    t81 = ((x373+(x374%x375))!=x376);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = INT64_MIN;
	int32_t x382 = 4057;
	uint32_t x383 = 167053369U;
	int32_t x384 = 106594;
	int32_t t82 = 1022014;

    t82 = ((x381+(x382%x383))!=x384);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	volatile int16_t x387 = 337;

    t83 = ((x385+(x386%x387))!=x388);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x389 = 5U;
	static int16_t x390 = INT16_MAX;
	volatile uint16_t x392 = 97U;
	int32_t t84 = -10935;

    t84 = ((x389+(x390%x391))!=x392);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x393 = INT16_MAX;
	static int8_t x394 = -3;
	int32_t x396 = INT32_MIN;

    t85 = ((x393+(x394%x395))!=x396);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x397 = INT64_MIN;
	uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	uint64_t x400 = 7509LLU;
	volatile int32_t t86 = 1;

    t86 = ((x397+(x398%x399))!=x400);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x401 = 404042683718437695LLU;
	volatile int64_t x402 = -1LL;
	uint8_t x403 = 1U;
	int32_t t87 = -2561637;

    t87 = ((x401+(x402%x403))!=x404);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = INT64_MIN;
	uint32_t x406 = UINT32_MAX;
	uint16_t x408 = UINT16_MAX;
	int32_t t88 = -28887;

    t88 = ((x405+(x406%x407))!=x408);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x410 = 1U;
	static uint64_t x411 = 20264815LLU;
	int8_t x412 = INT8_MAX;
	volatile int32_t t89 = -1;

    t89 = ((x409+(x410%x411))!=x412);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x421 = INT16_MAX;
	volatile uint16_t x422 = 3100U;
	static uint16_t x423 = UINT16_MAX;
	int16_t x424 = 923;
	volatile int32_t t90 = -2;

    t90 = ((x421+(x422%x423))!=x424);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x428 = UINT64_MAX;

    t91 = ((x425+(x426%x427))!=x428);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x429 = INT32_MIN;
	uint64_t x430 = 334107536333878LLU;
	int16_t x432 = INT16_MAX;
	volatile int32_t t92 = 167;

    t92 = ((x429+(x430%x431))!=x432);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x434 = -1;
	int32_t x435 = 9;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t93 = -442763;

    t93 = ((x433+(x434%x435))!=x436);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x437 = INT32_MAX;
	int16_t x438 = -1;
	static int32_t x439 = -1;
	int8_t x440 = 2;

    t94 = ((x437+(x438%x439))!=x440);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x441 = 178560925U;
	uint8_t x443 = 45U;
	volatile int32_t t95 = 10;

    t95 = ((x441+(x442%x443))!=x444);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x449 = 273U;
	static int16_t x450 = INT16_MAX;
	int8_t x451 = INT8_MAX;
	volatile int32_t x452 = -1;

    t96 = ((x449+(x450%x451))!=x452);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x453 = -1;
	static int8_t x455 = -1;
	int16_t x456 = -1;
	int32_t t97 = 241;

    t97 = ((x453+(x454%x455))!=x456);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x457 = INT8_MIN;
	static int32_t x458 = INT32_MIN;
	uint8_t x459 = 34U;
	static int16_t x460 = INT16_MIN;
	int32_t t98 = -1097;

    t98 = ((x457+(x458%x459))!=x460);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x462 = 413239U;
	int32_t x463 = -1;
	static int32_t t99 = 1411;

    t99 = ((x461+(x462%x463))!=x464);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x465 = UINT32_MAX;
	uint64_t x466 = 42LLU;
	static int64_t x467 = -9LL;
	volatile int32_t x468 = -1;

    t100 = ((x465+(x466%x467))!=x468);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x469 = INT32_MIN;
	int8_t x470 = 1;
	int64_t x472 = INT64_MAX;
	int32_t t101 = -13;

    t101 = ((x469+(x470%x471))!=x472);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x475 = UINT64_MAX;
	static int8_t x476 = -1;
	static volatile int32_t t102 = 966;

    t102 = ((x473+(x474%x475))!=x476);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x477 = 1869623534LL;
	uint16_t x478 = 2266U;
	uint16_t x479 = UINT16_MAX;
	uint64_t x480 = UINT64_MAX;
	int32_t t103 = 55;

    t103 = ((x477+(x478%x479))!=x480);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x481 = INT16_MAX;
	uint32_t x482 = 215032449U;
	int32_t x483 = 415;
	int32_t x484 = -5663;

    t104 = ((x481+(x482%x483))!=x484);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x486 = -4589967634784859470LL;
	uint64_t x487 = 32827089LLU;
	volatile int64_t x488 = -1LL;
	volatile int32_t t105 = -88493;

    t105 = ((x485+(x486%x487))!=x488);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x489 = UINT64_MAX;
	int32_t x490 = -174;
	int64_t x491 = INT64_MIN;
	static volatile int32_t x492 = INT32_MIN;

    t106 = ((x489+(x490%x491))!=x492);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x493 = -1;
	int64_t x495 = INT64_MAX;
	int32_t t107 = 364;

    t107 = ((x493+(x494%x495))!=x496);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x497 = UINT16_MAX;
	static int16_t x498 = INT16_MIN;
	static uint32_t x499 = 19831U;
	int32_t x500 = INT32_MIN;
	int32_t t108 = 32340569;

    t108 = ((x497+(x498%x499))!=x500);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x501 = 2;
	int16_t x502 = -25;
	int64_t x504 = INT64_MAX;
	volatile int32_t t109 = 54548;

    t109 = ((x501+(x502%x503))!=x504);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x506 = INT32_MIN;
	uint32_t x507 = UINT32_MAX;
	static volatile int32_t t110 = 1541386;

    t110 = ((x505+(x506%x507))!=x508);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x509 = 2790U;
	volatile int64_t x510 = INT64_MIN;
	int8_t x511 = INT8_MAX;
	static int64_t x512 = INT64_MIN;
	volatile int32_t t111 = -1032760;

    t111 = ((x509+(x510%x511))!=x512);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x513 = 551744U;
	static int32_t x515 = INT32_MIN;
	int32_t x516 = -334;
	volatile int32_t t112 = -1;

    t112 = ((x513+(x514%x515))!=x516);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x517 = -1LL;
	static int32_t x518 = -217904;
	int16_t x519 = INT16_MAX;
	static int8_t x520 = -1;

    t113 = ((x517+(x518%x519))!=x520);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x521 = INT32_MAX;
	int32_t x523 = -1;
	volatile int8_t x524 = 0;
	int32_t t114 = 114369270;

    t114 = ((x521+(x522%x523))!=x524);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x525 = INT8_MAX;
	static int16_t x526 = INT16_MIN;
	uint64_t x527 = 829336152404LLU;
	volatile int32_t t115 = -280318;

    t115 = ((x525+(x526%x527))!=x528);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x529 = UINT64_MAX;
	static int64_t x530 = INT64_MIN;
	uint32_t x531 = 1604009U;
	int32_t x532 = INT32_MIN;
	int32_t t116 = -845;

    t116 = ((x529+(x530%x531))!=x532);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x534 = 18;
	volatile int16_t x535 = INT16_MAX;
	int64_t x536 = INT64_MIN;
	int32_t t117 = 30649;

    t117 = ((x533+(x534%x535))!=x536);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x537 = UINT8_MAX;
	static uint16_t x538 = 18194U;
	uint8_t x539 = 45U;
	int16_t x540 = -1;

    t118 = ((x537+(x538%x539))!=x540);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x549 = -1;
	static volatile int8_t x550 = -1;
	int8_t x551 = -1;
	static uint32_t x552 = 1020U;
	volatile int32_t t119 = 18915;

    t119 = ((x549+(x550%x551))!=x552);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x553 = INT32_MIN;
	int8_t x554 = 0;
	int16_t x555 = INT16_MIN;
	uint32_t x556 = 3016823U;

    t120 = ((x553+(x554%x555))!=x556);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x557 = 2106U;
	int8_t x558 = 0;
	int64_t x559 = INT64_MIN;
	volatile int32_t t121 = 717836;

    t121 = ((x557+(x558%x559))!=x560);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x561 = 510U;
	int16_t x562 = INT16_MAX;
	volatile int16_t x563 = -104;
	volatile int64_t x564 = -1LL;
	int32_t t122 = 13211;

    t122 = ((x561+(x562%x563))!=x564);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x565 = INT16_MIN;
	int64_t x566 = -3283992858117006LL;
	int32_t x567 = 204847515;
	int64_t x568 = -2036LL;
	volatile int32_t t123 = 17;

    t123 = ((x565+(x566%x567))!=x568);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x571 = -251LL;
	static volatile uint64_t x572 = UINT64_MAX;
	volatile int32_t t124 = -2931;

    t124 = ((x569+(x570%x571))!=x572);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x573 = -7;
	int8_t x574 = -1;
	uint16_t x575 = 2U;
	int8_t x576 = INT8_MIN;

    t125 = ((x573+(x574%x575))!=x576);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x577 = 994U;
	int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	volatile uint16_t x580 = UINT16_MAX;
	int32_t t126 = 695;

    t126 = ((x577+(x578%x579))!=x580);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint8_t x582 = 14U;
	static int16_t x583 = INT16_MIN;
	volatile int32_t x584 = INT32_MIN;

    t127 = ((x581+(x582%x583))!=x584);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x585 = INT32_MAX;
	volatile int64_t x586 = -12778368584108271LL;
	int16_t x588 = -1;
	volatile int32_t t128 = -395078405;

    t128 = ((x585+(x586%x587))!=x588);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x589 = INT8_MAX;
	int16_t x590 = -1;
	static uint16_t x591 = UINT16_MAX;
	uint16_t x592 = UINT16_MAX;
	int32_t t129 = 70929070;

    t129 = ((x589+(x590%x591))!=x592);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x593 = -1LL;
	static volatile uint64_t x594 = 222106LLU;
	int8_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t130 = 1;

    t130 = ((x593+(x594%x595))!=x596);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x601 = INT16_MIN;
	uint64_t x602 = UINT64_MAX;
	volatile int64_t x603 = INT64_MIN;

    t131 = ((x601+(x602%x603))!=x604);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x609 = INT64_MIN;
	uint32_t x611 = 464U;
	volatile int32_t t132 = 2256;

    t132 = ((x609+(x610%x611))!=x612);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x613 = INT16_MAX;
	int8_t x614 = -3;
	static int8_t x615 = -19;
	uint8_t x616 = UINT8_MAX;
	static int32_t t133 = 0;

    t133 = ((x613+(x614%x615))!=x616);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x621 = INT32_MAX;
	int64_t x622 = 23180022144622LL;
	int8_t x623 = -1;
	volatile int32_t t134 = 28780;

    t134 = ((x621+(x622%x623))!=x624);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x625 = INT32_MIN;
	uint16_t x626 = UINT16_MAX;
	int32_t x627 = -1;
	int32_t t135 = -18;

    t135 = ((x625+(x626%x627))!=x628);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x629 = -1;
	int8_t x630 = -1;
	int8_t x631 = INT8_MIN;
	int8_t x632 = -1;

    t136 = ((x629+(x630%x631))!=x632);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x633 = INT32_MIN;
	int64_t x634 = INT64_MIN;
	int8_t x635 = INT8_MIN;
	static volatile int32_t t137 = -828;

    t137 = ((x633+(x634%x635))!=x636);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x637 = INT8_MAX;
	static int16_t x638 = INT16_MIN;
	static volatile int8_t x640 = 0;
	int32_t t138 = 0;

    t138 = ((x637+(x638%x639))!=x640);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = INT8_MIN;
	static volatile int64_t x642 = -227635LL;
	uint64_t x643 = 201149LLU;
	static int32_t t139 = 5363216;

    t139 = ((x641+(x642%x643))!=x644);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x645 = INT16_MIN;
	int32_t x646 = INT32_MIN;
	static int32_t x647 = -1;
	static volatile uint64_t x648 = 11846LLU;
	int32_t t140 = -11240599;

    t140 = ((x645+(x646%x647))!=x648);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x650 = 728228868282665311LLU;
	volatile int8_t x651 = 1;
	volatile int16_t x652 = INT16_MIN;
	static volatile int32_t t141 = -29349064;

    t141 = ((x649+(x650%x651))!=x652);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x653 = INT64_MIN;
	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = UINT64_MAX;
	uint32_t x656 = UINT32_MAX;
	static volatile int32_t t142 = -5;

    t142 = ((x653+(x654%x655))!=x656);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x657 = UINT32_MAX;
	static int16_t x658 = -1;
	uint16_t x659 = UINT16_MAX;
	int64_t x660 = INT64_MAX;
	int32_t t143 = -30;

    t143 = ((x657+(x658%x659))!=x660);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x665 = -1LL;
	uint8_t x667 = 1U;
	uint64_t x668 = UINT64_MAX;
	int32_t t144 = -6181804;

    t144 = ((x665+(x666%x667))!=x668);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x669 = 685730;
	uint32_t x671 = UINT32_MAX;
	volatile int32_t t145 = 1295;

    t145 = ((x669+(x670%x671))!=x672);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x673 = -1;
	uint64_t x675 = UINT64_MAX;
	uint8_t x676 = 127U;
	int32_t t146 = 0;

    t146 = ((x673+(x674%x675))!=x676);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x677 = 13681266387LLU;
	static int64_t x679 = -1LL;
	static int64_t x680 = INT64_MIN;
	int32_t t147 = 4195;

    t147 = ((x677+(x678%x679))!=x680);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x681 = 90U;
	int32_t x682 = INT32_MIN;
	int16_t x684 = INT16_MIN;

    t148 = ((x681+(x682%x683))!=x684);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x685 = 2136;
	uint8_t x686 = UINT8_MAX;
	uint32_t x687 = UINT32_MAX;
	int32_t x688 = -1;

    t149 = ((x685+(x686%x687))!=x688);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x693 = 257251110687LL;
	static int32_t x694 = INT32_MIN;
	int64_t x695 = -1LL;
	int32_t t150 = 5;

    t150 = ((x693+(x694%x695))!=x696);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x697 = 24U;
	volatile int32_t x699 = -28254;
	volatile uint32_t x700 = 441678U;

    t151 = ((x697+(x698%x699))!=x700);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x701 = INT16_MAX;
	volatile int8_t x702 = INT8_MIN;
	volatile int64_t x703 = INT64_MIN;
	static int8_t x704 = INT8_MIN;
	int32_t t152 = 5275377;

    t152 = ((x701+(x702%x703))!=x704);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x705 = INT32_MIN;
	uint16_t x706 = 13U;
	int8_t x707 = INT8_MIN;
	static uint32_t x708 = 1286U;

    t153 = ((x705+(x706%x707))!=x708);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x709 = INT64_MAX;
	int64_t x711 = -1LL;
	static volatile int16_t x712 = INT16_MIN;
	volatile int32_t t154 = 1458;

    t154 = ((x709+(x710%x711))!=x712);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x713 = 356322736U;
	volatile int32_t x714 = -1;
	uint64_t x715 = 123LLU;
	int16_t x716 = 120;
	int32_t t155 = -771945608;

    t155 = ((x713+(x714%x715))!=x716);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x718 = INT8_MIN;
	volatile int32_t x719 = -34391810;
	uint8_t x720 = UINT8_MAX;
	static int32_t t156 = 14447;

    t156 = ((x717+(x718%x719))!=x720);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	static int8_t x723 = INT8_MIN;
	uint8_t x724 = 1U;
	volatile int32_t t157 = 145459525;

    t157 = ((x721+(x722%x723))!=x724);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x725 = INT32_MIN;
	int16_t x726 = INT16_MAX;
	volatile int8_t x727 = INT8_MIN;
	static volatile int8_t x728 = INT8_MAX;
	int32_t t158 = -48;

    t158 = ((x725+(x726%x727))!=x728);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x729 = -65614;
	static int32_t x730 = INT32_MIN;
	int8_t x731 = INT8_MIN;
	uint8_t x732 = UINT8_MAX;
	int32_t t159 = 134590988;

    t159 = ((x729+(x730%x731))!=x732);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x733 = INT32_MAX;
	static uint16_t x734 = UINT16_MAX;
	int64_t x735 = -1LL;
	static int32_t x736 = INT32_MIN;
	volatile int32_t t160 = -994;

    t160 = ((x733+(x734%x735))!=x736);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x737 = -1;
	int64_t x738 = 22961318976426LL;
	volatile uint16_t x739 = 8189U;
	volatile int32_t t161 = -7299;

    t161 = ((x737+(x738%x739))!=x740);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x741 = 0;
	volatile uint64_t x743 = 200845LLU;
	int64_t x744 = INT64_MIN;
	static int32_t t162 = -4036040;

    t162 = ((x741+(x742%x743))!=x744);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x745 = 2311674891485829LL;
	int16_t x746 = 305;
	int32_t x747 = -2204045;
	uint64_t x748 = UINT64_MAX;
	volatile int32_t t163 = -33202883;

    t163 = ((x745+(x746%x747))!=x748);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x749 = 1U;
	static int64_t x750 = INT64_MIN;
	int8_t x752 = INT8_MIN;
	volatile int32_t t164 = -55553687;

    t164 = ((x749+(x750%x751))!=x752);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x753 = INT16_MIN;
	int16_t x754 = -25;
	uint64_t x755 = UINT64_MAX;
	volatile int32_t x756 = INT32_MIN;
	int32_t t165 = -983950698;

    t165 = ((x753+(x754%x755))!=x756);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x757 = INT16_MIN;
	int16_t x759 = INT16_MAX;
	uint16_t x760 = 9U;

    t166 = ((x757+(x758%x759))!=x760);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x761 = UINT64_MAX;
	int8_t x764 = 43;
	static int32_t t167 = 1607233;

    t167 = ((x761+(x762%x763))!=x764);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x765 = -1;
	int32_t x766 = 45576;
	volatile int32_t x767 = -13318;
	int8_t x768 = INT8_MIN;
	int32_t t168 = -52316482;

    t168 = ((x765+(x766%x767))!=x768);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x769 = UINT64_MAX;
	int16_t x770 = INT16_MIN;
	int32_t t169 = 20262;

    t169 = ((x769+(x770%x771))!=x772);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x775 = UINT64_MAX;
	int64_t x776 = INT64_MIN;
	volatile int32_t t170 = 42111;

    t170 = ((x773+(x774%x775))!=x776);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x777 = -94;
	int32_t x778 = INT32_MIN;
	uint8_t x779 = UINT8_MAX;
	int64_t x780 = 91565LL;
	volatile int32_t t171 = 12714881;

    t171 = ((x777+(x778%x779))!=x780);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x781 = 471290048U;
	volatile int32_t x783 = INT32_MIN;
	int64_t x784 = 9959550LL;
	int32_t t172 = 4216;

    t172 = ((x781+(x782%x783))!=x784);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint8_t x785 = 6U;
	int8_t x786 = 0;
	uint16_t x787 = 1U;
	int32_t x788 = -1;
	static int32_t t173 = 0;

    t173 = ((x785+(x786%x787))!=x788);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x790 = 2;
	uint32_t x791 = UINT32_MAX;
	int64_t x792 = -1LL;
	volatile int32_t t174 = 1;

    t174 = ((x789+(x790%x791))!=x792);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x793 = INT32_MIN;
	uint16_t x794 = 35U;
	int32_t x795 = INT32_MAX;
	int8_t x796 = INT8_MAX;
	int32_t t175 = 1;

    t175 = ((x793+(x794%x795))!=x796);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x797 = UINT64_MAX;
	static int64_t x798 = 1788LL;
	volatile int64_t x799 = INT64_MIN;
	int32_t t176 = -1303;

    t176 = ((x797+(x798%x799))!=x800);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x802 = INT64_MIN;
	int32_t x803 = INT32_MAX;
	volatile int8_t x804 = -3;
	volatile int32_t t177 = 7669865;

    t177 = ((x801+(x802%x803))!=x804);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x805 = 169687064LL;
	uint8_t x806 = 5U;
	volatile int16_t x808 = -1;
	int32_t t178 = -17;

    t178 = ((x805+(x806%x807))!=x808);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x810 = 124343174U;
	int32_t x811 = -978;
	int8_t x812 = INT8_MIN;
	int32_t t179 = -5209042;

    t179 = ((x809+(x810%x811))!=x812);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x814 = 0;
	int8_t x815 = INT8_MIN;
	volatile uint16_t x816 = 1U;
	static volatile int32_t t180 = -13797266;

    t180 = ((x813+(x814%x815))!=x816);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x819 = INT64_MIN;

    t181 = ((x817+(x818%x819))!=x820);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x822 = 7151;
	static int16_t x823 = INT16_MIN;
	int64_t x824 = -1LL;
	int32_t t182 = -8;

    t182 = ((x821+(x822%x823))!=x824);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x825 = INT16_MAX;
	int16_t x827 = INT16_MAX;
	static uint64_t x828 = 8LLU;
	volatile int32_t t183 = 49;

    t183 = ((x825+(x826%x827))!=x828);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x829 = -1946698404515046826LL;
	volatile int64_t x830 = -1LL;
	int64_t x831 = -949784LL;
	volatile uint32_t x832 = UINT32_MAX;
	volatile int32_t t184 = 312867128;

    t184 = ((x829+(x830%x831))!=x832);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x834 = INT32_MIN;
	uint8_t x835 = 2U;
	static int32_t x836 = INT32_MAX;

    t185 = ((x833+(x834%x835))!=x836);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x837 = INT8_MIN;
	static volatile int16_t x838 = INT16_MIN;
	int32_t x839 = -28;
	static int16_t x840 = INT16_MIN;
	volatile int32_t t186 = 9;

    t186 = ((x837+(x838%x839))!=x840);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x841 = INT32_MIN;
	uint64_t x842 = 6262691221603645180LLU;
	uint64_t x844 = 61479735LLU;
	int32_t t187 = -5599232;

    t187 = ((x841+(x842%x843))!=x844);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x845 = INT16_MIN;
	uint16_t x848 = 495U;
	static volatile int32_t t188 = -38829;

    t188 = ((x845+(x846%x847))!=x848);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x849 = INT32_MIN;
	volatile uint64_t x850 = 4163430734920591756LLU;
	int32_t x851 = INT32_MAX;
	volatile int32_t t189 = 7;

    t189 = ((x849+(x850%x851))!=x852);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x853 = INT64_MIN;
	int32_t x854 = INT32_MAX;
	volatile int16_t x856 = -1;
	static int32_t t190 = -6833;

    t190 = ((x853+(x854%x855))!=x856);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint64_t x857 = 5216159826011LLU;
	int64_t x859 = INT64_MIN;
	int8_t x860 = INT8_MIN;
	int32_t t191 = -1;

    t191 = ((x857+(x858%x859))!=x860);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x861 = 8U;
	volatile int64_t x862 = -1LL;
	int32_t x863 = INT32_MAX;
	int16_t x864 = -1;
	int32_t t192 = -14;

    t192 = ((x861+(x862%x863))!=x864);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x865 = 6;
	static int64_t x866 = INT64_MAX;
	uint8_t x867 = UINT8_MAX;
	int32_t t193 = 23522;

    t193 = ((x865+(x866%x867))!=x868);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x869 = UINT32_MAX;
	static volatile int64_t x870 = 246LL;
	int8_t x871 = -1;
	int32_t t194 = 15;

    t194 = ((x869+(x870%x871))!=x872);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x873 = INT32_MIN;
	volatile uint8_t x874 = 13U;
	static volatile int16_t x875 = INT16_MIN;
	int64_t x876 = INT64_MAX;
	volatile int32_t t195 = 2;

    t195 = ((x873+(x874%x875))!=x876);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x877 = 3071U;
	uint16_t x878 = 1U;
	static int64_t x879 = 19LL;
	volatile int32_t t196 = -279806173;

    t196 = ((x877+(x878%x879))!=x880);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x885 = INT8_MAX;
	volatile int16_t x887 = INT16_MAX;
	volatile int32_t t197 = -56076725;

    t197 = ((x885+(x886%x887))!=x888);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x891 = INT64_MIN;
	int64_t x892 = 805857242101233LL;
	volatile int32_t t198 = 1288;

    t198 = ((x889+(x890%x891))!=x892);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x897 = 6615344U;
	int32_t x898 = INT32_MIN;
	static int8_t x899 = INT8_MIN;
	volatile int32_t t199 = 512177920;

    t199 = ((x897+(x898%x899))!=x900);

    if (t199 != 1) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

