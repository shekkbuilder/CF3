
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

uint32_t x2 = UINT32_MAX;
uint32_t x3 = UINT32_MAX;
int32_t t1 = -1989887;
uint32_t x11 = 32262U;
int8_t x22 = 0;
static int32_t x29 = INT32_MIN;
int64_t x31 = -1LL;
static int16_t x44 = -1;
volatile uint32_t x48 = UINT32_MAX;
volatile int64_t x51 = INT64_MIN;
int64_t x57 = INT64_MAX;
static volatile int32_t t12 = 3;
int64_t x63 = -386861LL;
uint16_t x64 = 3121U;
static int64_t x65 = INT64_MIN;
static volatile int32_t t15 = 1927116;
static uint8_t x77 = 0U;
static int64_t x82 = -88836864LL;
int32_t t18 = -203576916;
uint16_t x90 = 14823U;
static int8_t x91 = INT8_MAX;
int64_t x100 = -52862504238257871LL;
static volatile uint8_t x101 = 7U;
int16_t x104 = -1;
uint32_t x106 = UINT32_MAX;
int8_t x116 = 1;
volatile int16_t x122 = INT16_MIN;
static uint32_t x129 = 28196708U;
volatile int16_t x130 = INT16_MAX;
uint64_t x133 = 130LLU;
static int64_t x136 = -3670760751LL;
int64_t x148 = INT64_MIN;
int32_t t32 = 0;
volatile int8_t x154 = INT8_MIN;
int16_t x157 = 0;
int32_t t37 = 286570966;
int8_t x171 = 60;
volatile uint16_t x187 = UINT16_MAX;
int32_t t43 = 1;
volatile int64_t x196 = INT64_MIN;
static int64_t x207 = -657985LL;
uint16_t x217 = UINT16_MAX;
int32_t t50 = 2960;
int16_t x226 = INT16_MIN;
int32_t x228 = -765282;
volatile int8_t x242 = -23;
static volatile int64_t x244 = 20LL;
static volatile int64_t x250 = INT64_MIN;
uint8_t x251 = UINT8_MAX;
static volatile uint8_t x261 = 94U;
int8_t x265 = 2;
static int8_t x268 = -1;
volatile int64_t x272 = INT64_MIN;
int8_t x273 = INT8_MIN;
int16_t x276 = -1;
volatile int32_t t66 = -1;
static int8_t x297 = -7;
uint16_t x300 = UINT16_MAX;
int64_t x302 = INT64_MIN;
volatile int32_t t68 = 175008187;
volatile int32_t x308 = 14846;
int16_t x311 = INT16_MIN;
static volatile int32_t t70 = -5;
volatile int32_t t71 = -6695;
uint16_t x326 = 4U;
volatile int32_t t74 = 17;
uint64_t x336 = UINT64_MAX;
uint64_t x340 = UINT64_MAX;
int8_t x342 = INT8_MIN;
static int32_t x343 = -223805447;
uint16_t x363 = 4626U;
volatile int32_t t81 = 17346;
volatile int32_t x366 = INT32_MIN;
static int32_t x375 = -1;
int32_t t84 = 39;
static volatile uint64_t x384 = 179893LLU;
volatile int32_t t88 = -9137;
static uint8_t x400 = 45U;
uint32_t x406 = UINT32_MAX;
volatile int32_t x407 = INT32_MIN;
volatile int32_t t91 = 16930506;
uint32_t x412 = 0U;
static volatile int64_t x415 = INT64_MIN;
uint16_t x422 = UINT16_MAX;
int64_t x423 = -602LL;
int32_t t95 = -36396844;
static volatile uint64_t x427 = 3610322LLU;
static int8_t x442 = INT8_MAX;
int32_t x444 = 24162;
static int32_t x448 = 148069;
uint32_t x449 = 66721797U;
int32_t t100 = -94363111;
int8_t x456 = 0;
volatile uint64_t x457 = 160893456584LLU;
static int8_t x460 = 22;
volatile int32_t x472 = -1;
int32_t t104 = -112;
volatile int32_t t105 = -1958;
int16_t x481 = 44;
volatile int32_t t111 = 1995873;
int16_t x501 = INT16_MAX;
uint16_t x515 = 1991U;
uint32_t x524 = 19770U;
int32_t x526 = INT32_MIN;
static int32_t x527 = -1;
int16_t x532 = INT16_MAX;
int8_t x533 = -13;
int32_t x539 = INT32_MIN;
int8_t x540 = INT8_MAX;
int32_t t120 = -480470;
volatile int32_t t121 = -229;
volatile int8_t x546 = INT8_MIN;
volatile uint16_t x551 = 12499U;
static uint64_t x552 = 0LLU;
int32_t x553 = INT32_MIN;
int8_t x555 = 1;
int8_t x556 = INT8_MIN;
uint32_t x572 = 13U;
int32_t t128 = -1;
static uint8_t x577 = 63U;
int64_t x578 = INT64_MIN;
static int32_t x579 = 2;
int16_t x580 = 6686;
volatile int32_t t131 = -105119805;
int64_t x594 = -70124535729LL;
static int16_t x600 = -1;
volatile int32_t t136 = 5;
int16_t x615 = 925;
volatile int32_t t137 = 76;
int8_t x635 = 0;
int32_t t141 = 1;
int8_t x646 = 1;
uint64_t x656 = UINT64_MAX;
static uint64_t x657 = 187805651197587760LLU;
uint8_t x661 = UINT8_MAX;
volatile int32_t t146 = 7;
int8_t x666 = -1;
uint32_t x667 = 300U;
int64_t x687 = -53578082261051LL;
int8_t x690 = 1;
volatile int16_t x692 = -35;
int64_t x703 = INT64_MIN;
int32_t t156 = 99;
volatile int64_t x716 = INT64_MIN;
int32_t x719 = 1129;
int32_t x727 = INT32_MIN;
volatile int32_t t161 = -12592870;
volatile int32_t t162 = 1;
int64_t x741 = -4186677066199LL;
uint16_t x745 = UINT16_MAX;
int8_t x746 = -1;
int16_t x748 = INT16_MAX;
int64_t x755 = INT64_MAX;
int64_t x765 = 29594114648114LL;
uint16_t x769 = 6875U;
static int64_t x770 = INT64_MIN;
volatile int16_t x775 = 179;
int8_t x776 = INT8_MIN;
volatile int32_t t172 = 1413;
static int8_t x787 = INT8_MIN;
static int32_t t175 = -389;
int32_t t176 = 250443;
static volatile int8_t x805 = -1;
volatile int8_t x807 = INT8_MIN;
int64_t x823 = 98757891LL;
uint8_t x825 = 31U;
volatile int64_t x827 = 306074LL;
int16_t x833 = INT16_MIN;
static int16_t x841 = 14802;
static int64_t x842 = 80652726311223196LL;
static volatile int16_t x843 = INT16_MIN;
static volatile uint32_t x844 = 703U;
static int32_t x848 = -64776;
volatile int32_t t185 = -41505;
uint8_t x849 = 6U;
int16_t x855 = -1;
int32_t x870 = 1150963;
volatile int64_t x877 = INT64_MAX;
volatile int16_t x879 = INT16_MIN;
volatile int32_t t192 = 1662868;
int16_t x889 = -1;
static uint16_t x890 = UINT16_MAX;
int32_t t194 = 39;
int64_t x900 = -1LL;
uint8_t x902 = 0U;
uint64_t x907 = UINT64_MAX;
uint64_t x909 = 31LLU;
static uint64_t x911 = 10154LLU;


void f0(void) {
    	int16_t x1 = 1;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -7066;

    t0 = (((x1+x2)|x3)==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	volatile int16_t x6 = -3;
	uint64_t x7 = 43376580413LLU;
	uint8_t x8 = 30U;

    t1 = (((x5+x6)|x7)==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	uint64_t x10 = UINT64_MAX;
	uint16_t x12 = UINT16_MAX;
	static int32_t t2 = -4479656;

    t2 = (((x9+x10)|x11)==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	int8_t x18 = INT8_MAX;
	int64_t x19 = -1LL;
	volatile int64_t x20 = -1LL;
	volatile int32_t t3 = -468;

    t3 = (((x17+x18)|x19)==x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x21 = 1U;
	static volatile int64_t x23 = INT64_MIN;
	int32_t x24 = -1;
	volatile int32_t t4 = 42512;

    t4 = (((x21+x22)|x23)==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x30 = 778U;
	int32_t x32 = INT32_MAX;
	volatile int32_t t5 = -169;

    t5 = (((x29+x30)|x31)==x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t6 = 58574;

    t6 = (((x33+x34)|x35)==x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x37 = INT8_MIN;
	uint8_t x38 = 3U;
	volatile int16_t x39 = 39;
	volatile int64_t x40 = -1LL;
	static volatile int32_t t7 = 48;

    t7 = (((x37+x38)|x39)==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x41 = -131838307134147LL;
	int8_t x42 = -1;
	static int16_t x43 = -1;
	volatile int32_t t8 = -1925150;

    t8 = (((x41+x42)|x43)==x44);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x45 = 0;
	int64_t x46 = INT64_MAX;
	volatile int64_t x47 = INT64_MIN;
	volatile int32_t t9 = 4527587;

    t9 = (((x45+x46)|x47)==x48);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = INT64_MAX;
	volatile uint64_t x50 = 10692993405389454LLU;
	static int32_t x52 = -458117;
	volatile int32_t t10 = -531;

    t10 = (((x49+x50)|x51)==x52);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x53 = 0;
	int8_t x54 = INT8_MIN;
	static uint8_t x55 = 0U;
	static int16_t x56 = -1;
	static volatile int32_t t11 = -6221;

    t11 = (((x53+x54)|x55)==x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x58 = 42LLU;
	volatile uint8_t x59 = UINT8_MAX;
	volatile uint64_t x60 = UINT64_MAX;

    t12 = (((x57+x58)|x59)==x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 8850179796427375242LLU;
	uint8_t x62 = UINT8_MAX;
	static int32_t t13 = -21549;

    t13 = (((x61+x62)|x63)==x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x66 = 13592U;
	int32_t x67 = -1;
	volatile int32_t x68 = INT32_MIN;
	volatile int32_t t14 = 215281;

    t14 = (((x65+x66)|x67)==x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = 17;
	volatile int8_t x70 = 10;
	static uint64_t x71 = UINT64_MAX;
	int16_t x72 = INT16_MIN;

    t15 = (((x69+x70)|x71)==x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = -1;
	static int8_t x74 = INT8_MIN;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MIN;
	volatile int32_t t16 = 40412634;

    t16 = (((x73+x74)|x75)==x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x78 = UINT8_MAX;
	uint64_t x79 = 2227383704594LLU;
	static uint8_t x80 = 3U;
	static volatile int32_t t17 = -2835;

    t17 = (((x77+x78)|x79)==x80);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x81 = INT32_MIN;
	int64_t x83 = INT64_MAX;
	int16_t x84 = 5;

    t18 = (((x81+x82)|x83)==x84);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = UINT64_MAX;
	static int32_t x86 = -1;
	static int64_t x87 = INT64_MIN;
	static int8_t x88 = 63;
	int32_t t19 = 1;

    t19 = (((x85+x86)|x87)==x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;
	int32_t t20 = -1644769;

    t20 = (((x89+x90)|x91)==x92);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	uint8_t x95 = 9U;
	uint16_t x96 = 4U;
	static volatile int32_t t21 = 22394895;

    t21 = (((x93+x94)|x95)==x96);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = -5;
	static volatile int16_t x98 = INT16_MAX;
	int8_t x99 = -1;
	volatile int32_t t22 = -747342695;

    t22 = (((x97+x98)|x99)==x100);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x102 = 4U;
	uint64_t x103 = 645764247899568656LLU;
	int32_t t23 = -921112;

    t23 = (((x101+x102)|x103)==x104);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 2663;
	int16_t x107 = INT16_MIN;
	volatile uint8_t x108 = UINT8_MAX;
	static int32_t t24 = 1251;

    t24 = (((x105+x106)|x107)==x108);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = INT64_MAX;
	int16_t x110 = INT16_MIN;
	uint32_t x111 = 1U;
	uint32_t x112 = 37186842U;
	volatile int32_t t25 = -5274;

    t25 = (((x109+x110)|x111)==x112);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x113 = -880837;
	static volatile int64_t x114 = -23799343196LL;
	volatile int8_t x115 = 26;
	volatile int32_t t26 = 3679504;

    t26 = (((x113+x114)|x115)==x116);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x121 = INT16_MAX;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 37778LLU;
	int32_t t27 = 1529698;

    t27 = (((x121+x122)|x123)==x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x125 = -1;
	int64_t x126 = -628245LL;
	int64_t x127 = -966045802932LL;
	int32_t x128 = INT32_MIN;
	volatile int32_t t28 = 455915641;

    t28 = (((x125+x126)|x127)==x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;
	volatile int32_t t29 = -429864038;

    t29 = (((x129+x130)|x131)==x132);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x134 = 346359086122110317LLU;
	int64_t x135 = 23LL;
	static volatile int32_t t30 = -40812;

    t30 = (((x133+x134)|x135)==x136);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MIN;
	int8_t x142 = INT8_MAX;
	static int32_t x143 = INT32_MAX;
	volatile int16_t x144 = 1;
	volatile int32_t t31 = -1;

    t31 = (((x141+x142)|x143)==x144);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x145 = -310242631;
	int16_t x146 = 2;
	static volatile uint16_t x147 = UINT16_MAX;

    t32 = (((x145+x146)|x147)==x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x149 = 108U;
	int8_t x150 = INT8_MIN;
	volatile int8_t x151 = -3;
	volatile int16_t x152 = -15;
	volatile int32_t t33 = -26;

    t33 = (((x149+x150)|x151)==x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x153 = 1U;
	volatile int64_t x155 = INT64_MIN;
	uint64_t x156 = 1882664092398144305LLU;
	int32_t t34 = -983227;

    t34 = (((x153+x154)|x155)==x156);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x158 = UINT16_MAX;
	uint16_t x159 = 1211U;
	static uint32_t x160 = 18227794U;
	int32_t t35 = 5;

    t35 = (((x157+x158)|x159)==x160);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x161 = INT64_MIN;
	uint64_t x162 = 39603LLU;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t x164 = 8;
	int32_t t36 = 94835;

    t36 = (((x161+x162)|x163)==x164);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile uint8_t x165 = 22U;
	int32_t x166 = 3;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MIN;

    t37 = (((x165+x166)|x167)==x168);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MIN;
	uint16_t x172 = 140U;
	volatile int32_t t38 = 67084;

    t38 = (((x169+x170)|x171)==x172);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x173 = 80526;
	static volatile uint8_t x174 = 2U;
	int8_t x175 = 1;
	uint16_t x176 = 6U;
	static int32_t t39 = -659789;

    t39 = (((x173+x174)|x175)==x176);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = -1;
	int64_t x178 = 252304584788201508LL;
	int16_t x179 = 10985;
	volatile uint64_t x180 = 1050404056904190253LLU;
	static int32_t t40 = -61919125;

    t40 = (((x177+x178)|x179)==x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x181 = -1;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = INT8_MAX;
	int64_t x184 = INT64_MAX;
	int32_t t41 = -41926;

    t41 = (((x181+x182)|x183)==x184);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MIN;
	uint64_t x186 = 8185048LLU;
	int32_t x188 = -2471;
	volatile int32_t t42 = -391357815;

    t42 = (((x185+x186)|x187)==x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x189 = UINT16_MAX;
	uint16_t x190 = 0U;
	static volatile int64_t x191 = 976615320LL;
	int8_t x192 = 1;

    t43 = (((x189+x190)|x191)==x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = 2906;
	int8_t x194 = INT8_MAX;
	int64_t x195 = INT64_MIN;
	static int32_t t44 = -201465320;

    t44 = (((x193+x194)|x195)==x196);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x197 = 785819829011518LLU;
	int32_t x198 = -1;
	int8_t x199 = -1;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t45 = -34060;

    t45 = (((x197+x198)|x199)==x200);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x201 = UINT8_MAX;
	volatile uint32_t x202 = UINT32_MAX;
	uint64_t x203 = 27345LLU;
	static volatile int16_t x204 = INT16_MIN;
	int32_t t46 = -518386;

    t46 = (((x201+x202)|x203)==x204);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = 335091LL;
	uint8_t x206 = 7U;
	uint64_t x208 = 14LLU;
	static volatile int32_t t47 = 11;

    t47 = (((x205+x206)|x207)==x208);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x209 = 775U;
	uint64_t x210 = 198070LLU;
	int32_t x211 = INT32_MIN;
	static uint8_t x212 = 10U;
	volatile int32_t t48 = -263567443;

    t48 = (((x209+x210)|x211)==x212);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x218 = UINT32_MAX;
	volatile uint16_t x219 = 489U;
	int64_t x220 = -1LL;
	volatile int32_t t49 = 957;

    t49 = (((x217+x218)|x219)==x220);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x221 = -1;
	static uint16_t x222 = 19001U;
	int64_t x223 = -26719825863873199LL;
	uint32_t x224 = UINT32_MAX;

    t50 = (((x221+x222)|x223)==x224);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x225 = 0;
	uint32_t x227 = 4900135U;
	volatile int32_t t51 = 3724111;

    t51 = (((x225+x226)|x227)==x228);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x229 = -1;
	volatile int16_t x230 = 1349;
	static int64_t x231 = INT64_MIN;
	uint16_t x232 = 25U;
	static int32_t t52 = 25322188;

    t52 = (((x229+x230)|x231)==x232);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x233 = 26842LL;
	int32_t x234 = INT32_MIN;
	static int16_t x235 = -108;
	volatile int16_t x236 = -1357;
	static volatile int32_t t53 = -45;

    t53 = (((x233+x234)|x235)==x236);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MAX;
	volatile int64_t x238 = -1LL;
	uint64_t x239 = 34LLU;
	static volatile uint16_t x240 = 1757U;
	volatile int32_t t54 = -6041441;

    t54 = (((x237+x238)|x239)==x240);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x241 = INT8_MIN;
	volatile int8_t x243 = 3;
	static int32_t t55 = -753010;

    t55 = (((x241+x242)|x243)==x244);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x245 = 1398LLU;
	uint8_t x246 = 112U;
	static volatile int8_t x247 = -1;
	int8_t x248 = -1;
	volatile int32_t t56 = 3;

    t56 = (((x245+x246)|x247)==x248);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x249 = 1U;
	int16_t x252 = -1;
	int32_t t57 = -73883;

    t57 = (((x249+x250)|x251)==x252);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = -1;
	static int64_t x254 = 17263330608208LL;
	static int16_t x255 = -2;
	int16_t x256 = -438;
	int32_t t58 = 4208;

    t58 = (((x253+x254)|x255)==x256);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x257 = -2;
	uint8_t x258 = 1U;
	int16_t x259 = 180;
	int32_t x260 = 501712;
	int32_t t59 = -19;

    t59 = (((x257+x258)|x259)==x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x262 = 712404LLU;
	int16_t x263 = -98;
	volatile uint8_t x264 = 10U;
	volatile int32_t t60 = -1;

    t60 = (((x261+x262)|x263)==x264);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x266 = INT64_MIN;
	uint64_t x267 = 179713931LLU;
	static volatile int32_t t61 = -27458027;

    t61 = (((x265+x266)|x267)==x268);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x269 = INT32_MAX;
	int8_t x270 = -1;
	static uint8_t x271 = UINT8_MAX;
	volatile int32_t t62 = 654926;

    t62 = (((x269+x270)|x271)==x272);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x274 = -4191147;
	volatile int16_t x275 = INT16_MIN;
	int32_t t63 = 446;

    t63 = (((x273+x274)|x275)==x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x281 = INT8_MIN;
	static volatile int16_t x282 = 72;
	int32_t x283 = -1;
	volatile int16_t x284 = INT16_MIN;
	int32_t t64 = 6005;

    t64 = (((x281+x282)|x283)==x284);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x285 = INT8_MIN;
	int32_t x286 = INT32_MAX;
	volatile int64_t x287 = -117648820LL;
	int64_t x288 = 100185847593178346LL;
	int32_t t65 = 0;

    t65 = (((x285+x286)|x287)==x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x293 = UINT8_MAX;
	static int8_t x294 = INT8_MAX;
	volatile int64_t x295 = INT64_MAX;
	static int8_t x296 = INT8_MIN;

    t66 = (((x293+x294)|x295)==x296);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x298 = 21;
	int32_t x299 = -1891492;
	volatile int32_t t67 = -893710696;

    t67 = (((x297+x298)|x299)==x300);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x301 = 2028792060893LLU;
	int64_t x303 = INT64_MIN;
	volatile int32_t x304 = INT32_MAX;

    t68 = (((x301+x302)|x303)==x304);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x305 = 0;
	volatile int64_t x306 = INT64_MIN;
	static uint32_t x307 = 292894181U;
	int32_t t69 = -561827;

    t69 = (((x305+x306)|x307)==x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x309 = -82871;
	static volatile int16_t x310 = INT16_MAX;
	int32_t x312 = INT32_MAX;

    t70 = (((x309+x310)|x311)==x312);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x313 = -94240480LL;
	uint32_t x314 = 746520U;
	int16_t x315 = 1566;
	int32_t x316 = INT32_MAX;

    t71 = (((x313+x314)|x315)==x316);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x317 = 1;
	volatile uint32_t x318 = 7099849U;
	int8_t x319 = INT8_MAX;
	uint16_t x320 = 43U;
	volatile int32_t t72 = 12656;

    t72 = (((x317+x318)|x319)==x320);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x321 = 0;
	int32_t x322 = INT32_MIN;
	static int8_t x323 = INT8_MIN;
	static uint32_t x324 = 4U;
	int32_t t73 = 9;

    t73 = (((x321+x322)|x323)==x324);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x325 = 13U;
	static uint16_t x327 = 0U;
	uint8_t x328 = 105U;

    t74 = (((x325+x326)|x327)==x328);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MIN;
	volatile int32_t x330 = -1;
	int64_t x331 = INT64_MIN;
	uint64_t x332 = 2325482612LLU;
	volatile int32_t t75 = 0;

    t75 = (((x329+x330)|x331)==x332);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x333 = 6085010LLU;
	int8_t x334 = INT8_MAX;
	volatile int32_t x335 = 260453;
	volatile int32_t t76 = 2679;

    t76 = (((x333+x334)|x335)==x336);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x337 = 2U;
	int32_t x338 = 10;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t77 = -484;

    t77 = (((x337+x338)|x339)==x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x341 = UINT64_MAX;
	static int16_t x344 = INT16_MIN;
	int32_t t78 = -111;

    t78 = (((x341+x342)|x343)==x344);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x349 = INT16_MIN;
	static int64_t x350 = -1LL;
	uint32_t x351 = 6871957U;
	int64_t x352 = INT64_MIN;
	volatile int32_t t79 = -4106819;

    t79 = (((x349+x350)|x351)==x352);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x357 = INT8_MIN;
	uint8_t x358 = 2U;
	int16_t x359 = -35;
	volatile int32_t x360 = INT32_MIN;
	int32_t t80 = 954498;

    t80 = (((x357+x358)|x359)==x360);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x361 = -27026LL;
	int8_t x362 = -1;
	int16_t x364 = INT16_MIN;

    t81 = (((x361+x362)|x363)==x364);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x365 = INT32_MAX;
	uint16_t x367 = UINT16_MAX;
	static int16_t x368 = INT16_MIN;
	static volatile int32_t t82 = 6197;

    t82 = (((x365+x366)|x367)==x368);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x369 = 31655680U;
	uint8_t x370 = 51U;
	static uint16_t x371 = 0U;
	int16_t x372 = INT16_MAX;
	int32_t t83 = -1232095;

    t83 = (((x369+x370)|x371)==x372);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = -1;
	int16_t x374 = 225;
	uint32_t x376 = UINT32_MAX;

    t84 = (((x373+x374)|x375)==x376);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x377 = 0U;
	static uint16_t x378 = 36U;
	uint16_t x379 = 6U;
	int64_t x380 = 2175332LL;
	int32_t t85 = 20016;

    t85 = (((x377+x378)|x379)==x380);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x381 = 15;
	volatile uint64_t x382 = 1881531798092LLU;
	uint16_t x383 = 48U;
	static int32_t t86 = -408351372;

    t86 = (((x381+x382)|x383)==x384);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x385 = -315027LL;
	uint32_t x386 = 15878858U;
	uint8_t x387 = 64U;
	int8_t x388 = -1;
	volatile int32_t t87 = -249133947;

    t87 = (((x385+x386)|x387)==x388);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x393 = UINT8_MAX;
	static int64_t x394 = INT64_MIN;
	volatile int16_t x395 = INT16_MAX;
	int8_t x396 = 1;

    t88 = (((x393+x394)|x395)==x396);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MAX;
	uint16_t x399 = 2U;
	int32_t t89 = -96366070;

    t89 = (((x397+x398)|x399)==x400);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = -45;
	int8_t x402 = INT8_MIN;
	int16_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t90 = -334;

    t90 = (((x401+x402)|x403)==x404);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x405 = 305899637;
	volatile uint16_t x408 = UINT16_MAX;

    t91 = (((x405+x406)|x407)==x408);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x409 = INT8_MIN;
	static uint64_t x410 = UINT64_MAX;
	int8_t x411 = 3;
	int32_t t92 = 5423;

    t92 = (((x409+x410)|x411)==x412);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x413 = 52296LL;
	int32_t x414 = INT32_MIN;
	uint16_t x416 = 0U;
	volatile int32_t t93 = 19;

    t93 = (((x413+x414)|x415)==x416);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = -30508628188LL;
	uint16_t x418 = 17844U;
	volatile int8_t x419 = -1;
	int64_t x420 = INT64_MIN;
	volatile int32_t t94 = 10;

    t94 = (((x417+x418)|x419)==x420);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x421 = 193U;
	int8_t x424 = INT8_MAX;

    t95 = (((x421+x422)|x423)==x424);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x425 = 76U;
	int8_t x426 = INT8_MAX;
	volatile int16_t x428 = INT16_MIN;
	int32_t t96 = -57;

    t96 = (((x425+x426)|x427)==x428);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x433 = 1;
	int16_t x434 = -1;
	int8_t x435 = INT8_MIN;
	uint64_t x436 = 1045431LLU;
	static int32_t t97 = -1056261;

    t97 = (((x433+x434)|x435)==x436);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x441 = INT64_MIN;
	int32_t x443 = INT32_MAX;
	volatile int32_t t98 = -6;

    t98 = (((x441+x442)|x443)==x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x445 = INT16_MAX;
	uint16_t x446 = 9984U;
	static int8_t x447 = 60;
	volatile int32_t t99 = 32;

    t99 = (((x445+x446)|x447)==x448);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int32_t x450 = 137;
	uint16_t x451 = UINT16_MAX;
	uint8_t x452 = 21U;

    t100 = (((x449+x450)|x451)==x452);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x453 = -1;
	uint64_t x454 = 109269699163226556LLU;
	int32_t x455 = -1;
	int32_t t101 = 1198822;

    t101 = (((x453+x454)|x455)==x456);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x458 = -1;
	static int32_t x459 = 4190878;
	int32_t t102 = -56;

    t102 = (((x457+x458)|x459)==x460);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x461 = -58456281424150494LL;
	int16_t x462 = -7;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MAX;
	int32_t t103 = -117063;

    t103 = (((x461+x462)|x463)==x464);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x469 = UINT64_MAX;
	int8_t x470 = 0;
	int32_t x471 = INT32_MAX;

    t104 = (((x469+x470)|x471)==x472);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x473 = 64U;
	int32_t x474 = -2;
	uint8_t x475 = 9U;
	int64_t x476 = -1LL;

    t105 = (((x473+x474)|x475)==x476);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x477 = -5;
	int32_t x478 = 1722853;
	uint16_t x479 = UINT16_MAX;
	int64_t x480 = -1LL;
	volatile int32_t t106 = -114341;

    t106 = (((x477+x478)|x479)==x480);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x482 = 154LLU;
	int32_t x483 = INT32_MAX;
	int64_t x484 = -181739164613LL;
	volatile int32_t t107 = -100098707;

    t107 = (((x481+x482)|x483)==x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint16_t x485 = 12U;
	int32_t x486 = INT32_MIN;
	int64_t x487 = -2195188001857LL;
	uint8_t x488 = UINT8_MAX;
	int32_t t108 = -82708496;

    t108 = (((x485+x486)|x487)==x488);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x489 = 3688479LLU;
	int32_t x490 = INT32_MIN;
	static uint64_t x491 = 2LLU;
	uint16_t x492 = 316U;
	volatile int32_t t109 = 28;

    t109 = (((x489+x490)|x491)==x492);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = -1;
	uint16_t x494 = UINT16_MAX;
	int64_t x495 = INT64_MIN;
	volatile uint32_t x496 = UINT32_MAX;
	int32_t t110 = 76113;

    t110 = (((x493+x494)|x495)==x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x497 = UINT16_MAX;
	int16_t x498 = -1;
	int64_t x499 = -413188587187LL;
	uint64_t x500 = 6679377732758872675LLU;

    t111 = (((x497+x498)|x499)==x500);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x502 = 7625400;
	int64_t x503 = INT64_MIN;
	static int32_t x504 = -12026;
	volatile int32_t t112 = 27;

    t112 = (((x501+x502)|x503)==x504);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x505 = INT16_MAX;
	static uint64_t x506 = 451249LLU;
	uint32_t x507 = UINT32_MAX;
	uint8_t x508 = UINT8_MAX;
	int32_t t113 = 3089;

    t113 = (((x505+x506)|x507)==x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x513 = -667;
	static int16_t x514 = -11;
	static int32_t x516 = 0;
	int32_t t114 = 21;

    t114 = (((x513+x514)|x515)==x516);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x517 = 12U;
	volatile int8_t x518 = -1;
	int64_t x519 = -1083383189571721LL;
	uint16_t x520 = UINT16_MAX;
	volatile int32_t t115 = -31712197;

    t115 = (((x517+x518)|x519)==x520);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = INT32_MAX;
	static int32_t x522 = -1;
	volatile uint16_t x523 = UINT16_MAX;
	volatile int32_t t116 = -1;

    t116 = (((x521+x522)|x523)==x524);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x525 = 1;
	int32_t x528 = INT32_MAX;
	volatile int32_t t117 = 285;

    t117 = (((x525+x526)|x527)==x528);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x529 = 504435LLU;
	uint16_t x530 = 2U;
	uint8_t x531 = 78U;
	static int32_t t118 = 117330;

    t118 = (((x529+x530)|x531)==x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x534 = INT16_MIN;
	int16_t x535 = INT16_MIN;
	static volatile int8_t x536 = INT8_MIN;
	int32_t t119 = -272558465;

    t119 = (((x533+x534)|x535)==x536);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x537 = 33;
	int8_t x538 = -1;

    t120 = (((x537+x538)|x539)==x540);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x541 = INT8_MIN;
	static uint8_t x542 = 2U;
	volatile uint16_t x543 = 2762U;
	uint64_t x544 = UINT64_MAX;

    t121 = (((x541+x542)|x543)==x544);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = INT16_MAX;
	static uint32_t x547 = 2708U;
	static int16_t x548 = -1;
	volatile int32_t t122 = -31440;

    t122 = (((x545+x546)|x547)==x548);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x549 = 7;
	uint16_t x550 = UINT16_MAX;
	static volatile int32_t t123 = 47853137;

    t123 = (((x549+x550)|x551)==x552);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x554 = INT64_MAX;
	int32_t t124 = -404329679;

    t124 = (((x553+x554)|x555)==x556);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x557 = INT8_MIN;
	static volatile uint32_t x558 = 72471U;
	static int32_t x559 = 15677;
	volatile uint8_t x560 = 45U;
	int32_t t125 = 43925156;

    t125 = (((x557+x558)|x559)==x560);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x561 = INT32_MAX;
	volatile int32_t x562 = -1432;
	uint8_t x563 = 0U;
	uint64_t x564 = 91755670LLU;
	static volatile int32_t t126 = -31788;

    t126 = (((x561+x562)|x563)==x564);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x565 = INT8_MIN;
	int16_t x566 = INT16_MAX;
	static uint64_t x567 = 211798370217LLU;
	int16_t x568 = -1;
	static volatile int32_t t127 = -757060;

    t127 = (((x565+x566)|x567)==x568);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x569 = 81U;
	uint16_t x570 = 1648U;
	int64_t x571 = -13LL;

    t128 = (((x569+x570)|x571)==x572);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t t129 = 5;

    t129 = (((x577+x578)|x579)==x580);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x581 = 5U;
	uint64_t x582 = 33222378LLU;
	int32_t x583 = INT32_MAX;
	uint8_t x584 = 0U;
	int32_t t130 = 2;

    t130 = (((x581+x582)|x583)==x584);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x589 = 8044017748LLU;
	int32_t x590 = -1;
	static volatile uint64_t x591 = 4811215583LLU;
	static int32_t x592 = 496796;

    t131 = (((x589+x590)|x591)==x592);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x593 = INT16_MIN;
	static volatile uint32_t x595 = 87981233U;
	int8_t x596 = INT8_MAX;
	int32_t t132 = 17267901;

    t132 = (((x593+x594)|x595)==x596);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x597 = 4505U;
	static int8_t x598 = INT8_MAX;
	int64_t x599 = -9LL;
	volatile int32_t t133 = -3;

    t133 = (((x597+x598)|x599)==x600);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x601 = 4651657;
	static uint32_t x602 = 14972536U;
	volatile int16_t x603 = INT16_MAX;
	int16_t x604 = 109;
	int32_t t134 = -214017338;

    t134 = (((x601+x602)|x603)==x604);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x605 = -1LL;
	static int32_t x606 = INT32_MAX;
	uint8_t x607 = 1U;
	int16_t x608 = -214;
	static volatile int32_t t135 = 499;

    t135 = (((x605+x606)|x607)==x608);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x609 = -1;
	static volatile int32_t x610 = 147;
	int64_t x611 = -1LL;
	uint16_t x612 = 1U;

    t136 = (((x609+x610)|x611)==x612);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x613 = UINT64_MAX;
	int64_t x614 = -1LL;
	uint64_t x616 = UINT64_MAX;

    t137 = (((x613+x614)|x615)==x616);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x629 = -57429;
	volatile int64_t x630 = 25916LL;
	volatile int8_t x631 = 1;
	volatile uint64_t x632 = 17327LLU;
	int32_t t138 = -1064966284;

    t138 = (((x629+x630)|x631)==x632);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x633 = 14039U;
	int32_t x634 = -1;
	volatile int8_t x636 = -1;
	static int32_t t139 = 520;

    t139 = (((x633+x634)|x635)==x636);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint32_t x638 = 5455U;
	int64_t x639 = -1LL;
	static int64_t x640 = INT64_MAX;
	volatile int32_t t140 = -620;

    t140 = (((x637+x638)|x639)==x640);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x641 = 2071987463LLU;
	volatile int16_t x642 = -1;
	volatile int8_t x643 = -13;
	int64_t x644 = -1LL;

    t141 = (((x641+x642)|x643)==x644);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x645 = INT8_MIN;
	static volatile uint16_t x647 = UINT16_MAX;
	uint16_t x648 = 5178U;
	volatile int32_t t142 = -152098;

    t142 = (((x645+x646)|x647)==x648);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = -105;
	uint32_t x650 = 7U;
	int32_t x651 = -1;
	int64_t x652 = -54LL;
	volatile int32_t t143 = 502894842;

    t143 = (((x649+x650)|x651)==x652);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x653 = 24971218049065422LLU;
	int16_t x654 = INT16_MIN;
	static int8_t x655 = 0;
	volatile int32_t t144 = 2426;

    t144 = (((x653+x654)|x655)==x656);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x658 = INT16_MIN;
	int64_t x659 = INT64_MIN;
	int64_t x660 = -470125555535LL;
	static int32_t t145 = 39;

    t145 = (((x657+x658)|x659)==x660);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x662 = 1745LLU;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = UINT16_MAX;

    t146 = (((x661+x662)|x663)==x664);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x665 = 14U;
	int64_t x668 = -76LL;
	int32_t t147 = 23185074;

    t147 = (((x665+x666)|x667)==x668);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x669 = INT16_MAX;
	uint32_t x670 = 77U;
	uint32_t x671 = 90U;
	volatile uint16_t x672 = 114U;
	volatile int32_t t148 = -981849429;

    t148 = (((x669+x670)|x671)==x672);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x673 = -4501;
	int32_t x674 = -663;
	static int32_t x675 = -172726373;
	int64_t x676 = INT64_MAX;
	static int32_t t149 = 352;

    t149 = (((x673+x674)|x675)==x676);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x677 = INT8_MIN;
	int8_t x678 = INT8_MAX;
	int64_t x679 = INT64_MIN;
	int64_t x680 = INT64_MIN;
	static volatile int32_t t150 = -61572821;

    t150 = (((x677+x678)|x679)==x680);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x681 = 110755115;
	int16_t x682 = -1;
	uint64_t x683 = UINT64_MAX;
	static int16_t x684 = INT16_MIN;
	int32_t t151 = 199544096;

    t151 = (((x681+x682)|x683)==x684);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x685 = 2839U;
	uint64_t x686 = UINT64_MAX;
	static uint8_t x688 = 30U;
	int32_t t152 = 2;

    t152 = (((x685+x686)|x687)==x688);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x689 = 32651LLU;
	int64_t x691 = -9681271123147075LL;
	static volatile int32_t t153 = -902;

    t153 = (((x689+x690)|x691)==x692);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x697 = -8;
	static int64_t x698 = -548116335956195LL;
	uint8_t x699 = 109U;
	int16_t x700 = -1;
	volatile int32_t t154 = -595055420;

    t154 = (((x697+x698)|x699)==x700);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x701 = UINT8_MAX;
	uint32_t x702 = 4110223U;
	uint8_t x704 = UINT8_MAX;
	int32_t t155 = 292;

    t155 = (((x701+x702)|x703)==x704);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x705 = 9U;
	static int8_t x706 = 1;
	uint8_t x707 = 25U;
	volatile uint32_t x708 = 3931178U;

    t156 = (((x705+x706)|x707)==x708);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x709 = 231900281;
	int32_t x710 = 15886853;
	volatile int16_t x711 = -81;
	int32_t x712 = 1;
	volatile int32_t t157 = -3;

    t157 = (((x709+x710)|x711)==x712);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x713 = INT32_MAX;
	int16_t x714 = INT16_MIN;
	int8_t x715 = INT8_MAX;
	static int32_t t158 = 114387884;

    t158 = (((x713+x714)|x715)==x716);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x717 = -1;
	static uint32_t x718 = 25U;
	uint16_t x720 = 2U;
	int32_t t159 = 147298073;

    t159 = (((x717+x718)|x719)==x720);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x721 = 11528LLU;
	static uint64_t x722 = 24641442057LLU;
	static int32_t x723 = INT32_MIN;
	int16_t x724 = INT16_MAX;
	static volatile int32_t t160 = -3;

    t160 = (((x721+x722)|x723)==x724);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x725 = INT32_MIN;
	uint16_t x726 = 2450U;
	volatile int16_t x728 = -1;

    t161 = (((x725+x726)|x727)==x728);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x729 = 3748U;
	uint32_t x730 = 87360223U;
	int32_t x731 = -5;
	volatile int16_t x732 = -5;

    t162 = (((x729+x730)|x731)==x732);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x733 = 7250979371699794LLU;
	volatile int32_t x734 = 615;
	static int64_t x735 = INT64_MAX;
	int32_t x736 = INT32_MAX;
	int32_t t163 = -19737385;

    t163 = (((x733+x734)|x735)==x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x742 = -399317601233565LL;
	int16_t x743 = INT16_MAX;
	int16_t x744 = 14787;
	volatile int32_t t164 = -810460;

    t164 = (((x741+x742)|x743)==x744);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x747 = 6085U;
	volatile int32_t t165 = 1;

    t165 = (((x745+x746)|x747)==x748);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x753 = -162832LL;
	volatile uint8_t x754 = UINT8_MAX;
	uint8_t x756 = UINT8_MAX;
	int32_t t166 = 245387;

    t166 = (((x753+x754)|x755)==x756);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x757 = -1LL;
	int16_t x758 = 45;
	static volatile int64_t x759 = -1LL;
	uint8_t x760 = 5U;
	volatile int32_t t167 = -196143706;

    t167 = (((x757+x758)|x759)==x760);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x761 = INT16_MIN;
	uint16_t x762 = UINT16_MAX;
	int64_t x763 = -1LL;
	int32_t x764 = 17882;
	volatile int32_t t168 = 29;

    t168 = (((x761+x762)|x763)==x764);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x766 = INT32_MIN;
	int32_t x767 = -1;
	volatile uint8_t x768 = UINT8_MAX;
	int32_t t169 = -824217;

    t169 = (((x765+x766)|x767)==x768);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x771 = INT64_MAX;
	int16_t x772 = INT16_MIN;
	static volatile int32_t t170 = 249;

    t170 = (((x769+x770)|x771)==x772);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x773 = INT16_MIN;
	int8_t x774 = -1;
	volatile int32_t t171 = -15;

    t171 = (((x773+x774)|x775)==x776);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x777 = 14370LLU;
	uint32_t x778 = UINT32_MAX;
	static int8_t x779 = INT8_MIN;
	volatile int32_t x780 = INT32_MAX;

    t172 = (((x777+x778)|x779)==x780);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x781 = -71158216;
	volatile int8_t x782 = INT8_MIN;
	uint8_t x783 = UINT8_MAX;
	int8_t x784 = -11;
	static int32_t t173 = -13;

    t173 = (((x781+x782)|x783)==x784);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x785 = -3600547830010LL;
	static int8_t x786 = -2;
	uint8_t x788 = 46U;
	int32_t t174 = 811485031;

    t174 = (((x785+x786)|x787)==x788);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x793 = INT64_MIN;
	int16_t x794 = 1;
	int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MAX;

    t175 = (((x793+x794)|x795)==x796);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x797 = UINT16_MAX;
	uint16_t x798 = UINT16_MAX;
	volatile int8_t x799 = INT8_MAX;
	static int64_t x800 = -2963623LL;

    t176 = (((x797+x798)|x799)==x800);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x806 = 3098LL;
	static uint64_t x808 = 1603383LLU;
	volatile int32_t t177 = -256;

    t177 = (((x805+x806)|x807)==x808);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x809 = UINT8_MAX;
	int32_t x810 = 6;
	int8_t x811 = INT8_MAX;
	int16_t x812 = INT16_MIN;
	int32_t t178 = -72578252;

    t178 = (((x809+x810)|x811)==x812);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x813 = -230LL;
	int8_t x814 = -1;
	int64_t x815 = INT64_MIN;
	static int8_t x816 = INT8_MIN;
	volatile int32_t t179 = 10;

    t179 = (((x813+x814)|x815)==x816);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x821 = INT8_MIN;
	static volatile int8_t x822 = 0;
	uint8_t x824 = 0U;
	int32_t t180 = 62;

    t180 = (((x821+x822)|x823)==x824);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x826 = INT64_MIN;
	static uint16_t x828 = 1814U;
	int32_t t181 = 102949739;

    t181 = (((x825+x826)|x827)==x828);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x834 = 15247867;
	static int16_t x835 = -6;
	uint64_t x836 = 464791706895846LLU;
	int32_t t182 = -16527;

    t182 = (((x833+x834)|x835)==x836);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x837 = INT8_MAX;
	static int32_t x838 = INT32_MIN;
	uint8_t x839 = UINT8_MAX;
	int32_t x840 = INT32_MIN;
	int32_t t183 = -7244561;

    t183 = (((x837+x838)|x839)==x840);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t t184 = -1364285;

    t184 = (((x841+x842)|x843)==x844);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x845 = INT32_MIN;
	volatile int64_t x846 = -60LL;
	int32_t x847 = 15192370;

    t185 = (((x845+x846)|x847)==x848);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x850 = INT8_MAX;
	volatile int64_t x851 = INT64_MAX;
	static int8_t x852 = -14;
	static volatile int32_t t186 = -882831;

    t186 = (((x849+x850)|x851)==x852);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x853 = 3U;
	int16_t x854 = 4793;
	int32_t x856 = -976030;
	volatile int32_t t187 = 54636;

    t187 = (((x853+x854)|x855)==x856);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x857 = INT8_MAX;
	volatile uint32_t x858 = UINT32_MAX;
	int32_t x859 = -1;
	int32_t x860 = INT32_MIN;
	int32_t t188 = 34690483;

    t188 = (((x857+x858)|x859)==x860);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x865 = 14U;
	static uint64_t x866 = 5057111395649LLU;
	int16_t x867 = INT16_MAX;
	int64_t x868 = 507297LL;
	volatile int32_t t189 = 1537222;

    t189 = (((x865+x866)|x867)==x868);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x869 = 1U;
	uint8_t x871 = UINT8_MAX;
	volatile uint64_t x872 = UINT64_MAX;
	int32_t t190 = 143;

    t190 = (((x869+x870)|x871)==x872);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x878 = UINT64_MAX;
	int8_t x880 = -1;
	int32_t t191 = 8297849;

    t191 = (((x877+x878)|x879)==x880);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x881 = -2;
	volatile int8_t x882 = INT8_MAX;
	int32_t x883 = 98414;
	static uint64_t x884 = 1116935LLU;

    t192 = (((x881+x882)|x883)==x884);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint8_t x885 = 1U;
	int32_t x886 = -1;
	uint8_t x887 = 76U;
	uint64_t x888 = UINT64_MAX;
	int32_t t193 = -325849;

    t193 = (((x885+x886)|x887)==x888);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x891 = INT32_MAX;
	uint8_t x892 = 111U;

    t194 = (((x889+x890)|x891)==x892);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x893 = INT32_MAX;
	int32_t x894 = INT32_MIN;
	int16_t x895 = INT16_MAX;
	volatile int16_t x896 = INT16_MIN;
	volatile int32_t t195 = -1031489016;

    t195 = (((x893+x894)|x895)==x896);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x897 = INT64_MIN;
	static uint64_t x898 = UINT64_MAX;
	int16_t x899 = -1;
	static volatile int32_t t196 = -6697909;

    t196 = (((x897+x898)|x899)==x900);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x901 = -5LL;
	volatile int16_t x903 = 1;
	int32_t x904 = -304126234;
	static volatile int32_t t197 = -475761;

    t197 = (((x901+x902)|x903)==x904);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x905 = INT8_MAX;
	static int8_t x906 = 0;
	int64_t x908 = 28717144598LL;
	static volatile int32_t t198 = 17095429;

    t198 = (((x905+x906)|x907)==x908);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x910 = 51436122221LLU;
	int64_t x912 = INT64_MAX;
	static int32_t t199 = 704197869;

    t199 = (((x909+x910)|x911)==x912);

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

