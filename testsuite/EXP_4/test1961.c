#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x5 = 2872901U;
uint64_t x7 = 34107LLU;
volatile uint64_t x12 = UINT64_MAX;
int32_t t2 = 5;
volatile uint32_t x16 = 172U;
uint32_t x19 = UINT32_MAX;
uint16_t x27 = UINT16_MAX;
uint64_t x31 = 748332LLU;
int16_t x32 = -6;
volatile uint32_t x33 = UINT32_MAX;
volatile uint8_t x39 = UINT8_MAX;
volatile int32_t x42 = INT32_MIN;
static int8_t x44 = -1;
uint64_t t11 = 935060654081LLU;
volatile uint64_t x50 = 137583033LLU;
int8_t x52 = -1;
uint32_t x55 = 483218156U;
static int64_t t13 = 68924990598589LL;
int8_t x58 = INT8_MIN;
uint64_t x60 = UINT64_MAX;
int64_t x62 = INT64_MAX;
static volatile uint8_t x64 = UINT8_MAX;
int32_t t15 = -1;
static int32_t x67 = INT32_MIN;
int64_t t16 = -580LL;
static int64_t t17 = 1609LL;
int16_t x79 = -1;
int32_t x80 = INT32_MIN;
int64_t x81 = 318990702LL;
static int32_t x82 = 1170035;
int32_t x89 = -1;
static volatile int32_t t22 = 2;
volatile int64_t x95 = -3130047253397068LL;
volatile int16_t x108 = 1032;
volatile uint16_t x112 = 101U;
uint16_t x116 = 94U;
uint64_t x117 = 16871063287642456LLU;
static uint16_t x122 = UINT16_MAX;
static int32_t x126 = INT32_MIN;
volatile int8_t x128 = INT8_MAX;
int16_t x129 = 1;
static int32_t x132 = INT32_MAX;
volatile int32_t t32 = 685135761;
int64_t x141 = 61115123878523LL;
uint16_t x142 = 34U;
static volatile uint16_t x146 = 19373U;
int16_t x148 = INT16_MIN;
static uint16_t x149 = 122U;
static uint16_t x155 = 4961U;
int8_t x158 = 0;
volatile int32_t t40 = 24897419;
static volatile int32_t t41 = -435762;
volatile int64_t t42 = 5LL;
volatile int32_t t43 = -1;
uint32_t x183 = 2938582U;
uint64_t x184 = UINT64_MAX;
static int64_t x186 = INT64_MIN;
int16_t x202 = -536;
static volatile int64_t x203 = -1608247230517LL;
static int32_t t50 = 39;
static int16_t x217 = INT16_MAX;
uint16_t x220 = 780U;
int8_t x222 = INT8_MAX;
int8_t x225 = INT8_MIN;
int64_t x228 = -1LL;
static int32_t t56 = 2998;
int64_t x229 = INT64_MIN;
volatile int64_t x230 = 1931727305797LL;
int32_t t58 = -13096870;
static int32_t x238 = INT32_MIN;
uint64_t x243 = UINT64_MAX;
static uint8_t x254 = UINT8_MAX;
volatile int32_t x258 = -15945535;
static volatile int32_t t64 = -748;
int8_t x262 = INT8_MAX;
static volatile int64_t x268 = INT64_MAX;
volatile int8_t x273 = INT8_MIN;
int32_t t68 = 1512996;
int64_t x280 = -1LL;
volatile int32_t x284 = INT32_MIN;
int32_t x297 = INT32_MIN;
volatile int32_t t76 = 3;
uint16_t x310 = 225U;
uint32_t x323 = UINT32_MAX;
volatile int8_t x325 = INT8_MIN;
int8_t x326 = INT8_MAX;
static uint16_t x331 = UINT16_MAX;
volatile int32_t t84 = -654684934;
static int64_t x344 = -461306895338110LL;
uint8_t x345 = UINT8_MAX;
volatile uint32_t x352 = 0U;
static int32_t t87 = 13370718;
static uint8_t x353 = 84U;
int16_t x355 = -28;
volatile int32_t t88 = 93364843;
static uint32_t x360 = UINT32_MAX;
int16_t x361 = -1;
int64_t x362 = 578LL;
int16_t x369 = -1;
int16_t x372 = 122;
uint32_t x381 = UINT32_MAX;
volatile int8_t x386 = INT8_MAX;
static int16_t x389 = -1;
volatile int32_t x390 = INT32_MIN;
static uint64_t x396 = 1LLU;
volatile uint8_t x397 = UINT8_MAX;
static int32_t t99 = 183496508;


void f0(void) {
	uint64_t x1 = 34801792243LLU;
	static int32_t x2 = 24766;
	int8_t x3 = INT8_MAX;
	static int64_t x4 = -1LL;
	volatile uint64_t t0 = 249802201212543790LLU;

	t0 = (x1&(x2==(x3|x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	static uint32_t t1 = 784505U;

	t1 = (x5&(x6==(x7|x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x10 = UINT16_MAX;
	static uint32_t x11 = 1008U;

	t2 = (x9&(x10==(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 89370LLU;
	volatile int8_t x14 = INT8_MAX;
	int64_t x15 = -1LL;
	uint64_t t3 = 30737068427LLU;

	t3 = (x13&(x14==(x15|x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int16_t x18 = INT16_MIN;
	uint16_t x20 = 3U;
	volatile int32_t t4 = -582882;

	t4 = (x17&(x18==(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int16_t x22 = -14906;
	int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -56883706;

	t5 = (x21&(x22==(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint32_t x26 = 40941U;
	int32_t x28 = -1;
	int32_t t6 = 31088;

	t6 = (x25&(x26==(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 5260U;
	uint16_t x30 = 5807U;
	int32_t t7 = 103578065;

	t7 = (x29&(x30==(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = 25;
	int32_t x35 = -1;
	int64_t x36 = INT64_MIN;
	uint32_t t8 = 65U;

	t8 = (x33&(x34==(x35|x36)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -858960893;
	uint8_t x38 = 2U;
	int8_t x40 = -1;
	static volatile int32_t t9 = -88;

	t9 = (x37&(x38==(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 783334;
	uint64_t x43 = 56190935LLU;
	int32_t t10 = 0;

	t10 = (x41&(x42==(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 332052661LLU;
	int32_t x46 = -1;
	volatile int32_t x47 = INT32_MIN;
	uint16_t x48 = UINT16_MAX;

	t11 = (x45&(x46==(x47|x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint64_t x51 = 319031013206778LLU;
	int64_t t12 = -194954664717LL;

	t12 = (x49&(x50==(x51|x52)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	uint64_t x54 = 254143657856LLU;
	int64_t x56 = INT64_MIN;

	t13 = (x53&(x54==(x55|x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 8U;
	int32_t x59 = INT32_MAX;
	volatile int32_t t14 = -2548435;

	t14 = (x57&(x58==(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	uint8_t x63 = 1U;

	t15 = (x61&(x62==(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int16_t x66 = 41;
	volatile int32_t x68 = INT32_MAX;

	t16 = (x65&(x66==(x67|x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = -85LL;
	uint16_t x70 = 154U;
	int16_t x71 = INT16_MAX;
	int16_t x72 = -1;

	t17 = (x69&(x70==(x71|x72)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 1342648326240750LL;
	int8_t x74 = -1;
	volatile int16_t x75 = INT16_MAX;
	int32_t x76 = -1296;
	int64_t t18 = -9804071241276LL;

	t18 = (x73&(x74==(x75|x76)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = UINT64_MAX;
	static int64_t t19 = 22847655151541854LL;

	t19 = (x77&(x78==(x79|x80)));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x83 = 460718934671862LLU;
	static volatile int32_t x84 = INT32_MIN;
	int64_t t20 = 29160622112LL;

	t20 = (x81&(x82==(x83|x84)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 17;
	int16_t x86 = INT16_MIN;
	int64_t x87 = -1LL;
	volatile int8_t x88 = -1;
	volatile int32_t t21 = 436989;

	t21 = (x85&(x86==(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x90 = 45U;
	uint32_t x91 = 195359093U;
	int8_t x92 = -1;

	t22 = (x89&(x90==(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = UINT8_MAX;
	int64_t x94 = -1LL;
	int32_t x96 = 107729498;
	int32_t t23 = 1;

	t23 = (x93&(x94==(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	volatile int64_t x98 = -1LL;
	uint64_t x99 = 1LLU;
	static int16_t x100 = -1;
	volatile int64_t t24 = 24060LL;

	t24 = (x97&(x98==(x99|x100)));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	static int8_t x102 = 1;
	int16_t x103 = INT16_MAX;
	volatile uint64_t x104 = 104LLU;
	static int64_t t25 = -737021209617LL;

	t25 = (x101&(x102==(x103|x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -36093115186892102LL;
	volatile int16_t x106 = 0;
	int8_t x107 = INT8_MAX;
	volatile int64_t t26 = -3499103012565715520LL;

	t26 = (x105&(x106==(x107|x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = -520023607991LL;
	volatile uint64_t x111 = 19LLU;
	int32_t t27 = 207;

	t27 = (x109&(x110==(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 14;
	static uint64_t x114 = 175445464209180LLU;
	int8_t x115 = INT8_MIN;
	volatile int32_t t28 = 1;

	t28 = (x113&(x114==(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x118 = UINT32_MAX;
	static uint32_t x119 = 84096362U;
	int16_t x120 = INT16_MAX;
	uint64_t t29 = 792252051848403LLU;

	t29 = (x117&(x118==(x119|x120)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 195844265879345LLU;
	int8_t x123 = INT8_MAX;
	static int16_t x124 = INT16_MIN;
	volatile uint64_t t30 = 7218865886349494LLU;

	t30 = (x121&(x122==(x123|x124)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile uint16_t x127 = 14836U;
	static int32_t t31 = 15708702;

	t31 = (x125&(x126==(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x130 = INT32_MIN;
	int64_t x131 = INT64_MAX;

	t32 = (x129&(x130==(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	static int8_t x134 = INT8_MIN;
	static uint16_t x135 = UINT16_MAX;
	static int64_t x136 = INT64_MAX;
	volatile uint64_t t33 = 101418694544895LLU;

	t33 = (x133&(x134==(x135|x136)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 1U;
	uint64_t x138 = 17710356763269LLU;
	int32_t x139 = -1;
	volatile uint32_t x140 = 1U;
	static int32_t t34 = 30373496;

	t34 = (x137&(x138==(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 1129312U;
	static int64_t t35 = -796LL;

	t35 = (x141&(x142==(x143|x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = -1;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = -65590530;

	t36 = (x145&(x146==(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x150 = 76072211650012785LL;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = INT64_MAX;
	volatile int32_t t37 = -22602896;

	t37 = (x149&(x150==(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 14572LLU;
	static int16_t x154 = INT16_MIN;
	int16_t x156 = -14;
	static uint64_t t38 = 28017406343099LLU;

	t38 = (x153&(x154==(x155|x156)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = UINT8_MAX;
	int32_t x159 = -1;
	uint64_t x160 = 19540LLU;
	int32_t t39 = -1;

	t39 = (x157&(x158==(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	int32_t x162 = -56;
	int8_t x163 = -1;
	uint16_t x164 = 3U;

	t40 = (x161&(x162==(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;
	int8_t x168 = INT8_MAX;

	t41 = (x165&(x166==(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	static int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = 134226325LLU;
	volatile uint32_t x172 = 43174U;

	t42 = (x169&(x170==(x171|x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	static int64_t x174 = 12355828541054LL;
	int64_t x175 = 525LL;
	int8_t x176 = 10;

	t43 = (x173&(x174==(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	uint16_t x178 = UINT16_MAX;
	int32_t x179 = -64362;
	volatile int32_t x180 = 106;
	volatile int32_t t44 = 1786603;

	t44 = (x177&(x178==(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -123212292LL;
	static int16_t x182 = INT16_MIN;
	static int64_t t45 = -973591LL;

	t45 = (x181&(x182==(x183|x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x187 = -21496LL;
	int32_t x188 = 7;
	volatile int32_t t46 = -3754;

	t46 = (x185&(x186==(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = -1;
	uint8_t x192 = 14U;
	int32_t t47 = 26343;

	t47 = (x189&(x190==(x191|x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = -6;
	static uint8_t x195 = 11U;
	static uint64_t x196 = UINT64_MAX;
	int64_t t48 = 249399112391933090LL;

	t48 = (x193&(x194==(x195|x196)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	static volatile uint64_t x198 = UINT64_MAX;
	int32_t x199 = 136;
	static uint16_t x200 = 497U;
	volatile int32_t t49 = 1113843;

	t49 = (x197&(x198==(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 1606U;
	int8_t x204 = -1;

	t50 = (x201&(x202==(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -22;
	uint32_t x206 = 1171233799U;
	int64_t x207 = 1464979254LL;
	uint16_t x208 = 410U;
	volatile int32_t t51 = 443821918;

	t51 = (x205&(x206==(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -12246301LL;
	uint8_t x210 = 6U;
	static uint32_t x211 = 62019U;
	int16_t x212 = INT16_MIN;
	volatile int64_t t52 = -27LL;

	t52 = (x209&(x210==(x211|x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	static uint32_t x214 = UINT32_MAX;
	static uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 28U;
	int32_t t53 = -249186;

	t53 = (x213&(x214==(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -1;
	volatile int8_t x219 = INT8_MIN;
	static volatile int32_t t54 = -2781528;

	t54 = (x217&(x218==(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 107297577LLU;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = 44;
	volatile uint64_t t55 = 137730LLU;

	t55 = (x221&(x222==(x223|x224)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = 1501LLU;
	static volatile uint64_t x227 = 32LLU;

	t56 = (x225&(x226==(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x231 = INT32_MAX;
	volatile int32_t x232 = INT32_MIN;
	volatile int64_t t57 = -241605095859280211LL;

	t57 = (x229&(x230==(x231|x232)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int16_t x234 = 7868;
	uint64_t x235 = UINT64_MAX;
	volatile uint8_t x236 = 56U;

	t58 = (x233&(x234==(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -3508;
	volatile int8_t x239 = INT8_MIN;
	volatile uint8_t x240 = 13U;
	int32_t t59 = 3723311;

	t59 = (x237&(x238==(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	uint16_t x242 = UINT16_MAX;
	static int16_t x244 = -1;
	uint32_t t60 = 32074U;

	t60 = (x241&(x242==(x243|x244)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = -1;
	int64_t x246 = INT64_MIN;
	int8_t x247 = -12;
	static int64_t x248 = -77083853344473268LL;
	int32_t t61 = -674;

	t61 = (x245&(x246==(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MAX;
	static volatile uint8_t x250 = 6U;
	volatile uint8_t x251 = 25U;
	int64_t x252 = 36962356980527034LL;
	int32_t t62 = -529056;

	t62 = (x249&(x250==(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 32;
	volatile uint64_t x255 = 1714564LLU;
	volatile uint64_t x256 = 128529LLU;
	volatile int32_t t63 = 300958695;

	t63 = (x253&(x254==(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	static int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MIN;

	t64 = (x257&(x258==(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 3U;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 59U;
	static volatile uint32_t t65 = 10U;

	t65 = (x261&(x262==(x263|x264)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -567336LL;
	volatile int16_t x266 = INT16_MIN;
	static uint8_t x267 = 14U;
	volatile int64_t t66 = -28809752200878440LL;

	t66 = (x265&(x266==(x267|x268)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	static int32_t x270 = INT32_MIN;
	static int8_t x271 = -4;
	static uint32_t x272 = 123278U;
	static volatile uint64_t t67 = 1839766907725146LLU;

	t67 = (x269&(x270==(x271|x272)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = INT16_MIN;
	uint64_t x275 = UINT64_MAX;
	static volatile int32_t x276 = INT32_MAX;

	t68 = (x273&(x274==(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MIN;
	static int16_t x279 = INT16_MIN;
	volatile int32_t t69 = 625982327;

	t69 = (x277&(x278==(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = 648443189919025LLU;
	static uint8_t x282 = 65U;
	static volatile uint16_t x283 = UINT16_MAX;
	uint64_t t70 = 4063741570984739304LLU;

	t70 = (x281&(x282==(x283|x284)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -10032827099LL;
	static int32_t x286 = 29829432;
	int64_t x287 = INT64_MIN;
	volatile int16_t x288 = INT16_MIN;
	int64_t t71 = -2786LL;

	t71 = (x285&(x286==(x287|x288)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int16_t x290 = INT16_MAX;
	int8_t x291 = INT8_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t72 = 1567;

	t72 = (x289&(x290==(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MIN;
	uint32_t x294 = 375162765U;
	uint16_t x295 = 3U;
	static int64_t x296 = -301333732LL;
	static int64_t t73 = -299704381LL;

	t73 = (x293&(x294==(x295|x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -1;
	int64_t x299 = -38865546089888584LL;
	int64_t x300 = INT64_MAX;
	volatile int32_t t74 = -1;

	t74 = (x297&(x298==(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int8_t x302 = INT8_MIN;
	static uint16_t x303 = 30461U;
	int16_t x304 = INT16_MIN;
	int32_t t75 = -6911;

	t75 = (x301&(x302==(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -7;
	int32_t x306 = INT32_MIN;
	int8_t x307 = -29;
	int8_t x308 = -1;

	t76 = (x305&(x306==(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MAX;
	volatile int32_t t77 = 1;

	t77 = (x309&(x310==(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -27;
	int8_t x314 = -1;
	int16_t x315 = INT16_MAX;
	int16_t x316 = INT16_MAX;
	volatile int32_t t78 = 6657;

	t78 = (x313&(x314==(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 1188382U;
	volatile uint8_t x318 = 3U;
	static uint16_t x319 = 20168U;
	volatile uint16_t x320 = UINT16_MAX;
	uint32_t t79 = 1U;

	t79 = (x317&(x318==(x319|x320)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = 85375290;
	uint8_t x324 = 0U;
	volatile uint64_t t80 = 16LLU;

	t80 = (x321&(x322==(x323|x324)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x327 = 1U;
	int32_t x328 = -9867016;
	static int32_t t81 = -47;

	t81 = (x325&(x326==(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 13769;
	uint16_t x330 = 1551U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = -1;

	t82 = (x329&(x330==(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 61;
	volatile int8_t x334 = -1;
	int64_t x335 = 74167LL;
	int64_t x336 = INT64_MAX;
	volatile int32_t t83 = 17712907;

	t83 = (x333&(x334==(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MIN;
	uint32_t x339 = 47057068U;
	static volatile int16_t x340 = INT16_MIN;

	t84 = (x337&(x338==(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MIN;
	int64_t x343 = -1LL;
	int32_t t85 = 987556927;

	t85 = (x341&(x342==(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x346 = UINT8_MAX;
	int64_t x347 = INT64_MAX;
	int16_t x348 = 2;
	int32_t t86 = 67;

	t86 = (x345&(x346==(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 79308492;
	int32_t x350 = -2152;
	int16_t x351 = -2;

	t87 = (x349&(x350==(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x354 = UINT64_MAX;
	static int8_t x356 = -30;

	t88 = (x353&(x354==(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x358 = -1;
	uint8_t x359 = 45U;
	volatile uint64_t t89 = 42059943804094LLU;

	t89 = (x357&(x358==(x359|x360)));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x363 = INT16_MIN;
	uint32_t x364 = UINT32_MAX;
	int32_t t90 = 140782;

	t90 = (x361&(x362==(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -5003296;
	int16_t x366 = 228;
	volatile int32_t x367 = -734873836;
	int32_t x368 = INT32_MIN;
	int32_t t91 = 751849684;

	t91 = (x365&(x366==(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x370 = 111771U;
	volatile int64_t x371 = INT64_MIN;
	volatile int32_t t92 = -122;

	t92 = (x369&(x370==(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x374 = INT16_MIN;
	volatile int32_t x375 = INT32_MAX;
	int32_t x376 = 296030;
	uint32_t t93 = 887754481U;

	t93 = (x373&(x374==(x375|x376)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	volatile uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MAX;
	int32_t x380 = INT32_MIN;
	int64_t t94 = 576LL;

	t94 = (x377&(x378==(x379|x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = 255317485755LL;
	uint8_t x383 = UINT8_MAX;
	int16_t x384 = 13637;
	volatile uint32_t t95 = 0U;

	t95 = (x381&(x382==(x383|x384)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x387 = 0U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t96 = 7;

	t96 = (x385&(x386==(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x391 = 116U;
	int8_t x392 = INT8_MAX;
	volatile int32_t t97 = -190;

	t97 = (x389&(x390==(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 41;
	uint8_t x394 = 96U;
	int32_t x395 = INT32_MIN;
	static int32_t t98 = 46649514;

	t98 = (x393&(x394==(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = -1LL;
	int8_t x399 = 1;
	int32_t x400 = INT32_MAX;

	t99 = (x397&(x398==(x399|x400)));

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
