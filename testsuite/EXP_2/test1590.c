
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

static uint8_t x6 = 18U;
static int32_t x14 = INT32_MAX;
uint8_t x16 = 12U;
uint32_t x17 = 2235106U;
volatile int32_t t4 = 0;
int32_t x34 = -42894763;
static volatile int32_t t6 = 55122216;
int32_t x37 = INT32_MIN;
static volatile int32_t t8 = 3170;
volatile int32_t t9 = 40;
int32_t x51 = INT32_MAX;
int32_t x52 = -1;
uint64_t x55 = 5549742936690964LLU;
uint64_t x56 = 3LLU;
volatile int8_t x59 = -6;
volatile int32_t t13 = 725;
int16_t x69 = INT16_MIN;
volatile int32_t t16 = -469080420;
volatile uint16_t x86 = UINT16_MAX;
static int8_t x93 = -22;
int16_t x95 = -1;
int8_t x96 = INT8_MAX;
volatile int32_t t19 = 25490;
int16_t x100 = 17;
static volatile int32_t t20 = -239584;
int8_t x101 = INT8_MIN;
volatile int64_t x104 = INT64_MAX;
volatile int16_t x113 = 101;
int32_t x116 = -1;
volatile int32_t t24 = 1;
uint64_t x124 = 172487473340885LLU;
volatile int32_t x125 = INT32_MIN;
uint16_t x129 = 1U;
int8_t x132 = INT8_MAX;
volatile int32_t t28 = 1041017845;
static int8_t x144 = INT8_MAX;
int32_t t31 = 0;
int32_t x145 = INT32_MAX;
int8_t x160 = INT8_MIN;
int16_t x161 = INT16_MIN;
int32_t x162 = -1;
static volatile int32_t t35 = 1;
int64_t x175 = -1LL;
int64_t x189 = INT64_MIN;
int8_t x195 = INT8_MAX;
int32_t t42 = 24904;
int16_t x207 = INT16_MIN;
int8_t x209 = -10;
uint32_t x213 = 294U;
static int16_t x214 = 18;
int32_t x222 = INT32_MAX;
int16_t x230 = 117;
uint8_t x238 = 1U;
uint8_t x240 = 0U;
uint32_t x245 = 208846U;
int64_t x248 = -1LL;
volatile int64_t x252 = -172772LL;
uint64_t x256 = 850518684218LLU;
int8_t x261 = INT8_MAX;
int32_t x263 = -17186;
static int32_t t57 = 1;
int64_t x267 = -1LL;
int32_t t60 = -234715;
int16_t x287 = INT16_MAX;
uint16_t x290 = 1U;
int8_t x295 = -1;
static int32_t t64 = -49;
uint8_t x299 = UINT8_MAX;
static uint64_t x304 = 23807LLU;
int64_t x312 = -67LL;
volatile int32_t t68 = -1794;
volatile int8_t x315 = -3;
int8_t x321 = INT8_MIN;
int64_t x333 = -1LL;
static int8_t x343 = INT8_MIN;
static int64_t x344 = INT64_MAX;
volatile uint8_t x351 = UINT8_MAX;
int8_t x357 = -9;
volatile int32_t t80 = -118754;
int16_t x366 = INT16_MIN;
volatile int32_t t83 = 2569557;
int16_t x377 = INT16_MAX;
int16_t x384 = -1;
int16_t x387 = 16382;
int8_t x388 = INT8_MAX;
uint8_t x389 = 54U;
int64_t x393 = 191315352134448LL;
int32_t x394 = INT32_MIN;
volatile int16_t x400 = -15;
int16_t x407 = INT16_MAX;
static int16_t x409 = INT16_MAX;
int8_t x410 = -2;
uint16_t x415 = UINT16_MAX;
int8_t x426 = 0;
static uint16_t x429 = 1U;
int64_t x434 = 29445LL;
int64_t x435 = -1LL;
volatile int32_t t99 = 1190225;
int64_t x448 = -4334062513LL;
static volatile int32_t t103 = -1210888;
int16_t x463 = -1;
int32_t x475 = INT32_MAX;
int64_t x476 = INT64_MIN;
int8_t x479 = 11;
int16_t x480 = INT16_MIN;
int64_t x488 = INT64_MAX;
static uint32_t x490 = 973U;
static uint32_t x494 = 754447U;
uint32_t x497 = 27U;
int16_t x504 = INT16_MIN;
int8_t x506 = INT8_MIN;
int8_t x509 = -1;
static int8_t x516 = -25;
int32_t t118 = -917397;
volatile uint16_t x518 = 15630U;
uint32_t x522 = 458U;
int64_t x525 = INT64_MIN;
static uint16_t x535 = 1U;
uint32_t x539 = 122U;
int16_t x542 = INT16_MIN;
volatile int32_t t127 = 2531032;
volatile int32_t t129 = 217774;
int8_t x562 = INT8_MAX;
int32_t t130 = 1;
static volatile int32_t x566 = -1;
int16_t x571 = -54;
volatile uint64_t x574 = 9710105LLU;
int64_t x588 = 4524LL;
int64_t x589 = 2339LL;
int32_t x593 = -1;
int16_t x594 = INT16_MIN;
int32_t x595 = INT32_MIN;
int32_t t138 = 0;
static uint64_t x608 = UINT64_MAX;
int16_t x615 = -72;
int32_t t143 = -187877498;
static uint32_t x626 = UINT32_MAX;
int32_t x631 = -1;
uint16_t x634 = 8U;
uint8_t x635 = 5U;
static uint8_t x648 = 34U;
int8_t x649 = 6;
int32_t x651 = INT32_MAX;
int32_t x659 = -1;
static uint8_t x664 = UINT8_MAX;
int64_t x667 = -1LL;
int8_t x669 = -3;
volatile int64_t x671 = INT64_MIN;
int64_t x672 = -905886369612865534LL;
int32_t t156 = -29951662;
uint64_t x675 = 205425891LLU;
volatile uint32_t x678 = 7871509U;
volatile int32_t x681 = -1;
int8_t x684 = INT8_MIN;
volatile int32_t x686 = -1;
static int8_t x688 = 0;
uint8_t x690 = UINT8_MAX;
volatile int16_t x698 = -13;
int16_t x701 = 0;
int32_t t164 = 7692122;
int64_t x706 = INT64_MAX;
static int16_t x708 = 204;
int32_t x709 = INT32_MIN;
int16_t x715 = -3;
int64_t x716 = INT64_MAX;
static uint32_t x719 = UINT32_MAX;
static uint64_t x720 = UINT64_MAX;
static volatile int32_t t168 = 8;
volatile int32_t t169 = 27;
int8_t x726 = -1;
int8_t x728 = INT8_MIN;
volatile int32_t t171 = -26;
int16_t x740 = 1;
int32_t t172 = 641688740;
uint32_t x742 = UINT32_MAX;
int32_t t173 = -113669915;
int32_t t174 = 712;
int64_t x750 = -1LL;
int16_t x751 = -448;
uint32_t x752 = 657642873U;
uint64_t x761 = 21557187872826050LLU;
int64_t x762 = INT64_MIN;
volatile int32_t t178 = -2307642;
volatile int32_t x766 = INT32_MIN;
int16_t x770 = INT16_MIN;
int64_t x776 = INT64_MIN;
int32_t t181 = 730536023;
static uint64_t x779 = 8703995217044LLU;
uint16_t x785 = UINT16_MAX;
uint64_t x786 = 24LLU;
volatile uint8_t x787 = 14U;
int32_t t184 = -9371;
volatile int32_t x789 = INT32_MAX;
volatile int32_t t185 = -127982574;
int16_t x793 = -1;
static int16_t x795 = 3;
uint32_t x800 = 11255U;
volatile uint16_t x802 = UINT16_MAX;
volatile int32_t t190 = 139977477;
int32_t x819 = INT32_MAX;
int16_t x828 = 973;
int16_t x835 = INT16_MAX;
int32_t x838 = 251404;
uint8_t x839 = 0U;
int64_t x843 = INT64_MIN;
int64_t x846 = -1LL;
int32_t x851 = INT32_MIN;


void f0(void) {
    	static int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	uint8_t x3 = 12U;
	volatile int8_t x4 = 1;
	int32_t t0 = -359083;

    t0 = ((x1-(x2>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MAX;
	uint8_t x7 = 79U;
	uint32_t x8 = 43U;
	int32_t t1 = -9;

    t1 = ((x5-(x6>x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x9 = -1;
	int8_t x10 = -10;
	int8_t x11 = -2;
	int32_t x12 = -1524;
	volatile int32_t t2 = -916958805;

    t2 = ((x9-(x10>x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 55;
	static uint16_t x15 = UINT16_MAX;
	volatile int32_t t3 = 6;

    t3 = ((x13-(x14>x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x18 = -31041824267660102LL;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;

    t4 = ((x17-(x18>x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = INT32_MAX;
	int32_t x30 = 0;
	uint64_t x31 = 0LLU;
	int32_t x32 = -1;
	volatile int32_t t5 = 7;

    t5 = ((x29-(x30>x31))==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x33 = INT64_MIN;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MIN;

    t6 = ((x33-(x34>x35))==x36);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = -1;
	int16_t x40 = INT16_MIN;
	volatile int32_t t7 = 66086;

    t7 = ((x37-(x38>x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x41 = UINT32_MAX;
	uint64_t x42 = 111543619481451639LLU;
	uint16_t x43 = UINT16_MAX;
	volatile int32_t x44 = INT32_MIN;

    t8 = ((x41-(x42>x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = 55U;
	int32_t x46 = INT32_MIN;
	int16_t x47 = 1;
	int8_t x48 = -1;

    t9 = ((x45-(x46>x47))==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MIN;
	int32_t t10 = 135285;

    t10 = ((x49-(x50>x51))==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 71632572U;
	volatile int64_t x54 = INT64_MAX;
	int32_t t11 = 16380294;

    t11 = ((x53-(x54>x55))==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = INT8_MIN;
	volatile uint8_t x58 = 0U;
	int16_t x60 = INT16_MAX;
	int32_t t12 = -1633584;

    t12 = ((x57-(x58>x59))==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x61 = INT16_MAX;
	static uint32_t x62 = 253308U;
	uint8_t x63 = 11U;
	int16_t x64 = 1;

    t13 = ((x61-(x62>x63))==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 6503LLU;
	static volatile int32_t x66 = 402159290;
	static int32_t x67 = INT32_MAX;
	int16_t x68 = -1;
	static volatile int32_t t14 = 337030;

    t14 = ((x65-(x66>x67))==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	volatile int64_t x72 = INT64_MIN;
	static volatile int32_t t15 = -53025124;

    t15 = ((x69-(x70>x71))==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x77 = 4020LLU;
	static uint32_t x78 = UINT32_MAX;
	volatile int32_t x79 = -1422680;
	int64_t x80 = -1LL;

    t16 = ((x77-(x78>x79))==x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x85 = UINT32_MAX;
	int32_t x87 = INT32_MAX;
	int64_t x88 = INT64_MAX;
	int32_t t17 = -44176;

    t17 = ((x85-(x86>x87))==x88);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x89 = 55466;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MAX;
	volatile int32_t x92 = -8;
	int32_t t18 = -1;

    t18 = ((x89-(x90>x91))==x92);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x94 = INT64_MAX;

    t19 = ((x93-(x94>x95))==x96);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x97 = 9776U;
	volatile int64_t x98 = -1LL;
	int16_t x99 = INT16_MIN;

    t20 = ((x97-(x98>x99))==x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x102 = UINT16_MAX;
	int16_t x103 = INT16_MIN;
	int32_t t21 = 783;

    t21 = ((x101-(x102>x103))==x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x105 = UINT16_MAX;
	int32_t x106 = -874;
	volatile int32_t x107 = INT32_MIN;
	int16_t x108 = -1;
	static int32_t t22 = -108419;

    t22 = ((x105-(x106>x107))==x108);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = INT64_MAX;
	static volatile int64_t x110 = -1LL;
	static int8_t x111 = -1;
	int8_t x112 = 7;
	int32_t t23 = 25031;

    t23 = ((x109-(x110>x111))==x112);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x114 = 1311504U;
	volatile int8_t x115 = 23;

    t24 = ((x113-(x114>x115))==x116);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -4;
	int64_t x120 = INT64_MIN;
	static volatile int32_t t25 = -1900;

    t25 = ((x117-(x118>x119))==x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = INT16_MAX;
	int8_t x122 = 0;
	static int32_t x123 = INT32_MAX;
	int32_t t26 = -43112;

    t26 = ((x121-(x122>x123))==x124);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x126 = -1;
	uint32_t x127 = UINT32_MAX;
	int32_t x128 = -1;
	volatile int32_t t27 = 1465;

    t27 = ((x125-(x126>x127))==x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x130 = -1;
	static uint16_t x131 = 10U;

    t28 = ((x129-(x130>x131))==x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MAX;
	int16_t x135 = 13;
	uint32_t x136 = 48042U;
	volatile int32_t t29 = -33763;

    t29 = ((x133-(x134>x135))==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x137 = 4996893773799616LL;
	int8_t x138 = -1;
	int64_t x139 = 101948046964277LL;
	int64_t x140 = -1LL;
	int32_t t30 = 2277080;

    t30 = ((x137-(x138>x139))==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int8_t x141 = INT8_MIN;
	uint32_t x142 = 24984548U;
	int64_t x143 = -1LL;

    t31 = ((x141-(x142>x143))==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x146 = 57U;
	static int16_t x147 = INT16_MAX;
	int32_t x148 = 4;
	static volatile int32_t t32 = 118453;

    t32 = ((x145-(x146>x147))==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = -1LL;
	volatile int32_t x158 = -1;
	int16_t x159 = INT16_MIN;
	volatile int32_t t33 = 11463;

    t33 = ((x157-(x158>x159))==x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x163 = 1U;
	uint8_t x164 = 1U;
	int32_t t34 = -3164044;

    t34 = ((x161-(x162>x163))==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = -4009;
	uint32_t x166 = 79U;
	uint8_t x167 = 7U;
	static volatile int64_t x168 = INT64_MIN;

    t35 = ((x165-(x166>x167))==x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = -409;
	int16_t x170 = -1;
	static volatile uint32_t x171 = 972376505U;
	static volatile uint64_t x172 = UINT64_MAX;
	volatile int32_t t36 = -200427292;

    t36 = ((x169-(x170>x171))==x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = -1LL;
	int16_t x174 = 1125;
	static int32_t x176 = 18;
	int32_t t37 = -47496;

    t37 = ((x173-(x174>x175))==x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x177 = INT32_MAX;
	int64_t x178 = -1LL;
	int64_t x179 = INT64_MAX;
	uint16_t x180 = UINT16_MAX;
	int32_t t38 = -1;

    t38 = ((x177-(x178>x179))==x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x181 = 51;
	int64_t x182 = INT64_MIN;
	int32_t x183 = 248416096;
	int16_t x184 = -1;
	int32_t t39 = 17;

    t39 = ((x181-(x182>x183))==x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = INT16_MAX;
	int16_t x186 = -126;
	int8_t x187 = -30;
	uint16_t x188 = 31825U;
	volatile int32_t t40 = -50471924;

    t40 = ((x185-(x186>x187))==x188);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x190 = INT64_MIN;
	static int16_t x191 = INT16_MAX;
	int64_t x192 = -7LL;
	static volatile int32_t t41 = -1542069;

    t41 = ((x189-(x190>x191))==x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = 0;
	static volatile int32_t x194 = INT32_MIN;
	uint64_t x196 = UINT64_MAX;

    t42 = ((x193-(x194>x195))==x196);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint64_t x205 = 10692LLU;
	uint16_t x206 = UINT16_MAX;
	static int8_t x208 = INT8_MIN;
	int32_t t43 = -103;

    t43 = ((x205-(x206>x207))==x208);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x210 = 5U;
	int8_t x211 = -1;
	int64_t x212 = -14LL;
	volatile int32_t t44 = -6585;

    t44 = ((x209-(x210>x211))==x212);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t45 = -22;

    t45 = ((x213-(x214>x215))==x216);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x217 = -14020;
	int8_t x218 = 1;
	volatile uint8_t x219 = 126U;
	volatile int32_t x220 = INT32_MIN;
	int32_t t46 = -423806;

    t46 = ((x217-(x218>x219))==x220);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x221 = 14743088709LLU;
	volatile int16_t x223 = -26;
	int32_t x224 = INT32_MIN;
	volatile int32_t t47 = -5;

    t47 = ((x221-(x222>x223))==x224);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x225 = INT64_MIN;
	static int32_t x226 = INT32_MIN;
	static int16_t x227 = INT16_MIN;
	volatile int16_t x228 = 7;
	volatile int32_t t48 = -125965820;

    t48 = ((x225-(x226>x227))==x228);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x229 = -1787926;
	int32_t x231 = INT32_MAX;
	uint8_t x232 = 55U;
	int32_t t49 = -2640992;

    t49 = ((x229-(x230>x231))==x232);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x233 = 13959U;
	int32_t x234 = 1523687;
	int32_t x235 = INT32_MIN;
	int8_t x236 = -1;
	volatile int32_t t50 = -970873;

    t50 = ((x233-(x234>x235))==x236);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x237 = -18;
	int16_t x239 = INT16_MIN;
	volatile int32_t t51 = -951;

    t51 = ((x237-(x238>x239))==x240);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x241 = 15U;
	uint16_t x242 = UINT16_MAX;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t52 = 0;

    t52 = ((x241-(x242>x243))==x244);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x246 = 4U;
	volatile int16_t x247 = INT16_MIN;
	static int32_t t53 = -118;

    t53 = ((x245-(x246>x247))==x248);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x249 = -1;
	uint8_t x250 = 1U;
	int16_t x251 = INT16_MIN;
	volatile int32_t t54 = -2088767;

    t54 = ((x249-(x250>x251))==x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = INT8_MIN;
	volatile int32_t t55 = 3521523;

    t55 = ((x253-(x254>x255))==x256);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x257 = -1;
	volatile int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MIN;
	volatile int32_t t56 = -3775;

    t56 = ((x257-(x258>x259))==x260);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x262 = INT64_MIN;
	int8_t x264 = 45;

    t57 = ((x261-(x262>x263))==x264);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x265 = INT32_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = INT16_MAX;
	volatile int32_t t58 = -85;

    t58 = ((x265-(x266>x267))==x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = 18732U;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t59 = 18214399;

    t59 = ((x269-(x270>x271))==x272);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MAX;
	int64_t x276 = INT64_MIN;

    t60 = ((x273-(x274>x275))==x276);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x277 = 2LLU;
	static int32_t x278 = -4898;
	int64_t x279 = -13859300945347914LL;
	uint16_t x280 = 227U;
	int32_t t61 = -2;

    t61 = ((x277-(x278>x279))==x280);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x285 = 0U;
	volatile int16_t x286 = -8;
	uint8_t x288 = 4U;
	int32_t t62 = 14594;

    t62 = ((x285-(x286>x287))==x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x289 = INT64_MIN;
	int64_t x291 = 342187971LL;
	volatile int32_t x292 = -1;
	int32_t t63 = 10574;

    t63 = ((x289-(x290>x291))==x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x293 = UINT16_MAX;
	int16_t x294 = -4;
	static int64_t x296 = 0LL;

    t64 = ((x293-(x294>x295))==x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x297 = -339042697;
	volatile int64_t x298 = INT64_MIN;
	int64_t x300 = -1LL;
	int32_t t65 = -1;

    t65 = ((x297-(x298>x299))==x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x301 = 52;
	static uint8_t x302 = 4U;
	static volatile int64_t x303 = -2226994565841LL;
	int32_t t66 = -144;

    t66 = ((x301-(x302>x303))==x304);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x305 = -1LL;
	static uint32_t x306 = 1U;
	int64_t x307 = INT64_MIN;
	static uint16_t x308 = 325U;
	int32_t t67 = 45740;

    t67 = ((x305-(x306>x307))==x308);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x309 = INT64_MAX;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MAX;

    t68 = ((x309-(x310>x311))==x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x313 = 5;
	int32_t x314 = INT32_MIN;
	int8_t x316 = 15;
	volatile int32_t t69 = -984828152;

    t69 = ((x313-(x314>x315))==x316);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x317 = 401934691LLU;
	uint32_t x318 = 718251114U;
	int64_t x319 = -1LL;
	int32_t x320 = -14413091;
	volatile int32_t t70 = -411529921;

    t70 = ((x317-(x318>x319))==x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x322 = INT8_MAX;
	int16_t x323 = -1;
	int8_t x324 = -31;
	static volatile int32_t t71 = -8086;

    t71 = ((x321-(x322>x323))==x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint64_t x325 = 442781800055323LLU;
	uint8_t x326 = UINT8_MAX;
	static int64_t x327 = 2614549480LL;
	uint16_t x328 = 15U;
	int32_t t72 = 23;

    t72 = ((x325-(x326>x327))==x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = -224269;
	int32_t x330 = INT32_MIN;
	int64_t x331 = -13LL;
	int32_t x332 = -1;
	int32_t t73 = -5;

    t73 = ((x329-(x330>x331))==x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x334 = INT8_MIN;
	volatile int32_t x335 = INT32_MAX;
	int8_t x336 = -3;
	int32_t t74 = 754003415;

    t74 = ((x333-(x334>x335))==x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x341 = -1;
	volatile int64_t x342 = -1504672810674318LL;
	int32_t t75 = 0;

    t75 = ((x341-(x342>x343))==x344);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x345 = INT8_MIN;
	static int32_t x346 = -1;
	static volatile int32_t x347 = INT32_MIN;
	static volatile int32_t x348 = INT32_MAX;
	int32_t t76 = -5631;

    t76 = ((x345-(x346>x347))==x348);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = 2U;
	int32_t x350 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t77 = -6;

    t77 = ((x349-(x350>x351))==x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x353 = -30;
	int32_t x354 = 1732550;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = 0;
	volatile int32_t t78 = -52;

    t78 = ((x353-(x354>x355))==x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x358 = 10U;
	uint16_t x359 = UINT16_MAX;
	static uint8_t x360 = UINT8_MAX;
	int32_t t79 = -22765;

    t79 = ((x357-(x358>x359))==x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = INT32_MAX;
	uint8_t x362 = 8U;
	int32_t x363 = -1;
	uint8_t x364 = 4U;

    t80 = ((x361-(x362>x363))==x364);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = INT16_MAX;
	int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t81 = 15572;

    t81 = ((x365-(x366>x367))==x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x369 = -39;
	static volatile int8_t x370 = INT8_MIN;
	int32_t x371 = 784801;
	volatile int16_t x372 = -1;
	int32_t t82 = 0;

    t82 = ((x369-(x370>x371))==x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x373 = 490995817792LLU;
	uint16_t x374 = 57U;
	static int16_t x375 = INT16_MIN;
	int64_t x376 = -1781496020722213809LL;

    t83 = ((x373-(x374>x375))==x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x378 = -910821;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MIN;
	int32_t t84 = -6;

    t84 = ((x377-(x378>x379))==x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x381 = 47U;
	uint8_t x382 = UINT8_MAX;
	int64_t x383 = 7LL;
	int32_t t85 = 1;

    t85 = ((x381-(x382>x383))==x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x385 = 81863924LL;
	uint32_t x386 = UINT32_MAX;
	volatile int32_t t86 = -1;

    t86 = ((x385-(x386>x387))==x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	int32_t t87 = 60966;

    t87 = ((x389-(x390>x391))==x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x395 = 1474472LL;
	int32_t x396 = INT32_MIN;
	static int32_t t88 = -105828108;

    t88 = ((x393-(x394>x395))==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x397 = -380;
	int8_t x398 = INT8_MAX;
	static int16_t x399 = INT16_MAX;
	int32_t t89 = 311;

    t89 = ((x397-(x398>x399))==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x401 = 57U;
	uint16_t x402 = 8115U;
	static volatile int32_t x403 = INT32_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t90 = -273723;

    t90 = ((x401-(x402>x403))==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x405 = 12808LL;
	int32_t x406 = INT32_MAX;
	int8_t x408 = INT8_MIN;
	volatile int32_t t91 = 2118517;

    t91 = ((x405-(x406>x407))==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x411 = INT16_MIN;
	uint16_t x412 = 405U;
	volatile int32_t t92 = -8160;

    t92 = ((x409-(x410>x411))==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x413 = 7472657400710720458LLU;
	int64_t x414 = INT64_MAX;
	int32_t x416 = 60109;
	static volatile int32_t t93 = 72660;

    t93 = ((x413-(x414>x415))==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = INT8_MAX;
	uint64_t x418 = 604715LLU;
	int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t94 = 81;

    t94 = ((x417-(x418>x419))==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x421 = UINT64_MAX;
	uint8_t x422 = 0U;
	volatile int64_t x423 = INT64_MAX;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t95 = 63;

    t95 = ((x421-(x422>x423))==x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x425 = 0U;
	static uint8_t x427 = 0U;
	int32_t x428 = INT32_MAX;
	volatile int32_t t96 = 11312;

    t96 = ((x425-(x426>x427))==x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x430 = -1LL;
	static uint8_t x431 = 1U;
	static volatile int16_t x432 = -1;
	int32_t t97 = -84385;

    t97 = ((x429-(x430>x431))==x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x433 = 30U;
	static int32_t x436 = -1;
	static volatile int32_t t98 = -4744501;

    t98 = ((x433-(x434>x435))==x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x437 = 58;
	uint8_t x438 = UINT8_MAX;
	uint32_t x439 = 99629U;
	int8_t x440 = 6;

    t99 = ((x437-(x438>x439))==x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = -1;
	uint32_t x442 = 0U;
	int64_t x443 = INT64_MIN;
	static int64_t x444 = 20355LL;
	volatile int32_t t100 = 0;

    t100 = ((x441-(x442>x443))==x444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x445 = 0U;
	int32_t x446 = 82319;
	static uint16_t x447 = UINT16_MAX;
	volatile int32_t t101 = 97936;

    t101 = ((x445-(x446>x447))==x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x449 = -1;
	static int64_t x450 = -1LL;
	volatile uint16_t x451 = 4U;
	int32_t x452 = -1;
	int32_t t102 = -1;

    t102 = ((x449-(x450>x451))==x452);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x453 = 0U;
	static volatile int16_t x454 = 282;
	int8_t x455 = INT8_MIN;
	uint64_t x456 = 1819820362689LLU;

    t103 = ((x453-(x454>x455))==x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = -1LL;
	uint32_t x458 = 723489U;
	static uint64_t x459 = 28LLU;
	static volatile int32_t x460 = INT32_MIN;
	volatile int32_t t104 = 1041132;

    t104 = ((x457-(x458>x459))==x460);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x461 = 560514067LLU;
	volatile int8_t x462 = -1;
	int8_t x464 = -2;
	int32_t t105 = 4387905;

    t105 = ((x461-(x462>x463))==x464);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x465 = UINT16_MAX;
	uint32_t x466 = UINT32_MAX;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	int32_t t106 = 1;

    t106 = ((x465-(x466>x467))==x468);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x469 = UINT32_MAX;
	uint64_t x470 = 922211096798075LLU;
	int64_t x471 = INT64_MIN;
	static int64_t x472 = INT64_MAX;
	int32_t t107 = 434;

    t107 = ((x469-(x470>x471))==x472);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x473 = 3U;
	uint16_t x474 = 16U;
	volatile int32_t t108 = 120764;

    t108 = ((x473-(x474>x475))==x476);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x477 = 618130;
	static int32_t x478 = INT32_MIN;
	volatile int32_t t109 = -1587086;

    t109 = ((x477-(x478>x479))==x480);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x481 = 11LLU;
	uint16_t x482 = UINT16_MAX;
	volatile int32_t x483 = INT32_MIN;
	int32_t x484 = -1;
	volatile int32_t t110 = 19;

    t110 = ((x481-(x482>x483))==x484);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x485 = 6175195682LL;
	static int32_t x486 = INT32_MIN;
	static uint8_t x487 = 44U;
	int32_t t111 = -1;

    t111 = ((x485-(x486>x487))==x488);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x489 = UINT64_MAX;
	int16_t x491 = 361;
	static uint16_t x492 = UINT16_MAX;
	volatile int32_t t112 = 170152;

    t112 = ((x489-(x490>x491))==x492);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x493 = UINT16_MAX;
	int32_t x495 = -1;
	int16_t x496 = INT16_MIN;
	int32_t t113 = -1;

    t113 = ((x493-(x494>x495))==x496);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x498 = 50U;
	uint8_t x499 = UINT8_MAX;
	uint16_t x500 = 761U;
	int32_t t114 = 9;

    t114 = ((x497-(x498>x499))==x500);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x501 = INT8_MIN;
	static int16_t x502 = -599;
	uint32_t x503 = UINT32_MAX;
	int32_t t115 = -178299;

    t115 = ((x501-(x502>x503))==x504);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x505 = -1LL;
	static volatile int64_t x507 = -2204LL;
	int32_t x508 = INT32_MIN;
	volatile int32_t t116 = 207980124;

    t116 = ((x505-(x506>x507))==x508);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x510 = INT64_MIN;
	int32_t x511 = -1;
	int32_t x512 = -1;
	volatile int32_t t117 = 41;

    t117 = ((x509-(x510>x511))==x512);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x513 = -4541;
	uint8_t x514 = UINT8_MAX;
	int64_t x515 = INT64_MAX;

    t118 = ((x513-(x514>x515))==x516);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x517 = 0U;
	int32_t x519 = INT32_MIN;
	uint32_t x520 = 10449U;
	int32_t t119 = -18896;

    t119 = ((x517-(x518>x519))==x520);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int32_t x521 = -1;
	volatile int8_t x523 = INT8_MAX;
	static uint8_t x524 = 3U;
	static volatile int32_t t120 = 0;

    t120 = ((x521-(x522>x523))==x524);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x526 = -1;
	int32_t x527 = -1;
	int64_t x528 = 30657682354LL;
	int32_t t121 = 640580;

    t121 = ((x525-(x526>x527))==x528);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x529 = -1;
	int32_t x530 = INT32_MIN;
	volatile int8_t x531 = -6;
	int64_t x532 = INT64_MIN;
	int32_t t122 = 86444327;

    t122 = ((x529-(x530>x531))==x532);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x533 = 11U;
	uint16_t x534 = UINT16_MAX;
	int32_t x536 = INT32_MIN;
	int32_t t123 = 7631476;

    t123 = ((x533-(x534>x535))==x536);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x537 = 9446996148461LLU;
	int8_t x538 = INT8_MIN;
	int8_t x540 = 1;
	int32_t t124 = 94233;

    t124 = ((x537-(x538>x539))==x540);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x541 = 1956;
	static volatile uint32_t x543 = 440825U;
	int64_t x544 = -2060755LL;
	volatile int32_t t125 = 152910725;

    t125 = ((x541-(x542>x543))==x544);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x545 = UINT32_MAX;
	int16_t x546 = -1;
	int16_t x547 = INT16_MIN;
	uint8_t x548 = 2U;
	volatile int32_t t126 = 222055;

    t126 = ((x545-(x546>x547))==x548);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x549 = 15;
	uint8_t x550 = UINT8_MAX;
	uint32_t x551 = 23U;
	int8_t x552 = INT8_MIN;

    t127 = ((x549-(x550>x551))==x552);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x553 = INT64_MAX;
	int8_t x554 = INT8_MIN;
	static int16_t x555 = 64;
	int16_t x556 = 1378;
	volatile int32_t t128 = -1563;

    t128 = ((x553-(x554>x555))==x556);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x557 = 1U;
	int16_t x558 = 3;
	int8_t x559 = INT8_MIN;
	int16_t x560 = -15;

    t129 = ((x557-(x558>x559))==x560);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x561 = 394648880216LLU;
	uint8_t x563 = 22U;
	uint8_t x564 = 15U;

    t130 = ((x561-(x562>x563))==x564);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x565 = INT16_MIN;
	static volatile uint16_t x567 = 1U;
	volatile int32_t x568 = INT32_MIN;
	int32_t t131 = -10578;

    t131 = ((x565-(x566>x567))==x568);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x569 = -22;
	uint16_t x570 = 646U;
	uint32_t x572 = 186420433U;
	volatile int32_t t132 = -520234;

    t132 = ((x569-(x570>x571))==x572);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x573 = INT8_MAX;
	int16_t x575 = -1;
	uint32_t x576 = UINT32_MAX;
	int32_t t133 = 218;

    t133 = ((x573-(x574>x575))==x576);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x578 = INT16_MAX;
	static int32_t x579 = -1;
	volatile uint64_t x580 = UINT64_MAX;
	int32_t t134 = -660944850;

    t134 = ((x577-(x578>x579))==x580);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x581 = 183180LLU;
	int8_t x582 = 12;
	int32_t x583 = INT32_MIN;
	volatile int64_t x584 = INT64_MAX;
	int32_t t135 = -156;

    t135 = ((x581-(x582>x583))==x584);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = -12;
	int32_t x586 = 99303;
	uint32_t x587 = 8333U;
	static volatile int32_t t136 = -60;

    t136 = ((x585-(x586>x587))==x588);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x590 = -3863097LL;
	volatile int64_t x591 = -1LL;
	volatile int8_t x592 = INT8_MIN;
	static volatile int32_t t137 = 1026813542;

    t137 = ((x589-(x590>x591))==x592);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int64_t x596 = -16931832279640958LL;

    t138 = ((x593-(x594>x595))==x596);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x597 = -1;
	int16_t x598 = INT16_MAX;
	static volatile uint8_t x599 = 4U;
	static uint16_t x600 = 734U;
	volatile int32_t t139 = 9037;

    t139 = ((x597-(x598>x599))==x600);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint32_t x602 = 129U;
	int32_t x603 = INT32_MIN;
	int8_t x604 = 0;
	int32_t t140 = -7153771;

    t140 = ((x601-(x602>x603))==x604);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x605 = INT16_MIN;
	volatile int16_t x606 = -246;
	volatile int32_t x607 = -1;
	int32_t t141 = 852;

    t141 = ((x605-(x606>x607))==x608);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x609 = -18;
	int32_t x610 = -23;
	int64_t x611 = -7392LL;
	volatile uint32_t x612 = UINT32_MAX;
	static int32_t t142 = -304;

    t142 = ((x609-(x610>x611))==x612);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x613 = UINT16_MAX;
	int16_t x614 = -1;
	static int64_t x616 = 57740848LL;

    t143 = ((x613-(x614>x615))==x616);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x617 = 19U;
	int64_t x618 = -1LL;
	volatile uint32_t x619 = 55714888U;
	volatile int16_t x620 = INT16_MAX;
	static int32_t t144 = -742572285;

    t144 = ((x617-(x618>x619))==x620);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x625 = INT64_MIN;
	uint32_t x627 = UINT32_MAX;
	int32_t x628 = INT32_MIN;
	int32_t t145 = -1896642;

    t145 = ((x625-(x626>x627))==x628);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x629 = INT16_MAX;
	int16_t x630 = -6780;
	uint16_t x632 = 565U;
	int32_t t146 = 5;

    t146 = ((x629-(x630>x631))==x632);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x633 = 6781LLU;
	int8_t x636 = 62;
	volatile int32_t t147 = -7;

    t147 = ((x633-(x634>x635))==x636);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x637 = INT8_MAX;
	int16_t x638 = INT16_MIN;
	volatile uint32_t x639 = 465U;
	int64_t x640 = INT64_MIN;
	int32_t t148 = -76;

    t148 = ((x637-(x638>x639))==x640);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x641 = 1429336025LLU;
	uint32_t x642 = 683194746U;
	volatile int8_t x643 = -1;
	int64_t x644 = INT64_MIN;
	int32_t t149 = 0;

    t149 = ((x641-(x642>x643))==x644);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x645 = INT16_MIN;
	int8_t x646 = -1;
	uint64_t x647 = UINT64_MAX;
	volatile int32_t t150 = -169715;

    t150 = ((x645-(x646>x647))==x648);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x650 = -2;
	static volatile int8_t x652 = INT8_MIN;
	int32_t t151 = -13088;

    t151 = ((x649-(x650>x651))==x652);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x653 = UINT64_MAX;
	int8_t x654 = INT8_MAX;
	volatile uint32_t x655 = 3004704U;
	int32_t x656 = -7;
	volatile int32_t t152 = 523656054;

    t152 = ((x653-(x654>x655))==x656);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x657 = 21U;
	static int16_t x658 = INT16_MIN;
	int16_t x660 = INT16_MAX;
	volatile int32_t t153 = -21;

    t153 = ((x657-(x658>x659))==x660);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x661 = 1217;
	uint16_t x662 = 5285U;
	static volatile uint64_t x663 = UINT64_MAX;
	int32_t t154 = -64622;

    t154 = ((x661-(x662>x663))==x664);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x665 = -1;
	int32_t x666 = 41806616;
	int8_t x668 = INT8_MAX;
	volatile int32_t t155 = -197;

    t155 = ((x665-(x666>x667))==x668);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x670 = 1466478U;

    t156 = ((x669-(x670>x671))==x672);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x673 = INT16_MIN;
	volatile int16_t x674 = INT16_MAX;
	static volatile int16_t x676 = INT16_MAX;
	volatile int32_t t157 = 1915;

    t157 = ((x673-(x674>x675))==x676);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x677 = 32U;
	static int8_t x679 = INT8_MIN;
	static int64_t x680 = INT64_MAX;
	int32_t t158 = -222838;

    t158 = ((x677-(x678>x679))==x680);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x682 = 5;
	int16_t x683 = INT16_MAX;
	int32_t t159 = -392;

    t159 = ((x681-(x682>x683))==x684);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x685 = UINT64_MAX;
	uint32_t x687 = 2247U;
	volatile int32_t t160 = -5390;

    t160 = ((x685-(x686>x687))==x688);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x689 = -1;
	uint16_t x691 = UINT16_MAX;
	volatile uint64_t x692 = UINT64_MAX;
	volatile int32_t t161 = 3;

    t161 = ((x689-(x690>x691))==x692);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x693 = INT8_MIN;
	int64_t x694 = 379017443693548614LL;
	static int64_t x695 = -1LL;
	volatile int8_t x696 = 2;
	int32_t t162 = -11291;

    t162 = ((x693-(x694>x695))==x696);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x697 = 0U;
	volatile int64_t x699 = INT64_MAX;
	static volatile uint16_t x700 = 0U;
	int32_t t163 = 63417782;

    t163 = ((x697-(x698>x699))==x700);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x702 = INT16_MAX;
	int64_t x703 = -1LL;
	int8_t x704 = INT8_MIN;

    t164 = ((x701-(x702>x703))==x704);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x705 = 979661006362014LLU;
	int64_t x707 = INT64_MAX;
	static int32_t t165 = -15923;

    t165 = ((x705-(x706>x707))==x708);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x710 = 204LLU;
	static int8_t x711 = INT8_MIN;
	int8_t x712 = INT8_MIN;
	volatile int32_t t166 = 63683;

    t166 = ((x709-(x710>x711))==x712);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x713 = -1;
	static uint16_t x714 = 7U;
	int32_t t167 = 1;

    t167 = ((x713-(x714>x715))==x716);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = 874005225606712192LL;
	uint8_t x718 = 113U;

    t168 = ((x717-(x718>x719))==x720);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x721 = INT32_MIN;
	volatile int64_t x722 = -255LL;
	int16_t x723 = -1;
	int16_t x724 = -13;

    t169 = ((x721-(x722>x723))==x724);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x725 = INT8_MAX;
	int32_t x727 = -20233988;
	int32_t t170 = -708393701;

    t170 = ((x725-(x726>x727))==x728);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x733 = 0U;
	int64_t x734 = -30LL;
	int32_t x735 = INT32_MAX;
	uint32_t x736 = 11286191U;

    t171 = ((x733-(x734>x735))==x736);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x737 = INT32_MIN;
	int32_t x738 = INT32_MIN;
	int64_t x739 = INT64_MAX;

    t172 = ((x737-(x738>x739))==x740);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x741 = UINT64_MAX;
	int64_t x743 = INT64_MIN;
	volatile int32_t x744 = INT32_MAX;

    t173 = ((x741-(x742>x743))==x744);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x745 = 11LLU;
	uint16_t x746 = 357U;
	uint32_t x747 = 224481720U;
	volatile int32_t x748 = -186;

    t174 = ((x745-(x746>x747))==x748);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int16_t x749 = -1;
	volatile int32_t t175 = -3;

    t175 = ((x749-(x750>x751))==x752);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x753 = 242;
	volatile int16_t x754 = -1;
	int64_t x755 = INT64_MAX;
	int16_t x756 = 74;
	static int32_t t176 = 0;

    t176 = ((x753-(x754>x755))==x756);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x757 = -1LL;
	int64_t x758 = -1LL;
	int16_t x759 = INT16_MIN;
	int64_t x760 = INT64_MIN;
	static volatile int32_t t177 = 1;

    t177 = ((x757-(x758>x759))==x760);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x763 = UINT16_MAX;
	volatile int64_t x764 = INT64_MIN;

    t178 = ((x761-(x762>x763))==x764);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x765 = -131054707947006LL;
	static uint32_t x767 = 3U;
	int64_t x768 = -1LL;
	static int32_t t179 = 74656;

    t179 = ((x765-(x766>x767))==x768);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x769 = INT8_MAX;
	static int16_t x771 = 10;
	int32_t x772 = 3;
	int32_t t180 = 28;

    t180 = ((x769-(x770>x771))==x772);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x773 = 2857995651644511668LLU;
	int8_t x774 = INT8_MAX;
	volatile int8_t x775 = INT8_MAX;

    t181 = ((x773-(x774>x775))==x776);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x777 = INT64_MAX;
	volatile uint16_t x778 = 16013U;
	volatile uint16_t x780 = 2776U;
	int32_t t182 = 872;

    t182 = ((x777-(x778>x779))==x780);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x781 = UINT64_MAX;
	uint8_t x782 = 0U;
	int64_t x783 = INT64_MIN;
	static uint16_t x784 = 1U;
	volatile int32_t t183 = -40;

    t183 = ((x781-(x782>x783))==x784);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int8_t x788 = 5;

    t184 = ((x785-(x786>x787))==x788);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x790 = 607768614002959LLU;
	int8_t x791 = -13;
	uint32_t x792 = UINT32_MAX;

    t185 = ((x789-(x790>x791))==x792);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x794 = 450;
	uint64_t x796 = 36678395263699410LLU;
	static volatile int32_t t186 = 1235;

    t186 = ((x793-(x794>x795))==x796);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x797 = 33LL;
	static uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MIN;
	static volatile int32_t t187 = 1;

    t187 = ((x797-(x798>x799))==x800);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x801 = 48100042228338638LLU;
	uint8_t x803 = 43U;
	static uint16_t x804 = 5411U;
	volatile int32_t t188 = 120187846;

    t188 = ((x801-(x802>x803))==x804);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x805 = -1;
	int32_t x806 = INT32_MAX;
	uint16_t x807 = UINT16_MAX;
	int16_t x808 = INT16_MAX;
	int32_t t189 = -530865689;

    t189 = ((x805-(x806>x807))==x808);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint64_t x809 = 3684902996503471716LLU;
	int16_t x810 = 769;
	uint8_t x811 = UINT8_MAX;
	uint64_t x812 = 10399973269LLU;

    t190 = ((x809-(x810>x811))==x812);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x817 = INT8_MIN;
	static volatile int16_t x818 = INT16_MAX;
	static int64_t x820 = -1LL;
	int32_t t191 = 24;

    t191 = ((x817-(x818>x819))==x820);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x821 = UINT16_MAX;
	static uint64_t x822 = 1934897730656LLU;
	int16_t x823 = INT16_MIN;
	int32_t x824 = 78928353;
	int32_t t192 = 169550764;

    t192 = ((x821-(x822>x823))==x824);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x825 = 3U;
	static volatile int8_t x826 = INT8_MIN;
	uint64_t x827 = 128219LLU;
	volatile int32_t t193 = -451337;

    t193 = ((x825-(x826>x827))==x828);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x829 = 13200034859040100LL;
	volatile int8_t x830 = INT8_MIN;
	volatile int64_t x831 = INT64_MAX;
	int8_t x832 = 3;
	int32_t t194 = -5539;

    t194 = ((x829-(x830>x831))==x832);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x833 = -691250280LL;
	int8_t x834 = -2;
	volatile uint32_t x836 = 2053784569U;
	int32_t t195 = 20;

    t195 = ((x833-(x834>x835))==x836);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x837 = -1303LL;
	int32_t x840 = INT32_MAX;
	int32_t t196 = -38;

    t196 = ((x837-(x838>x839))==x840);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x841 = INT8_MIN;
	uint64_t x842 = UINT64_MAX;
	static volatile uint8_t x844 = 14U;
	int32_t t197 = -57686239;

    t197 = ((x841-(x842>x843))==x844);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x845 = INT8_MIN;
	int8_t x847 = INT8_MAX;
	uint16_t x848 = 11063U;
	volatile int32_t t198 = 11702;

    t198 = ((x845-(x846>x847))==x848);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x849 = 422LLU;
	int8_t x850 = 0;
	uint32_t x852 = UINT32_MAX;
	int32_t t199 = -7;

    t199 = ((x849-(x850>x851))==x852);

    if (t199 != 0) { NG(); } else { ; }
	
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

