
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

int32_t x7 = INT32_MAX;
static volatile int32_t x15 = -1;
volatile int32_t t4 = 13;
uint32_t x25 = UINT32_MAX;
static uint64_t x26 = 15LLU;
volatile int32_t t10 = 1342047;
uint64_t x45 = 28726657137186940LLU;
uint8_t x55 = UINT8_MAX;
int32_t t15 = 33;
uint64_t t16 = 1216181LLU;
int64_t x70 = INT64_MIN;
int8_t x71 = -1;
int32_t t17 = 3781;
static int16_t x73 = INT16_MAX;
int8_t x75 = -1;
uint8_t x78 = 5U;
static uint16_t x80 = 18479U;
static uint32_t x84 = 13254U;
static uint16_t x86 = 1226U;
volatile int32_t t21 = 5392885;
uint16_t x91 = 2856U;
static uint64_t x92 = 91109899LLU;
int32_t t23 = 2723;
int32_t x101 = -1;
int16_t x105 = -2791;
int16_t x107 = INT16_MIN;
uint16_t x113 = 6U;
int64_t x115 = 81973070198250LL;
uint16_t x118 = 3526U;
uint16_t x121 = 8U;
static int8_t x143 = INT8_MAX;
uint8_t x145 = 3U;
volatile int64_t x146 = -1LL;
int32_t x148 = -1;
static int16_t x161 = INT16_MIN;
volatile int32_t t41 = -54951;
uint32_t x170 = 2011U;
uint64_t x172 = UINT64_MAX;
static volatile uint64_t t42 = 2256299LLU;
int8_t x173 = INT8_MIN;
volatile int64_t x177 = -1LL;
int16_t x180 = -75;
uint32_t x182 = UINT32_MAX;
uint32_t x185 = UINT32_MAX;
volatile int32_t t46 = -6455;
uint8_t x190 = UINT8_MAX;
uint8_t x194 = 24U;
int64_t x199 = -1LL;
int64_t x202 = -1LL;
int16_t x206 = -1;
uint32_t x212 = UINT32_MAX;
int8_t x215 = INT8_MAX;
volatile int32_t x217 = INT32_MAX;
volatile uint16_t x221 = UINT16_MAX;
volatile int64_t t58 = -217183145798LL;
static volatile int64_t x247 = 0LL;
volatile int16_t x248 = INT16_MIN;
uint16_t x251 = 15653U;
int8_t x252 = INT8_MIN;
int32_t x254 = -65316317;
int8_t x257 = INT8_MAX;
uint16_t x266 = 877U;
volatile int32_t x267 = -1;
static int64_t x274 = 1699503095195LL;
int32_t x275 = 95220081;
static uint32_t x278 = UINT32_MAX;
int8_t x290 = INT8_MAX;
static uint16_t x293 = 6359U;
int8_t x297 = INT8_MAX;
uint64_t x302 = 6082319215478678LLU;
int32_t t75 = 11923;
volatile int8_t x307 = INT8_MIN;
int32_t x312 = 99168;
uint8_t x313 = 1U;
uint16_t x321 = 947U;
uint32_t t80 = 586680616U;
int16_t x327 = 0;
volatile uint64_t t81 = 4493668100615LLU;
volatile int64_t x332 = 0LL;
volatile int8_t x333 = INT8_MIN;
static int32_t x343 = -424313;
int32_t t85 = -19;
static volatile int64_t x345 = INT64_MAX;
static int32_t x347 = INT32_MIN;
int16_t x350 = -1;
static int16_t x356 = 1;
volatile int32_t t91 = -229429;
int32_t x369 = INT32_MIN;
static volatile int16_t x372 = INT16_MAX;
int32_t x374 = 7062;
static int16_t x380 = -1;
uint16_t x384 = 11U;
int64_t x385 = -1LL;
int32_t x388 = -1;
uint64_t x394 = 7LLU;
volatile uint16_t x395 = 1U;
volatile int8_t x401 = 60;
int16_t x403 = 841;
int64_t x408 = INT64_MIN;
static int16_t x409 = -11;
volatile uint32_t t102 = 158U;
int16_t x414 = INT16_MAX;
int16_t x425 = -121;
uint8_t x428 = 0U;
uint16_t x434 = UINT16_MAX;
uint8_t x447 = 13U;
uint8_t x456 = 28U;
static uint16_t x457 = UINT16_MAX;
uint8_t x461 = 25U;
volatile int32_t t116 = -5578218;
int64_t x471 = INT64_MIN;
volatile int32_t t118 = -46288508;
static int32_t x477 = 6;
int32_t t119 = -635;
volatile int32_t t120 = -7;
uint16_t x485 = UINT16_MAX;
uint64_t x488 = 56094002LLU;
int64_t t122 = -208633789530760884LL;
int64_t x498 = 10421689LL;
uint64_t x500 = 92216597551935762LLU;
volatile int32_t t127 = -2010415;
volatile int8_t x515 = -3;
int32_t x517 = INT32_MIN;
volatile uint8_t x520 = 52U;
static int64_t x535 = INT64_MIN;
static int32_t t133 = -1;
uint8_t x540 = 112U;
int64_t x547 = -1LL;
int32_t x561 = -1;
int32_t x562 = -364;
uint32_t x566 = 428U;
int8_t x570 = INT8_MIN;
int64_t x571 = INT64_MIN;
uint32_t x576 = UINT32_MAX;
uint8_t x580 = UINT8_MAX;
static volatile int32_t x589 = -42928;
volatile uint8_t x590 = 83U;
volatile int32_t t147 = -3;
volatile int16_t x602 = 102;
int8_t x611 = INT8_MAX;
volatile int64_t x614 = INT64_MIN;
static volatile int16_t x619 = -1;
uint64_t x631 = 14129999491LLU;
uint64_t x637 = UINT64_MAX;
volatile int8_t x639 = INT8_MIN;
static int64_t t159 = 3935635535133LL;
int32_t t160 = -47;
uint8_t x646 = 80U;
int32_t t167 = 6;
static int64_t x673 = -1LL;
int8_t x674 = INT8_MIN;
int64_t x676 = 148813462718LL;
int64_t x684 = -2210341008130201168LL;
int64_t t170 = -13273LL;
int16_t x687 = INT16_MIN;
int8_t x691 = -1;
volatile int8_t x693 = -1;
int64_t t173 = 2280857733LL;
int16_t x697 = INT16_MIN;
uint32_t t174 = 2611U;
uint32_t x709 = 509024U;
static int32_t x719 = 14695;
int64_t x722 = 2809LL;
int64_t x725 = -100790054116496467LL;
int8_t x726 = 1;
int32_t x729 = INT32_MIN;
volatile int32_t t183 = -224;
int8_t x745 = 0;
volatile int8_t x746 = INT8_MIN;
int64_t x747 = -179238484579LL;
int64_t x751 = INT64_MIN;
int32_t x753 = -155;
int32_t x755 = INT32_MIN;
int32_t x759 = -412;
int64_t x760 = INT64_MAX;
static uint8_t x761 = 17U;
uint32_t x763 = 1006546U;
int64_t x775 = -1691511LL;
int64_t x777 = -1LL;
uint64_t x781 = 6900884LLU;
int64_t t195 = -19LL;
volatile int32_t x785 = INT32_MIN;
volatile int32_t t196 = 15603663;
volatile int32_t t197 = 8932;
int8_t x793 = INT8_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MAX;
	int32_t x2 = -2081;
	int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	int32_t t0 = 15038550;

    t0 = ((x1<=(x2|x3))&x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static uint64_t x5 = UINT64_MAX;
	int64_t x6 = -1LL;
	uint8_t x8 = UINT8_MAX;
	static int32_t t1 = -206205;

    t1 = ((x5<=(x6|x7))&x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int32_t x11 = -1583;
	static uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 798049U;

    t2 = ((x9<=(x10|x11))&x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint8_t x14 = 0U;
	volatile uint32_t x16 = 1862202709U;
	volatile uint32_t t3 = 179391U;

    t3 = ((x13<=(x14|x15))&x16);

    if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int64_t x17 = -1LL;
	int16_t x18 = -1;
	static uint8_t x19 = UINT8_MAX;
	volatile uint8_t x20 = UINT8_MAX;

    t4 = ((x17<=(x18|x19))&x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 3482U;
	volatile uint32_t x22 = UINT32_MAX;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t x24 = 197;
	static volatile int32_t t5 = 132063;

    t5 = ((x21<=(x22|x23))&x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x27 = INT16_MIN;
	uint32_t x28 = UINT32_MAX;
	volatile uint32_t t6 = 1791309816U;

    t6 = ((x25<=(x26|x27))&x28);

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 1;
	static uint64_t x30 = UINT64_MAX;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = UINT16_MAX;
	int32_t t7 = -24;

    t7 = ((x29<=(x30|x31))&x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 1U;
	static uint8_t x34 = UINT8_MAX;
	static int8_t x35 = INT8_MAX;
	static uint32_t x36 = UINT32_MAX;
	volatile uint32_t t8 = 1118882U;

    t8 = ((x33<=(x34|x35))&x36);

    if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int32_t x38 = -13504;
	int16_t x39 = -11;
	int64_t x40 = INT64_MIN;
	int64_t t9 = 53LL;

    t9 = ((x37<=(x38|x39))&x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x41 = 0U;
	volatile int16_t x42 = INT16_MIN;
	static int16_t x43 = INT16_MIN;
	int16_t x44 = INT16_MIN;

    t10 = ((x41<=(x42|x43))&x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = -1LL;
	int64_t x47 = -3188179312755LL;
	int32_t x48 = 550470657;
	volatile int32_t t11 = 236;

    t11 = ((x45<=(x46|x47))&x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 3724104618277745LL;
	int64_t x50 = INT64_MIN;
	static volatile int8_t x51 = -56;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = 0;

    t12 = ((x49<=(x50|x51))&x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = 157;
	uint64_t x54 = 503LLU;
	static int64_t x56 = -44372LL;
	static int64_t t13 = 116239568LL;

    t13 = ((x53<=(x54|x55))&x56);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x57 = INT8_MIN;
	uint8_t x58 = UINT8_MAX;
	static int64_t x59 = -64696949709503LL;
	int16_t x60 = -117;
	int32_t t14 = 0;

    t14 = ((x57<=(x58|x59))&x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = INT64_MIN;
	int64_t x62 = -117LL;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 4564U;

    t15 = ((x61<=(x62|x63))&x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	uint16_t x66 = 37U;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 1757133673404035LLU;

    t16 = ((x65<=(x66|x67))&x68);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = -71130LL;
	int16_t x72 = INT16_MIN;

    t17 = ((x69<=(x70|x71))&x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x74 = INT32_MAX;
	int8_t x76 = -1;
	static int32_t t18 = -10640285;

    t18 = ((x73<=(x74|x75))&x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	volatile int32_t t19 = 66358;

    t19 = ((x77<=(x78|x79))&x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int64_t x81 = -1LL;
	static uint16_t x82 = 6U;
	int64_t x83 = -489000741469897LL;
	volatile uint32_t t20 = 1040U;

    t20 = ((x81<=(x82|x83))&x84);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint8_t x85 = 1U;
	int8_t x87 = INT8_MIN;
	static int32_t x88 = -17156;

    t21 = ((x85<=(x86|x87))&x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MAX;
	static uint16_t x90 = UINT16_MAX;
	volatile uint64_t t22 = 9LLU;

    t22 = ((x89<=(x90|x91))&x92);

    if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	uint32_t x94 = 3566538U;
	static volatile int32_t x95 = INT32_MIN;
	volatile int8_t x96 = -15;

    t23 = ((x93<=(x94|x95))&x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x97 = 333683413;
	static uint32_t x98 = 1001808U;
	int64_t x99 = INT64_MAX;
	static int16_t x100 = 77;
	int32_t t24 = 1063556;

    t24 = ((x97<=(x98|x99))&x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x102 = INT32_MIN;
	volatile int64_t x103 = -1LL;
	int16_t x104 = INT16_MAX;
	int32_t t25 = 146687;

    t25 = ((x101<=(x102|x103))&x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x106 = INT8_MIN;
	volatile uint32_t x108 = 183763U;
	uint32_t t26 = 91730U;

    t26 = ((x105<=(x106|x107))&x108);

    if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x109 = INT64_MIN;
	static volatile uint32_t x110 = 34331U;
	uint16_t x111 = 828U;
	static uint32_t x112 = 885U;
	static volatile uint32_t t27 = 1268157160U;

    t27 = ((x109<=(x110|x111))&x112);

    if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x114 = INT32_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t28 = 50469782;

    t28 = ((x113<=(x114|x115))&x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = 7;
	uint8_t x119 = 102U;
	int32_t x120 = -1;
	volatile int32_t t29 = -19410551;

    t29 = ((x117<=(x118|x119))&x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = 21;
	volatile int64_t x123 = -1LL;
	int8_t x124 = -4;
	int32_t t30 = 46291;

    t30 = ((x121<=(x122|x123))&x124);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -1;
	static int16_t x126 = INT16_MIN;
	volatile int32_t x127 = INT32_MAX;
	volatile uint16_t x128 = 116U;
	static volatile int32_t t31 = 1165229;

    t31 = ((x125<=(x126|x127))&x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x129 = INT32_MAX;
	int16_t x130 = 249;
	int64_t x131 = -1LL;
	volatile int32_t x132 = INT32_MAX;
	volatile int32_t t32 = 253311929;

    t32 = ((x129<=(x130|x131))&x132);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	uint16_t x134 = UINT16_MAX;
	uint8_t x135 = 2U;
	static int16_t x136 = -1;
	volatile int32_t t33 = -7896445;

    t33 = ((x133<=(x134|x135))&x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x137 = INT16_MAX;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = INT64_MIN;
	uint64_t x140 = 122411275LLU;
	static volatile uint64_t t34 = 2707LLU;

    t34 = ((x137<=(x138|x139))&x140);

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x141 = 16104U;
	uint16_t x142 = UINT16_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 8619657431605LL;

    t35 = ((x141<=(x142|x143))&x144);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x147 = -4;
	volatile int32_t t36 = 48;

    t36 = ((x145<=(x146|x147))&x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MIN;
	int64_t x151 = -1LL;
	static uint64_t x152 = 874270998LLU;
	static volatile uint64_t t37 = 23LLU;

    t37 = ((x149<=(x150|x151))&x152);

    if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x153 = UINT16_MAX;
	volatile uint8_t x154 = 65U;
	static uint16_t x155 = 1U;
	int32_t x156 = -1;
	int32_t t38 = 426996913;

    t38 = ((x153<=(x154|x155))&x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x157 = -231;
	volatile uint64_t x158 = 7LLU;
	static int8_t x159 = INT8_MIN;
	volatile int64_t x160 = -1LL;
	int64_t t39 = -63560294260506LL;

    t39 = ((x157<=(x158|x159))&x160);

    if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = 157788683;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MAX;
	int64_t t40 = 12605780LL;

    t40 = ((x161<=(x162|x163))&x164);

    if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = INT16_MAX;
	static uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MIN;

    t41 = ((x165<=(x166|x167))&x168);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x169 = 2;
	uint8_t x171 = 0U;

    t42 = ((x169<=(x170|x171))&x172);

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x174 = UINT64_MAX;
	uint16_t x175 = 2U;
	static uint8_t x176 = 0U;
	static volatile int32_t t43 = 282267;

    t43 = ((x173<=(x174|x175))&x176);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x178 = INT32_MIN;
	static int32_t x179 = INT32_MIN;
	int32_t t44 = 2;

    t44 = ((x177<=(x178|x179))&x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x181 = 23954453833722LL;
	int8_t x183 = INT8_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t45 = 287;

    t45 = ((x181<=(x182|x183))&x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static int64_t x186 = INT64_MIN;
	volatile int64_t x187 = INT64_MIN;
	static uint16_t x188 = 2240U;

    t46 = ((x185<=(x186|x187))&x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x189 = 661;
	static volatile uint8_t x191 = 3U;
	uint64_t x192 = 11761454LLU;
	volatile uint64_t t47 = 9567508849773LLU;

    t47 = ((x189<=(x190|x191))&x192);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x193 = 1825971058704290564LLU;
	int64_t x195 = -211041404745LL;
	static int32_t x196 = -1;
	volatile int32_t t48 = 621;

    t48 = ((x193<=(x194|x195))&x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = UINT32_MAX;
	uint16_t x198 = 5887U;
	uint32_t x200 = 1000781271U;
	volatile uint32_t t49 = 5170241U;

    t49 = ((x197<=(x198|x199))&x200);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = -215;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;
	static int32_t t50 = 8948794;

    t50 = ((x201<=(x202|x203))&x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = -3998826437815189LL;
	uint8_t x207 = 4U;
	volatile int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = -74792962;

    t51 = ((x205<=(x206|x207))&x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -1LL;
	int64_t x210 = INT64_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	static uint32_t t52 = 22948559U;

    t52 = ((x209<=(x210|x211))&x212);

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x213 = 2U;
	static int64_t x214 = INT64_MAX;
	int32_t x216 = 2;
	volatile int32_t t53 = 123577606;

    t53 = ((x213<=(x214|x215))&x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x218 = INT16_MIN;
	uint16_t x219 = 5U;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 246;

    t54 = ((x217<=(x218|x219))&x220);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x222 = INT16_MAX;
	int64_t x223 = -8405595027183281LL;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = 10607805;

    t55 = ((x221<=(x222|x223))&x224);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x225 = 228149U;
	int8_t x226 = INT8_MIN;
	int64_t x227 = 286289LL;
	uint16_t x228 = 6U;
	static int32_t t56 = 1;

    t56 = ((x225<=(x226|x227))&x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x229 = -1;
	int64_t x230 = INT64_MIN;
	static int64_t x231 = INT64_MAX;
	int16_t x232 = 6028;
	int32_t t57 = -21130266;

    t57 = ((x229<=(x230|x231))&x232);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 213972304489364LLU;
	int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MAX;

    t58 = ((x233<=(x234|x235))&x236);

    if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x237 = UINT16_MAX;
	static int8_t x238 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -356087277;

    t59 = ((x237<=(x238|x239))&x240);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = 4U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	int32_t t60 = 136726;

    t60 = ((x241<=(x242|x243))&x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x245 = -34;
	int64_t x246 = -14868007250437LL;
	volatile int32_t t61 = -10;

    t61 = ((x245<=(x246|x247))&x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x249 = INT32_MAX;
	int8_t x250 = 1;
	static volatile int32_t t62 = -781;

    t62 = ((x249<=(x250|x251))&x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 11;
	uint8_t x255 = 116U;
	volatile uint8_t x256 = 7U;
	int32_t t63 = 2641741;

    t63 = ((x253<=(x254|x255))&x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x258 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	volatile int64_t x260 = -178511LL;
	volatile int64_t t64 = -115LL;

    t64 = ((x257<=(x258|x259))&x260);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -36;
	volatile int16_t x262 = -1438;
	int8_t x263 = -3;
	uint32_t x264 = 1946964U;
	uint32_t t65 = 11141886U;

    t65 = ((x261<=(x262|x263))&x264);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x265 = 15;
	uint32_t x268 = 21975U;
	volatile uint32_t t66 = 1624522912U;

    t66 = ((x265<=(x266|x267))&x268);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 455U;
	static int16_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	uint32_t x272 = 2U;
	volatile uint32_t t67 = 7796136U;

    t67 = ((x269<=(x270|x271))&x272);

    if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int8_t x273 = 2;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t68 = 290704;

    t68 = ((x273<=(x274|x275))&x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = 1;
	int32_t x279 = -899762;
	static uint16_t x280 = UINT16_MAX;
	int32_t t69 = -90185473;

    t69 = ((x277<=(x278|x279))&x280);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = 5;
	static int64_t x282 = -368378LL;
	static int64_t x283 = INT64_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t70 = -87549976;

    t70 = ((x281<=(x282|x283))&x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x285 = -1;
	uint8_t x286 = 24U;
	volatile uint32_t x287 = UINT32_MAX;
	volatile uint64_t x288 = 7LLU;
	uint64_t t71 = 717LLU;

    t71 = ((x285<=(x286|x287))&x288);

    if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint16_t x289 = 1U;
	int32_t x291 = -1;
	static int32_t x292 = INT32_MAX;
	static int32_t t72 = 9689;

    t72 = ((x289<=(x290|x291))&x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x294 = 98U;
	volatile int8_t x295 = INT8_MAX;
	uint32_t x296 = 7U;
	static uint32_t t73 = 160U;

    t73 = ((x293<=(x294|x295))&x296);

    if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x298 = UINT64_MAX;
	static int32_t x299 = 1337;
	int64_t x300 = INT64_MAX;
	int64_t t74 = -74LL;

    t74 = ((x297<=(x298|x299))&x300);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x301 = UINT16_MAX;
	volatile int16_t x303 = INT16_MIN;
	int16_t x304 = -16299;

    t75 = ((x301<=(x302|x303))&x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x305 = -7824LL;
	int8_t x306 = INT8_MAX;
	volatile int64_t x308 = -119LL;
	static int64_t t76 = 43845LL;

    t76 = ((x305<=(x306|x307))&x308);

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 19939LLU;
	int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = 6U;
	int32_t t77 = 1;

    t77 = ((x309<=(x310|x311))&x312);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 588514575U;
	int64_t x315 = -1LL;
	uint8_t x316 = UINT8_MAX;
	int32_t t78 = 0;

    t78 = ((x313<=(x314|x315))&x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x317 = INT32_MAX;
	int64_t x318 = -111LL;
	static volatile int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t79 = -14403320;

    t79 = ((x317<=(x318|x319))&x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	volatile uint32_t x324 = UINT32_MAX;

    t80 = ((x321<=(x322|x323))&x324);

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MAX;
	uint64_t x326 = 175635LLU;
	uint64_t x328 = 3264LLU;

    t81 = ((x325<=(x326|x327))&x328);

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x329 = 4U;
	uint16_t x330 = UINT16_MAX;
	volatile uint64_t x331 = 1537317436LLU;
	int64_t t82 = 60748632300LL;

    t82 = ((x329<=(x330|x331))&x332);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x334 = 14697U;
	uint16_t x335 = UINT16_MAX;
	volatile int64_t x336 = 432984LL;
	static volatile int64_t t83 = 15607609177740LL;

    t83 = ((x333<=(x334|x335))&x336);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	volatile int32_t x338 = INT32_MAX;
	int64_t x339 = 24762775LL;
	int32_t x340 = -1;
	int32_t t84 = 8208;

    t84 = ((x337<=(x338|x339))&x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	int16_t x342 = -145;
	static int16_t x344 = -1557;

    t85 = ((x341<=(x342|x343))&x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x346 = 253LLU;
	uint16_t x348 = 45U;
	int32_t t86 = -14977885;

    t86 = ((x345<=(x346|x347))&x348);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = INT16_MAX;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 383960042;

    t87 = ((x349<=(x350|x351))&x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -1;
	volatile int16_t x354 = 2;
	volatile int32_t x355 = -331;
	int32_t t88 = -6708155;

    t88 = ((x353<=(x354|x355))&x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = -88935054448804220LL;
	uint32_t x358 = 354712U;
	volatile int64_t x359 = -1897LL;
	volatile uint8_t x360 = 5U;
	int32_t t89 = 18;

    t89 = ((x357<=(x358|x359))&x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint32_t x361 = 324U;
	static volatile int32_t x362 = -1;
	static int16_t x363 = -1;
	static int32_t x364 = INT32_MIN;
	int32_t t90 = 4;

    t90 = ((x361<=(x362|x363))&x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = 207U;
	static volatile uint8_t x366 = 16U;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = INT16_MIN;

    t91 = ((x365<=(x366|x367))&x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x370 = 388178191037551LL;
	int16_t x371 = 18;
	static int32_t t92 = 4;

    t92 = ((x369<=(x370|x371))&x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x373 = UINT8_MAX;
	volatile uint32_t x375 = 401U;
	int64_t x376 = -1LL;
	volatile int64_t t93 = 7614LL;

    t93 = ((x373<=(x374|x375))&x376);

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x377 = UINT8_MAX;
	int32_t x378 = -1;
	uint64_t x379 = 3409584LLU;
	int32_t t94 = -739;

    t94 = ((x377<=(x378|x379))&x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x381 = INT16_MAX;
	static int64_t x382 = INT64_MAX;
	static volatile int16_t x383 = -243;
	int32_t t95 = -16716449;

    t95 = ((x381<=(x382|x383))&x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x386 = 20U;
	uint32_t x387 = UINT32_MAX;
	static volatile int32_t t96 = -5526;

    t96 = ((x385<=(x386|x387))&x388);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int32_t x389 = INT32_MAX;
	static uint32_t x390 = UINT32_MAX;
	volatile uint32_t x391 = 109U;
	int32_t x392 = INT32_MIN;
	int32_t t97 = -991450862;

    t97 = ((x389<=(x390|x391))&x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x393 = INT16_MAX;
	int64_t x396 = INT64_MIN;
	int64_t t98 = 30851699761LL;

    t98 = ((x393<=(x394|x395))&x396);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x397 = -6594;
	static int8_t x398 = 7;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t99 = 88;

    t99 = ((x397<=(x398|x399))&x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -1;
	volatile int16_t x404 = -1;
	volatile int32_t t100 = -1023;

    t100 = ((x401<=(x402|x403))&x404);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = 26U;
	int8_t x406 = INT8_MIN;
	volatile int16_t x407 = INT16_MAX;
	int64_t t101 = -93309961009735LL;

    t101 = ((x405<=(x406|x407))&x408);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x410 = 48U;
	int8_t x411 = 0;
	uint32_t x412 = 290U;

    t102 = ((x409<=(x410|x411))&x412);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x413 = UINT8_MAX;
	static int16_t x415 = -1;
	uint64_t x416 = 6532023404977LLU;
	volatile uint64_t t103 = 4277LLU;

    t103 = ((x413<=(x414|x415))&x416);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x417 = 39U;
	int64_t x418 = -1LL;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;
	volatile int32_t t104 = -3561111;

    t104 = ((x417<=(x418|x419))&x420);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x421 = -11;
	int64_t x422 = INT64_MIN;
	volatile int32_t x423 = INT32_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t105 = -56244512;

    t105 = ((x421<=(x422|x423))&x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x426 = 28U;
	volatile int16_t x427 = -1;
	int32_t t106 = -74238923;

    t106 = ((x425<=(x426|x427))&x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x429 = -1LL;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MAX;
	static int16_t x432 = INT16_MIN;
	volatile int32_t t107 = -88775514;

    t107 = ((x429<=(x430|x431))&x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x433 = 1LL;
	volatile int32_t x435 = INT32_MAX;
	int64_t x436 = INT64_MAX;
	int64_t t108 = 30694190089LL;

    t108 = ((x433<=(x434|x435))&x436);

    if (t108 != 1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = -1LL;
	int8_t x438 = INT8_MAX;
	volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t109 = -15175027;

    t109 = ((x437<=(x438|x439))&x440);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x441 = UINT16_MAX;
	int16_t x442 = -1622;
	static uint16_t x443 = UINT16_MAX;
	volatile uint32_t x444 = UINT32_MAX;
	volatile uint32_t t110 = 78114U;

    t110 = ((x441<=(x442|x443))&x444);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	uint32_t x446 = UINT32_MAX;
	int16_t x448 = 42;
	int32_t t111 = 531763;

    t111 = ((x445<=(x446|x447))&x448);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int16_t x449 = 1;
	volatile int16_t x450 = -1;
	volatile int64_t x451 = INT64_MIN;
	int16_t x452 = 1;
	volatile int32_t t112 = 70915;

    t112 = ((x449<=(x450|x451))&x452);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x453 = INT8_MIN;
	volatile int64_t x454 = INT64_MAX;
	static uint64_t x455 = UINT64_MAX;
	volatile int32_t t113 = 12;

    t113 = ((x453<=(x454|x455))&x456);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x458 = INT16_MIN;
	int16_t x459 = 47;
	static volatile uint16_t x460 = 1U;
	int32_t t114 = 113;

    t114 = ((x457<=(x458|x459))&x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x462 = 0U;
	static int64_t x463 = INT64_MIN;
	uint32_t x464 = 88867U;
	uint32_t t115 = 13628U;

    t115 = ((x461<=(x462|x463))&x464);

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int32_t x465 = -1;
	volatile uint32_t x466 = UINT32_MAX;
	int8_t x467 = 2;
	int16_t x468 = -3701;

    t116 = ((x465<=(x466|x467))&x468);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -1;
	int8_t x470 = INT8_MIN;
	uint8_t x472 = 53U;
	static int32_t t117 = -3419536;

    t117 = ((x469<=(x470|x471))&x472);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = 58415612;
	uint32_t x474 = 1623469209U;
	int16_t x475 = -4;
	int8_t x476 = INT8_MAX;

    t118 = ((x473<=(x474|x475))&x476);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x478 = 23U;
	volatile int8_t x479 = INT8_MIN;
	volatile int32_t x480 = -1;

    t119 = ((x477<=(x478|x479))&x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 760608LLU;
	uint32_t x482 = UINT32_MAX;
	static int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MIN;

    t120 = ((x481<=(x482|x483))&x484);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x486 = -7;
	volatile int16_t x487 = 1013;
	volatile uint64_t t121 = 2259936895004LLU;

    t121 = ((x485<=(x486|x487))&x488);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x489 = -1;
	static uint64_t x490 = 8575098855LLU;
	uint32_t x491 = 1628272U;
	int64_t x492 = INT64_MAX;

    t122 = ((x489<=(x490|x491))&x492);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x493 = 51693849686045LL;
	static volatile uint8_t x494 = UINT8_MAX;
	int8_t x495 = 18;
	int8_t x496 = INT8_MIN;
	int32_t t123 = 463026;

    t123 = ((x493<=(x494|x495))&x496);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x497 = -1LL;
	int64_t x499 = INT64_MAX;
	static volatile uint64_t t124 = 12981LLU;

    t124 = ((x497<=(x498|x499))&x500);

    if (t124 != 0LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x501 = INT8_MIN;
	int32_t x502 = 3154;
	volatile int8_t x503 = -1;
	int32_t x504 = 4424898;
	int32_t t125 = -4011189;

    t125 = ((x501<=(x502|x503))&x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x505 = UINT32_MAX;
	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	int8_t x508 = INT8_MIN;
	int32_t t126 = -214;

    t126 = ((x505<=(x506|x507))&x508);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x509 = -1;
	uint16_t x510 = 0U;
	int64_t x511 = INT64_MIN;
	uint8_t x512 = UINT8_MAX;

    t127 = ((x509<=(x510|x511))&x512);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x513 = UINT16_MAX;
	static int16_t x514 = -1;
	volatile int16_t x516 = INT16_MIN;
	static volatile int32_t t128 = 245;

    t128 = ((x513<=(x514|x515))&x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x518 = INT8_MIN;
	int8_t x519 = 1;
	int32_t t129 = 11596;

    t129 = ((x517<=(x518|x519))&x520);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x521 = INT8_MAX;
	uint32_t x522 = 421U;
	static int8_t x523 = INT8_MAX;
	uint32_t x524 = 166198168U;
	uint32_t t130 = 5U;

    t130 = ((x521<=(x522|x523))&x524);

    if (t130 != 0U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = 13U;
	volatile int8_t x526 = -1;
	uint16_t x527 = 272U;
	uint32_t x528 = 9350751U;
	volatile uint32_t t131 = 4U;

    t131 = ((x525<=(x526|x527))&x528);

    if (t131 != 0U) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = -58;
	static int16_t x530 = INT16_MAX;
	static int16_t x531 = INT16_MIN;
	volatile int64_t x532 = -476411LL;
	int64_t t132 = 269472218102LL;

    t132 = ((x529<=(x530|x531))&x532);

    if (t132 != 1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x533 = INT8_MIN;
	volatile uint8_t x534 = 12U;
	int8_t x536 = INT8_MIN;

    t133 = ((x533<=(x534|x535))&x536);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x537 = INT16_MIN;
	static uint8_t x538 = 7U;
	int64_t x539 = INT64_MIN;
	volatile int32_t t134 = -990148;

    t134 = ((x537<=(x538|x539))&x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int64_t x541 = INT64_MIN;
	volatile int16_t x542 = 207;
	volatile uint16_t x543 = UINT16_MAX;
	int8_t x544 = 0;
	volatile int32_t t135 = 194836;

    t135 = ((x541<=(x542|x543))&x544);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = 54;
	int32_t x546 = -1;
	int64_t x548 = 14721591806LL;
	volatile int64_t t136 = -82644LL;

    t136 = ((x545<=(x546|x547))&x548);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int16_t x549 = INT16_MIN;
	static uint16_t x550 = UINT16_MAX;
	static volatile uint64_t x551 = UINT64_MAX;
	uint64_t x552 = 109312LLU;
	volatile uint64_t t137 = 185382312733LLU;

    t137 = ((x549<=(x550|x551))&x552);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = UINT8_MAX;
	static uint32_t x554 = UINT32_MAX;
	static uint16_t x555 = UINT16_MAX;
	static int16_t x556 = -3231;
	int32_t t138 = -64401;

    t138 = ((x553<=(x554|x555))&x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x557 = -157864LL;
	int8_t x558 = INT8_MIN;
	int16_t x559 = -140;
	uint64_t x560 = UINT64_MAX;
	static uint64_t t139 = 87944141287LLU;

    t139 = ((x557<=(x558|x559))&x560);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x563 = 108U;
	static int16_t x564 = -1;
	volatile int32_t t140 = 30836233;

    t140 = ((x561<=(x562|x563))&x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x565 = 102;
	uint16_t x567 = 552U;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t141 = 453393;

    t141 = ((x565<=(x566|x567))&x568);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = INT8_MIN;
	volatile int32_t x572 = INT32_MAX;
	volatile int32_t t142 = 8811;

    t142 = ((x569<=(x570|x571))&x572);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x573 = 1902675981093LLU;
	int16_t x574 = INT16_MIN;
	uint64_t x575 = 2LLU;
	volatile uint32_t t143 = 3447316U;

    t143 = ((x573<=(x574|x575))&x576);

    if (t143 != 1U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -1;
	int16_t x578 = INT16_MIN;
	static int64_t x579 = INT64_MAX;
	int32_t t144 = 115061916;

    t144 = ((x577<=(x578|x579))&x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	int16_t x582 = 1647;
	uint8_t x583 = 78U;
	uint32_t x584 = UINT32_MAX;
	static uint32_t t145 = 751423060U;

    t145 = ((x581<=(x582|x583))&x584);

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x585 = -944555932LL;
	int32_t x586 = INT32_MIN;
	uint16_t x587 = 32701U;
	volatile uint8_t x588 = 9U;
	int32_t t146 = -12;

    t146 = ((x585<=(x586|x587))&x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x591 = INT64_MIN;
	int8_t x592 = -1;

    t147 = ((x589<=(x590|x591))&x592);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x593 = -147;
	uint32_t x594 = 427U;
	uint8_t x595 = UINT8_MAX;
	int64_t x596 = -301214412LL;
	int64_t t148 = -3305696276886286LL;

    t148 = ((x593<=(x594|x595))&x596);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x597 = -1;
	int64_t x598 = -1464LL;
	int16_t x599 = INT16_MIN;
	int32_t x600 = -1;
	int32_t t149 = 3;

    t149 = ((x597<=(x598|x599))&x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	static int32_t x603 = INT32_MIN;
	volatile int32_t x604 = INT32_MAX;
	static int32_t t150 = 643773665;

    t150 = ((x601<=(x602|x603))&x604);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = UINT32_MAX;
	int8_t x606 = INT8_MIN;
	volatile int64_t x607 = INT64_MIN;
	int32_t x608 = INT32_MIN;
	volatile int32_t t151 = 65993915;

    t151 = ((x605<=(x606|x607))&x608);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x609 = -1;
	static int64_t x610 = INT64_MAX;
	volatile uint64_t x612 = 155902622LLU;
	volatile uint64_t t152 = 3396353025489696397LLU;

    t152 = ((x609<=(x610|x611))&x612);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 6127189037269582419LLU;
	uint16_t x615 = 8815U;
	int8_t x616 = 4;
	int32_t t153 = 3103;

    t153 = ((x613<=(x614|x615))&x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = INT8_MIN;
	int8_t x618 = -1;
	static volatile int64_t x620 = -1LL;
	static volatile int64_t t154 = -59LL;

    t154 = ((x617<=(x618|x619))&x620);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint32_t x621 = 38029489U;
	volatile uint8_t x622 = 4U;
	uint8_t x623 = 2U;
	int16_t x624 = INT16_MIN;
	static volatile int32_t t155 = -4504;

    t155 = ((x621<=(x622|x623))&x624);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = -374552021;
	int64_t x626 = -1LL;
	volatile int64_t x627 = INT64_MIN;
	static uint16_t x628 = 32U;
	int32_t t156 = -928;

    t156 = ((x625<=(x626|x627))&x628);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x629 = 47U;
	int8_t x630 = INT8_MIN;
	int8_t x632 = 0;
	volatile int32_t t157 = -3627919;

    t157 = ((x629<=(x630|x631))&x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x633 = INT32_MIN;
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = 7894803983124022LL;
	static int32_t x636 = -147402;
	int32_t t158 = 53;

    t158 = ((x633<=(x634|x635))&x636);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x638 = 229U;
	int64_t x640 = 263309562409112LL;

    t159 = ((x637<=(x638|x639))&x640);

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -1;
	static int32_t x642 = -1;
	volatile uint8_t x643 = 41U;
	int8_t x644 = INT8_MIN;

    t160 = ((x641<=(x642|x643))&x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x645 = INT16_MIN;
	int8_t x647 = 0;
	int32_t x648 = INT32_MIN;
	int32_t t161 = -934;

    t161 = ((x645<=(x646|x647))&x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = INT64_MAX;
	int64_t x650 = -1LL;
	uint8_t x651 = UINT8_MAX;
	static volatile uint32_t x652 = 0U;
	uint32_t t162 = 1049U;

    t162 = ((x649<=(x650|x651))&x652);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile uint32_t x653 = 833U;
	int16_t x654 = -1;
	uint64_t x655 = 82198LLU;
	uint16_t x656 = 5U;
	int32_t t163 = 7233914;

    t163 = ((x653<=(x654|x655))&x656);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x657 = UINT64_MAX;
	volatile uint64_t x658 = 923148930063451533LLU;
	uint16_t x659 = 109U;
	static int8_t x660 = 8;
	int32_t t164 = -29278869;

    t164 = ((x657<=(x658|x659))&x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x661 = -546;
	int16_t x662 = 9233;
	int32_t x663 = INT32_MIN;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t165 = 1559549;

    t165 = ((x661<=(x662|x663))&x664);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x665 = 0;
	int64_t x666 = -124963956LL;
	uint64_t x667 = 984956955507289LLU;
	int8_t x668 = 1;
	volatile int32_t t166 = -4;

    t166 = ((x665<=(x666|x667))&x668);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x669 = INT16_MAX;
	static int64_t x670 = INT64_MAX;
	static uint16_t x671 = 3U;
	int16_t x672 = 1;

    t167 = ((x669<=(x670|x671))&x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x675 = INT16_MAX;
	int64_t t168 = -179839292434LL;

    t168 = ((x673<=(x674|x675))&x676);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = -1;
	uint32_t x678 = 3U;
	static int8_t x679 = INT8_MIN;
	int32_t x680 = -380414216;
	volatile int32_t t169 = 5882118;

    t169 = ((x677<=(x678|x679))&x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = -1;
	volatile int32_t x682 = INT32_MIN;
	volatile uint8_t x683 = 75U;

    t170 = ((x681<=(x682|x683))&x684);

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MAX;
	uint16_t x688 = 4015U;
	int32_t t171 = -1786214;

    t171 = ((x685<=(x686|x687))&x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 2;
	uint8_t x690 = 2U;
	static uint64_t x692 = 1358847LLU;
	volatile uint64_t t172 = 309327303070LLU;

    t172 = ((x689<=(x690|x691))&x692);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x694 = 15U;
	int8_t x695 = -22;
	int64_t x696 = 81LL;

    t173 = ((x693<=(x694|x695))&x696);

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x698 = 6457133088841LL;
	volatile int64_t x699 = INT64_MIN;
	volatile uint32_t x700 = 3U;

    t174 = ((x697<=(x698|x699))&x700);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 1U;
	int8_t x702 = -3;
	int8_t x703 = -1;
	int16_t x704 = INT16_MAX;
	int32_t t175 = 3372670;

    t175 = ((x701<=(x702|x703))&x704);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 55311U;
	int16_t x706 = 376;
	int64_t x707 = -1LL;
	uint16_t x708 = UINT16_MAX;
	int32_t t176 = -3566;

    t176 = ((x705<=(x706|x707))&x708);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x710 = INT64_MAX;
	int16_t x711 = 0;
	uint32_t x712 = UINT32_MAX;
	volatile uint32_t t177 = 28094U;

    t177 = ((x709<=(x710|x711))&x712);

    if (t177 != 1U) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x713 = 6;
	uint16_t x714 = 636U;
	uint16_t x715 = 1665U;
	uint32_t x716 = 2143U;
	volatile uint32_t t178 = 200868248U;

    t178 = ((x713<=(x714|x715))&x716);

    if (t178 != 1U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = INT32_MIN;
	int16_t x718 = INT16_MAX;
	volatile uint32_t x720 = UINT32_MAX;
	uint32_t t179 = 3647031U;

    t179 = ((x717<=(x718|x719))&x720);

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x721 = UINT16_MAX;
	static int16_t x723 = -92;
	uint8_t x724 = UINT8_MAX;
	int32_t t180 = -21878;

    t180 = ((x721<=(x722|x723))&x724);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x727 = -6;
	volatile int8_t x728 = INT8_MAX;
	static int32_t t181 = 24806799;

    t181 = ((x725<=(x726|x727))&x728);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x730 = -353;
	uint64_t x731 = 1043473946428LLU;
	volatile int8_t x732 = INT8_MIN;
	volatile int32_t t182 = -222975;

    t182 = ((x729<=(x730|x731))&x732);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x733 = INT32_MAX;
	volatile int64_t x734 = -1LL;
	int32_t x735 = -87069699;
	static int8_t x736 = INT8_MAX;

    t183 = ((x733<=(x734|x735))&x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x738 = 6989017907188286LL;
	static volatile uint64_t x739 = 42629890LLU;
	static int8_t x740 = INT8_MIN;
	volatile int32_t t184 = -5650288;

    t184 = ((x737<=(x738|x739))&x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x741 = 3133197328LL;
	volatile int32_t x742 = INT32_MIN;
	uint32_t x743 = 2970U;
	int32_t x744 = 46965;
	int32_t t185 = -1300111;

    t185 = ((x741<=(x742|x743))&x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x748 = INT32_MAX;
	int32_t t186 = -502812;

    t186 = ((x745<=(x746|x747))&x748);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x749 = 810854952590LLU;
	int8_t x750 = INT8_MIN;
	int32_t x752 = INT32_MIN;
	int32_t t187 = 892503;

    t187 = ((x749<=(x750|x751))&x752);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x754 = INT32_MIN;
	static int32_t x756 = -436652429;
	static volatile int32_t t188 = 99704;

    t188 = ((x753<=(x754|x755))&x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x757 = 447U;
	uint32_t x758 = 87U;
	volatile int64_t t189 = 13151763880LL;

    t189 = ((x757<=(x758|x759))&x760);

    if (t189 != 1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x762 = 3979;
	int8_t x764 = INT8_MAX;
	int32_t t190 = 1585492;

    t190 = ((x761<=(x762|x763))&x764);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 14U;
	uint32_t x766 = 0U;
	static int64_t x767 = INT64_MAX;
	static volatile uint8_t x768 = 15U;
	volatile int32_t t191 = -850;

    t191 = ((x765<=(x766|x767))&x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x769 = -1;
	int16_t x770 = INT16_MAX;
	uint64_t x771 = 305217015320984387LLU;
	int32_t x772 = -1;
	int32_t t192 = -822795;

    t192 = ((x769<=(x770|x771))&x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = -664;
	volatile int16_t x774 = -52;
	int8_t x776 = INT8_MAX;
	volatile int32_t t193 = 5;

    t193 = ((x773<=(x774|x775))&x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x778 = -1;
	uint32_t x779 = 3152U;
	int16_t x780 = INT16_MAX;
	static volatile int32_t t194 = -2693042;

    t194 = ((x777<=(x778|x779))&x780);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x782 = INT8_MAX;
	volatile int64_t x783 = -1LL;
	int64_t x784 = INT64_MAX;

    t195 = ((x781<=(x782|x783))&x784);

    if (t195 != 1LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x786 = -1;
	int32_t x787 = 80935190;
	int16_t x788 = 15;

    t196 = ((x785<=(x786|x787))&x788);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x789 = -237602LL;
	uint64_t x790 = 374625942415081LLU;
	int64_t x791 = INT64_MAX;
	int16_t x792 = -151;

    t197 = ((x789<=(x790|x791))&x792);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x794 = 3U;
	uint64_t x795 = UINT64_MAX;
	int8_t x796 = -2;
	int32_t t198 = 8363;

    t198 = ((x793<=(x794|x795))&x796);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int8_t x798 = INT8_MIN;
	volatile int16_t x799 = -208;
	uint8_t x800 = 2U;
	int32_t t199 = 113952580;

    t199 = ((x797<=(x798|x799))&x800);

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

