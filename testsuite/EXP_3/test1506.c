#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = 31;
int16_t x8 = INT16_MIN;
int8_t x16 = -1;
volatile int64_t x24 = INT64_MIN;
int32_t x25 = INT32_MIN;
int32_t x44 = -1;
uint16_t x45 = UINT16_MAX;
int64_t x48 = 11005607150LL;
volatile int8_t x49 = INT8_MIN;
static uint16_t x51 = 1U;
int32_t x52 = INT32_MAX;
volatile int64_t t12 = -3373798567LL;
int64_t x70 = -1LL;
int8_t x73 = INT8_MAX;
static volatile uint8_t x74 = 0U;
static uint16_t x91 = 1020U;
int16_t x96 = INT16_MIN;
volatile int32_t t24 = -2714;
uint8_t x105 = 57U;
volatile int32_t t26 = 69295723;
int16_t x111 = -1;
uint64_t x112 = UINT64_MAX;
volatile int64_t t27 = -314790810322LL;
uint32_t x114 = UINT32_MAX;
static int32_t x118 = INT32_MIN;
volatile int32_t t29 = 0;
static int16_t x129 = 160;
uint32_t x135 = UINT32_MAX;
static int32_t x136 = 3539;
volatile int64_t t34 = -27839184LL;
int8_t x141 = INT8_MIN;
int8_t x148 = 42;
int16_t x149 = -1;
int32_t t37 = -42865632;
uint64_t t38 = 695615LLU;
uint8_t x160 = UINT8_MAX;
static volatile uint32_t t39 = 19748674U;
int8_t x162 = -2;
static volatile int64_t t41 = 0LL;
uint32_t x172 = UINT32_MAX;
int16_t x177 = INT16_MAX;
uint64_t x181 = UINT64_MAX;
uint16_t x183 = 114U;
uint8_t x185 = UINT8_MAX;
int64_t x188 = 19434020LL;
uint64_t t47 = 6453223LLU;
int16_t x193 = INT16_MIN;
uint64_t x194 = UINT64_MAX;
int8_t x196 = -1;
int32_t x204 = -210840811;
uint64_t t52 = 26351206860046347LLU;
int32_t x215 = -27;
int64_t x220 = -1LL;
int32_t x227 = 1;
static volatile int64_t t56 = 7868168008555372LL;
uint8_t x230 = UINT8_MAX;
uint8_t x241 = 2U;
static int32_t x247 = INT32_MIN;
uint8_t x250 = 23U;
int32_t t62 = -31938628;
static volatile int16_t x270 = INT16_MAX;
int8_t x272 = INT8_MAX;
volatile int32_t t68 = -102;
int64_t x284 = 468850686LL;
static int64_t x285 = -1LL;
uint32_t x286 = 444863928U;
int32_t x300 = INT32_MIN;
static int64_t x302 = INT64_MIN;
int16_t x304 = INT16_MIN;
int32_t x311 = 0;
volatile int32_t x325 = -121345;
uint64_t x332 = 699120529LLU;
static uint16_t x336 = 3052U;
static int64_t t83 = -57224631094556LL;
int64_t x343 = INT64_MAX;
static volatile int32_t t85 = -9930438;
static int32_t x348 = INT32_MAX;
uint8_t x349 = UINT8_MAX;
volatile int32_t t87 = -162217538;
int32_t x353 = INT32_MIN;
volatile int16_t x355 = INT16_MIN;
int64_t x356 = INT64_MIN;
int64_t t90 = 1LL;
int16_t x368 = -2;
int8_t x369 = -5;
volatile int8_t x371 = -1;
volatile int64_t t93 = -2614646798605LL;
volatile int32_t x388 = INT32_MIN;
uint8_t x390 = 43U;
volatile int64_t t98 = -67339332468559835LL;
uint16_t x399 = UINT16_MAX;


void f0(void) {
	volatile int32_t x1 = -3250;
	int64_t x2 = -986192441LL;
	int32_t x3 = -13693;
	static volatile int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -846720147LL;

	t0 = ((x1|x2)&(x3<x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 2U;
	static volatile int64_t x7 = INT64_MIN;
	volatile int32_t t1 = -4724;

	t1 = ((x5|x6)&(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -1;
	static int32_t x10 = INT32_MIN;
	volatile int16_t x11 = INT16_MAX;
	uint16_t x12 = 822U;
	static volatile int32_t t2 = 27;

	t2 = ((x9|x10)&(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = INT16_MIN;
	static int8_t x15 = INT8_MIN;
	volatile int32_t t3 = -34232490;

	t3 = ((x13|x14)&(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 65U;
	int64_t x18 = INT64_MAX;
	static int8_t x19 = INT8_MAX;
	uint8_t x20 = 7U;
	volatile int64_t t4 = 333616408290LL;

	t4 = ((x17|x18)&(x19<x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	static uint64_t x22 = 80LLU;
	static int32_t x23 = 1637;
	static uint64_t t5 = 19546LLU;

	t5 = ((x21|x22)&(x23<x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = -1;
	uint8_t x27 = 1U;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = -1378;

	t6 = ((x25|x26)&(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint16_t x30 = 5775U;
	int32_t x31 = -1;
	int8_t x32 = -1;
	static uint64_t t7 = 53139458383LLU;

	t7 = ((x29|x30)&(x31<x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	uint16_t x34 = 2U;
	static int64_t x35 = INT64_MAX;
	static uint64_t x36 = 49899LLU;
	volatile int32_t t8 = -179;

	t8 = ((x33|x34)&(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 4336;
	static volatile uint8_t x38 = 6U;
	volatile int32_t x39 = INT32_MAX;
	static int32_t x40 = INT32_MIN;
	static int32_t t9 = -51781014;

	t9 = ((x37|x38)&(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static uint32_t x42 = 5U;
	int64_t x43 = INT64_MIN;
	uint32_t t10 = 2265U;

	t10 = ((x41|x42)&(x43<x44));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = -1;
	volatile int32_t t11 = -97858130;

	t11 = ((x45|x46)&(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = 249879546326775LL;

	t12 = ((x49|x50)&(x51<x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	static int64_t x54 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	int64_t x56 = 7LL;
	volatile int64_t t13 = -31533555LL;

	t13 = ((x53|x54)&(x55<x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = -4;
	static int16_t x58 = INT16_MIN;
	uint8_t x59 = UINT8_MAX;
	uint16_t x60 = UINT16_MAX;
	static volatile int32_t t14 = 47479;

	t14 = ((x57|x58)&(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 4U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MAX;
	volatile uint8_t x64 = UINT8_MAX;
	int32_t t15 = 636;

	t15 = ((x61|x62)&(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	volatile uint64_t x66 = 9LLU;
	int8_t x67 = -1;
	uint8_t x68 = 59U;
	uint64_t t16 = 7045299242852380321LLU;

	t16 = ((x65|x66)&(x67<x68));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int8_t x71 = -1;
	static int16_t x72 = -3;
	int64_t t17 = 3522528LL;

	t17 = ((x69|x70)&(x71<x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x75 = 78U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -946526;

	t18 = ((x73|x74)&(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	volatile uint64_t x78 = UINT64_MAX;
	static int8_t x79 = -1;
	uint16_t x80 = UINT16_MAX;
	static uint64_t t19 = 152491350081LLU;

	t19 = ((x77|x78)&(x79<x80));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint8_t x82 = 3U;
	static uint32_t x83 = 22642U;
	int8_t x84 = INT8_MAX;
	static int32_t t20 = 327628017;

	t20 = ((x81|x82)&(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 2758477893LLU;
	int16_t x86 = -1;
	volatile uint32_t x87 = 159U;
	int64_t x88 = INT64_MIN;
	uint64_t t21 = 588277LLU;

	t21 = ((x85|x86)&(x87<x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 57;
	uint32_t x90 = 509830U;
	int32_t x92 = -51402595;
	volatile uint32_t t22 = 1256141863U;

	t22 = ((x89|x90)&(x91<x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	uint16_t x95 = 9U;
	int64_t t23 = 99687644LL;

	t23 = ((x93|x94)&(x95<x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -17;
	static volatile int16_t x98 = INT16_MIN;
	int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MIN;

	t24 = ((x97|x98)&(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 1U;
	uint32_t x102 = 555821U;
	int32_t x103 = -7447;
	static int16_t x104 = 40;
	uint32_t t25 = 437914U;

	t25 = ((x101|x102)&(x103<x104));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = 7305286;
	static int32_t x107 = -1;
	int32_t x108 = -15981;

	t26 = ((x105|x106)&(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -11493545901726LL;
	int16_t x110 = -1;

	t27 = ((x109|x110)&(x111<x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 1;
	int64_t x115 = -1278LL;
	int16_t x116 = INT16_MAX;
	volatile uint32_t t28 = 462584802U;

	t28 = ((x113|x114)&(x115<x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int8_t x119 = -1;
	volatile int8_t x120 = -1;

	t29 = ((x117|x118)&(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	volatile int16_t x122 = -1;
	int8_t x123 = 25;
	uint64_t x124 = 550174689413087507LLU;
	volatile int64_t t30 = -4934581342581256LL;

	t30 = ((x121|x122)&(x123<x124));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	static int8_t x126 = -23;
	uint8_t x127 = 8U;
	int16_t x128 = INT16_MAX;
	volatile int32_t t31 = -8;

	t31 = ((x125|x126)&(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x130 = 1272U;
	int16_t x131 = -1;
	uint8_t x132 = 24U;
	int32_t t32 = -181;

	t32 = ((x129|x130)&(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int64_t x134 = -5806LL;
	static int64_t t33 = -217516LL;

	t33 = ((x133|x134)&(x135<x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	volatile int32_t x139 = -915988273;
	int64_t x140 = -60335935328074924LL;

	t34 = ((x137|x138)&(x139<x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = UINT32_MAX;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = UINT16_MAX;
	uint32_t t35 = 372498U;

	t35 = ((x141|x142)&(x143<x144));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	volatile uint64_t x146 = 11254998LLU;
	int16_t x147 = 3;
	volatile uint64_t t36 = 301472LLU;

	t36 = ((x145|x146)&(x147<x148));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	int64_t x151 = INT64_MAX;
	int8_t x152 = 0;

	t37 = ((x149|x150)&(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	uint64_t x154 = UINT64_MAX;
	static volatile int16_t x155 = -19;
	int16_t x156 = INT16_MAX;

	t38 = ((x153|x154)&(x155<x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 225U;
	static int64_t x159 = -1LL;

	t39 = ((x157|x158)&(x159<x160));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static uint64_t x163 = UINT64_MAX;
	uint64_t x164 = UINT64_MAX;
	int32_t t40 = 346746190;

	t40 = ((x161|x162)&(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 15515LL;
	volatile uint32_t x166 = UINT32_MAX;
	int64_t x167 = INT64_MIN;
	static volatile int64_t x168 = 1LL;

	t41 = ((x165|x166)&(x167<x168));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 3U;
	volatile uint32_t x171 = UINT32_MAX;
	uint32_t t42 = 11060U;

	t42 = ((x169|x170)&(x171<x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint8_t x174 = 3U;
	int16_t x175 = -3;
	volatile uint32_t x176 = 1164U;
	int32_t t43 = 58554495;

	t43 = ((x173|x174)&(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	int32_t x180 = -582;
	int32_t t44 = -1;

	t44 = ((x177|x178)&(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -1LL;
	uint64_t x184 = 3025824481LLU;
	volatile uint64_t t45 = 935522LLU;

	t45 = ((x181|x182)&(x183<x184));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MAX;
	static int16_t x187 = INT16_MIN;
	int32_t t46 = -45484958;

	t46 = ((x185|x186)&(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 107992331LLU;
	static volatile uint8_t x190 = 24U;
	int32_t x191 = -1;
	int32_t x192 = INT32_MAX;

	t47 = ((x189|x190)&(x191<x192));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x195 = INT64_MAX;
	static uint64_t t48 = 105389LLU;

	t48 = ((x193|x194)&(x195<x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	static int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = UINT16_MAX;
	static int64_t t49 = -175487LL;

	t49 = ((x197|x198)&(x199<x200));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	volatile int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t t50 = 413306;

	t50 = ((x201|x202)&(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 5153700U;
	int64_t x206 = 81614440849173LL;
	uint64_t x207 = UINT64_MAX;
	volatile uint16_t x208 = UINT16_MAX;
	static int64_t t51 = 763702697228612LL;

	t51 = ((x205|x206)&(x207<x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = 7LLU;
	static uint64_t x211 = 648218930884721LLU;
	int32_t x212 = -9;

	t52 = ((x209|x210)&(x211<x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	int16_t x214 = -1;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t53 = 124071651;

	t53 = ((x213|x214)&(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = 0;
	uint16_t x219 = 3U;
	static int32_t t54 = -4295895;

	t54 = ((x217|x218)&(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	int32_t x224 = 222150;
	volatile int64_t t55 = -3702663895LL;

	t55 = ((x221|x222)&(x223<x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1823625997890234186LL;
	int8_t x226 = 0;
	volatile uint8_t x228 = UINT8_MAX;

	t56 = ((x225|x226)&(x227<x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 191435U;
	volatile int8_t x231 = INT8_MAX;
	uint8_t x232 = UINT8_MAX;
	uint32_t t57 = 8U;

	t57 = ((x229|x230)&(x231<x232));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -934300784LL;
	volatile int16_t x234 = -1;
	int8_t x235 = -1;
	uint64_t x236 = 16053773626LLU;
	int64_t t58 = -13LL;

	t58 = ((x233|x234)&(x235<x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 958440U;
	int64_t x238 = INT64_MIN;
	int64_t x239 = -51257909766878216LL;
	uint64_t x240 = 8487154544552LLU;
	int64_t t59 = -19293227LL;

	t59 = ((x237|x238)&(x239<x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 2637U;
	int32_t x244 = INT32_MIN;
	volatile int32_t t60 = 5907603;

	t60 = ((x241|x242)&(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	static int16_t x246 = -1;
	int8_t x248 = -1;
	int32_t t61 = -11;

	t61 = ((x245|x246)&(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int8_t x251 = 31;
	int16_t x252 = -6;

	t62 = ((x249|x250)&(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int64_t x254 = -1LL;
	int16_t x255 = INT16_MAX;
	uint32_t x256 = 465267420U;
	uint64_t t63 = 16765527032LLU;

	t63 = ((x253|x254)&(x255<x256));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	static uint8_t x259 = 3U;
	static int8_t x260 = 3;
	volatile int32_t t64 = -27947;

	t64 = ((x257|x258)&(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 287U;
	int64_t x262 = INT64_MIN;
	static volatile int32_t x263 = 2;
	uint16_t x264 = 8110U;
	int64_t t65 = -452429LL;

	t65 = ((x261|x262)&(x263<x264));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 52LLU;
	static int8_t x266 = -1;
	static uint8_t x267 = 13U;
	int8_t x268 = INT8_MIN;
	uint64_t t66 = 226795821836398507LLU;

	t66 = ((x265|x266)&(x267<x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static uint32_t x271 = 494439U;
	volatile int32_t t67 = -120216;

	t67 = ((x269|x270)&(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = 1;
	uint8_t x276 = UINT8_MAX;

	t68 = ((x273|x274)&(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = -1LL;
	volatile int32_t x280 = INT32_MIN;
	int32_t t69 = 25794;

	t69 = ((x277|x278)&(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	int64_t t70 = -1617349674970204831LL;

	t70 = ((x281|x282)&(x283<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x287 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t71 = -23102871979154LL;

	t71 = ((x285|x286)&(x287<x288));

	if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	static int8_t x290 = INT8_MIN;
	volatile int64_t x291 = INT64_MIN;
	volatile uint64_t x292 = 6288294288LLU;
	volatile int32_t t72 = -6707;

	t72 = ((x289|x290)&(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = 117U;
	int32_t x294 = INT32_MAX;
	uint8_t x295 = 14U;
	int32_t x296 = -1;
	volatile uint32_t t73 = 8607U;

	t73 = ((x293|x294)&(x295<x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -3;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = INT64_MIN;
	static volatile uint32_t t74 = 30873U;

	t74 = ((x297|x298)&(x299<x300));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x303 = -28;
	static volatile uint64_t t75 = 517013710018LLU;

	t75 = ((x301|x302)&(x303<x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 14;
	static int32_t x306 = -1;
	uint64_t x307 = 53851LLU;
	volatile int64_t x308 = INT64_MIN;
	int32_t t76 = 1516225;

	t76 = ((x305|x306)&(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 409;
	int8_t x310 = INT8_MIN;
	volatile int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -11769832;

	t77 = ((x309|x310)&(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile uint32_t x314 = 2086515U;
	uint32_t x315 = 29723U;
	static int32_t x316 = INT32_MIN;
	volatile uint32_t t78 = 187U;

	t78 = ((x313|x314)&(x315<x316));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 64547358603248646LLU;
	static int16_t x318 = -31;
	volatile int32_t x319 = 579;
	static int8_t x320 = INT8_MIN;
	uint64_t t79 = 387LLU;

	t79 = ((x317|x318)&(x319<x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int8_t x322 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	int8_t x324 = -1;
	int32_t t80 = -1;

	t80 = ((x321|x322)&(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x326 = 1161971679LL;
	static int32_t x327 = INT32_MIN;
	int64_t x328 = 118271102659676LL;
	int64_t t81 = -31474LL;

	t81 = ((x325|x326)&(x327<x328));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int16_t x330 = -1;
	uint64_t x331 = 196463206811LLU;
	static int32_t t82 = 1693178;

	t82 = ((x329|x330)&(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 25U;
	int64_t x334 = -1LL;
	volatile uint8_t x335 = UINT8_MAX;

	t83 = ((x333|x334)&(x335<x336));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	static uint16_t x340 = 39U;
	int32_t t84 = 0;

	t84 = ((x337|x338)&(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = 1570;
	uint16_t x342 = 0U;
	static int32_t x344 = -1;

	t85 = ((x341|x342)&(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x345 = UINT32_MAX;
	uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	volatile uint32_t t86 = 2852463U;

	t86 = ((x345|x346)&(x347<x348));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = 57655;
	uint16_t x351 = UINT16_MAX;
	static volatile int8_t x352 = 1;

	t87 = ((x349|x350)&(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	volatile int32_t t88 = -27402;

	t88 = ((x353|x354)&(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MAX;
	static volatile int64_t x358 = -1LL;
	int64_t x359 = 2728682258031LL;
	uint16_t x360 = 27527U;
	int64_t t89 = -203277456642219446LL;

	t89 = ((x357|x358)&(x359<x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	volatile int64_t x362 = 3573857066131224938LL;
	volatile uint8_t x363 = 43U;
	static uint64_t x364 = 817273059LLU;

	t90 = ((x361|x362)&(x363<x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	uint64_t x366 = UINT64_MAX;
	static int64_t x367 = INT64_MAX;
	static volatile uint64_t t91 = 1LLU;

	t91 = ((x365|x366)&(x367<x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x370 = -3859;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 25941483;

	t92 = ((x369|x370)&(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	uint32_t x374 = 2132778U;
	static int8_t x375 = INT8_MIN;
	int8_t x376 = INT8_MIN;

	t93 = ((x373|x374)&(x375<x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = INT8_MIN;
	int16_t x378 = INT16_MIN;
	static int32_t x379 = -110051784;
	int32_t x380 = INT32_MIN;
	int32_t t94 = 1;

	t94 = ((x377|x378)&(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	static uint16_t x382 = UINT16_MAX;
	uint16_t x383 = 10619U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -4372518;

	t95 = ((x381|x382)&(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 2039;
	static volatile uint16_t x386 = 261U;
	int64_t x387 = INT64_MIN;
	int32_t t96 = -378;

	t96 = ((x385|x386)&(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int8_t x391 = -1;
	uint16_t x392 = 333U;
	volatile int32_t t97 = 4606;

	t97 = ((x389|x390)&(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 1U;
	int64_t x394 = -1LL;
	int8_t x395 = -31;
	int16_t x396 = -1;

	t98 = ((x393|x394)&(x395<x396));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	uint16_t x398 = 22U;
	int64_t x400 = INT64_MIN;
	volatile int64_t t99 = 203976LL;

	t99 = ((x397|x398)&(x399<x400));

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
