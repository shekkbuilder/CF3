#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MIN;
volatile int32_t t1 = -1042;
int32_t x11 = -2744381;
int16_t x18 = INT16_MIN;
int32_t t4 = -1943;
uint16_t x24 = UINT16_MAX;
static int8_t x36 = 1;
int32_t t8 = 5;
int32_t x37 = INT32_MIN;
static volatile int32_t t9 = 78;
int64_t x41 = -1LL;
int64_t x44 = -22804786228711096LL;
uint16_t x50 = UINT16_MAX;
int32_t t12 = 1631;
uint16_t x62 = 361U;
uint64_t x66 = UINT64_MAX;
int32_t t16 = -11823;
int64_t x69 = -10535859720LL;
int64_t x71 = -1LL;
volatile int16_t x75 = INT16_MAX;
volatile int32_t t20 = 1;
static int8_t x88 = INT8_MIN;
uint64_t x93 = 215460634LLU;
int32_t x102 = INT32_MIN;
int64_t x103 = -1LL;
int8_t x107 = 1;
volatile int16_t x117 = 89;
int64_t x120 = INT64_MIN;
volatile uint16_t x128 = 7U;
static int64_t x129 = -1LL;
volatile int32_t t32 = -32415392;
int16_t x133 = 421;
static volatile int8_t x134 = INT8_MAX;
volatile int16_t x135 = -1;
int8_t x137 = -7;
int16_t x139 = 0;
static int8_t x141 = INT8_MIN;
int8_t x145 = -1;
volatile int32_t t36 = -43196;
static int32_t t39 = 1;
int16_t x163 = INT16_MAX;
uint64_t x166 = UINT64_MAX;
uint16_t x172 = 14132U;
int64_t x177 = -1713457164LL;
volatile int64_t x178 = INT64_MAX;
int16_t x180 = -47;
int64_t x187 = 5837588429242LL;
int32_t t46 = 206183;
static int8_t x189 = -1;
volatile int64_t x191 = INT64_MIN;
volatile int32_t x196 = -21;
int64_t x197 = -1621619622765LL;
static int32_t x203 = INT32_MAX;
static uint32_t x204 = 629039U;
int8_t x213 = -1;
volatile uint64_t x225 = UINT64_MAX;
int32_t x229 = 3877;
uint64_t x231 = UINT64_MAX;
int16_t x234 = 1;
uint8_t x237 = UINT8_MAX;
int32_t x243 = INT32_MIN;
int8_t x244 = -1;
static int32_t t61 = -2288193;
uint64_t x258 = UINT64_MAX;
int8_t x260 = -1;
volatile uint32_t x277 = 503709423U;
uint8_t x281 = UINT8_MAX;
uint32_t x283 = 330U;
volatile int32_t x284 = -4536;
int16_t x285 = 0;
volatile int32_t x289 = -481273809;
int32_t x290 = INT32_MIN;
static int8_t x295 = INT8_MIN;
int16_t x296 = INT16_MIN;
static int64_t x297 = -1681885LL;
static int8_t x306 = INT8_MAX;
static int8_t x311 = 1;
static volatile int32_t t78 = 0;
int8_t x317 = INT8_MAX;
int8_t x318 = INT8_MAX;
int8_t x320 = INT8_MAX;
volatile int32_t t79 = 2281119;
static uint32_t x325 = 1154828U;
int64_t x328 = -255599LL;
int64_t x332 = -1LL;
int64_t x338 = 3110888119LL;
uint64_t x344 = 3563160596276LLU;
uint8_t x347 = 7U;
int64_t x354 = INT64_MIN;
int64_t x355 = INT64_MIN;
int32_t t89 = 129725371;
int16_t x364 = -1762;
uint8_t x368 = 0U;
volatile int32_t x372 = -1068534;
int32_t t93 = -10;
int32_t x383 = INT32_MIN;
volatile int32_t t97 = 2970;
volatile int16_t x394 = INT16_MIN;
uint8_t x399 = UINT8_MAX;
volatile int32_t t99 = -75804703;


void f0(void) {
	int32_t x1 = -3068;
	int8_t x2 = 1;
	uint64_t x3 = UINT64_MAX;
	volatile int32_t t0 = 1564951;

	t0 = ((x1==x2)>>(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 7163;
	static volatile uint32_t x6 = UINT32_MAX;
	static int8_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = ((x5==x6)>>(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int32_t x10 = INT32_MIN;
	uint16_t x12 = 4U;
	int32_t t2 = -2861;

	t2 = ((x9==x10)>>(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 545421;
	int64_t x14 = -1LL;
	uint64_t x15 = 1LLU;
	int8_t x16 = INT8_MAX;
	static int32_t t3 = 201590560;

	t3 = ((x13==x14)>>(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	static uint8_t x19 = 61U;
	int8_t x20 = -1;

	t4 = ((x17==x18)>>(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = 1065;
	int64_t x22 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	int32_t t5 = -6104183;

	t5 = ((x21==x22)>>(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 938496190LL;
	int32_t x26 = 1;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 51U;
	volatile int32_t t6 = -860;

	t6 = ((x25==x26)>>(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 322687348823293LLU;
	static volatile int16_t x30 = -1;
	static uint16_t x31 = 545U;
	static int32_t x32 = -1;
	int32_t t7 = 0;

	t7 = ((x29==x30)>>(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	volatile int64_t x34 = INT64_MIN;
	static uint8_t x35 = 116U;

	t8 = ((x33==x34)>>(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	static uint32_t x39 = 41706208U;
	uint64_t x40 = 40LLU;

	t9 = ((x37==x38)>>(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = UINT32_MAX;
	volatile uint16_t x43 = 7241U;
	volatile int32_t t10 = 19316;

	t10 = ((x41==x42)>>(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = 4U;
	uint8_t x46 = 1U;
	volatile int64_t x47 = -473518724308748113LL;
	static volatile int16_t x48 = -491;
	volatile int32_t t11 = -533201557;

	t11 = ((x45==x46)>>(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 61929850U;
	uint64_t x51 = 67078840152LLU;
	volatile int16_t x52 = INT16_MAX;

	t12 = ((x49==x50)>>(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = 3LL;
	static uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MIN;
	static int64_t x56 = INT64_MIN;
	int32_t t13 = 596;

	t13 = ((x53==x54)>>(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -1;
	int8_t x58 = 1;
	uint64_t x59 = 815257488324LLU;
	int16_t x60 = 608;
	volatile int32_t t14 = -15628;

	t14 = ((x57==x58)>>(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 1133673585405046544LLU;
	static volatile int8_t x63 = INT8_MAX;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -15533;

	t15 = ((x61==x62)>>(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 240296901;
	uint32_t x67 = 388U;
	int8_t x68 = -1;

	t16 = ((x65==x66)>>(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 3642U;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 1;

	t17 = ((x69==x70)>>(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MIN;
	uint64_t x74 = UINT64_MAX;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = 504;

	t18 = ((x73==x74)>>(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 4;
	static volatile uint64_t x78 = 4525148109388347501LLU;
	static int64_t x79 = -1LL;
	int32_t x80 = -1;
	volatile int32_t t19 = 2027646;

	t19 = ((x77==x78)>>(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 6787893671199LLU;
	uint16_t x82 = 3819U;
	int32_t x83 = -136290928;
	uint16_t x84 = 1U;

	t20 = ((x81==x82)>>(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	uint8_t x86 = 18U;
	int16_t x87 = INT16_MIN;
	volatile int32_t t21 = -982287605;

	t21 = ((x85==x86)>>(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MAX;
	int16_t x92 = -1;
	static volatile int32_t t22 = -6389114;

	t22 = ((x89==x90)>>(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x94 = 4LLU;
	int64_t x95 = -1LL;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t23 = 13231;

	t23 = ((x93==x94)>>(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	static int64_t x98 = -1LL;
	volatile int64_t x99 = 352797LL;
	uint64_t x100 = 1644023145LLU;
	int32_t t24 = -12451;

	t24 = ((x97==x98)>>(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = -6;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 27382894;

	t25 = ((x101==x102)>>(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -835LL;
	volatile int64_t x106 = INT64_MAX;
	static volatile uint64_t x108 = 205974631LLU;
	volatile int32_t t26 = -3818;

	t26 = ((x105==x106)>>(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -3066427589LL;
	int16_t x110 = INT16_MAX;
	uint32_t x111 = 100U;
	int8_t x112 = -23;
	volatile int32_t t27 = 32327;

	t27 = ((x109==x110)>>(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = -1;
	int64_t x115 = 19666197483756705LL;
	static volatile uint16_t x116 = 105U;
	volatile int32_t t28 = -247312;

	t28 = ((x113==x114)>>(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -2344;
	int16_t x119 = INT16_MIN;
	static int32_t t29 = 0;

	t29 = ((x117==x118)>>(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = 158U;
	int64_t x122 = -1LL;
	int64_t x123 = 1009222029910LL;
	int64_t x124 = INT64_MAX;
	int32_t t30 = -1324;

	t30 = ((x121==x122)>>(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MAX;
	static int32_t t31 = -212;

	t31 = ((x125==x126)>>(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	static int64_t x132 = INT64_MAX;

	t32 = ((x129==x130)>>(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x136 = -1;
	int32_t t33 = 20350706;

	t33 = ((x133==x134)>>(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = -16;
	static int64_t x140 = INT64_MIN;
	volatile int32_t t34 = 11600328;

	t34 = ((x137==x138)>>(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 17U;
	int32_t x143 = -142;
	static int8_t x144 = -1;
	int32_t t35 = -2694;

	t35 = ((x141==x142)>>(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MAX;
	uint32_t x147 = 2803324U;
	int64_t x148 = -1LL;

	t36 = ((x145==x146)>>(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -29;
	static uint8_t x150 = UINT8_MAX;
	int16_t x151 = 4;
	static volatile int16_t x152 = -1;
	volatile int32_t t37 = -1215;

	t37 = ((x149==x150)>>(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -1LL;
	static int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MIN;
	uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = 24517;

	t38 = ((x153==x154)>>(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -5;
	static uint32_t x158 = UINT32_MAX;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t x160 = 2145315259LL;

	t39 = ((x157==x158)>>(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -7546307946552843LL;
	int16_t x162 = INT16_MIN;
	int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -49687;

	t40 = ((x161==x162)>>(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MAX;
	int64_t x167 = -37640LL;
	int64_t x168 = 89120LL;
	volatile int32_t t41 = 195038871;

	t41 = ((x165==x166)>>(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = 11006987LL;
	int8_t x170 = 0;
	uint64_t x171 = 9360029536450378LLU;
	volatile int32_t t42 = -1739601;

	t42 = ((x169==x170)>>(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = 44LL;
	int8_t x175 = -1;
	uint16_t x176 = 1437U;
	volatile int32_t t43 = 19279344;

	t43 = ((x173==x174)>>(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x179 = INT64_MIN;
	volatile int32_t t44 = 0;

	t44 = ((x177==x178)>>(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = 243;
	volatile int64_t x182 = 170138155473809219LL;
	uint64_t x183 = 38408056394899LLU;
	uint32_t x184 = 1U;
	int32_t t45 = -2031;

	t45 = ((x181==x182)>>(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -1;
	volatile int64_t x186 = INT64_MIN;
	static uint8_t x188 = UINT8_MAX;

	t46 = ((x185==x186)>>(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 1002U;
	uint32_t x192 = UINT32_MAX;
	int32_t t47 = 28185170;

	t47 = ((x189==x190)>>(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int64_t x194 = 2348LL;
	int8_t x195 = -1;
	static volatile int32_t t48 = 71470141;

	t48 = ((x193==x194)>>(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = 56LL;
	int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MAX;
	volatile int32_t t49 = -3941001;

	t49 = ((x197==x198)>>(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -331012LL;
	int32_t x202 = -1;
	volatile int32_t t50 = -2;

	t50 = ((x201==x202)>>(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 0;
	int64_t x206 = INT64_MAX;
	uint64_t x207 = UINT64_MAX;
	int64_t x208 = -1LL;
	volatile int32_t t51 = -3;

	t51 = ((x205==x206)>>(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = -1;
	int32_t x210 = 31553724;
	volatile int8_t x211 = -51;
	int16_t x212 = INT16_MIN;
	int32_t t52 = -5;

	t52 = ((x209==x210)>>(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x214 = 15LLU;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 931;

	t53 = ((x213==x214)>>(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 0;
	volatile uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	static int16_t x220 = 11693;
	int32_t t54 = 27758;

	t54 = ((x217==x218)>>(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x222 = 39407617253535LLU;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 59;

	t55 = ((x221==x222)>>(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x226 = -1LL;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = 11;
	int32_t t56 = 1;

	t56 = ((x225==x226)>>(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = UINT32_MAX;
	static volatile uint64_t x232 = UINT64_MAX;
	volatile int32_t t57 = 50809723;

	t57 = ((x229==x230)>>(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 5415762;
	int8_t x235 = 1;
	int16_t x236 = 3263;
	int32_t t58 = 1014981488;

	t58 = ((x233==x234)>>(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 123U;
	int8_t x239 = 35;
	uint64_t x240 = 2948545149448LLU;
	static volatile int32_t t59 = 17;

	t59 = ((x237==x238)>>(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -32;
	int8_t x242 = -1;
	int32_t t60 = -1;

	t60 = ((x241==x242)>>(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 1248U;
	int64_t x246 = 461262424232275LL;
	uint32_t x247 = 573844100U;
	volatile uint64_t x248 = 2636LLU;

	t61 = ((x245==x246)>>(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -288;
	uint16_t x250 = 1856U;
	static int16_t x251 = INT16_MIN;
	static int32_t x252 = INT32_MAX;
	volatile int32_t t62 = 39;

	t62 = ((x249==x250)>>(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	volatile int16_t x254 = INT16_MAX;
	int8_t x255 = -1;
	static int64_t x256 = -169190555591057LL;
	volatile int32_t t63 = 2;

	t63 = ((x253==x254)>>(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	static volatile int8_t x259 = -1;
	volatile int32_t t64 = -827268957;

	t64 = ((x257==x258)>>(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = INT32_MAX;
	int64_t x262 = 18504793238334LL;
	static volatile uint8_t x263 = UINT8_MAX;
	uint64_t x264 = 1762258776LLU;
	volatile int32_t t65 = -16688220;

	t65 = ((x261==x262)>>(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 21U;
	int32_t x266 = -1;
	static volatile int8_t x267 = -21;
	int32_t x268 = 34200784;
	static volatile int32_t t66 = 3705;

	t66 = ((x265==x266)>>(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = INT64_MAX;
	int8_t x270 = -4;
	volatile uint8_t x271 = 8U;
	static uint64_t x272 = UINT64_MAX;
	int32_t t67 = 2581;

	t67 = ((x269==x270)>>(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	uint16_t x274 = UINT16_MAX;
	int32_t x275 = -6398892;
	static uint64_t x276 = UINT64_MAX;
	volatile int32_t t68 = 918316;

	t68 = ((x273==x274)>>(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x278 = INT16_MIN;
	static int8_t x279 = 0;
	int8_t x280 = INT8_MIN;
	int32_t t69 = 321981;

	t69 = ((x277==x278)>>(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 14U;
	int32_t t70 = 168729;

	t70 = ((x281==x282)>>(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = 506LL;
	static int32_t x287 = -9212761;
	int8_t x288 = -18;
	static volatile int32_t t71 = -52046;

	t71 = ((x285==x286)>>(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x291 = -1LL;
	static uint8_t x292 = 74U;
	int32_t t72 = 929742;

	t72 = ((x289==x290)>>(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	volatile int32_t t73 = -941;

	t73 = ((x293==x294)>>(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x298 = 86U;
	int16_t x299 = -1;
	uint64_t x300 = 2LLU;
	int32_t t74 = 74;

	t74 = ((x297==x298)>>(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = 437;
	int8_t x303 = 0;
	uint32_t x304 = 35666U;
	int32_t t75 = -60047214;

	t75 = ((x301==x302)>>(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x307 = 0;
	int16_t x308 = -9;
	volatile int32_t t76 = 916643;

	t76 = ((x305==x306)>>(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 777312U;
	volatile uint16_t x310 = 0U;
	volatile uint16_t x312 = 118U;
	static volatile int32_t t77 = -5275126;

	t77 = ((x309==x310)>>(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MAX;
	uint8_t x315 = 8U;
	uint64_t x316 = 16532383760LLU;

	t78 = ((x313==x314)>>(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = -4212943772LL;

	t79 = ((x317==x318)>>(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -576747521;
	volatile uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	int8_t x324 = -1;
	int32_t t80 = 47700632;

	t80 = ((x321==x322)>>(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x326 = UINT32_MAX;
	static uint8_t x327 = UINT8_MAX;
	static volatile int32_t t81 = 11800;

	t81 = ((x325==x326)>>(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 14871U;
	volatile uint64_t x330 = 8064097951LLU;
	static volatile uint64_t x331 = 141973295313684167LLU;
	int32_t t82 = -15212708;

	t82 = ((x329==x330)>>(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = 88U;
	static int64_t x334 = INT64_MIN;
	int16_t x335 = INT16_MAX;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t83 = -20216;

	t83 = ((x333==x334)>>(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = 0;
	int32_t x339 = -146684903;
	int64_t x340 = INT64_MIN;
	volatile int32_t t84 = -460634458;

	t84 = ((x337==x338)>>(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x341 = UINT16_MAX;
	uint32_t x342 = 5U;
	int16_t x343 = INT16_MAX;
	volatile int32_t t85 = 945;

	t85 = ((x341==x342)>>(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2581217947135267320LLU;
	uint8_t x346 = 51U;
	uint64_t x348 = 0LLU;
	volatile int32_t t86 = 3465799;

	t86 = ((x345==x346)>>(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	int8_t x352 = -2;
	volatile int32_t t87 = -6183634;

	t87 = ((x349==x350)>>(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	volatile uint8_t x356 = UINT8_MAX;
	volatile int32_t t88 = -1;

	t88 = ((x353==x354)>>(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = 1;
	int8_t x359 = INT8_MIN;
	static int16_t x360 = -1;

	t89 = ((x357==x358)>>(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = INT8_MIN;
	int32_t t90 = 2;

	t90 = ((x361==x362)>>(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = INT16_MAX;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MIN;
	int32_t t91 = -7;

	t91 = ((x365==x366)>>(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -2;
	volatile int32_t t92 = 64791;

	t92 = ((x369==x370)>>(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	uint8_t x376 = 38U;

	t93 = ((x373==x374)>>(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -1;
	static int64_t x379 = 2523008687860LL;
	int16_t x380 = 67;
	volatile int32_t t94 = -184262;

	t94 = ((x377==x378)>>(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = -1452;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 6;

	t95 = ((x381==x382)>>(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	volatile int32_t x386 = 8;
	int16_t x387 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	static int32_t t96 = -45801606;

	t96 = ((x385==x386)>>(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	static uint32_t x390 = 249U;
	int32_t x391 = -1;
	int16_t x392 = 204;

	t97 = ((x389==x390)>>(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 9U;
	int64_t x395 = -449330325053153221LL;
	volatile int64_t x396 = -1LL;
	volatile int32_t t98 = -4049557;

	t98 = ((x393==x394)>>(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	uint16_t x398 = 61U;
	static int16_t x400 = -1;

	t99 = ((x397==x398)>>(x399<=x400));

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
