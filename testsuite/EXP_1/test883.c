
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

static uint16_t x1 = 0U;
int8_t x10 = INT8_MIN;
int8_t x14 = -1;
volatile int32_t x27 = -1450029;
volatile int16_t x30 = -1;
static volatile int32_t t7 = -2;
static int64_t x33 = INT64_MAX;
int8_t x34 = -1;
volatile int8_t x38 = INT8_MAX;
int8_t x42 = INT8_MIN;
int16_t x45 = -1;
uint64_t x48 = 32940939LLU;
static volatile uint64_t x49 = 469271690LLU;
int16_t x53 = INT16_MAX;
uint8_t x55 = 14U;
int16_t x58 = 14142;
int16_t x59 = -1;
static volatile int64_t x65 = -1LL;
uint32_t t16 = 1U;
uint16_t x69 = 8224U;
static volatile int32_t t17 = INT32_MAX;
int8_t x73 = -1;
static int32_t t18 = 52413;
int32_t x78 = 1;
volatile int64_t x79 = INT64_MIN;
static volatile int64_t x84 = INT64_MAX;
uint16_t x92 = 36U;
volatile int32_t t23 = -58031;
int64_t t25 = 734LL;
uint64_t x106 = UINT64_MAX;
int8_t x113 = INT8_MAX;
static volatile int32_t x118 = 34;
uint32_t x123 = 13290566U;
uint16_t x132 = 189U;
int32_t x135 = 131;
volatile uint64_t x138 = 17119833041035LLU;
int8_t x140 = INT8_MAX;
uint32_t x144 = 27870702U;
uint32_t x151 = 2139804448U;
volatile uint64_t x165 = 118147498LLU;
static uint8_t x169 = 52U;
int16_t x170 = INT16_MAX;
volatile int64_t t42 = -100594349361LL;
volatile int32_t t43 = 10426055;
int64_t x178 = INT64_MAX;
int32_t x184 = INT32_MAX;
int64_t x188 = INT64_MAX;
uint64_t x193 = 4419351796LLU;
int64_t x195 = INT64_MIN;
static volatile uint64_t x206 = 3LLU;
uint64_t x218 = UINT64_MAX;
volatile int64_t x220 = INT64_MIN;
int8_t x224 = INT8_MIN;
static volatile int32_t t55 = -130465461;
int32_t x225 = 230662828;
int8_t x226 = -1;
volatile int16_t x235 = -1;
int32_t x240 = -1;
uint16_t x242 = 6U;
static int16_t x244 = INT16_MIN;
volatile int8_t x251 = -1;
static int64_t x255 = INT64_MIN;
static volatile uint32_t x258 = UINT32_MAX;
static volatile int64_t x259 = -3808144433406LL;
int32_t t63 = INT32_MIN;
volatile int64_t x264 = -1LL;
int16_t x269 = -4307;
volatile uint64_t x273 = 129275LLU;
uint32_t x275 = UINT32_MAX;
int16_t x278 = -1;
uint32_t x284 = UINT32_MAX;
int16_t x307 = INT16_MIN;
static int32_t t74 = INT32_MAX;
static int8_t x313 = 4;
volatile uint16_t x314 = 31U;
volatile int32_t t77 = -710079224;
int16_t x326 = -1;
volatile int32_t t79 = 900154;
int16_t x332 = INT16_MIN;
uint32_t x338 = UINT32_MAX;
volatile int64_t x339 = INT64_MIN;
uint16_t x344 = 28364U;
int8_t x346 = -19;
static int32_t x349 = INT32_MIN;
int8_t x352 = -50;
uint16_t x353 = 15U;
uint32_t x356 = UINT32_MAX;
static volatile uint32_t x362 = UINT32_MAX;
volatile uint64_t x365 = 4498LLU;
static int16_t x367 = 27;
uint8_t x376 = 3U;
volatile int32_t t91 = 211643167;
int8_t x381 = INT8_MAX;
volatile int16_t x389 = 1;
int64_t x390 = -1LL;
volatile int32_t x391 = 663;
uint32_t t95 = UINT32_MAX;
int32_t x396 = INT32_MAX;
int32_t x398 = -1;
static uint32_t x400 = 1147U;
int16_t x405 = INT16_MAX;
int64_t x406 = -2482257447958LL;
int64_t x407 = INT64_MIN;
int64_t x411 = 1LL;
uint8_t x412 = 13U;
int32_t t100 = 1;
int8_t x417 = -29;
int32_t x419 = INT32_MIN;
int32_t t104 = 488538612;
static int8_t x436 = -2;
int8_t x441 = -1;
volatile int64_t x458 = -1LL;
volatile int32_t x460 = INT32_MAX;
uint32_t x465 = UINT32_MAX;
volatile int32_t t116 = INT32_MIN;
int32_t x485 = INT32_MIN;
volatile uint32_t t117 = 119293400U;
int64_t x489 = -37656109986075375LL;
uint16_t x490 = 1U;
static uint16_t x491 = UINT16_MAX;
int32_t x492 = 3;
int8_t x500 = 1;
int8_t x507 = INT8_MIN;
uint16_t x508 = 24536U;
uint64_t x513 = UINT64_MAX;
volatile int64_t x515 = INT64_MIN;
volatile int16_t x517 = -1;
volatile int16_t x519 = -1;
int64_t t126 = -1188595296491805LL;
int16_t x526 = 630;
static int16_t x532 = -1;
volatile uint8_t x538 = UINT8_MAX;
volatile int64_t x545 = INT64_MIN;
int64_t x546 = 155173LL;
static int64_t x548 = -1834729877LL;
int8_t x549 = -1;
volatile uint32_t x553 = UINT32_MAX;
static int32_t t134 = -121;
int8_t x557 = INT8_MIN;
volatile int16_t x565 = INT16_MIN;
int8_t x574 = INT8_MAX;
int64_t x577 = -31994917LL;
volatile int32_t t140 = 116;
int32_t x584 = INT32_MIN;
int64_t x587 = 27925LL;
static int8_t x590 = -1;
volatile int32_t x597 = INT32_MIN;
int64_t t145 = 224LL;
static int16_t x619 = 827;
int16_t x624 = -1;
volatile int32_t t151 = -998867;
int32_t x626 = INT32_MAX;
volatile uint64_t x627 = 5LLU;
int64_t t154 = 436323LL;
int16_t x643 = 57;
volatile int32_t t157 = 142;
uint64_t x650 = 1LLU;
volatile int8_t x658 = -1;
volatile int32_t t160 = 829198675;
int32_t x664 = 1039971732;
volatile int32_t t161 = -173603576;
int32_t x666 = INT32_MIN;
volatile int16_t x672 = INT16_MAX;
static uint8_t x680 = UINT8_MAX;
static int8_t x696 = INT8_MIN;
static int64_t x705 = INT64_MIN;
int8_t x712 = -25;
volatile int32_t t172 = -4208036;
int32_t t173 = 4038;
uint8_t x718 = 1U;
int16_t x719 = INT16_MIN;
int64_t x726 = -544443167758950595LL;
int64_t x728 = INT64_MIN;
int8_t x732 = INT8_MIN;
volatile int32_t x740 = -1;
static volatile int32_t t178 = -579018;
static int16_t x750 = 259;
uint16_t x751 = 229U;
int64_t x753 = -1LL;
uint32_t x757 = 27U;
static volatile uint32_t x761 = 2955037U;
int8_t x764 = INT8_MIN;
volatile int64_t x766 = INT64_MAX;
volatile int32_t t185 = -228;
volatile int32_t t186 = INT32_MIN;
uint64_t x779 = 14252LLU;
uint64_t x782 = 152861231762LLU;
volatile uint8_t x783 = 3U;
static uint8_t x790 = 4U;
uint16_t x792 = 840U;
static int16_t x793 = INT16_MIN;
uint32_t x796 = 3709U;
int16_t x801 = INT16_MAX;
int32_t t193 = 25203;
int32_t x810 = -1;
int8_t x813 = INT8_MIN;
int32_t x814 = -62;
int32_t x816 = INT32_MIN;
int32_t t199 = -1175137;


void f0(void) {
    	int64_t x2 = INT64_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = -5621949;
	int32_t t0 = 5250;

    t0 = (((x1%x2)==x3)+x4);

    if (t0 != -5621949) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 1428017U;
	int16_t x6 = 1;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MIN;
	static int64_t t1 = INT64_MIN;

    t1 = (((x5%x6)==x7)+x8);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = 5927;
	volatile int8_t x11 = -1;
	static volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = INT32_MAX;

    t2 = (((x9%x10)==x11)+x12);

    if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = -3;
	int32_t x15 = 39;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -109739910;

    t3 = (((x13%x14)==x15)+x16);

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	volatile int16_t x18 = -1;
	int8_t x19 = INT8_MIN;
	static int32_t x20 = 2;
	volatile int32_t t4 = 2086974;

    t4 = (((x17%x18)==x19)+x20);

    if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	volatile int8_t x22 = 1;
	int8_t x23 = INT8_MIN;
	int64_t x24 = INT64_MAX;
	int64_t t5 = INT64_MAX;

    t5 = (((x21%x22)==x23)+x24);

    if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	volatile uint8_t x26 = 25U;
	static int16_t x28 = INT16_MIN;
	int32_t t6 = 67443;

    t6 = (((x25%x26)==x27)+x28);

    if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int8_t x32 = INT8_MIN;

    t7 = (((x29%x30)==x31)+x32);

    if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x35 = 0;
	uint8_t x36 = 44U;
	volatile int32_t t8 = -3123695;

    t8 = (((x33%x34)==x35)+x36);

    if (t8 != 45) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int16_t x39 = -10;
	uint32_t x40 = 4850228U;
	uint32_t t9 = 29948781U;

    t9 = (((x37%x38)==x39)+x40);

    if (t9 != 4850228U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 507024434783613LLU;
	uint32_t x43 = 987U;
	static uint64_t x44 = 49359987226LLU;
	uint64_t t10 = 1925LLU;

    t10 = (((x41%x42)==x43)+x44);

    if (t10 != 49359987226LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x46 = -650586918686LL;
	volatile uint32_t x47 = UINT32_MAX;
	volatile uint64_t t11 = 12LLU;

    t11 = (((x45%x46)==x47)+x48);

    if (t11 != 32940939LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x50 = INT64_MAX;
	static volatile uint8_t x51 = UINT8_MAX;
	static volatile int16_t x52 = INT16_MAX;
	int32_t t12 = 523810;

    t12 = (((x49%x50)==x51)+x52);

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x54 = INT8_MIN;
	int32_t x56 = 31;
	int32_t t13 = -815;

    t13 = (((x53%x54)==x55)+x56);

    if (t13 != 31) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x57 = 15305U;
	int64_t x60 = INT64_MIN;
	static volatile int64_t t14 = INT64_MIN;

    t14 = (((x57%x58)==x59)+x60);

    if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -139;
	static int8_t x63 = INT8_MIN;
	int64_t x64 = 0LL;
	volatile int64_t t15 = 2999LL;

    t15 = (((x61%x62)==x63)+x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint64_t x66 = UINT64_MAX;
	int32_t x67 = INT32_MIN;
	static uint32_t x68 = 40U;

    t16 = (((x65%x66)==x67)+x68);

    if (t16 != 40U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x70 = INT32_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = INT32_MAX;

    t17 = (((x69%x70)==x71)+x72);

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = -3;
	volatile int16_t x75 = 1;
	uint8_t x76 = 44U;

    t18 = (((x73%x74)==x75)+x76);

    if (t18 != 44) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = -1;
	int32_t x80 = -1;
	volatile int32_t t19 = 57;

    t19 = (((x77%x78)==x79)+x80);

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile int16_t x81 = -1;
	int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	volatile int64_t t20 = INT64_MAX;

    t20 = (((x81%x82)==x83)+x84);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = INT32_MIN;
	static uint32_t x86 = 2695U;
	volatile int64_t x87 = INT64_MAX;
	static int32_t x88 = INT32_MAX;
	static volatile int32_t t21 = INT32_MAX;

    t21 = (((x85%x86)==x87)+x88);

    if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x89 = -756;
	static uint8_t x90 = 1U;
	int64_t x91 = INT64_MIN;
	int32_t t22 = 0;

    t22 = (((x89%x90)==x91)+x92);

    if (t22 != 36) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MIN;
	int32_t x94 = -15;
	static int32_t x95 = 43287295;
	int8_t x96 = INT8_MIN;

    t23 = (((x93%x94)==x95)+x96);

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x97 = 0U;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = 10U;
	int64_t x100 = INT64_MIN;
	int64_t t24 = INT64_MIN;

    t24 = (((x97%x98)==x99)+x100);

    if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = 20;
	int32_t x102 = -1;
	static uint8_t x103 = 26U;
	volatile int64_t x104 = -453653488373433276LL;

    t25 = (((x101%x102)==x103)+x104);

    if (t25 != -453653488373433276LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x105 = 56U;
	static uint16_t x107 = UINT16_MAX;
	int64_t x108 = -2LL;
	int64_t t26 = 238014426969LL;

    t26 = (((x105%x106)==x107)+x108);

    if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -549842;
	uint8_t x110 = 29U;
	static volatile uint16_t x111 = 226U;
	uint32_t x112 = 139450966U;
	uint32_t t27 = 10U;

    t27 = (((x109%x110)==x111)+x112);

    if (t27 != 139450966U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x114 = INT16_MAX;
	static volatile int32_t x115 = INT32_MAX;
	uint64_t x116 = 12253LLU;
	uint64_t t28 = 54923LLU;

    t28 = (((x113%x114)==x115)+x116);

    if (t28 != 12253LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = INT64_MIN;
	volatile uint16_t x119 = 16065U;
	uint64_t x120 = 322736649LLU;
	uint64_t t29 = 118LLU;

    t29 = (((x117%x118)==x119)+x120);

    if (t29 != 322736649LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -10LL;
	uint16_t x122 = UINT16_MAX;
	static volatile int64_t x124 = INT64_MIN;
	volatile int64_t t30 = INT64_MIN;

    t30 = (((x121%x122)==x123)+x124);

    if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -57;
	int64_t x126 = -1LL;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = UINT16_MAX;
	volatile int32_t t31 = 1;

    t31 = (((x125%x126)==x127)+x128);

    if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x129 = 87252U;
	volatile uint32_t x130 = 39U;
	int32_t x131 = -1;
	int32_t t32 = -162376;

    t32 = (((x129%x130)==x131)+x132);

    if (t32 != 189) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = UINT8_MAX;
	uint64_t x134 = UINT64_MAX;
	static volatile int16_t x136 = -1;
	int32_t t33 = 985698204;

    t33 = (((x133%x134)==x135)+x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 822LLU;
	volatile int16_t x139 = -1;
	volatile int32_t t34 = -1;

    t34 = (((x137%x138)==x139)+x140);

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = INT32_MAX;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = -1;
	volatile uint32_t t35 = 40266U;

    t35 = (((x141%x142)==x143)+x144);

    if (t35 != 27870702U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x145 = INT8_MAX;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	int64_t x148 = INT64_MIN;
	volatile int64_t t36 = INT64_MIN;

    t36 = (((x145%x146)==x147)+x148);

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = INT16_MIN;
	uint16_t x150 = 17U;
	int64_t x152 = 1LL;
	int64_t t37 = -6376408133323286LL;

    t37 = (((x149%x150)==x151)+x152);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x153 = INT8_MIN;
	volatile uint8_t x154 = 9U;
	uint8_t x155 = 28U;
	volatile int64_t x156 = -1LL;
	int64_t t38 = 797250347811LL;

    t38 = (((x153%x154)==x155)+x156);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x157 = 6567;
	uint32_t x158 = 110U;
	int8_t x159 = -5;
	uint32_t x160 = 1U;
	uint32_t t39 = 966U;

    t39 = (((x157%x158)==x159)+x160);

    if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x161 = -1LL;
	int16_t x162 = -3;
	uint8_t x163 = 7U;
	static volatile int8_t x164 = -2;
	volatile int32_t t40 = 87287;

    t40 = (((x161%x162)==x163)+x164);

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x166 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	int64_t x168 = -1LL;
	volatile int64_t t41 = 17057430LL;

    t41 = (((x165%x166)==x167)+x168);

    if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x171 = 1U;
	static int64_t x172 = 376LL;

    t42 = (((x169%x170)==x171)+x172);

    if (t42 != 376LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 26U;
	int32_t x174 = -1325;
	uint16_t x175 = 28760U;
	static int16_t x176 = INT16_MAX;

    t43 = (((x173%x174)==x175)+x176);

    if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x177 = UINT8_MAX;
	static int8_t x179 = -1;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -2343283;

    t44 = (((x177%x178)==x179)+x180);

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x181 = -1LL;
	int32_t x182 = -34237;
	int16_t x183 = 8921;
	int32_t t45 = INT32_MAX;

    t45 = (((x181%x182)==x183)+x184);

    if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x185 = 1366184396337228799LLU;
	static int32_t x186 = 721563176;
	volatile int32_t x187 = 1;
	int64_t t46 = INT64_MAX;

    t46 = (((x185%x186)==x187)+x188);

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = -1;
	static int32_t x190 = 1;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -4;
	int32_t t47 = 653316;

    t47 = (((x189%x190)==x191)+x192);

    if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x194 = INT8_MIN;
	int8_t x196 = 1;
	int32_t t48 = 4;

    t48 = (((x193%x194)==x195)+x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 0LL;
	uint64_t x198 = UINT64_MAX;
	static int16_t x199 = -1;
	int32_t x200 = -1;
	volatile int32_t t49 = 1;

    t49 = (((x197%x198)==x199)+x200);

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = INT32_MAX;
	int16_t x202 = -87;
	static volatile int32_t x203 = -6;
	int32_t x204 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (((x201%x202)==x203)+x204);

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = 16522103LL;
	static int64_t x207 = INT64_MAX;
	volatile int16_t x208 = -1;
	volatile int32_t t51 = 86456857;

    t51 = (((x205%x206)==x207)+x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -10;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t52 = 1;

    t52 = (((x209%x210)==x211)+x212);

    if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x213 = UINT64_MAX;
	volatile uint32_t x214 = 9247U;
	uint16_t x215 = 2U;
	static uint8_t x216 = 5U;
	int32_t t53 = 0;

    t53 = (((x213%x214)==x215)+x216);

    if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 508470218386LLU;
	int8_t x219 = 0;
	int64_t t54 = INT64_MIN;

    t54 = (((x217%x218)==x219)+x220);

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x221 = 63U;
	int64_t x222 = 11607LL;
	int32_t x223 = -322571857;

    t55 = (((x221%x222)==x223)+x224);

    if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x227 = 439U;
	uint16_t x228 = 3059U;
	int32_t t56 = 230895587;

    t56 = (((x225%x226)==x227)+x228);

    if (t56 != 3059) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int64_t x229 = -1LL;
	static int32_t x230 = INT32_MIN;
	static uint64_t x231 = 1180089345581LLU;
	int32_t x232 = -1;
	volatile int32_t t57 = 8;

    t57 = (((x229%x230)==x231)+x232);

    if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MIN;
	int16_t x234 = -1;
	static int64_t x236 = 3LL;
	static int64_t t58 = -1263409699006LL;

    t58 = (((x233%x234)==x235)+x236);

    if (t58 != 3LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x237 = 3;
	static int32_t x238 = -1;
	int32_t x239 = INT32_MIN;
	int32_t t59 = -4696058;

    t59 = (((x237%x238)==x239)+x240);

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = -4;
	volatile int16_t x243 = INT16_MIN;
	static int32_t t60 = -294;

    t60 = (((x241%x242)==x243)+x244);

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x249 = -2203;
	int32_t x250 = INT32_MIN;
	uint64_t x252 = 15747987928LLU;
	volatile uint64_t t61 = 7358748LLU;

    t61 = (((x249%x250)==x251)+x252);

    if (t61 != 15747987928LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x253 = 683U;
	static int32_t x254 = -1;
	int8_t x256 = INT8_MIN;
	static int32_t t62 = -1861522;

    t62 = (((x253%x254)==x255)+x256);

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x257 = UINT8_MAX;
	volatile int32_t x260 = INT32_MIN;

    t63 = (((x257%x258)==x259)+x260);

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x261 = INT8_MIN;
	int8_t x262 = 47;
	int16_t x263 = INT16_MIN;
	static int64_t t64 = -3313059926LL;

    t64 = (((x261%x262)==x263)+x264);

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = 1;
	volatile int32_t x266 = -473236285;
	volatile uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	int32_t t65 = INT32_MAX;

    t65 = (((x265%x266)==x267)+x268);

    if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x270 = INT16_MIN;
	volatile uint32_t x271 = 64632538U;
	static uint32_t x272 = 10491U;
	static uint32_t t66 = 5116848U;

    t66 = (((x269%x270)==x271)+x272);

    if (t66 != 10491U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x274 = INT32_MIN;
	uint8_t x276 = 5U;
	int32_t t67 = -24130;

    t67 = (((x273%x274)==x275)+x276);

    if (t67 != 5) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint8_t x277 = UINT8_MAX;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t68 = 24350;

    t68 = (((x277%x278)==x279)+x280);

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = INT8_MIN;
	int64_t x282 = 3848LL;
	int8_t x283 = -1;
	static volatile uint32_t t69 = UINT32_MAX;

    t69 = (((x281%x282)==x283)+x284);

    if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x289 = 13957966215LLU;
	static int8_t x290 = -4;
	volatile int16_t x291 = INT16_MIN;
	uint8_t x292 = 0U;
	volatile int32_t t70 = 6622;

    t70 = (((x289%x290)==x291)+x292);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x293 = 1981U;
	static int64_t x294 = 87602LL;
	static int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;
	int32_t t71 = -4074337;

    t71 = (((x293%x294)==x295)+x296);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	int64_t x299 = 222042LL;
	static uint16_t x300 = 21696U;
	volatile int32_t t72 = -114682;

    t72 = (((x297%x298)==x299)+x300);

    if (t72 != 21696) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x301 = INT8_MAX;
	volatile uint16_t x302 = 2U;
	volatile int8_t x303 = INT8_MAX;
	int64_t x304 = INT64_MIN;
	volatile int64_t t73 = INT64_MIN;

    t73 = (((x301%x302)==x303)+x304);

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = -1;
	int32_t x308 = INT32_MAX;

    t74 = (((x305%x306)==x307)+x308);

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x309 = -1;
	int32_t x310 = -11;
	int16_t x311 = -1;
	int8_t x312 = -44;
	volatile int32_t t75 = 48491658;

    t75 = (((x309%x310)==x311)+x312);

    if (t75 != -43) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x315 = 2220U;
	int64_t x316 = INT64_MAX;
	int64_t t76 = INT64_MAX;

    t76 = (((x313%x314)==x315)+x316);

    if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = 276772811109535LL;
	int32_t x318 = -76;
	int16_t x319 = INT16_MIN;
	volatile uint8_t x320 = 52U;

    t77 = (((x317%x318)==x319)+x320);

    if (t77 != 52) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x321 = INT16_MAX;
	static int16_t x322 = -1116;
	static int8_t x323 = -1;
	volatile int16_t x324 = INT16_MAX;
	int32_t t78 = -10;

    t78 = (((x321%x322)==x323)+x324);

    if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x325 = 51U;
	int16_t x327 = -1;
	volatile int16_t x328 = 0;

    t79 = (((x325%x326)==x327)+x328);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x329 = INT32_MIN;
	int64_t x330 = 148LL;
	uint8_t x331 = 13U;
	static volatile int32_t t80 = 2901509;

    t80 = (((x329%x330)==x331)+x332);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x333 = INT32_MIN;
	volatile int64_t x334 = INT64_MIN;
	uint8_t x335 = 6U;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t81 = -60229300;

    t81 = (((x333%x334)==x335)+x336);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x337 = UINT16_MAX;
	static uint8_t x340 = 40U;
	volatile int32_t t82 = -182163;

    t82 = (((x337%x338)==x339)+x340);

    if (t82 != 40) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x341 = INT8_MIN;
	int64_t x342 = 1570574LL;
	int32_t x343 = INT32_MIN;
	volatile int32_t t83 = -539950344;

    t83 = (((x341%x342)==x343)+x344);

    if (t83 != 28364) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x345 = -34;
	volatile int64_t x347 = -15189LL;
	static int64_t x348 = -2379LL;
	volatile int64_t t84 = -11295006122795LL;

    t84 = (((x345%x346)==x347)+x348);

    if (t84 != -2379LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x350 = 555U;
	int32_t x351 = INT32_MIN;
	static volatile int32_t t85 = 192;

    t85 = (((x349%x350)==x351)+x352);

    if (t85 != -50) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x354 = -1;
	static volatile int32_t x355 = 6;
	uint32_t t86 = UINT32_MAX;

    t86 = (((x353%x354)==x355)+x356);

    if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x357 = 0;
	static int32_t x358 = INT32_MIN;
	uint32_t x359 = 773417U;
	int64_t x360 = -1LL;
	volatile int64_t t87 = 5LL;

    t87 = (((x357%x358)==x359)+x360);

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x361 = 119862139U;
	int64_t x363 = INT64_MIN;
	uint16_t x364 = 20405U;
	int32_t t88 = 14554;

    t88 = (((x361%x362)==x363)+x364);

    if (t88 != 20405) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x366 = 62U;
	int32_t x368 = INT32_MIN;
	int32_t t89 = INT32_MIN;

    t89 = (((x365%x366)==x367)+x368);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x369 = 27194993LLU;
	volatile int8_t x370 = INT8_MAX;
	static uint64_t x371 = 13LLU;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t90 = -403295;

    t90 = (((x369%x370)==x371)+x372);

    if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x373 = 3U;
	int16_t x374 = -1;
	static int32_t x375 = -14292;

    t91 = (((x373%x374)==x375)+x376);

    if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x377 = -1LL;
	volatile int16_t x378 = -1;
	uint32_t x379 = 963U;
	int32_t x380 = -1;
	int32_t t92 = 458189941;

    t92 = (((x377%x378)==x379)+x380);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x382 = 2U;
	uint8_t x383 = UINT8_MAX;
	uint32_t x384 = UINT32_MAX;
	uint32_t t93 = UINT32_MAX;

    t93 = (((x381%x382)==x383)+x384);

    if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x385 = -16670783030889LL;
	uint16_t x386 = 5560U;
	uint16_t x387 = 42U;
	uint64_t x388 = UINT64_MAX;
	uint64_t t94 = UINT64_MAX;

    t94 = (((x385%x386)==x387)+x388);

    if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x392 = UINT32_MAX;

    t95 = (((x389%x390)==x391)+x392);

    if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x393 = 22LLU;
	int16_t x394 = -562;
	int32_t x395 = 1;
	int32_t t96 = INT32_MAX;

    t96 = (((x393%x394)==x395)+x396);

    if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x397 = 30451U;
	static uint32_t x399 = 1153764024U;
	volatile uint32_t t97 = 14U;

    t97 = (((x397%x398)==x399)+x400);

    if (t97 != 1147U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = INT32_MIN;
	int16_t x402 = INT16_MAX;
	int8_t x403 = 16;
	static int64_t x404 = -1167585488414252LL;
	int64_t t98 = 1028LL;

    t98 = (((x401%x402)==x403)+x404);

    if (t98 != -1167585488414252LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x408 = 9;
	static int32_t t99 = 29858272;

    t99 = (((x405%x406)==x407)+x408);

    if (t99 != 9) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x409 = 14U;
	int8_t x410 = INT8_MIN;

    t100 = (((x409%x410)==x411)+x412);

    if (t100 != 13) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x413 = 2U;
	uint8_t x414 = 1U;
	int64_t x415 = INT64_MIN;
	volatile int32_t x416 = -1;
	int32_t t101 = 0;

    t101 = (((x413%x414)==x415)+x416);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x418 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t102 = -1765;

    t102 = (((x417%x418)==x419)+x420);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = INT8_MAX;
	static int8_t x422 = INT8_MIN;
	uint64_t x423 = 350768417LLU;
	uint8_t x424 = UINT8_MAX;
	int32_t t103 = 23336011;

    t103 = (((x421%x422)==x423)+x424);

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int32_t x425 = INT32_MAX;
	int8_t x426 = INT8_MAX;
	uint64_t x427 = 12LLU;
	uint8_t x428 = 14U;

    t104 = (((x425%x426)==x427)+x428);

    if (t104 != 14) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x429 = INT8_MIN;
	int8_t x430 = INT8_MIN;
	volatile int16_t x431 = INT16_MIN;
	uint32_t x432 = UINT32_MAX;
	uint32_t t105 = UINT32_MAX;

    t105 = (((x429%x430)==x431)+x432);

    if (t105 != UINT32_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x433 = 3U;
	static volatile int32_t x434 = INT32_MIN;
	int64_t x435 = INT64_MAX;
	int32_t t106 = -1;

    t106 = (((x433%x434)==x435)+x436);

    if (t106 != -2) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x442 = INT8_MAX;
	int16_t x443 = INT16_MIN;
	int32_t x444 = INT32_MIN;
	static volatile int32_t t107 = INT32_MIN;

    t107 = (((x441%x442)==x443)+x444);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x449 = 233;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = UINT64_MAX;
	int16_t x452 = -129;
	volatile int32_t t108 = 8948320;

    t108 = (((x449%x450)==x451)+x452);

    if (t108 != -129) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint8_t x453 = 60U;
	static int64_t x454 = -1LL;
	uint64_t x455 = UINT64_MAX;
	static int16_t x456 = INT16_MAX;
	int32_t t109 = -8685290;

    t109 = (((x453%x454)==x455)+x456);

    if (t109 != 32767) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x457 = INT64_MAX;
	volatile int16_t x459 = INT16_MIN;
	static int32_t t110 = INT32_MAX;

    t110 = (((x457%x458)==x459)+x460);

    if (t110 != INT32_MAX) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x461 = INT8_MIN;
	int32_t x462 = 38353313;
	uint64_t x463 = 48177698378664832LLU;
	volatile uint16_t x464 = UINT16_MAX;
	int32_t t111 = 168578;

    t111 = (((x461%x462)==x463)+x464);

    if (t111 != 65535) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x466 = 3U;
	int16_t x467 = INT16_MIN;
	int8_t x468 = INT8_MIN;
	volatile int32_t t112 = -321761;

    t112 = (((x465%x466)==x467)+x468);

    if (t112 != -128) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x469 = -3901;
	static int64_t x470 = -38LL;
	int16_t x471 = INT16_MIN;
	int16_t x472 = 0;
	volatile int32_t t113 = 31838462;

    t113 = (((x469%x470)==x471)+x472);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x473 = 140734382960LLU;
	uint16_t x474 = 3543U;
	volatile uint32_t x475 = 8591U;
	int8_t x476 = INT8_MIN;
	volatile int32_t t114 = 38498;

    t114 = (((x473%x474)==x475)+x476);

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x477 = INT16_MAX;
	int32_t x478 = -1;
	int16_t x479 = INT16_MIN;
	int8_t x480 = 63;
	volatile int32_t t115 = 482092;

    t115 = (((x477%x478)==x479)+x480);

    if (t115 != 63) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x481 = 3U;
	int16_t x482 = INT16_MIN;
	static int32_t x483 = -1;
	int32_t x484 = INT32_MIN;

    t116 = (((x481%x482)==x483)+x484);

    if (t116 != INT32_MIN) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x486 = -1;
	static int16_t x487 = -1;
	uint32_t x488 = 205998246U;

    t117 = (((x485%x486)==x487)+x488);

    if (t117 != 205998246U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t t118 = -73448697;

    t118 = (((x489%x490)==x491)+x492);

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x493 = 0;
	int16_t x494 = 24;
	int8_t x495 = INT8_MAX;
	int64_t x496 = INT64_MIN;
	volatile int64_t t119 = INT64_MIN;

    t119 = (((x493%x494)==x495)+x496);

    if (t119 != INT64_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x497 = -1;
	uint32_t x498 = UINT32_MAX;
	volatile uint16_t x499 = 1U;
	int32_t t120 = 95;

    t120 = (((x497%x498)==x499)+x500);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x501 = -1;
	int64_t x502 = INT64_MAX;
	int16_t x503 = -1;
	static int64_t x504 = -1LL;
	volatile int64_t t121 = 20950LL;

    t121 = (((x501%x502)==x503)+x504);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x505 = 21U;
	int64_t x506 = INT64_MIN;
	int32_t t122 = -40;

    t122 = (((x505%x506)==x507)+x508);

    if (t122 != 24536) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x509 = 25;
	volatile uint16_t x510 = UINT16_MAX;
	static int64_t x511 = INT64_MIN;
	int64_t x512 = -1LL;
	int64_t t123 = -8392945942134986LL;

    t123 = (((x509%x510)==x511)+x512);

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x514 = INT8_MAX;
	int32_t x516 = -95;
	volatile int32_t t124 = -726;

    t124 = (((x513%x514)==x515)+x516);

    if (t124 != -95) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x518 = INT8_MIN;
	volatile uint16_t x520 = 3U;
	volatile int32_t t125 = 49611;

    t125 = (((x517%x518)==x519)+x520);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x521 = 7LLU;
	int16_t x522 = 1;
	int8_t x523 = INT8_MAX;
	static int64_t x524 = -976615LL;

    t126 = (((x521%x522)==x523)+x524);

    if (t126 != -976615LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x525 = -1;
	int8_t x527 = -11;
	int64_t x528 = -1LL;
	int64_t t127 = 154675390281496LL;

    t127 = (((x525%x526)==x527)+x528);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x529 = -1;
	int32_t x530 = -23;
	uint8_t x531 = 1U;
	int32_t t128 = -28968675;

    t128 = (((x529%x530)==x531)+x532);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x533 = 109055934;
	static int16_t x534 = INT16_MAX;
	uint32_t x535 = UINT32_MAX;
	volatile uint16_t x536 = 31U;
	volatile int32_t t129 = -252421;

    t129 = (((x533%x534)==x535)+x536);

    if (t129 != 31) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x537 = 1737;
	uint64_t x539 = 5LLU;
	static uint16_t x540 = 12047U;
	volatile int32_t t130 = -7676349;

    t130 = (((x537%x538)==x539)+x540);

    if (t130 != 12047) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x541 = INT16_MIN;
	volatile uint32_t x542 = 144744701U;
	int16_t x543 = 1;
	int8_t x544 = 18;
	int32_t t131 = -1;

    t131 = (((x541%x542)==x543)+x544);

    if (t131 != 18) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x547 = 432U;
	volatile int64_t t132 = 88475905557LL;

    t132 = (((x545%x546)==x547)+x548);

    if (t132 != -1834729877LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x550 = 7196227717563LL;
	int16_t x551 = -116;
	uint16_t x552 = 691U;
	static int32_t t133 = -7679378;

    t133 = (((x549%x550)==x551)+x552);

    if (t133 != 691) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x554 = INT32_MIN;
	static int16_t x555 = -1;
	static uint8_t x556 = 72U;

    t134 = (((x553%x554)==x555)+x556);

    if (t134 != 72) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x558 = INT64_MIN;
	int32_t x559 = INT32_MIN;
	volatile int16_t x560 = INT16_MAX;
	int32_t t135 = -1;

    t135 = (((x557%x558)==x559)+x560);

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x561 = 8886;
	int64_t x562 = INT64_MAX;
	int16_t x563 = INT16_MIN;
	int32_t x564 = -1;
	int32_t t136 = 1;

    t136 = (((x561%x562)==x563)+x564);

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x566 = INT16_MIN;
	int32_t x567 = 7;
	int32_t x568 = INT32_MIN;
	volatile int32_t t137 = INT32_MIN;

    t137 = (((x565%x566)==x567)+x568);

    if (t137 != INT32_MIN) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x569 = 1U;
	uint8_t x570 = 4U;
	int16_t x571 = 5;
	uint8_t x572 = 0U;
	volatile int32_t t138 = -3721994;

    t138 = (((x569%x570)==x571)+x572);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x573 = 1335635LLU;
	uint64_t x575 = UINT64_MAX;
	static int64_t x576 = INT64_MAX;
	int64_t t139 = INT64_MAX;

    t139 = (((x573%x574)==x575)+x576);

    if (t139 != INT64_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x578 = 4307LL;
	volatile int32_t x579 = INT32_MIN;
	int16_t x580 = 0;

    t140 = (((x577%x578)==x579)+x580);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x581 = UINT32_MAX;
	int16_t x582 = INT16_MAX;
	volatile int32_t x583 = 751397;
	static int32_t t141 = INT32_MIN;

    t141 = (((x581%x582)==x583)+x584);

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x585 = 6U;
	int64_t x586 = INT64_MAX;
	uint16_t x588 = UINT16_MAX;
	volatile int32_t t142 = -113875494;

    t142 = (((x585%x586)==x587)+x588);

    if (t142 != 65535) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x589 = 0U;
	volatile int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MIN;
	static volatile int32_t t143 = -15;

    t143 = (((x589%x590)==x591)+x592);

    if (t143 != -32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x593 = 469816603U;
	static int64_t x594 = 196623248LL;
	uint32_t x595 = UINT32_MAX;
	int64_t x596 = INT64_MAX;
	volatile int64_t t144 = INT64_MAX;

    t144 = (((x593%x594)==x595)+x596);

    if (t144 != INT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x598 = INT8_MIN;
	static uint16_t x599 = 1696U;
	int64_t x600 = -1LL;

    t145 = (((x597%x598)==x599)+x600);

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x601 = -811596073020LL;
	int64_t x602 = 2360849LL;
	volatile int16_t x603 = -3411;
	uint32_t x604 = 43632U;
	volatile uint32_t t146 = 24896548U;

    t146 = (((x601%x602)==x603)+x604);

    if (t146 != 43632U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x605 = INT64_MIN;
	static volatile int8_t x606 = INT8_MAX;
	static volatile int32_t x607 = INT32_MIN;
	uint16_t x608 = 9930U;
	volatile int32_t t147 = 60397386;

    t147 = (((x605%x606)==x607)+x608);

    if (t147 != 9930) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = INT8_MAX;
	static volatile int64_t x610 = INT64_MAX;
	int64_t x611 = INT64_MIN;
	static int64_t x612 = INT64_MIN;
	static int64_t t148 = INT64_MIN;

    t148 = (((x609%x610)==x611)+x612);

    if (t148 != INT64_MIN) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x613 = -1;
	uint16_t x614 = 9U;
	volatile int64_t x615 = -1LL;
	static int64_t x616 = -62326889LL;
	static int64_t t149 = -58LL;

    t149 = (((x613%x614)==x615)+x616);

    if (t149 != -62326888LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = 5743193;
	uint64_t x618 = UINT64_MAX;
	int8_t x620 = -1;
	volatile int32_t t150 = -14941;

    t150 = (((x617%x618)==x619)+x620);

    if (t150 != -1) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x621 = INT64_MAX;
	int32_t x622 = INT32_MIN;
	uint64_t x623 = 817671LLU;

    t151 = (((x621%x622)==x623)+x624);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x625 = 5276LLU;
	volatile int8_t x628 = INT8_MIN;
	int32_t t152 = 0;

    t152 = (((x625%x626)==x627)+x628);

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x629 = UINT16_MAX;
	static uint64_t x630 = UINT64_MAX;
	uint16_t x631 = 23U;
	volatile int8_t x632 = INT8_MAX;
	int32_t t153 = 15931;

    t153 = (((x629%x630)==x631)+x632);

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x633 = 116U;
	volatile int64_t x634 = -162402019LL;
	uint32_t x635 = 13U;
	static int64_t x636 = -1903885174389054LL;

    t154 = (((x633%x634)==x635)+x636);

    if (t154 != -1903885174389054LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x637 = -3;
	int8_t x638 = INT8_MIN;
	static int32_t x639 = 748;
	static uint16_t x640 = 117U;
	static int32_t t155 = 417532;

    t155 = (((x637%x638)==x639)+x640);

    if (t155 != 117) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x641 = 2126;
	int32_t x642 = -1394172;
	int8_t x644 = 1;
	volatile int32_t t156 = 364163728;

    t156 = (((x641%x642)==x643)+x644);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x645 = UINT16_MAX;
	static uint16_t x646 = 19U;
	uint32_t x647 = UINT32_MAX;
	int32_t x648 = -1;

    t157 = (((x645%x646)==x647)+x648);

    if (t157 != -1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x649 = INT8_MAX;
	uint8_t x651 = 3U;
	int32_t x652 = INT32_MIN;
	volatile int32_t t158 = INT32_MIN;

    t158 = (((x649%x650)==x651)+x652);

    if (t158 != INT32_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x653 = INT16_MAX;
	volatile int32_t x654 = -1;
	int8_t x655 = INT8_MIN;
	int8_t x656 = -3;
	volatile int32_t t159 = -2775026;

    t159 = (((x653%x654)==x655)+x656);

    if (t159 != -3) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x657 = 2;
	int32_t x659 = INT32_MIN;
	static volatile int8_t x660 = INT8_MAX;

    t160 = (((x657%x658)==x659)+x660);

    if (t160 != 127) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x661 = 78396U;
	static uint32_t x662 = UINT32_MAX;
	volatile uint8_t x663 = UINT8_MAX;

    t161 = (((x661%x662)==x663)+x664);

    if (t161 != 1039971732) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x665 = INT16_MIN;
	int64_t x667 = -1332715LL;
	volatile int64_t x668 = -1LL;
	volatile int64_t t162 = -31510LL;

    t162 = (((x665%x666)==x667)+x668);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x669 = INT8_MAX;
	static int64_t x670 = INT64_MIN;
	uint64_t x671 = UINT64_MAX;
	static int32_t t163 = -8012513;

    t163 = (((x669%x670)==x671)+x672);

    if (t163 != 32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x673 = 81626;
	volatile int8_t x674 = 20;
	static int16_t x675 = -474;
	volatile int16_t x676 = -1;
	static int32_t t164 = -1214047;

    t164 = (((x673%x674)==x675)+x676);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x677 = INT16_MIN;
	int64_t x678 = 230249517LL;
	int8_t x679 = INT8_MAX;
	static int32_t t165 = -509881;

    t165 = (((x677%x678)==x679)+x680);

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x681 = INT32_MAX;
	static int16_t x682 = -2;
	int32_t x683 = INT32_MAX;
	volatile int64_t x684 = INT64_MAX;
	int64_t t166 = INT64_MAX;

    t166 = (((x681%x682)==x683)+x684);

    if (t166 != INT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x689 = -1LL;
	int64_t x690 = INT64_MAX;
	static uint16_t x691 = 8438U;
	static uint32_t x692 = 500720U;
	uint32_t t167 = 7231U;

    t167 = (((x689%x690)==x691)+x692);

    if (t167 != 500720U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x693 = -1742;
	uint64_t x694 = UINT64_MAX;
	volatile uint8_t x695 = 6U;
	int32_t t168 = -30;

    t168 = (((x693%x694)==x695)+x696);

    if (t168 != -128) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x697 = -1;
	int16_t x698 = INT16_MAX;
	volatile int32_t x699 = -1;
	int16_t x700 = 731;
	int32_t t169 = 26;

    t169 = (((x697%x698)==x699)+x700);

    if (t169 != 732) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x701 = INT64_MIN;
	uint8_t x702 = 1U;
	int64_t x703 = INT64_MIN;
	int32_t x704 = 1;
	volatile int32_t t170 = 6878946;

    t170 = (((x701%x702)==x703)+x704);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x706 = -19;
	volatile int16_t x707 = -231;
	int16_t x708 = -1479;
	volatile int32_t t171 = -4299;

    t171 = (((x705%x706)==x707)+x708);

    if (t171 != -1479) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x709 = 1107;
	uint8_t x710 = 26U;
	uint32_t x711 = 1U;

    t172 = (((x709%x710)==x711)+x712);

    if (t172 != -25) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x713 = INT64_MAX;
	volatile uint16_t x714 = UINT16_MAX;
	volatile int8_t x715 = INT8_MAX;
	static int16_t x716 = INT16_MAX;

    t173 = (((x713%x714)==x715)+x716);

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x717 = INT64_MIN;
	static uint32_t x720 = 225316U;
	volatile uint32_t t174 = 364324U;

    t174 = (((x717%x718)==x719)+x720);

    if (t174 != 225316U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x721 = 6749883083LLU;
	int32_t x722 = -1;
	int16_t x723 = 1;
	int32_t x724 = INT32_MAX;
	int32_t t175 = INT32_MAX;

    t175 = (((x721%x722)==x723)+x724);

    if (t175 != INT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x725 = INT64_MIN;
	static uint16_t x727 = UINT16_MAX;
	volatile int64_t t176 = INT64_MIN;

    t176 = (((x725%x726)==x727)+x728);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x729 = -1;
	volatile uint64_t x730 = UINT64_MAX;
	uint64_t x731 = 347LLU;
	volatile int32_t t177 = -26;

    t177 = (((x729%x730)==x731)+x732);

    if (t177 != -128) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x738 = INT32_MIN;
	static uint32_t x739 = 41U;

    t178 = (((x737%x738)==x739)+x740);

    if (t178 != -1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x741 = INT8_MIN;
	static volatile int8_t x742 = -1;
	uint16_t x743 = 370U;
	int8_t x744 = INT8_MAX;
	int32_t t179 = 4595019;

    t179 = (((x741%x742)==x743)+x744);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x745 = 1122896LLU;
	uint16_t x746 = 132U;
	int32_t x747 = INT32_MIN;
	volatile int16_t x748 = INT16_MAX;
	volatile int32_t t180 = -8736058;

    t180 = (((x745%x746)==x747)+x748);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x749 = UINT16_MAX;
	uint64_t x752 = 1005018578LLU;
	volatile uint64_t t181 = 14659558238531377LLU;

    t181 = (((x749%x750)==x751)+x752);

    if (t181 != 1005018578LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x754 = INT16_MAX;
	volatile uint64_t x755 = 517932LLU;
	volatile uint32_t x756 = 968770U;
	volatile uint32_t t182 = 1U;

    t182 = (((x753%x754)==x755)+x756);

    if (t182 != 968770U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x758 = -1LL;
	int64_t x759 = 223568210110LL;
	static uint32_t x760 = 83613U;
	static uint32_t t183 = 97354U;

    t183 = (((x757%x758)==x759)+x760);

    if (t183 != 83613U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x762 = 13;
	volatile int16_t x763 = -1;
	volatile int32_t t184 = 0;

    t184 = (((x761%x762)==x763)+x764);

    if (t184 != -128) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x765 = INT16_MIN;
	static volatile uint16_t x767 = UINT16_MAX;
	volatile int16_t x768 = INT16_MIN;

    t185 = (((x765%x766)==x767)+x768);

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x773 = INT64_MIN;
	int32_t x774 = INT32_MIN;
	int16_t x775 = INT16_MIN;
	volatile int32_t x776 = INT32_MIN;

    t186 = (((x773%x774)==x775)+x776);

    if (t186 != INT32_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x777 = 181488;
	static int64_t x778 = INT64_MIN;
	int64_t x780 = INT64_MIN;
	static volatile int64_t t187 = INT64_MIN;

    t187 = (((x777%x778)==x779)+x780);

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x781 = INT32_MIN;
	uint64_t x784 = 2059909129370202527LLU;
	uint64_t t188 = 1325644539754474LLU;

    t188 = (((x781%x782)==x783)+x784);

    if (t188 != 2059909129370202527LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x785 = 18LLU;
	int16_t x786 = INT16_MIN;
	static int8_t x787 = -1;
	uint64_t x788 = 3645752059314461LLU;
	static volatile uint64_t t189 = 162455918688LLU;

    t189 = (((x785%x786)==x787)+x788);

    if (t189 != 3645752059314461LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int32_t x789 = INT32_MIN;
	static volatile int8_t x791 = INT8_MIN;
	int32_t t190 = 20;

    t190 = (((x789%x790)==x791)+x792);

    if (t190 != 840) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x794 = -1;
	static volatile int32_t x795 = -1;
	uint32_t t191 = 526056U;

    t191 = (((x793%x794)==x795)+x796);

    if (t191 != 3709U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x797 = -8351;
	uint64_t x798 = UINT64_MAX;
	int64_t x799 = -83359977835LL;
	volatile int8_t x800 = INT8_MIN;
	int32_t t192 = -228;

    t192 = (((x797%x798)==x799)+x800);

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x802 = 7U;
	static volatile int64_t x803 = -1LL;
	volatile uint8_t x804 = UINT8_MAX;

    t193 = (((x801%x802)==x803)+x804);

    if (t193 != 255) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x805 = INT32_MIN;
	static int32_t x806 = -1;
	uint8_t x807 = 5U;
	uint32_t x808 = 274U;
	uint32_t t194 = 26U;

    t194 = (((x805%x806)==x807)+x808);

    if (t194 != 274U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x809 = 1146905LLU;
	int16_t x811 = INT16_MIN;
	static int16_t x812 = -1;
	volatile int32_t t195 = 2;

    t195 = (((x809%x810)==x811)+x812);

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x815 = INT32_MIN;
	volatile int32_t t196 = INT32_MIN;

    t196 = (((x813%x814)==x815)+x816);

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	uint64_t x818 = 713654281521183945LLU;
	int32_t x819 = INT32_MIN;
	int8_t x820 = -1;
	volatile int32_t t197 = -1274;

    t197 = (((x817%x818)==x819)+x820);

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x821 = -52;
	static int32_t x822 = -1;
	volatile uint8_t x823 = 9U;
	volatile int8_t x824 = -1;
	static int32_t t198 = 214906;

    t198 = (((x821%x822)==x823)+x824);

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x825 = -1LL;
	uint8_t x826 = 39U;
	int32_t x827 = INT32_MAX;
	static int32_t x828 = 1168;

    t199 = (((x825%x826)==x827)+x828);

    if (t199 != 1168) { NG(); } else { ; }
	
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

