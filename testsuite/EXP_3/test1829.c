#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = 1;
volatile int64_t x13 = -12313404727759133LL;
int16_t x17 = -1;
int32_t x23 = -1;
int16_t x25 = -1;
int16_t x28 = 14503;
uint32_t x30 = UINT32_MAX;
static volatile int32_t t8 = -1;
uint64_t x51 = 4182284LLU;
volatile int32_t t13 = 772265490;
static volatile int32_t t14 = -4418606;
int64_t x62 = -2925751LL;
uint32_t x63 = 5U;
int32_t x64 = INT32_MAX;
static volatile int32_t t15 = -63643;
int8_t x68 = INT8_MIN;
volatile int32_t t16 = 464896;
int64_t x69 = 39047425LL;
static int8_t x77 = 1;
volatile int16_t x83 = INT16_MIN;
int32_t t20 = 396228;
int16_t x86 = -1;
volatile int32_t x89 = -1;
uint8_t x90 = 26U;
static int64_t x96 = 0LL;
volatile int32_t t23 = -44552947;
uint32_t x97 = 31213U;
static volatile int32_t t27 = -13284;
int16_t x113 = 61;
uint16_t x121 = UINT16_MAX;
uint64_t x125 = 4410925767LLU;
static volatile uint8_t x130 = UINT8_MAX;
int8_t x131 = -1;
int16_t x133 = -13;
volatile int32_t t33 = -106947977;
int16_t x138 = INT16_MAX;
uint8_t x139 = 1U;
volatile int16_t x144 = INT16_MAX;
volatile int32_t t35 = -9;
int8_t x149 = 23;
int64_t x152 = -1LL;
volatile int32_t x157 = 52519;
static int32_t t39 = -294688;
int16_t x165 = INT16_MIN;
int32_t x169 = -1;
int64_t x171 = -737080609LL;
static uint16_t x176 = 34U;
int32_t t44 = -70;
int64_t x187 = INT64_MAX;
uint8_t x189 = 73U;
int32_t x200 = INT32_MAX;
static uint32_t x202 = 27685270U;
static int32_t t50 = -1000077;
volatile int16_t x216 = INT16_MAX;
static int8_t x217 = -1;
volatile int32_t t54 = -151251;
static volatile int16_t x228 = -1;
static uint8_t x233 = 10U;
volatile int8_t x240 = -1;
int32_t t61 = -77;
int32_t x251 = INT32_MIN;
uint8_t x253 = UINT8_MAX;
static uint8_t x254 = UINT8_MAX;
uint32_t x257 = UINT32_MAX;
uint64_t x267 = 65117LLU;
static int16_t x275 = -338;
static int32_t x279 = -5975;
int64_t x280 = INT64_MIN;
static int32_t t70 = -1;
uint16_t x285 = UINT16_MAX;
int16_t x293 = INT16_MAX;
int16_t x294 = -8900;
volatile uint32_t x299 = 672U;
volatile int32_t t76 = 113;
int32_t x310 = -2712;
static volatile int32_t t79 = 18297;
int64_t x325 = INT64_MIN;
static int8_t x330 = INT8_MAX;
int32_t t82 = 1;
volatile uint32_t x342 = 2U;
uint16_t x345 = UINT16_MAX;
uint16_t x354 = UINT16_MAX;
int32_t x357 = INT32_MIN;
int64_t x369 = INT64_MIN;
volatile uint32_t x379 = 23U;
uint8_t x381 = 13U;
int16_t x384 = 6;
int8_t x386 = -1;
volatile int64_t x389 = -19404060505410390LL;
int8_t x391 = -6;
int64_t x396 = -114LL;
volatile int64_t x398 = -1LL;


void f0(void) {
	int64_t x1 = -8010LL;
	static uint16_t x2 = 11870U;
	int16_t x3 = INT16_MIN;
	static int8_t x4 = -1;
	volatile int32_t t0 = 4;

	t0 = ((x1&x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -2;
	int8_t x6 = 7;
	static int64_t x7 = -1032106LL;
	int32_t x8 = 0;
	static volatile int32_t t1 = -497748;

	t1 = ((x5&x6)<(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 2U;
	uint64_t x11 = 95LLU;
	volatile int8_t x12 = INT8_MIN;
	static int32_t t2 = 881793;

	t2 = ((x9&x10)<(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	int8_t x15 = INT8_MIN;
	static int32_t x16 = -1336;
	int32_t t3 = 4;

	t3 = ((x13&x14)<(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = -1LL;
	int32_t t4 = 93;

	t4 = ((x17&x18)<(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -854;
	int8_t x22 = 51;
	int8_t x24 = INT8_MAX;
	int32_t t5 = 466861396;

	t5 = ((x21&x22)<(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 73320U;
	volatile int32_t t6 = 43;

	t6 = ((x25&x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	int64_t x31 = INT64_MAX;
	static volatile int64_t x32 = INT64_MAX;
	int32_t t7 = -1460;

	t7 = ((x29&x30)<(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint32_t x34 = UINT32_MAX;
	uint8_t x35 = 39U;
	uint32_t x36 = 997521U;

	t8 = ((x33&x34)<(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 5837200U;
	static volatile int8_t x38 = -1;
	int64_t x39 = -1LL;
	static volatile int64_t x40 = INT64_MAX;
	volatile int32_t t9 = 14948;

	t9 = ((x37&x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = UINT32_MAX;
	volatile int8_t x42 = INT8_MIN;
	int8_t x43 = 0;
	int64_t x44 = 176LL;
	volatile int32_t t10 = -14426;

	t10 = ((x41&x42)<(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint16_t x46 = 8057U;
	static volatile int16_t x47 = INT16_MAX;
	int64_t x48 = 233888949094005LL;
	int32_t t11 = 3;

	t11 = ((x45&x46)<(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint64_t x50 = 54953328874561449LLU;
	int8_t x52 = INT8_MIN;
	volatile int32_t t12 = 800980376;

	t12 = ((x49&x50)<(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int8_t x54 = 3;
	uint64_t x55 = 115136838674938829LLU;
	volatile int16_t x56 = INT16_MAX;

	t13 = ((x53&x54)<(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int64_t x58 = 103366943665421568LL;
	static uint32_t x59 = 12U;
	uint32_t x60 = 94U;

	t14 = ((x57&x58)<(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x61 = 18U;

	t15 = ((x61&x62)<(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = 1;
	uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MAX;

	t16 = ((x65&x66)<(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	int64_t x71 = INT64_MAX;
	volatile int8_t x72 = INT8_MIN;
	int32_t t17 = -18238;

	t17 = ((x69&x70)<(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int16_t x74 = INT16_MIN;
	volatile uint64_t x75 = 33062968538022LLU;
	uint64_t x76 = 202768802193462LLU;
	volatile int32_t t18 = 924281;

	t18 = ((x73&x74)<(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = -1318886325217612LL;
	static int32_t x79 = INT32_MAX;
	int8_t x80 = -1;
	int32_t t19 = 408;

	t19 = ((x77&x78)<(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 218LLU;
	int16_t x84 = -175;

	t20 = ((x81&x82)<(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -28;
	volatile int8_t x87 = -1;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -540565;

	t21 = ((x85&x86)<(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x91 = INT16_MIN;
	int64_t x92 = 21397153113LL;
	static volatile int32_t t22 = -1358593;

	t22 = ((x89&x90)<(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	static int64_t x94 = -559423368240LL;
	int64_t x95 = -1LL;

	t23 = ((x93&x94)<(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = -1;
	uint16_t x99 = UINT16_MAX;
	uint32_t x100 = 1962884793U;
	static volatile int32_t t24 = 1618168;

	t24 = ((x97&x98)<(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 73U;
	int64_t x102 = -70282564237992877LL;
	volatile int16_t x103 = INT16_MIN;
	uint32_t x104 = 129U;
	static int32_t t25 = -1128;

	t25 = ((x101&x102)<(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int8_t x106 = -10;
	uint64_t x107 = 233551197956982LLU;
	int64_t x108 = -1LL;
	volatile int32_t t26 = -89535;

	t26 = ((x105&x106)<(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = -7982;
	volatile uint32_t x112 = 71967U;

	t27 = ((x109&x110)<(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MAX;
	uint8_t x115 = 36U;
	volatile uint32_t x116 = 4798281U;
	volatile int32_t t28 = -2966;

	t28 = ((x113&x114)<(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	volatile uint64_t x118 = 1504LLU;
	int16_t x119 = INT16_MAX;
	static int16_t x120 = 82;
	volatile int32_t t29 = 4647318;

	t29 = ((x117&x118)<(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MAX;
	int64_t x124 = INT64_MAX;
	int32_t t30 = -503913336;

	t30 = ((x121&x122)<(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = 5640044;
	volatile int8_t x128 = INT8_MIN;
	int32_t t31 = 153;

	t31 = ((x125&x126)<(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 208667598896LLU;
	int8_t x132 = -1;
	static int32_t t32 = 46;

	t32 = ((x129&x130)<(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MAX;

	t33 = ((x133&x134)<(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int8_t x140 = -5;
	volatile int32_t t34 = 22835196;

	t34 = ((x137&x138)<(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 3809U;
	static uint16_t x142 = 296U;
	volatile int8_t x143 = INT8_MIN;

	t35 = ((x141&x142)<(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = 997;
	volatile uint64_t x146 = 41807093228923398LLU;
	int32_t x147 = 14669;
	int8_t x148 = INT8_MAX;
	int32_t t36 = 6;

	t36 = ((x145&x146)<(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x150 = INT32_MAX;
	int16_t x151 = -7;
	volatile int32_t t37 = -2731;

	t37 = ((x149&x150)<(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	static int64_t x154 = -1LL;
	int16_t x155 = -1;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -132257363;

	t38 = ((x153&x154)<(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x158 = INT8_MIN;
	volatile int32_t x159 = -531483957;
	uint16_t x160 = 7U;

	t39 = ((x157&x158)<(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 1618946U;
	volatile int32_t x162 = -1;
	uint64_t x163 = 0LLU;
	volatile int32_t x164 = -1;
	volatile int32_t t40 = 3299;

	t40 = ((x161&x162)<(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	static int16_t x167 = INT16_MAX;
	static int64_t x168 = -204LL;
	volatile int32_t t41 = 2;

	t41 = ((x165&x166)<(x167&x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = UINT8_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -125;

	t42 = ((x169&x170)<(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	static int64_t x174 = -22190089LL;
	volatile int16_t x175 = -544;
	static volatile int32_t t43 = 8;

	t43 = ((x173&x174)<(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = 994;
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 1U;
	static int8_t x180 = 2;

	t44 = ((x177&x178)<(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = 29;
	static volatile int16_t x184 = INT16_MIN;
	int32_t t45 = 612887;

	t45 = ((x181&x182)<(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static uint16_t x186 = 180U;
	volatile int16_t x188 = -1;
	volatile int32_t t46 = -13;

	t46 = ((x185&x186)<(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = 0;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t47 = -62673;

	t47 = ((x189&x190)<(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -1LL;
	volatile int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	static uint64_t x196 = UINT64_MAX;
	volatile int32_t t48 = 690387;

	t48 = ((x193&x194)<(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 24U;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = 1;
	volatile int32_t t49 = 0;

	t49 = ((x197&x198)<(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	static int8_t x203 = -1;
	int8_t x204 = 0;

	t50 = ((x201&x202)<(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	static int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MAX;
	int32_t t51 = -1900;

	t51 = ((x205&x206)<(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 330943725528916LL;
	int16_t x210 = INT16_MAX;
	volatile int64_t x211 = -1LL;
	int8_t x212 = 1;
	volatile int32_t t52 = 1;

	t52 = ((x209&x210)<(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	volatile int16_t x215 = INT16_MAX;
	volatile int32_t t53 = 29569;

	t53 = ((x213&x214)<(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x218 = 158U;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = UINT32_MAX;

	t54 = ((x217&x218)<(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	int8_t x222 = -1;
	int32_t x223 = -76838;
	uint8_t x224 = 27U;
	volatile int32_t t55 = -457066;

	t55 = ((x221&x222)<(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = UINT8_MAX;
	volatile int8_t x226 = 1;
	uint8_t x227 = 1U;
	int32_t t56 = 2622;

	t56 = ((x225&x226)<(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -69;
	static int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 0;
	volatile int32_t t57 = -317134672;

	t57 = ((x229&x230)<(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	static int64_t x235 = INT64_MIN;
	static int32_t x236 = -238651;
	volatile int32_t t58 = 11077;

	t58 = ((x233&x234)<(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = -1;
	uint64_t x238 = 86158975610LLU;
	volatile int32_t x239 = INT32_MAX;
	volatile int32_t t59 = 7585203;

	t59 = ((x237&x238)<(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	volatile int8_t x242 = INT8_MIN;
	volatile int64_t x243 = INT64_MIN;
	static uint64_t x244 = 48010755302565LLU;
	static volatile int32_t t60 = 1026703;

	t60 = ((x241&x242)<(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x245 = -1;
	uint8_t x246 = 95U;
	uint16_t x247 = 3006U;
	uint32_t x248 = 2466736U;

	t61 = ((x245&x246)<(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int16_t x250 = -1;
	uint8_t x252 = 15U;
	static int32_t t62 = -2424;

	t62 = ((x249&x250)<(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x255 = INT16_MIN;
	static uint8_t x256 = 36U;
	int32_t t63 = -1;

	t63 = ((x253&x254)<(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x258 = INT32_MIN;
	uint16_t x259 = 940U;
	int8_t x260 = 13;
	volatile int32_t t64 = 165838;

	t64 = ((x257&x258)<(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int16_t x262 = INT16_MAX;
	uint32_t x263 = 91U;
	int32_t x264 = INT32_MIN;
	int32_t t65 = -27;

	t65 = ((x261&x262)<(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int16_t x266 = -384;
	int16_t x268 = -1;
	volatile int32_t t66 = 192;

	t66 = ((x265&x266)<(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int64_t x270 = -5217216816413LL;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = -281;
	volatile int32_t t67 = -21271997;

	t67 = ((x269&x270)<(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int64_t x274 = -14LL;
	uint32_t x276 = UINT32_MAX;
	static volatile int32_t t68 = 4931782;

	t68 = ((x273&x274)<(x275&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	int32_t x278 = -1;
	int32_t t69 = -2;

	t69 = ((x277&x278)<(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = 1;
	int8_t x282 = INT8_MAX;
	uint8_t x283 = UINT8_MAX;
	uint8_t x284 = 7U;

	t70 = ((x281&x282)<(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = 0;
	static volatile uint8_t x287 = 54U;
	int32_t x288 = -1;
	int32_t t71 = -599398;

	t71 = ((x285&x286)<(x287&x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 42798206U;
	uint32_t x290 = 7081133U;
	volatile uint32_t x291 = 85729U;
	static int32_t x292 = INT32_MAX;
	volatile int32_t t72 = 7411;

	t72 = ((x289&x290)<(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x295 = -1;
	int64_t x296 = -4494971LL;
	volatile int32_t t73 = -201150962;

	t73 = ((x293&x294)<(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 0U;
	int16_t x300 = -1;
	int32_t t74 = 52395;

	t74 = ((x297&x298)<(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 56U;
	int16_t x302 = -57;
	static uint64_t x303 = 1404986225221200318LLU;
	uint64_t x304 = UINT64_MAX;
	int32_t t75 = 80040533;

	t75 = ((x301&x302)<(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int64_t x306 = -1LL;
	int64_t x307 = 4086902283894690226LL;
	uint16_t x308 = 1833U;

	t76 = ((x305&x306)<(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	int16_t x311 = 727;
	volatile int16_t x312 = INT16_MAX;
	int32_t t77 = -12502557;

	t77 = ((x309&x310)<(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = 32654U;
	uint32_t x315 = 268960068U;
	int8_t x316 = -12;
	volatile int32_t t78 = 894664712;

	t78 = ((x313&x314)<(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static int32_t x318 = INT32_MAX;
	int16_t x319 = -2316;
	int8_t x320 = INT8_MIN;

	t79 = ((x317&x318)<(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 66268388888351LL;
	int8_t x322 = INT8_MIN;
	volatile uint64_t x323 = 13119666179LLU;
	static int32_t x324 = INT32_MIN;
	static volatile int32_t t80 = 90630;

	t80 = ((x321&x322)<(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 2U;
	int32_t x327 = 28372;
	uint32_t x328 = 737U;
	volatile int32_t t81 = 388982;

	t81 = ((x325&x326)<(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 330819U;
	int16_t x331 = -8053;
	int8_t x332 = 0;

	t82 = ((x329&x330)<(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 16;
	int32_t x334 = -1;
	int16_t x335 = INT16_MIN;
	static int8_t x336 = -1;
	volatile int32_t t83 = -56;

	t83 = ((x333&x334)<(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 3769U;
	int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	uint64_t x340 = 194476240180794479LLU;
	volatile int32_t t84 = -512199;

	t84 = ((x337&x338)<(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -17335422561918LL;
	static int16_t x343 = -43;
	int8_t x344 = INT8_MIN;
	int32_t t85 = -885;

	t85 = ((x341&x342)<(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x346 = 70U;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 119;

	t86 = ((x345&x346)<(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 195368678717534LLU;
	int64_t x350 = -89953160090LL;
	int16_t x351 = -422;
	volatile int32_t x352 = INT32_MAX;
	volatile int32_t t87 = 1;

	t87 = ((x349&x350)<(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x355 = 1378U;
	int32_t x356 = -17;
	int32_t t88 = 507055878;

	t88 = ((x353&x354)<(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = INT32_MIN;
	uint16_t x359 = 251U;
	static uint16_t x360 = 1U;
	volatile int32_t t89 = 46804229;

	t89 = ((x357&x358)<(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x361 = 12U;
	volatile int8_t x362 = 3;
	int32_t x363 = -1;
	int16_t x364 = INT16_MIN;
	static volatile int32_t t90 = 177447812;

	t90 = ((x361&x362)<(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 4169923192581LLU;
	uint16_t x366 = 4U;
	int32_t x367 = -1;
	volatile int64_t x368 = -1LL;
	int32_t t91 = 61992;

	t91 = ((x365&x366)<(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	int32_t x372 = 1062416484;
	int32_t t92 = -6915405;

	t92 = ((x369&x370)<(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static uint8_t x374 = 5U;
	uint64_t x375 = 381477834393489LLU;
	int8_t x376 = -1;
	int32_t t93 = 1;

	t93 = ((x373&x374)<(x375&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 85U;
	static int8_t x378 = INT8_MAX;
	int32_t x380 = -1;
	int32_t t94 = 1;

	t94 = ((x377&x378)<(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 1181569U;
	static int16_t x383 = -808;
	int32_t t95 = -25;

	t95 = ((x381&x382)<(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 0;
	int64_t x387 = -1LL;
	int16_t x388 = -566;
	volatile int32_t t96 = -5;

	t96 = ((x385&x386)<(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = INT64_MIN;
	static int32_t x392 = INT32_MIN;
	static int32_t t97 = -237330;

	t97 = ((x389&x390)<(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	static uint8_t x395 = 0U;
	static int32_t t98 = -1269;

	t98 = ((x393&x394)<(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = 42952622732LL;
	static uint32_t x399 = 4166U;
	static volatile int8_t x400 = -9;
	volatile int32_t t99 = -40073;

	t99 = ((x397&x398)<(x399&x400));

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
