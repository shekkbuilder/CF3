
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

static int16_t x4 = INT16_MIN;
volatile int64_t x9 = INT64_MIN;
uint16_t x12 = 565U;
volatile int64_t x18 = -1LL;
int64_t x23 = INT64_MAX;
static uint64_t x30 = UINT64_MAX;
volatile int8_t x33 = INT8_MIN;
int8_t x39 = INT8_MIN;
static volatile uint64_t x52 = 2273LLU;
static int64_t x57 = -1LL;
volatile uint16_t x60 = 2452U;
int64_t x61 = -33671802232906288LL;
int64_t x67 = -1LL;
static uint16_t x70 = 28588U;
volatile int32_t t19 = -56;
int16_t x87 = INT16_MIN;
int32_t t21 = 13791;
volatile int64_t x103 = 218474860942774LL;
static uint64_t x111 = 17446655082102LLU;
int32_t t25 = 4607436;
uint8_t x115 = UINT8_MAX;
uint64_t x119 = 414022660645LLU;
int16_t x121 = -1;
uint16_t x124 = 1301U;
volatile int64_t x137 = INT64_MIN;
int16_t x143 = -24;
int8_t x148 = 0;
volatile int32_t t32 = 711364;
volatile uint32_t x150 = UINT32_MAX;
int32_t x162 = INT32_MIN;
uint32_t x174 = UINT32_MAX;
uint64_t x176 = 13248391LLU;
volatile int32_t t37 = -638329673;
int64_t x178 = -1LL;
volatile int32_t x180 = -1;
volatile int8_t x181 = INT8_MIN;
volatile int32_t x182 = INT32_MIN;
uint32_t x192 = UINT32_MAX;
int64_t x200 = INT64_MAX;
int16_t x207 = INT16_MIN;
int32_t t44 = -13846229;
static uint8_t x212 = 0U;
static int32_t t45 = 72733;
uint8_t x223 = 5U;
int8_t x234 = INT8_MAX;
uint16_t x247 = 3240U;
volatile uint32_t x248 = 1588U;
int8_t x255 = INT8_MAX;
volatile int8_t x263 = INT8_MAX;
int32_t x269 = INT32_MIN;
volatile int16_t x276 = -1;
uint64_t x279 = UINT64_MAX;
int32_t x282 = INT32_MIN;
static int32_t t63 = -58555;
volatile int8_t x285 = INT8_MIN;
int32_t t64 = 15205;
int16_t x296 = -177;
volatile uint64_t x317 = 71348LLU;
int64_t x319 = -1LL;
static uint64_t x326 = UINT64_MAX;
int64_t x328 = -1LL;
int8_t x331 = -1;
static int8_t x335 = 57;
int32_t x337 = 3;
int8_t x339 = INT8_MAX;
int64_t x343 = -1LL;
static volatile int32_t t76 = 1814;
volatile int32_t t78 = -4130305;
int8_t x357 = INT8_MIN;
volatile uint32_t x358 = 36U;
static int16_t x360 = INT16_MIN;
int64_t x364 = 0LL;
uint16_t x370 = UINT16_MAX;
uint32_t x372 = UINT32_MAX;
uint32_t x374 = 57362U;
static volatile uint32_t x375 = 1127U;
uint8_t x376 = 0U;
volatile uint64_t x377 = UINT64_MAX;
volatile int16_t x378 = -1;
uint64_t x383 = 85LLU;
int16_t x385 = -1;
static uint8_t x388 = UINT8_MAX;
int64_t x389 = -6LL;
static uint32_t x390 = UINT32_MAX;
static uint32_t x399 = UINT32_MAX;
volatile int8_t x400 = INT8_MIN;
int32_t t89 = -885288;
int32_t x402 = INT32_MAX;
static int32_t t90 = -24345732;
int16_t x406 = 85;
int16_t x410 = -1;
int16_t x414 = -5310;
int64_t x418 = 2292464547097485939LL;
int8_t x420 = -20;
int16_t x421 = INT16_MIN;
int64_t x437 = INT64_MIN;
int8_t x438 = 6;
volatile int8_t x448 = INT8_MIN;
int64_t x450 = INT64_MIN;
uint32_t x452 = 86026U;
int32_t x463 = 29;
int32_t x471 = -1;
int16_t x472 = 247;
static int32_t t106 = -4680;
volatile int64_t x477 = 125197856LL;
static int32_t x480 = -1;
volatile int8_t x483 = -25;
static volatile int32_t t109 = 842;
static int64_t x490 = -5LL;
int32_t x493 = -1;
static uint32_t x500 = UINT32_MAX;
volatile int16_t x505 = 74;
static volatile uint8_t x507 = 7U;
int8_t x514 = INT8_MAX;
uint8_t x515 = 5U;
uint64_t x539 = UINT64_MAX;
int64_t x540 = 4720298514788LL;
int32_t t123 = -100967211;
int16_t x548 = INT16_MIN;
volatile int32_t x554 = INT32_MIN;
int64_t x556 = INT64_MIN;
uint64_t x562 = UINT64_MAX;
uint32_t x566 = 469988U;
int64_t x572 = -1LL;
uint16_t x574 = 2934U;
static volatile int32_t t131 = 320;
volatile uint32_t x577 = UINT32_MAX;
uint64_t x580 = 438981308463LLU;
volatile uint64_t x590 = 16076319174579LLU;
int32_t x593 = INT32_MIN;
int32_t x597 = INT32_MAX;
volatile int16_t x599 = -1;
int8_t x606 = -4;
int32_t t140 = 29275832;
int8_t x613 = INT8_MAX;
static volatile int32_t t141 = 1188584;
int32_t x617 = -70;
uint64_t x632 = UINT64_MAX;
static uint64_t x634 = 14976090LLU;
volatile int8_t x640 = INT8_MIN;
volatile int32_t x655 = 0;
uint8_t x656 = UINT8_MAX;
static volatile int32_t t154 = -59;
static int8_t x675 = INT8_MIN;
volatile int32_t t155 = -841625209;
static int64_t x677 = -893LL;
volatile uint32_t x683 = UINT32_MAX;
int8_t x697 = -1;
int64_t x698 = INT64_MIN;
int8_t x707 = 0;
static int16_t x712 = -1;
volatile int32_t t166 = -152921452;
volatile int8_t x721 = 7;
int32_t x726 = INT32_MIN;
uint64_t x728 = 27LLU;
int8_t x731 = INT8_MIN;
volatile int64_t x732 = INT64_MIN;
int16_t x742 = INT16_MIN;
int16_t x744 = -11;
int64_t x745 = -3770547LL;
volatile int64_t x746 = INT64_MIN;
volatile uint16_t x748 = 12173U;
volatile int32_t t172 = -4;
int32_t x759 = INT32_MIN;
static uint64_t x765 = 12827048443LLU;
static uint64_t x768 = UINT64_MAX;
uint64_t x771 = UINT64_MAX;
int32_t t178 = 412840;
static uint64_t x773 = UINT64_MAX;
static uint32_t x792 = 695U;
int32_t t183 = 1971697;
uint8_t x794 = 4U;
int16_t x799 = INT16_MIN;
int32_t t185 = -252133;
int8_t x804 = INT8_MAX;
static int32_t t186 = -1;
volatile int32_t t189 = 1351972;
static uint32_t x817 = UINT32_MAX;
volatile int64_t x830 = -21LL;
int64_t x835 = -695LL;
int16_t x845 = INT16_MIN;
uint16_t x847 = 0U;
uint32_t x852 = 105589U;
volatile int64_t x853 = INT64_MAX;
volatile uint64_t x859 = 3045490471099188634LLU;
int32_t t197 = 0;
uint32_t x866 = 50523U;


void f0(void) {
    	volatile int16_t x1 = -1;
	volatile int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	int32_t t0 = 1013;

    t0 = (((x1%x2)*x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	int8_t x6 = INT8_MAX;
	int8_t x7 = 4;
	int64_t x8 = -64118281LL;
	int32_t t1 = 3;

    t1 = (((x5%x6)*x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x10 = INT32_MIN;
	static volatile int32_t x11 = INT32_MAX;
	volatile int32_t t2 = 16205;

    t2 = (((x9%x10)*x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 1313189U;
	volatile uint16_t x14 = 4U;
	volatile uint16_t x15 = UINT16_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -3946342;

    t3 = (((x13%x14)*x15)==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = UINT64_MAX;
	uint16_t x19 = 687U;
	int64_t x20 = INT64_MIN;
	static volatile int32_t t4 = 40;

    t4 = (((x17%x18)*x19)==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static volatile uint16_t x22 = 395U;
	static int64_t x24 = INT64_MIN;
	volatile int32_t t5 = -46600;

    t5 = (((x21%x22)*x23)==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = INT64_MAX;
	static uint32_t x26 = UINT32_MAX;
	int16_t x27 = 40;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 471;

    t6 = (((x25%x26)*x27)==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	uint64_t x31 = 2517LLU;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 153917867;

    t7 = (((x29%x30)*x31)==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x34 = -1;
	volatile uint8_t x35 = 36U;
	static volatile uint64_t x36 = UINT64_MAX;
	volatile int32_t t8 = 273336521;

    t8 = (((x33%x34)*x35)==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = 36;
	static int8_t x38 = INT8_MAX;
	uint8_t x40 = 1U;
	volatile int32_t t9 = 42;

    t9 = (((x37%x38)*x39)==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	uint64_t x42 = 1838118703380520LLU;
	volatile uint16_t x43 = UINT16_MAX;
	int64_t x44 = INT64_MIN;
	int32_t t10 = 305668;

    t10 = (((x41%x42)*x43)==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	volatile int8_t x50 = INT8_MIN;
	uint8_t x51 = UINT8_MAX;
	volatile int32_t t11 = -110243;

    t11 = (((x49%x50)*x51)==x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int32_t x53 = INT32_MAX;
	int16_t x54 = -3028;
	int32_t x55 = 108338;
	int8_t x56 = -1;
	static int32_t t12 = -3413;

    t12 = (((x53%x54)*x55)==x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x58 = INT32_MIN;
	int32_t x59 = -2059507;
	volatile int32_t t13 = -8119;

    t13 = (((x57%x58)*x59)==x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x62 = 2U;
	int64_t x63 = -1LL;
	int16_t x64 = INT16_MIN;
	int32_t t14 = 2807;

    t14 = (((x61%x62)*x63)==x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x65 = 19U;
	int64_t x66 = -1LL;
	uint32_t x68 = UINT32_MAX;
	static int32_t t15 = -58529857;

    t15 = (((x65%x66)*x67)==x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x69 = INT16_MIN;
	int8_t x71 = -15;
	int64_t x72 = -1LL;
	static int32_t t16 = -79;

    t16 = (((x69%x70)*x71)==x72);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x73 = 1U;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	static volatile uint64_t x76 = 954971715LLU;
	volatile int32_t t17 = -1;

    t17 = (((x73%x74)*x75)==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	int32_t x78 = 658446;
	static int8_t x79 = -1;
	static int64_t x80 = INT64_MIN;
	volatile int32_t t18 = -3399;

    t18 = (((x77%x78)*x79)==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = -1LL;
	int64_t x82 = -139903034381152601LL;
	uint32_t x83 = 3156U;
	int64_t x84 = -1LL;

    t19 = (((x81%x82)*x83)==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x85 = UINT64_MAX;
	static int16_t x86 = -1;
	volatile int32_t x88 = INT32_MAX;
	int32_t t20 = 1;

    t20 = (((x85%x86)*x87)==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = 64201;
	int32_t x90 = -1;
	volatile int32_t x91 = INT32_MAX;
	static int16_t x92 = -1;

    t21 = (((x89%x90)*x91)==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MIN;
	int64_t x95 = -1LL;
	int32_t x96 = -1;
	volatile int32_t t22 = 10087032;

    t22 = (((x93%x94)*x95)==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x97 = 344405710530539LLU;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = -1;
	int32_t x100 = -327345336;
	volatile int32_t t23 = -705235459;

    t23 = (((x97%x98)*x99)==x100);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x101 = -1LL;
	int64_t x102 = -417074585746167LL;
	uint16_t x104 = 40U;
	int32_t t24 = -680677551;

    t24 = (((x101%x102)*x103)==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x109 = INT32_MAX;
	int64_t x110 = 82886407810065706LL;
	int64_t x112 = INT64_MIN;

    t25 = (((x109%x110)*x111)==x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x113 = 9038U;
	uint8_t x114 = 111U;
	int16_t x116 = 1156;
	int32_t t26 = 23;

    t26 = (((x113%x114)*x115)==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = 55;
	int64_t x118 = INT64_MIN;
	uint8_t x120 = 2U;
	volatile int32_t t27 = -455039;

    t27 = (((x117%x118)*x119)==x120);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x122 = -1LL;
	uint16_t x123 = UINT16_MAX;
	int32_t t28 = 54968;

    t28 = (((x121%x122)*x123)==x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = -15;
	int64_t x134 = 6836874392LL;
	volatile int16_t x135 = INT16_MAX;
	static int64_t x136 = -1LL;
	static volatile int32_t t29 = 98980694;

    t29 = (((x133%x134)*x135)==x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x138 = INT32_MIN;
	uint64_t x139 = 2LLU;
	uint32_t x140 = 304155U;
	static int32_t t30 = 2371437;

    t30 = (((x137%x138)*x139)==x140);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = 24;
	int64_t x142 = -1LL;
	int16_t x144 = -1;
	int32_t t31 = -181524;

    t31 = (((x141%x142)*x143)==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MIN;
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = -427035362LL;

    t32 = (((x145%x146)*x147)==x148);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x149 = INT16_MIN;
	uint32_t x151 = 430083U;
	int64_t x152 = INT64_MAX;
	volatile int32_t t33 = 54769188;

    t33 = (((x149%x150)*x151)==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint8_t x161 = UINT8_MAX;
	int16_t x163 = INT16_MIN;
	int32_t x164 = INT32_MIN;
	static int32_t t34 = -33;

    t34 = (((x161%x162)*x163)==x164);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint32_t x165 = UINT32_MAX;
	static uint8_t x166 = 1U;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = -2493;
	int32_t t35 = -41636;

    t35 = (((x165%x166)*x167)==x168);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x169 = UINT16_MAX;
	uint16_t x170 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	int32_t x172 = -97955456;
	int32_t t36 = 90971;

    t36 = (((x169%x170)*x171)==x172);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x173 = -1;
	static uint64_t x175 = 23588LLU;

    t37 = (((x173%x174)*x175)==x176);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x177 = INT16_MIN;
	int64_t x179 = INT64_MAX;
	static int32_t t38 = 1026403;

    t38 = (((x177%x178)*x179)==x180);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int8_t x183 = INT8_MAX;
	volatile int8_t x184 = INT8_MIN;
	int32_t t39 = -37379096;

    t39 = (((x181%x182)*x183)==x184);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x185 = INT8_MIN;
	volatile int16_t x186 = -302;
	volatile uint64_t x187 = 27758044597LLU;
	uint16_t x188 = UINT16_MAX;
	volatile int32_t t40 = -6;

    t40 = (((x185%x186)*x187)==x188);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x189 = UINT8_MAX;
	uint64_t x190 = 6163929LLU;
	int8_t x191 = -1;
	int32_t t41 = 2175444;

    t41 = (((x189%x190)*x191)==x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = -7338;
	volatile uint8_t x198 = 1U;
	volatile int64_t x199 = INT64_MAX;
	int32_t t42 = 6763583;

    t42 = (((x197%x198)*x199)==x200);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x201 = -1LL;
	int16_t x202 = -3;
	volatile uint64_t x203 = 1387483575367460LLU;
	int32_t x204 = INT32_MIN;
	volatile int32_t t43 = -159555;

    t43 = (((x201%x202)*x203)==x204);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x205 = -30;
	int16_t x206 = -1;
	int32_t x208 = -1;

    t44 = (((x205%x206)*x207)==x208);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x209 = 2713708U;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = UINT16_MAX;

    t45 = (((x209%x210)*x211)==x212);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = 6;
	uint64_t x215 = 1187266394498LLU;
	int8_t x216 = INT8_MIN;
	volatile int32_t t46 = 165875;

    t46 = (((x213%x214)*x215)==x216);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	static uint16_t x219 = 1U;
	static int32_t x220 = 0;
	volatile int32_t t47 = 327244175;

    t47 = (((x217%x218)*x219)==x220);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x221 = 1U;
	volatile uint16_t x222 = UINT16_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t48 = 519;

    t48 = (((x221%x222)*x223)==x224);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = 0;
	int32_t x226 = -1;
	volatile int8_t x227 = 1;
	int16_t x228 = -1;
	int32_t t49 = -4520392;

    t49 = (((x225%x226)*x227)==x228);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x229 = -1;
	int64_t x230 = 28140548145108815LL;
	int8_t x231 = INT8_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t50 = 686957454;

    t50 = (((x229%x230)*x231)==x232);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x233 = 102758U;
	int8_t x235 = -1;
	static int8_t x236 = -29;
	int32_t t51 = 787609;

    t51 = (((x233%x234)*x235)==x236);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x237 = 46825600LLU;
	static uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MIN;
	int32_t t52 = -24858;

    t52 = (((x237%x238)*x239)==x240);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int16_t x241 = -1;
	int8_t x242 = INT8_MIN;
	volatile int64_t x243 = -1LL;
	volatile int8_t x244 = INT8_MIN;
	static int32_t t53 = -721145;

    t53 = (((x241%x242)*x243)==x244);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x245 = INT8_MIN;
	static volatile int32_t x246 = 23;
	int32_t t54 = 30287;

    t54 = (((x245%x246)*x247)==x248);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x249 = INT16_MIN;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t55 = 5382;

    t55 = (((x249%x250)*x251)==x252);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x253 = 235361LL;
	volatile uint32_t x254 = UINT32_MAX;
	static uint64_t x256 = 786LLU;
	int32_t t56 = 16031;

    t56 = (((x253%x254)*x255)==x256);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x257 = UINT8_MAX;
	volatile uint32_t x258 = 12U;
	int32_t x259 = -1;
	uint16_t x260 = 33U;
	volatile int32_t t57 = -3;

    t57 = (((x257%x258)*x259)==x260);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x261 = INT8_MIN;
	volatile int32_t x262 = -1;
	int16_t x264 = -737;
	volatile int32_t t58 = -49531;

    t58 = (((x261%x262)*x263)==x264);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x265 = -1;
	volatile int16_t x266 = INT16_MAX;
	static int8_t x267 = INT8_MIN;
	volatile int32_t x268 = 474937868;
	int32_t t59 = 171292897;

    t59 = (((x265%x266)*x267)==x268);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x270 = 1U;
	int8_t x271 = -1;
	int64_t x272 = INT64_MIN;
	volatile int32_t t60 = -218078;

    t60 = (((x269%x270)*x271)==x272);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x273 = -1;
	uint64_t x274 = 260077154668857LLU;
	volatile int64_t x275 = -16LL;
	volatile int32_t t61 = 860402;

    t61 = (((x273%x274)*x275)==x276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = INT8_MIN;
	static int8_t x278 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t62 = 97677752;

    t62 = (((x277%x278)*x279)==x280);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x281 = 1;
	uint32_t x283 = 1842556240U;
	int32_t x284 = INT32_MIN;

    t63 = (((x281%x282)*x283)==x284);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x286 = 7494378871060LL;
	int64_t x287 = -39LL;
	volatile int8_t x288 = -12;

    t64 = (((x285%x286)*x287)==x288);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x289 = UINT32_MAX;
	int16_t x290 = 39;
	volatile int16_t x291 = 2;
	int8_t x292 = -1;
	volatile int32_t t65 = 5132975;

    t65 = (((x289%x290)*x291)==x292);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MIN;
	uint64_t x294 = 13492LLU;
	static int16_t x295 = INT16_MAX;
	int32_t t66 = 2627;

    t66 = (((x293%x294)*x295)==x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MIN;
	uint32_t x303 = UINT32_MAX;
	int64_t x304 = -1LL;
	volatile int32_t t67 = 0;

    t67 = (((x301%x302)*x303)==x304);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = -3;
	uint32_t x306 = 3U;
	int32_t x307 = 93;
	volatile int8_t x308 = INT8_MIN;
	int32_t t68 = 66850698;

    t68 = (((x305%x306)*x307)==x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x309 = 44252806U;
	static int16_t x310 = INT16_MAX;
	volatile int16_t x311 = INT16_MIN;
	uint16_t x312 = 18832U;
	volatile int32_t t69 = 2;

    t69 = (((x309%x310)*x311)==x312);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x318 = 89208780LLU;
	int64_t x320 = -2502412LL;
	int32_t t70 = 116;

    t70 = (((x317%x318)*x319)==x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x321 = INT64_MAX;
	static uint32_t x322 = 241544U;
	static volatile int8_t x323 = INT8_MAX;
	static uint64_t x324 = UINT64_MAX;
	int32_t t71 = -939237;

    t71 = (((x321%x322)*x323)==x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x325 = -1801395947LL;
	static volatile int8_t x327 = INT8_MIN;
	volatile int32_t t72 = -151;

    t72 = (((x325%x326)*x327)==x328);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x329 = -10718;
	uint16_t x330 = 7298U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t73 = 64153677;

    t73 = (((x329%x330)*x331)==x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x333 = 1902782962LLU;
	int32_t x334 = 102;
	int64_t x336 = 1LL;
	static int32_t t74 = -18;

    t74 = (((x333%x334)*x335)==x336);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x338 = INT16_MIN;
	uint64_t x340 = 120125LLU;
	static int32_t t75 = -15;

    t75 = (((x337%x338)*x339)==x340);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x341 = 10U;
	int8_t x342 = INT8_MAX;
	int8_t x344 = 1;

    t76 = (((x341%x342)*x343)==x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = -1LL;
	volatile int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	static int32_t t77 = -2820;

    t77 = (((x349%x350)*x351)==x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x353 = 1U;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	volatile uint32_t x356 = 153644U;

    t78 = (((x353%x354)*x355)==x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x359 = 0U;
	volatile int32_t t79 = -1406;

    t79 = (((x357%x358)*x359)==x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x361 = -1LL;
	static volatile int16_t x362 = -1;
	int64_t x363 = 1300LL;
	int32_t t80 = 173671331;

    t80 = (((x361%x362)*x363)==x364);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = INT32_MAX;
	volatile uint8_t x366 = 1U;
	uint32_t x367 = 33868677U;
	uint64_t x368 = 8718009377LLU;
	volatile int32_t t81 = 2741401;

    t81 = (((x365%x366)*x367)==x368);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x369 = -1163384536552886LL;
	uint64_t x371 = 12101061734458LLU;
	volatile int32_t t82 = 13;

    t82 = (((x369%x370)*x371)==x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x373 = INT64_MIN;
	int32_t t83 = 193849433;

    t83 = (((x373%x374)*x375)==x376);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x379 = -278;
	int32_t x380 = INT32_MIN;
	volatile int32_t t84 = 10744;

    t84 = (((x377%x378)*x379)==x380);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x381 = 2300717U;
	int32_t x382 = INT32_MAX;
	uint64_t x384 = UINT64_MAX;
	volatile int32_t t85 = 5412;

    t85 = (((x381%x382)*x383)==x384);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x386 = -1;
	static uint32_t x387 = UINT32_MAX;
	int32_t t86 = 1987065;

    t86 = (((x385%x386)*x387)==x388);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x391 = INT16_MAX;
	int16_t x392 = -1;
	volatile int32_t t87 = 485400;

    t87 = (((x389%x390)*x391)==x392);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x393 = 888U;
	int32_t x394 = INT32_MIN;
	static int32_t x395 = -1;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t88 = 62284;

    t88 = (((x393%x394)*x395)==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x397 = 6U;
	uint16_t x398 = 325U;

    t89 = (((x397%x398)*x399)==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MIN;

    t90 = (((x401%x402)*x403)==x404);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x405 = INT64_MAX;
	uint16_t x407 = 10676U;
	int16_t x408 = -1;
	int32_t t91 = 1996245;

    t91 = (((x405%x406)*x407)==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x409 = INT8_MAX;
	static uint8_t x411 = 91U;
	int32_t x412 = INT32_MIN;
	int32_t t92 = -1;

    t92 = (((x409%x410)*x411)==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x413 = INT32_MIN;
	int64_t x415 = -8628268217603LL;
	volatile int32_t x416 = 25;
	volatile int32_t t93 = 38;

    t93 = (((x413%x414)*x415)==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x417 = 6U;
	int32_t x419 = -10;
	static int32_t t94 = 24570490;

    t94 = (((x417%x418)*x419)==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int64_t x422 = 1474729431LL;
	uint16_t x423 = UINT16_MAX;
	volatile uint8_t x424 = 7U;
	int32_t t95 = 71608;

    t95 = (((x421%x422)*x423)==x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x425 = 12U;
	int32_t x426 = INT32_MIN;
	uint16_t x427 = 10866U;
	uint32_t x428 = 155U;
	int32_t t96 = 247;

    t96 = (((x425%x426)*x427)==x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x429 = 19U;
	uint8_t x430 = 5U;
	uint64_t x431 = 1858185423562032LLU;
	volatile uint32_t x432 = 2785133U;
	int32_t t97 = 620168155;

    t97 = (((x429%x430)*x431)==x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x433 = -13;
	uint8_t x434 = 61U;
	uint32_t x435 = UINT32_MAX;
	int8_t x436 = INT8_MIN;
	volatile int32_t t98 = -9954372;

    t98 = (((x433%x434)*x435)==x436);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint16_t x439 = 1U;
	uint32_t x440 = 5U;
	int32_t t99 = 8;

    t99 = (((x437%x438)*x439)==x440);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x441 = INT64_MIN;
	uint64_t x442 = UINT64_MAX;
	int16_t x443 = INT16_MAX;
	int32_t x444 = 0;
	static int32_t t100 = 0;

    t100 = (((x441%x442)*x443)==x444);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x445 = -1;
	int32_t x446 = INT32_MAX;
	static int64_t x447 = -32163LL;
	volatile int32_t t101 = 4;

    t101 = (((x445%x446)*x447)==x448);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x449 = 1U;
	volatile int8_t x451 = INT8_MAX;
	int32_t t102 = 248463069;

    t102 = (((x449%x450)*x451)==x452);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x453 = INT8_MIN;
	uint8_t x454 = UINT8_MAX;
	int64_t x455 = -9839748616LL;
	int8_t x456 = INT8_MIN;
	int32_t t103 = -31;

    t103 = (((x453%x454)*x455)==x456);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x461 = INT16_MIN;
	int32_t x462 = -1;
	static uint16_t x464 = UINT16_MAX;
	volatile int32_t t104 = -7;

    t104 = (((x461%x462)*x463)==x464);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x465 = 27251247;
	int64_t x466 = INT64_MIN;
	uint64_t x467 = 3309682LLU;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t105 = 1067870;

    t105 = (((x465%x466)*x467)==x468);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x469 = 1;
	static volatile int16_t x470 = INT16_MIN;

    t106 = (((x469%x470)*x471)==x472);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x473 = INT8_MAX;
	int16_t x474 = 58;
	static uint8_t x475 = 1U;
	static int8_t x476 = 1;
	int32_t t107 = 33;

    t107 = (((x473%x474)*x475)==x476);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x478 = 20506;
	int16_t x479 = -2559;
	int32_t t108 = -430031;

    t108 = (((x477%x478)*x479)==x480);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x481 = UINT16_MAX;
	volatile uint32_t x482 = 103U;
	int32_t x484 = INT32_MIN;

    t109 = (((x481%x482)*x483)==x484);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x489 = UINT32_MAX;
	static volatile uint8_t x491 = 3U;
	int64_t x492 = -2345236LL;
	int32_t t110 = 0;

    t110 = (((x489%x490)*x491)==x492);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x494 = 3036413LL;
	uint16_t x495 = 2927U;
	volatile uint32_t x496 = UINT32_MAX;
	volatile int32_t t111 = -45662550;

    t111 = (((x493%x494)*x495)==x496);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile int64_t x498 = -31768813036001LL;
	int32_t x499 = INT32_MAX;
	int32_t t112 = 0;

    t112 = (((x497%x498)*x499)==x500);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	static volatile int64_t x502 = INT64_MAX;
	volatile int16_t x503 = INT16_MIN;
	int8_t x504 = -1;
	volatile int32_t t113 = -52147;

    t113 = (((x501%x502)*x503)==x504);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x506 = -10040LL;
	uint32_t x508 = 1U;
	int32_t t114 = -8957913;

    t114 = (((x505%x506)*x507)==x508);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x509 = UINT16_MAX;
	int32_t x510 = 485176354;
	volatile int32_t x511 = 18;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t115 = 107338;

    t115 = (((x509%x510)*x511)==x512);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x513 = 57U;
	static int64_t x516 = INT64_MAX;
	int32_t t116 = -47;

    t116 = (((x513%x514)*x515)==x516);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x517 = INT32_MIN;
	uint16_t x518 = UINT16_MAX;
	int32_t x519 = 21686;
	volatile int16_t x520 = INT16_MIN;
	int32_t t117 = 14;

    t117 = (((x517%x518)*x519)==x520);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x521 = UINT8_MAX;
	uint64_t x522 = UINT64_MAX;
	volatile int64_t x523 = -1LL;
	volatile int16_t x524 = -1;
	int32_t t118 = -34251297;

    t118 = (((x521%x522)*x523)==x524);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x525 = -1;
	int8_t x526 = 15;
	int16_t x527 = -1;
	int32_t x528 = INT32_MIN;
	volatile int32_t t119 = 1;

    t119 = (((x525%x526)*x527)==x528);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = 276;
	int32_t x530 = INT32_MIN;
	int64_t x531 = -1LL;
	int16_t x532 = INT16_MIN;
	volatile int32_t t120 = 13;

    t120 = (((x529%x530)*x531)==x532);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x533 = -1;
	static volatile int16_t x534 = -1;
	int64_t x535 = INT64_MAX;
	int64_t x536 = -1LL;
	int32_t t121 = -948100593;

    t121 = (((x533%x534)*x535)==x536);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x537 = -1LL;
	int8_t x538 = INT8_MIN;
	static int32_t t122 = -16895082;

    t122 = (((x537%x538)*x539)==x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x541 = 66U;
	static int64_t x542 = INT64_MIN;
	int8_t x543 = 31;
	volatile int32_t x544 = INT32_MIN;

    t123 = (((x541%x542)*x543)==x544);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x545 = UINT16_MAX;
	volatile uint8_t x546 = 31U;
	int16_t x547 = -1;
	int32_t t124 = -4;

    t124 = (((x545%x546)*x547)==x548);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x549 = 3LLU;
	int16_t x550 = INT16_MAX;
	int8_t x551 = 40;
	static int8_t x552 = 31;
	static volatile int32_t t125 = -10848177;

    t125 = (((x549%x550)*x551)==x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x553 = UINT64_MAX;
	static int64_t x555 = INT64_MAX;
	volatile int32_t t126 = -2082083;

    t126 = (((x553%x554)*x555)==x556);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x557 = -1LL;
	uint8_t x558 = 6U;
	static uint32_t x559 = UINT32_MAX;
	uint64_t x560 = UINT64_MAX;
	int32_t t127 = -230433181;

    t127 = (((x557%x558)*x559)==x560);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x563 = INT32_MAX;
	int8_t x564 = INT8_MAX;
	int32_t t128 = 8;

    t128 = (((x561%x562)*x563)==x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x565 = INT32_MIN;
	static int16_t x567 = -3324;
	static uint32_t x568 = UINT32_MAX;
	volatile int32_t t129 = 1947;

    t129 = (((x565%x566)*x567)==x568);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x569 = INT64_MAX;
	uint32_t x570 = 1126U;
	uint16_t x571 = UINT16_MAX;
	volatile int32_t t130 = -527;

    t130 = (((x569%x570)*x571)==x572);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x573 = 0;
	uint32_t x575 = 66174144U;
	int32_t x576 = INT32_MAX;

    t131 = (((x573%x574)*x575)==x576);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x578 = 28U;
	uint16_t x579 = 44U;
	static volatile int32_t t132 = 64469;

    t132 = (((x577%x578)*x579)==x580);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x581 = INT8_MAX;
	static uint64_t x582 = 1365080LLU;
	int32_t x583 = INT32_MIN;
	static volatile uint32_t x584 = 35283861U;
	static volatile int32_t t133 = -617012;

    t133 = (((x581%x582)*x583)==x584);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x585 = INT8_MIN;
	static int8_t x586 = -54;
	uint64_t x587 = 58786704581311370LLU;
	int32_t x588 = INT32_MIN;
	volatile int32_t t134 = -1980189;

    t134 = (((x585%x586)*x587)==x588);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x589 = INT8_MIN;
	int16_t x591 = INT16_MIN;
	int64_t x592 = -372957640015988556LL;
	int32_t t135 = 6642;

    t135 = (((x589%x590)*x591)==x592);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x594 = -46;
	volatile int32_t x595 = -1;
	uint64_t x596 = 182983LLU;
	int32_t t136 = -191886;

    t136 = (((x593%x594)*x595)==x596);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x598 = 2U;
	static volatile int64_t x600 = INT64_MIN;
	volatile int32_t t137 = 53;

    t137 = (((x597%x598)*x599)==x600);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x601 = INT16_MIN;
	uint64_t x602 = UINT64_MAX;
	int16_t x603 = INT16_MIN;
	volatile int32_t x604 = -1;
	int32_t t138 = -49;

    t138 = (((x601%x602)*x603)==x604);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = 6;
	static int8_t x607 = INT8_MAX;
	int16_t x608 = INT16_MAX;
	int32_t t139 = 15;

    t139 = (((x605%x606)*x607)==x608);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x609 = -3578529;
	volatile int16_t x610 = 1;
	int8_t x611 = -1;
	volatile int64_t x612 = INT64_MAX;

    t140 = (((x609%x610)*x611)==x612);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x614 = INT8_MIN;
	int32_t x615 = 23;
	volatile int16_t x616 = -1107;

    t141 = (((x613%x614)*x615)==x616);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x618 = -1LL;
	uint32_t x619 = 222703U;
	int64_t x620 = 10380027766LL;
	volatile int32_t t142 = 158679833;

    t142 = (((x617%x618)*x619)==x620);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x621 = UINT16_MAX;
	int8_t x622 = INT8_MIN;
	static int8_t x623 = 1;
	int32_t x624 = INT32_MIN;
	volatile int32_t t143 = 105629;

    t143 = (((x621%x622)*x623)==x624);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x625 = 1696LLU;
	volatile int64_t x626 = 610980643LL;
	uint16_t x627 = 39U;
	uint8_t x628 = 93U;
	volatile int32_t t144 = 0;

    t144 = (((x625%x626)*x627)==x628);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x629 = 37U;
	uint8_t x630 = 6U;
	static uint16_t x631 = UINT16_MAX;
	int32_t t145 = 47;

    t145 = (((x629%x630)*x631)==x632);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x633 = 2LLU;
	volatile uint64_t x635 = UINT64_MAX;
	int16_t x636 = INT16_MAX;
	volatile int32_t t146 = -4143585;

    t146 = (((x633%x634)*x635)==x636);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x637 = INT64_MAX;
	int32_t x638 = -1;
	volatile uint8_t x639 = 100U;
	int32_t t147 = 14147010;

    t147 = (((x637%x638)*x639)==x640);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x641 = INT8_MIN;
	int8_t x642 = -1;
	int32_t x643 = INT32_MAX;
	static int16_t x644 = -1;
	int32_t t148 = -2;

    t148 = (((x641%x642)*x643)==x644);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x645 = -55781383;
	int64_t x646 = -1LL;
	uint8_t x647 = 0U;
	static uint32_t x648 = UINT32_MAX;
	volatile int32_t t149 = -2465;

    t149 = (((x645%x646)*x647)==x648);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x650 = INT64_MIN;
	int8_t x651 = -4;
	static int64_t x652 = INT64_MAX;
	volatile int32_t t150 = -5657094;

    t150 = (((x649%x650)*x651)==x652);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x653 = 33U;
	int64_t x654 = 61386041LL;
	int32_t t151 = 0;

    t151 = (((x653%x654)*x655)==x656);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x661 = UINT8_MAX;
	uint64_t x662 = UINT64_MAX;
	static int16_t x663 = INT16_MAX;
	int8_t x664 = 1;
	volatile int32_t t152 = -1475;

    t152 = (((x661%x662)*x663)==x664);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x665 = INT32_MIN;
	volatile int8_t x666 = -2;
	int16_t x667 = INT16_MIN;
	int64_t x668 = -1LL;
	volatile int32_t t153 = -66142;

    t153 = (((x665%x666)*x667)==x668);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x669 = INT16_MIN;
	uint8_t x670 = UINT8_MAX;
	int16_t x671 = -6;
	int8_t x672 = -28;

    t154 = (((x669%x670)*x671)==x672);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x673 = -721731540239871LL;
	uint32_t x674 = 3U;
	int32_t x676 = INT32_MIN;

    t155 = (((x673%x674)*x675)==x676);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x678 = INT64_MIN;
	static volatile uint32_t x679 = UINT32_MAX;
	int16_t x680 = INT16_MIN;
	static int32_t t156 = 138;

    t156 = (((x677%x678)*x679)==x680);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile uint8_t x681 = UINT8_MAX;
	uint32_t x682 = UINT32_MAX;
	uint8_t x684 = UINT8_MAX;
	static volatile int32_t t157 = -106;

    t157 = (((x681%x682)*x683)==x684);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x685 = -1LL;
	int8_t x686 = INT8_MAX;
	uint64_t x687 = UINT64_MAX;
	uint32_t x688 = UINT32_MAX;
	volatile int32_t t158 = -715;

    t158 = (((x685%x686)*x687)==x688);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int32_t x689 = -1;
	uint32_t x690 = 2735U;
	volatile int8_t x691 = INT8_MIN;
	static int32_t x692 = -1;
	volatile int32_t t159 = -28422;

    t159 = (((x689%x690)*x691)==x692);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int8_t x693 = INT8_MAX;
	int8_t x694 = INT8_MIN;
	static uint64_t x695 = UINT64_MAX;
	volatile int64_t x696 = INT64_MIN;
	int32_t t160 = 68892;

    t160 = (((x693%x694)*x695)==x696);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x699 = INT32_MAX;
	int64_t x700 = -3202210066LL;
	int32_t t161 = -211623;

    t161 = (((x697%x698)*x699)==x700);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x701 = INT64_MIN;
	volatile int64_t x702 = -1LL;
	uint16_t x703 = 31U;
	uint64_t x704 = 329977104813LLU;
	volatile int32_t t162 = 68155;

    t162 = (((x701%x702)*x703)==x704);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x705 = -921;
	uint16_t x706 = UINT16_MAX;
	static int64_t x708 = 1121LL;
	volatile int32_t t163 = 1;

    t163 = (((x705%x706)*x707)==x708);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x709 = 37367376398571LL;
	int8_t x710 = -1;
	uint16_t x711 = 6U;
	static int32_t t164 = -4531560;

    t164 = (((x709%x710)*x711)==x712);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x713 = 5943;
	volatile int16_t x714 = 197;
	static int16_t x715 = 1;
	static volatile int8_t x716 = -1;
	volatile int32_t t165 = -223706;

    t165 = (((x713%x714)*x715)==x716);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x717 = 13107U;
	volatile uint8_t x718 = 54U;
	int8_t x719 = INT8_MIN;
	static int64_t x720 = INT64_MIN;

    t166 = (((x717%x718)*x719)==x720);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x722 = INT16_MIN;
	int8_t x723 = INT8_MAX;
	int16_t x724 = 14;
	static volatile int32_t t167 = -210977;

    t167 = (((x721%x722)*x723)==x724);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x725 = -1LL;
	int64_t x727 = -1LL;
	static int32_t t168 = -117838930;

    t168 = (((x725%x726)*x727)==x728);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x729 = UINT64_MAX;
	int8_t x730 = INT8_MIN;
	static volatile int32_t t169 = -18;

    t169 = (((x729%x730)*x731)==x732);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x733 = UINT32_MAX;
	uint16_t x734 = UINT16_MAX;
	static int16_t x735 = -1;
	int64_t x736 = INT64_MIN;
	volatile int32_t t170 = 0;

    t170 = (((x733%x734)*x735)==x736);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x741 = -1;
	int32_t x743 = INT32_MAX;
	int32_t t171 = -10791;

    t171 = (((x741%x742)*x743)==x744);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x747 = -1;

    t172 = (((x745%x746)*x747)==x748);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x749 = -1;
	volatile uint64_t x750 = 7LLU;
	static volatile int8_t x751 = -38;
	static volatile int16_t x752 = INT16_MIN;
	volatile int32_t t173 = 74;

    t173 = (((x749%x750)*x751)==x752);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x753 = 490800LLU;
	int32_t x754 = INT32_MAX;
	int32_t x755 = 156282;
	int16_t x756 = -2;
	volatile int32_t t174 = -7;

    t174 = (((x753%x754)*x755)==x756);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x757 = 5020U;
	int16_t x758 = -1;
	volatile uint16_t x760 = 172U;
	volatile int32_t t175 = 60;

    t175 = (((x757%x758)*x759)==x760);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x761 = 65780353U;
	static volatile int64_t x762 = -1LL;
	int64_t x763 = INT64_MAX;
	static int64_t x764 = 799LL;
	int32_t t176 = 8918790;

    t176 = (((x761%x762)*x763)==x764);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x766 = UINT32_MAX;
	int16_t x767 = 4;
	volatile int32_t t177 = 415829416;

    t177 = (((x765%x766)*x767)==x768);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x769 = 1LLU;
	static int32_t x770 = 5;
	uint16_t x772 = UINT16_MAX;

    t178 = (((x769%x770)*x771)==x772);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x774 = INT16_MIN;
	volatile int16_t x775 = INT16_MIN;
	int64_t x776 = INT64_MIN;
	volatile int32_t t179 = 640661618;

    t179 = (((x773%x774)*x775)==x776);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int8_t x777 = -4;
	volatile uint8_t x778 = 26U;
	int16_t x779 = INT16_MAX;
	volatile int64_t x780 = INT64_MAX;
	static volatile int32_t t180 = 39;

    t180 = (((x777%x778)*x779)==x780);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x781 = -1;
	int16_t x782 = INT16_MAX;
	int32_t x783 = INT32_MAX;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t181 = 6503;

    t181 = (((x781%x782)*x783)==x784);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x785 = UINT8_MAX;
	uint64_t x786 = UINT64_MAX;
	int32_t x787 = INT32_MAX;
	static int32_t x788 = 22;
	int32_t t182 = -19703707;

    t182 = (((x785%x786)*x787)==x788);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x789 = 113U;
	uint16_t x790 = 1U;
	int8_t x791 = INT8_MIN;

    t183 = (((x789%x790)*x791)==x792);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x793 = INT8_MAX;
	int32_t x795 = -1;
	static int64_t x796 = 499873192852586LL;
	volatile int32_t t184 = 0;

    t184 = (((x793%x794)*x795)==x796);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x797 = 42;
	static int16_t x798 = -42;
	int32_t x800 = INT32_MIN;

    t185 = (((x797%x798)*x799)==x800);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x801 = INT16_MAX;
	int8_t x802 = INT8_MIN;
	uint16_t x803 = 28603U;

    t186 = (((x801%x802)*x803)==x804);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x805 = -682655429107118702LL;
	static uint16_t x806 = 563U;
	uint32_t x807 = 21U;
	int16_t x808 = -69;
	volatile int32_t t187 = -15114115;

    t187 = (((x805%x806)*x807)==x808);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x809 = 2925LL;
	int64_t x810 = INT64_MIN;
	volatile uint64_t x811 = 32848206280354523LLU;
	uint8_t x812 = 24U;
	int32_t t188 = 657632;

    t188 = (((x809%x810)*x811)==x812);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x813 = INT16_MIN;
	static int8_t x814 = INT8_MIN;
	int32_t x815 = INT32_MAX;
	uint64_t x816 = 3367787370715LLU;

    t189 = (((x813%x814)*x815)==x816);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x818 = INT64_MIN;
	int64_t x819 = -1LL;
	int16_t x820 = INT16_MAX;
	static volatile int32_t t190 = 15;

    t190 = (((x817%x818)*x819)==x820);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x821 = UINT16_MAX;
	static int8_t x822 = INT8_MIN;
	int8_t x823 = -1;
	uint8_t x824 = UINT8_MAX;
	static volatile int32_t t191 = 31;

    t191 = (((x821%x822)*x823)==x824);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x829 = INT16_MAX;
	uint32_t x831 = 0U;
	int16_t x832 = -1;
	int32_t t192 = 46858548;

    t192 = (((x829%x830)*x831)==x832);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x833 = 55;
	uint16_t x834 = 3614U;
	uint32_t x836 = 1U;
	volatile int32_t t193 = 3;

    t193 = (((x833%x834)*x835)==x836);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x846 = 12;
	int16_t x848 = INT16_MIN;
	static volatile int32_t t194 = -188;

    t194 = (((x845%x846)*x847)==x848);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = INT32_MAX;
	static int16_t x850 = -1;
	int16_t x851 = INT16_MIN;
	int32_t t195 = -1563818;

    t195 = (((x849%x850)*x851)==x852);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x854 = 50838;
	int8_t x855 = INT8_MIN;
	uint8_t x856 = UINT8_MAX;
	static volatile int32_t t196 = 365600778;

    t196 = (((x853%x854)*x855)==x856);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x857 = -89;
	int32_t x858 = -3952677;
	static int32_t x860 = -21888;

    t197 = (((x857%x858)*x859)==x860);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x861 = 456436U;
	int32_t x862 = -946281887;
	static int64_t x863 = -1LL;
	int64_t x864 = 3076748563LL;
	int32_t t198 = -133;

    t198 = (((x861%x862)*x863)==x864);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x865 = 24788095970158792LL;
	uint8_t x867 = UINT8_MAX;
	volatile int8_t x868 = 33;
	volatile int32_t t199 = 434;

    t199 = (((x865%x866)*x867)==x868);

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

