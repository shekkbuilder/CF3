#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 984123212;
int8_t x12 = 0;
int64_t x13 = -51LL;
int32_t t3 = -2287590;
volatile int32_t x27 = -1;
int64_t x29 = INT64_MIN;
volatile int64_t x30 = INT64_MIN;
uint64_t x32 = 12042521066080883LLU;
static uint64_t x33 = UINT64_MAX;
static int32_t t8 = -1610;
volatile uint32_t x37 = 2313847U;
int16_t x40 = -16;
volatile int32_t t9 = -85287;
volatile int32_t t10 = 664;
uint64_t x47 = 0LLU;
static uint64_t x50 = 33513995720LLU;
volatile uint32_t x52 = 47403048U;
volatile uint8_t x55 = 26U;
volatile int32_t t14 = -145695561;
static int8_t x63 = INT8_MIN;
int8_t x64 = INT8_MIN;
static uint32_t x72 = 1720048U;
volatile int32_t t18 = -1857959;
volatile int32_t x78 = INT32_MIN;
int32_t t21 = 7195417;
volatile uint32_t x94 = UINT32_MAX;
uint16_t x103 = 5U;
int32_t t24 = 664855352;
volatile int8_t x112 = 1;
uint64_t x114 = 1921LLU;
uint64_t x115 = UINT64_MAX;
volatile int64_t x116 = -9839205266102862LL;
volatile uint32_t x119 = 0U;
volatile int16_t x123 = INT16_MAX;
volatile int32_t t33 = 0;
int64_t x151 = -351559410LL;
int32_t x153 = 555819;
static int16_t x159 = 1;
volatile int64_t x162 = INT64_MIN;
int64_t x167 = -1LL;
int64_t x168 = INT64_MIN;
volatile int32_t t40 = -62715400;
uint64_t x173 = 1533783666427405866LLU;
int8_t x175 = 0;
volatile int32_t t43 = 7;
int8_t x181 = 1;
uint8_t x183 = 63U;
int32_t t44 = 1376;
static int8_t x189 = INT8_MIN;
volatile int32_t t48 = 2;
uint8_t x206 = 56U;
uint8_t x211 = 43U;
uint32_t x213 = 121766867U;
volatile int32_t t52 = -413281;
int32_t x219 = INT32_MIN;
int32_t t53 = -115912;
int64_t x227 = 1137548782607705552LL;
uint32_t x235 = 159183U;
int32_t t57 = -1;
uint64_t x238 = 1569LLU;
uint16_t x240 = UINT16_MAX;
int32_t t58 = -5138732;
int64_t x244 = -485102816103LL;
uint16_t x247 = UINT16_MAX;
volatile int16_t x248 = INT16_MIN;
int64_t x250 = 15946879991969LL;
static int32_t x254 = INT32_MIN;
volatile int32_t t62 = 616506786;
int64_t x270 = INT64_MIN;
int64_t x274 = INT64_MIN;
static uint8_t x278 = 124U;
int8_t x279 = 2;
volatile int8_t x283 = INT8_MIN;
uint16_t x295 = 28U;
static volatile int32_t x296 = INT32_MIN;
int8_t x300 = -1;
static uint8_t x303 = 11U;
volatile int32_t t74 = 131789;
static int32_t x305 = -1901131;
uint32_t x311 = UINT32_MAX;
static volatile int32_t t76 = -394490;
int32_t x319 = INT32_MIN;
static uint16_t x321 = UINT16_MAX;
int32_t x328 = INT32_MAX;
static int64_t x335 = INT64_MIN;
int32_t x338 = -1;
volatile int32_t t84 = 4;
int32_t t85 = 163;
volatile int32_t t87 = 8134491;
int64_t x358 = -2776829067960LL;
static int16_t x359 = INT16_MIN;
static volatile int32_t t88 = -14859506;
volatile int8_t x362 = -7;
static volatile int32_t x364 = INT32_MAX;
volatile int32_t t89 = -31156600;
uint64_t x365 = 118LLU;
uint8_t x372 = 0U;
static int32_t x374 = INT32_MIN;
int32_t x376 = INT32_MIN;
int16_t x382 = INT16_MAX;
static int16_t x385 = -1;
volatile int32_t t95 = -1;
static uint16_t x393 = 376U;
volatile int8_t x394 = INT8_MAX;
static volatile int8_t x396 = INT8_MAX;
int16_t x398 = INT16_MIN;
int64_t x404 = -446900595837348095LL;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = 1U;
	uint8_t x4 = 14U;
	volatile int32_t t0 = -25;

	t0 = ((x1%x2)==(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint64_t x6 = 129017726406577LLU;
	static int8_t x7 = -1;
	static int32_t x8 = INT32_MAX;
	int32_t t1 = 115576;

	t1 = ((x5%x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	static int32_t x10 = INT32_MIN;
	uint16_t x11 = UINT16_MAX;
	volatile int32_t t2 = -1;

	t2 = ((x9%x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = 39106;

	t3 = ((x13%x14)==(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	uint8_t x20 = 37U;
	int32_t t4 = 4188024;

	t4 = ((x17%x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -276474427;

	t5 = ((x21%x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 31U;
	int64_t x26 = -1LL;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -81;

	t6 = ((x25%x26)==(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = 2U;
	static volatile int32_t t7 = -12181474;

	t7 = ((x29%x30)==(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	static uint8_t x35 = 82U;
	static volatile int64_t x36 = INT64_MIN;

	t8 = ((x33%x34)==(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	int32_t x39 = -1;

	t9 = ((x37%x38)==(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 3;
	uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;

	t10 = ((x41%x42)==(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int16_t x46 = INT16_MIN;
	uint8_t x48 = 1U;
	int32_t t11 = -29165;

	t11 = ((x45%x46)==(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 926U;
	uint32_t x51 = 0U;
	int32_t t12 = -19714;

	t12 = ((x49%x50)==(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -107;
	uint64_t x54 = 227252426LLU;
	int16_t x56 = INT16_MIN;
	int32_t t13 = 7989;

	t13 = ((x53%x54)==(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint16_t x58 = UINT16_MAX;
	uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MIN;

	t14 = ((x57%x58)==(x59<=x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	int32_t x62 = -1;
	int32_t t15 = -4515;

	t15 = ((x61%x62)==(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -243;
	int64_t x66 = INT64_MIN;
	volatile int64_t x67 = 173566435121409LL;
	static volatile int64_t x68 = INT64_MAX;
	volatile int32_t t16 = -3;

	t16 = ((x65%x66)==(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 35;
	volatile int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MIN;
	int32_t t17 = 1;

	t17 = ((x69%x70)==(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	int64_t x74 = -1LL;
	int16_t x75 = -251;
	int64_t x76 = 157195435LL;

	t18 = ((x73%x74)==(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -363LL;
	static int32_t t19 = 206;

	t19 = ((x77%x78)==(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	static int8_t x86 = -17;
	volatile uint64_t x87 = 905446268352LLU;
	static int64_t x88 = -1LL;
	volatile int32_t t20 = -64190574;

	t20 = ((x85%x86)==(x87<=x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	uint8_t x90 = 1U;
	int64_t x91 = -937695656220LL;
	int64_t x92 = 0LL;

	t21 = ((x89%x90)==(x91<=x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x95 = 53U;
	int8_t x96 = -1;
	int32_t t22 = 11;

	t22 = ((x93%x94)==(x95<=x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = INT16_MIN;
	static volatile int16_t x98 = -1;
	uint8_t x99 = 1U;
	static uint8_t x100 = UINT8_MAX;
	int32_t t23 = 117508301;

	t23 = ((x97%x98)==(x99<=x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 13298U;
	volatile int32_t x102 = INT32_MIN;
	int8_t x104 = 12;

	t24 = ((x101%x102)==(x103<=x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 181;
	static int8_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t25 = 54;

	t25 = ((x105%x106)==(x107<=x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x109 = 15626828;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 2019997960LLU;
	volatile int32_t t26 = -27485;

	t26 = ((x109%x110)==(x111<=x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	static int32_t t27 = -16253105;

	t27 = ((x113%x114)==(x115<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x117 = UINT8_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile int32_t x120 = INT32_MAX;
	volatile int32_t t28 = 24;

	t28 = ((x117%x118)==(x119<=x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	volatile int32_t t29 = -1359;

	t29 = ((x121%x122)==(x123<=x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 23U;
	int16_t x126 = -1;
	volatile int32_t x127 = INT32_MAX;
	int8_t x128 = 30;
	volatile int32_t t30 = 38915;

	t30 = ((x125%x126)==(x127<=x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 10U;
	int64_t x130 = INT64_MIN;
	uint8_t x131 = 41U;
	int16_t x132 = INT16_MIN;
	volatile int32_t t31 = -406996153;

	t31 = ((x129%x130)==(x131<=x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	uint8_t x135 = 0U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = 144772544;

	t32 = ((x133%x134)==(x135<=x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x137 = 3837910130LLU;
	int32_t x138 = 526798642;
	static int16_t x139 = INT16_MAX;
	uint32_t x140 = 53790U;

	t33 = ((x137%x138)==(x139<=x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = 61U;
	int8_t x143 = INT8_MIN;
	static int16_t x144 = -1;
	int32_t t34 = -1;

	t34 = ((x141%x142)==(x143<=x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	static int32_t x146 = INT32_MIN;
	uint32_t x147 = 1U;
	int16_t x148 = 238;
	volatile int32_t t35 = 2935;

	t35 = ((x145%x146)==(x147<=x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	volatile int32_t x150 = 1042668885;
	int16_t x152 = INT16_MIN;
	int32_t t36 = -2197955;

	t36 = ((x149%x150)==(x151<=x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MAX;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t37 = -97345;

	t37 = ((x153%x154)==(x155<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -119117586033731656LL;
	static uint8_t x158 = 2U;
	static int16_t x160 = -3173;
	int32_t t38 = 20336;

	t38 = ((x157%x158)==(x159<=x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = 5;
	int32_t x163 = INT32_MIN;
	uint8_t x164 = 3U;
	int32_t t39 = 445757;

	t39 = ((x161%x162)==(x163<=x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 33420264U;
	int64_t x166 = INT64_MIN;

	t40 = ((x165%x166)==(x167<=x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MAX;
	int32_t x170 = -1;
	int64_t x171 = INT64_MIN;
	int16_t x172 = -1;
	int32_t t41 = 0;

	t41 = ((x169%x170)==(x171<=x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MIN;
	static int64_t x176 = INT64_MIN;
	int32_t t42 = -90;

	t42 = ((x173%x174)==(x175<=x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	volatile int16_t x178 = INT16_MAX;
	uint32_t x179 = UINT32_MAX;
	static int32_t x180 = -3;

	t43 = ((x177%x178)==(x179<=x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = INT16_MIN;
	int32_t x184 = INT32_MAX;

	t44 = ((x181%x182)==(x183<=x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = -1LL;
	int8_t x186 = 6;
	static int16_t x187 = INT16_MIN;
	int16_t x188 = 7;
	int32_t t45 = 19601;

	t45 = ((x185%x186)==(x187<=x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x190 = UINT16_MAX;
	static int64_t x191 = 255955141LL;
	int16_t x192 = 158;
	volatile int32_t t46 = -188;

	t46 = ((x189%x190)==(x191<=x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = UINT16_MAX;
	static int16_t x194 = 216;
	int64_t x195 = 357LL;
	volatile int16_t x196 = 72;
	int32_t t47 = -6;

	t47 = ((x193%x194)==(x195<=x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 24433;
	static uint8_t x198 = 44U;
	int16_t x199 = INT16_MIN;
	int8_t x200 = 1;

	t48 = ((x197%x198)==(x199<=x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 1385095376LLU;
	int8_t x202 = 1;
	int64_t x203 = INT64_MAX;
	static uint32_t x204 = 116831962U;
	volatile int32_t t49 = -90545013;

	t49 = ((x201%x202)==(x203<=x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x207 = -1;
	uint32_t x208 = 4665U;
	int32_t t50 = -41;

	t50 = ((x205%x206)==(x207<=x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x209 = 58U;
	uint8_t x210 = 2U;
	uint32_t x212 = UINT32_MAX;
	static int32_t t51 = -217668;

	t51 = ((x209%x210)==(x211<=x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x214 = INT8_MIN;
	uint64_t x215 = 4570385181133249271LLU;
	volatile int64_t x216 = -1LL;

	t52 = ((x213%x214)==(x215<=x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	static int32_t x218 = INT32_MIN;
	int16_t x220 = -3995;

	t53 = ((x217%x218)==(x219<=x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x221 = 206U;
	int32_t x222 = INT32_MIN;
	int64_t x223 = -69615LL;
	static int64_t x224 = -898921565471841299LL;
	volatile int32_t t54 = 92811732;

	t54 = ((x221%x222)==(x223<=x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x225 = 12951328LLU;
	static uint8_t x226 = 53U;
	int32_t x228 = INT32_MIN;
	int32_t t55 = -4782;

	t55 = ((x225%x226)==(x227<=x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x229 = 69794798U;
	int16_t x230 = -1;
	int32_t x231 = -1;
	int64_t x232 = INT64_MAX;
	static int32_t t56 = 388837;

	t56 = ((x229%x230)==(x231<=x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MAX;
	static int16_t x234 = INT16_MIN;
	static uint32_t x236 = UINT32_MAX;

	t57 = ((x233%x234)==(x235<=x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = -1LL;
	uint64_t x239 = UINT64_MAX;

	t58 = ((x237%x238)==(x239<=x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	static uint8_t x242 = 30U;
	int64_t x243 = -167752817017529391LL;
	int32_t t59 = -22880;

	t59 = ((x241%x242)==(x243<=x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = -1;
	static int8_t x246 = INT8_MIN;
	volatile int32_t t60 = -803070062;

	t60 = ((x245%x246)==(x247<=x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x249 = -9292966LL;
	static int8_t x251 = -1;
	static int64_t x252 = INT64_MIN;
	int32_t t61 = 0;

	t61 = ((x249%x250)==(x251<=x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 68U;
	int64_t x255 = -1LL;
	int32_t x256 = INT32_MAX;

	t62 = ((x253%x254)==(x255<=x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x257 = 167779U;
	int64_t x258 = INT64_MIN;
	int16_t x259 = -1;
	static int16_t x260 = -703;
	volatile int32_t t63 = -1;

	t63 = ((x257%x258)==(x259<=x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	volatile int16_t x262 = -25;
	int8_t x263 = INT8_MAX;
	volatile int32_t x264 = INT32_MIN;
	static volatile int32_t t64 = -1787;

	t64 = ((x261%x262)==(x263<=x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = 10739239LLU;
	uint16_t x266 = UINT16_MAX;
	int8_t x267 = INT8_MIN;
	uint16_t x268 = 1U;
	int32_t t65 = -31765;

	t65 = ((x265%x266)==(x267<=x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -569156413;
	volatile int64_t x271 = INT64_MIN;
	uint8_t x272 = UINT8_MAX;
	int32_t t66 = -279561;

	t66 = ((x269%x270)==(x271<=x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	static int32_t x275 = INT32_MIN;
	static uint32_t x276 = UINT32_MAX;
	static volatile int32_t t67 = -53862;

	t67 = ((x273%x274)==(x275<=x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x277 = -4LL;
	int64_t x280 = INT64_MIN;
	volatile int32_t t68 = 765025431;

	t68 = ((x277%x278)==(x279<=x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x281 = 59U;
	uint64_t x282 = UINT64_MAX;
	uint64_t x284 = 55043439338LLU;
	int32_t t69 = 3077;

	t69 = ((x281%x282)==(x283<=x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	static int64_t x287 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	static int32_t t70 = -232092098;

	t70 = ((x285%x286)==(x287<=x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = 112U;
	int32_t x292 = INT32_MAX;
	volatile int32_t t71 = 837;

	t71 = ((x289%x290)==(x291<=x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x293 = INT32_MIN;
	int8_t x294 = -26;
	static int32_t t72 = -13436;

	t72 = ((x293%x294)==(x295<=x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	static uint8_t x298 = UINT8_MAX;
	uint8_t x299 = 4U;
	volatile int32_t t73 = 21;

	t73 = ((x297%x298)==(x299<=x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = 5U;
	int64_t x302 = 10683180194LL;
	int64_t x304 = -67990LL;

	t74 = ((x301%x302)==(x303<=x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x306 = INT8_MIN;
	static int16_t x307 = -3;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t75 = 123585;

	t75 = ((x305%x306)==(x307<=x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = 11606;
	volatile int64_t x310 = INT64_MIN;
	static uint64_t x312 = 1307098801LLU;

	t76 = ((x309%x310)==(x311<=x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x313 = UINT16_MAX;
	static int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = INT64_MIN;
	static volatile int32_t t77 = -2;

	t77 = ((x313%x314)==(x315<=x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	volatile int32_t x318 = INT32_MAX;
	uint32_t x320 = 109U;
	int32_t t78 = 4219356;

	t78 = ((x317%x318)==(x319<=x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x322 = UINT32_MAX;
	uint8_t x323 = 1U;
	int8_t x324 = INT8_MAX;
	volatile int32_t t79 = -882710845;

	t79 = ((x321%x322)==(x323<=x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 6;
	uint16_t x326 = UINT16_MAX;
	uint32_t x327 = 1U;
	int32_t t80 = 6;

	t80 = ((x325%x326)==(x327<=x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = -28841;
	static int16_t x330 = 32;
	int16_t x331 = INT16_MIN;
	int16_t x332 = -1;
	int32_t t81 = -207709;

	t81 = ((x329%x330)==(x331<=x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x333 = INT32_MIN;
	int8_t x334 = 36;
	static int64_t x336 = -24678361040010LL;
	volatile int32_t t82 = 657;

	t82 = ((x333%x334)==(x335<=x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = 4;
	int64_t x339 = -1LL;
	int32_t x340 = -1;
	volatile int32_t t83 = -2078;

	t83 = ((x337%x338)==(x339<=x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = 1LLU;
	static volatile int8_t x344 = INT8_MAX;

	t84 = ((x341%x342)==(x343<=x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = INT32_MAX;
	int16_t x346 = INT16_MIN;
	uint8_t x347 = 0U;
	uint32_t x348 = 30038U;

	t85 = ((x345%x346)==(x347<=x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = 14;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MAX;
	static uint8_t x352 = UINT8_MAX;
	int32_t t86 = -669600540;

	t86 = ((x349%x350)==(x351<=x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	static int8_t x354 = INT8_MAX;
	int32_t x355 = INT32_MIN;
	volatile int8_t x356 = -1;

	t87 = ((x353%x354)==(x355<=x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = -1;
	uint8_t x360 = UINT8_MAX;

	t88 = ((x357%x358)==(x359<=x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x361 = INT16_MAX;
	static int8_t x363 = 3;

	t89 = ((x361%x362)==(x363<=x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x366 = INT8_MAX;
	volatile int16_t x367 = 187;
	int8_t x368 = -4;
	int32_t t90 = -20;

	t90 = ((x365%x366)==(x367<=x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x369 = INT64_MIN;
	static int32_t x370 = INT32_MAX;
	int32_t x371 = INT32_MIN;
	volatile int32_t t91 = -11510;

	t91 = ((x369%x370)==(x371<=x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = -1;
	uint64_t x375 = 52538565LLU;
	static volatile int32_t t92 = -539657;

	t92 = ((x373%x374)==(x375<=x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x377 = UINT64_MAX;
	static volatile int32_t x378 = 7;
	int8_t x379 = 1;
	int32_t x380 = -23210;
	int32_t t93 = -31486919;

	t93 = ((x377%x378)==(x379<=x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x381 = -1;
	int32_t x383 = 86;
	static volatile uint16_t x384 = UINT16_MAX;
	int32_t t94 = -202193;

	t94 = ((x381%x382)==(x383<=x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x386 = -6988;
	int8_t x387 = INT8_MAX;
	int8_t x388 = -58;

	t95 = ((x385%x386)==(x387<=x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x389 = INT64_MAX;
	uint8_t x390 = 51U;
	static int16_t x391 = -1;
	static uint32_t x392 = 0U;
	int32_t t96 = -230104182;

	t96 = ((x389%x390)==(x391<=x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x395 = INT64_MIN;
	volatile int32_t t97 = 31971;

	t97 = ((x393%x394)==(x395<=x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = INT64_MIN;
	uint32_t x399 = UINT32_MAX;
	int8_t x400 = 3;
	static int32_t t98 = 3;

	t98 = ((x397%x398)==(x399<=x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = -3456LL;
	int16_t x402 = -1;
	int32_t x403 = INT32_MIN;
	int32_t t99 = 1;

	t99 = ((x401%x402)==(x403<=x404));

	if (t99 != 1) { NG(); } else { ; }
	
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
