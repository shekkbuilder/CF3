#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int64_t x3 = -96096LL;
int8_t x4 = 0;
volatile int16_t x9 = -1;
uint64_t x12 = 1LLU;
int32_t x16 = INT32_MAX;
uint8_t x21 = UINT8_MAX;
int64_t x24 = INT64_MIN;
int32_t t5 = -95;
static int64_t x26 = -37093623LL;
static int32_t x36 = -29508;
uint8_t x37 = 0U;
int64_t x41 = -13751900953LL;
uint64_t x42 = 754LLU;
int16_t x53 = 0;
volatile int32_t x69 = INT32_MIN;
static int8_t x77 = INT8_MIN;
volatile int8_t x80 = -1;
volatile int32_t t17 = -7236;
int16_t x91 = 0;
int64_t x98 = INT64_MIN;
volatile int32_t t20 = -1;
volatile int8_t x102 = -6;
uint16_t x113 = UINT16_MAX;
int32_t x114 = INT32_MIN;
static int64_t x117 = INT64_MIN;
volatile int32_t t26 = 77;
int32_t x137 = INT32_MIN;
uint8_t x147 = 22U;
static uint16_t x153 = UINT16_MAX;
int16_t x161 = INT16_MAX;
uint16_t x164 = 7912U;
int8_t x165 = -1;
static int32_t x172 = INT32_MIN;
uint16_t x173 = 6751U;
int32_t x175 = -1;
static int16_t x176 = -38;
int16_t x181 = -1;
static volatile int32_t t37 = -60632;
uint64_t x188 = 281238LLU;
volatile int16_t x197 = INT16_MIN;
int8_t x198 = INT8_MIN;
static uint64_t x204 = 95112LLU;
volatile int8_t x220 = 15;
int16_t x226 = INT16_MIN;
int8_t x229 = INT8_MIN;
uint64_t x232 = 1003568723916606147LLU;
volatile int16_t x245 = INT16_MIN;
static int64_t x249 = INT64_MIN;
static volatile int64_t x250 = INT64_MAX;
static int8_t x254 = INT8_MIN;
volatile uint8_t x259 = UINT8_MAX;
uint16_t x260 = 1U;
int64_t x265 = INT64_MAX;
int32_t x266 = INT32_MIN;
uint8_t x273 = UINT8_MAX;
uint16_t x278 = 44U;
static volatile int32_t t60 = 16127807;
static int64_t x290 = -1LL;
static int32_t t61 = 7;
int32_t x295 = INT32_MIN;
volatile int32_t t63 = 378128140;
static int8_t x306 = 0;
volatile uint32_t x316 = 360U;
uint64_t x321 = UINT64_MAX;
int8_t x322 = 21;
static int8_t x323 = INT8_MAX;
static int64_t x324 = -1LL;
int16_t x326 = -1;
int32_t x327 = INT32_MIN;
int16_t x329 = -33;
volatile int16_t x340 = -1537;
int8_t x349 = -1;
volatile uint32_t x350 = 4435737U;
int32_t t73 = 14970;
static uint16_t x355 = UINT16_MAX;
int8_t x367 = 2;
uint32_t x368 = 1047U;
int32_t x370 = 10;
uint16_t x374 = 236U;
uint8_t x375 = 96U;
uint16_t x377 = 1985U;
int32_t x382 = INT32_MIN;
static int32_t x384 = 0;
static uint32_t x386 = UINT32_MAX;
static int16_t x394 = INT16_MIN;
uint32_t x397 = 866U;
int32_t x398 = -1;
volatile int32_t t86 = 3;
int8_t x426 = INT8_MIN;
uint16_t x429 = 29744U;
int32_t x438 = INT32_MIN;
uint16_t x442 = 30534U;
int32_t x443 = INT32_MIN;
static volatile int64_t x444 = -1LL;
int64_t x446 = -3842532220117129LL;
static uint64_t x457 = UINT64_MAX;
uint16_t x465 = UINT16_MAX;
int8_t x468 = INT8_MAX;


void f0(void) {
	int8_t x1 = 1;
	int32_t t0 = 277;

	t0 = (x1<=(x2*(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	uint32_t x6 = 146U;
	int8_t x7 = INT8_MIN;
	int32_t x8 = 3;
	volatile int32_t t1 = -82;

	t1 = (x5<=(x6*(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	int32_t x11 = INT32_MAX;
	volatile int32_t t2 = 13;

	t2 = (x9<=(x10*(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint8_t x14 = 7U;
	volatile int64_t x15 = -1LL;
	volatile int32_t t3 = -15520;

	t3 = (x13<=(x14*(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static uint64_t x18 = 116LLU;
	int8_t x19 = -1;
	uint8_t x20 = 25U;
	int32_t t4 = 119165;

	t4 = (x17<=(x18*(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 37851LLU;
	int64_t x23 = -1LL;

	t5 = (x21<=(x22*(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -3;
	uint16_t x27 = UINT16_MAX;
	volatile int64_t x28 = INT64_MIN;
	static volatile int32_t t6 = -293172;

	t6 = (x25<=(x26*(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = INT16_MAX;
	static int8_t x35 = INT8_MAX;
	volatile int32_t t7 = 2038380;

	t7 = (x33<=(x34*(x35&x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = -1;
	int16_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	int32_t t8 = -543035406;

	t8 = (x37<=(x38*(x39&x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x43 = UINT16_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -2469;

	t9 = (x41<=(x42*(x43&x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = 11714799347LLU;
	uint16_t x55 = 3870U;
	int16_t x56 = -12;
	int32_t t10 = -557074;

	t10 = (x53<=(x54*(x55&x56)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	int16_t x58 = -1;
	int32_t x59 = -1949;
	uint16_t x60 = 0U;
	int32_t t11 = 577262;

	t11 = (x57<=(x58*(x59&x60)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x61 = 1;
	static volatile uint16_t x62 = 0U;
	volatile int32_t x63 = 472481305;
	int8_t x64 = -1;
	static int32_t t12 = -830037903;

	t12 = (x61<=(x62*(x63&x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = 23405746LLU;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -513LL;
	uint8_t x68 = 60U;
	volatile int32_t t13 = 138588;

	t13 = (x65<=(x66*(x67&x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	static volatile int64_t x72 = -7021851LL;
	volatile int32_t t14 = -13902289;

	t14 = (x69<=(x70*(x71&x72)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = INT8_MAX;
	volatile int64_t x74 = INT64_MIN;
	int16_t x75 = INT16_MAX;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = 144988474;

	t15 = (x73<=(x74*(x75&x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x78 = 1;
	static int8_t x79 = INT8_MAX;
	int32_t t16 = -15;

	t16 = (x77<=(x78*(x79&x80)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = INT64_MAX;
	int8_t x86 = -1;
	uint64_t x87 = 4087LLU;
	static uint32_t x88 = 2U;

	t17 = (x85<=(x86*(x87&x88)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = INT64_MIN;
	static uint16_t x90 = 11U;
	int64_t x92 = INT64_MAX;
	int32_t t18 = -13525023;

	t18 = (x89<=(x90*(x91&x92)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -17;
	static int8_t x94 = INT8_MIN;
	static volatile int32_t x95 = INT32_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t19 = 439324442;

	t19 = (x93<=(x94*(x95&x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x97 = UINT16_MAX;
	volatile int16_t x99 = INT16_MIN;
	volatile int32_t x100 = 973;

	t20 = (x97<=(x98*(x99&x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	static int64_t x103 = INT64_MIN;
	static int8_t x104 = 1;
	int32_t t21 = -1567;

	t21 = (x101<=(x102*(x103&x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = -1;
	uint16_t x106 = 209U;
	int16_t x107 = 396;
	int64_t x108 = 882LL;
	int32_t t22 = 1650653;

	t22 = (x105<=(x106*(x107&x108)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1LL;
	volatile int32_t x110 = INT32_MAX;
	volatile uint32_t x111 = 143U;
	static int32_t x112 = -1;
	volatile int32_t t23 = 116186;

	t23 = (x109<=(x110*(x111&x112)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x115 = 252LLU;
	uint16_t x116 = UINT16_MAX;
	int32_t t24 = 111106064;

	t24 = (x113<=(x114*(x115&x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x118 = 10522057992391524LLU;
	int32_t x119 = INT32_MIN;
	uint16_t x120 = 781U;
	static volatile int32_t t25 = -32933358;

	t25 = (x117<=(x118*(x119&x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -144LL;
	int32_t x130 = -49502722;
	uint32_t x131 = UINT32_MAX;
	uint8_t x132 = 0U;

	t26 = (x129<=(x130*(x131&x132)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x133 = 2906745U;
	static volatile int16_t x134 = INT16_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	int32_t t27 = -137;

	t27 = (x133<=(x134*(x135&x136)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x138 = -34;
	static int16_t x139 = INT16_MAX;
	volatile int32_t x140 = INT32_MIN;
	static int32_t t28 = -1;

	t28 = (x137<=(x138*(x139&x140)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x145 = INT8_MAX;
	static int64_t x146 = -1LL;
	int64_t x148 = -1LL;
	int32_t t29 = 0;

	t29 = (x145<=(x146*(x147&x148)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 2341783LLU;
	uint16_t x152 = 12U;
	volatile int32_t t30 = 1027159120;

	t30 = (x149<=(x150*(x151&x152)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x154 = -1;
	static uint8_t x155 = 3U;
	uint64_t x156 = 6816859190LLU;
	volatile int32_t t31 = -1033;

	t31 = (x153<=(x154*(x155&x156)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = INT16_MAX;
	int8_t x163 = -1;
	volatile int32_t t32 = -523;

	t32 = (x161<=(x162*(x163&x164)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x166 = INT16_MIN;
	int16_t x167 = 0;
	static volatile uint16_t x168 = 150U;
	int32_t t33 = 5077;

	t33 = (x165<=(x166*(x167&x168)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -15986;
	int64_t x170 = -116781LL;
	int8_t x171 = INT8_MIN;
	static volatile int32_t t34 = -1;

	t34 = (x169<=(x170*(x171&x172)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x174 = UINT64_MAX;
	static volatile int32_t t35 = 82;

	t35 = (x173<=(x174*(x175&x176)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = -1LL;
	int32_t x179 = -72905868;
	int64_t x180 = 5845504LL;
	volatile int32_t t36 = 772674;

	t36 = (x177<=(x178*(x179&x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x182 = -1;
	volatile uint8_t x183 = 0U;
	uint16_t x184 = 20622U;

	t37 = (x181<=(x182*(x183&x184)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x185 = INT64_MAX;
	uint64_t x186 = 388649904598613821LLU;
	int8_t x187 = -12;
	int32_t t38 = -46009677;

	t38 = (x185<=(x186*(x187&x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = 461012;
	int64_t x190 = INT64_MAX;
	volatile int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;
	int32_t t39 = -4967;

	t39 = (x189<=(x190*(x191&x192)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x199 = 157U;
	int16_t x200 = -1;
	volatile int32_t t40 = -26424807;

	t40 = (x197<=(x198*(x199&x200)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	static uint8_t x202 = 29U;
	uint32_t x203 = 7556532U;
	static volatile int32_t t41 = -41216;

	t41 = (x201<=(x202*(x203&x204)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MAX;
	static uint8_t x206 = 1U;
	int32_t x207 = INT32_MAX;
	int8_t x208 = -36;
	int32_t t42 = 1;

	t42 = (x205<=(x206*(x207&x208)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 17783LLU;
	static int32_t x211 = -1;
	int16_t x212 = 1513;
	static int32_t t43 = 414995673;

	t43 = (x209<=(x210*(x211&x212)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MAX;
	static uint32_t x218 = 30U;
	int64_t x219 = 54254534554181969LL;
	static int32_t t44 = 1632;

	t44 = (x217<=(x218*(x219&x220)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x221 = 233386LLU;
	volatile uint32_t x222 = 143235U;
	volatile int32_t x223 = INT32_MAX;
	static int32_t x224 = INT32_MIN;
	static volatile int32_t t45 = 6742865;

	t45 = (x221<=(x222*(x223&x224)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x225 = INT8_MIN;
	uint64_t x227 = 3490824440561483LLU;
	volatile uint64_t x228 = 8692202476677LLU;
	static volatile int32_t t46 = -21;

	t46 = (x225<=(x226*(x227&x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = 84U;
	int32_t t47 = -156964845;

	t47 = (x229<=(x230*(x231&x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x233 = 14068U;
	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	uint16_t x236 = 8550U;
	volatile int32_t t48 = -1050968485;

	t48 = (x233<=(x234*(x235&x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = -47;
	static volatile int32_t x238 = -102;
	static int64_t x239 = INT64_MIN;
	static volatile int8_t x240 = 1;
	volatile int32_t t49 = 48025685;

	t49 = (x237<=(x238*(x239&x240)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = -1;
	static int8_t x243 = -1;
	uint64_t x244 = 263364902212LLU;
	volatile int32_t t50 = 546;

	t50 = (x241<=(x242*(x243&x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MAX;
	static uint8_t x248 = 5U;
	int32_t t51 = 4713885;

	t51 = (x245<=(x246*(x247&x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x251 = INT64_MIN;
	volatile uint16_t x252 = 9403U;
	volatile int32_t t52 = 45;

	t52 = (x249<=(x250*(x251&x252)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = 2772814LL;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = INT64_MIN;
	volatile int32_t t53 = -3;

	t53 = (x253<=(x254*(x255&x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 14;
	uint32_t x258 = 4U;
	int32_t t54 = 0;

	t54 = (x257<=(x258*(x259&x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x261 = INT16_MIN;
	static int64_t x262 = -12575181502LL;
	volatile int32_t x263 = -1;
	uint16_t x264 = 19010U;
	volatile int32_t t55 = -2476;

	t55 = (x261<=(x262*(x263&x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 1U;
	volatile int32_t t56 = -84338584;

	t56 = (x265<=(x266*(x267&x268)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x269 = UINT8_MAX;
	uint8_t x270 = 5U;
	volatile int32_t x271 = -2451577;
	int16_t x272 = -6;
	static int32_t t57 = -14;

	t57 = (x269<=(x270*(x271&x272)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x274 = UINT32_MAX;
	static volatile uint16_t x275 = UINT16_MAX;
	static uint64_t x276 = 1975298357012840023LLU;
	static volatile int32_t t58 = -15486589;

	t58 = (x273<=(x274*(x275&x276)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = INT32_MAX;
	int8_t x279 = INT8_MIN;
	int8_t x280 = -1;
	int32_t t59 = 1;

	t59 = (x277<=(x278*(x279&x280)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = 1;
	int16_t x286 = 1;
	static int16_t x287 = -1;
	int32_t x288 = INT32_MIN;

	t60 = (x285<=(x286*(x287&x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = INT32_MIN;

	t61 = (x289<=(x290*(x291&x292)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x293 = INT8_MIN;
	int16_t x294 = -1;
	uint8_t x296 = 13U;
	volatile int32_t t62 = 0;

	t62 = (x293<=(x294*(x295&x296)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x301 = INT32_MIN;
	uint8_t x302 = 34U;
	uint16_t x303 = UINT16_MAX;
	static uint16_t x304 = 97U;

	t63 = (x301<=(x302*(x303&x304)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = 715U;
	uint16_t x307 = 1745U;
	uint64_t x308 = 450705947615LLU;
	static int32_t t64 = 468;

	t64 = (x305<=(x306*(x307&x308)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x309 = INT64_MAX;
	uint16_t x310 = 1624U;
	static uint16_t x311 = UINT16_MAX;
	static uint16_t x312 = 330U;
	static int32_t t65 = 1;

	t65 = (x309<=(x310*(x311&x312)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	volatile int16_t x314 = INT16_MIN;
	static uint64_t x315 = 2092062571689065256LLU;
	volatile int32_t t66 = -14540553;

	t66 = (x313<=(x314*(x315&x316)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t t67 = -3;

	t67 = (x321<=(x322*(x323&x324)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x325 = -1;
	volatile uint64_t x328 = UINT64_MAX;
	volatile int32_t t68 = -1288;

	t68 = (x325<=(x326*(x327&x328)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x330 = UINT16_MAX;
	static int8_t x331 = INT8_MAX;
	int8_t x332 = -1;
	int32_t t69 = 25654;

	t69 = (x329<=(x330*(x331&x332)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = INT8_MAX;
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = 172205316196930LL;
	uint64_t x336 = 62294828LLU;
	static volatile int32_t t70 = 1;

	t70 = (x333<=(x334*(x335&x336)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x337 = -1;
	static int16_t x338 = -1;
	static uint64_t x339 = 12395695298LLU;
	volatile int32_t t71 = -10875744;

	t71 = (x337<=(x338*(x339&x340)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x345 = -108;
	static int16_t x346 = -1;
	static volatile int8_t x347 = 0;
	static uint64_t x348 = 4257118600LLU;
	static volatile int32_t t72 = 101;

	t72 = (x345<=(x346*(x347&x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x351 = -113;
	volatile uint16_t x352 = 0U;

	t73 = (x349<=(x350*(x351&x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x353 = 2U;
	uint64_t x354 = UINT64_MAX;
	static int16_t x356 = 129;
	int32_t t74 = 260873252;

	t74 = (x353<=(x354*(x355&x356)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = -7211;
	uint16_t x358 = 11358U;
	int8_t x359 = 2;
	uint16_t x360 = 0U;
	static int32_t t75 = -1750833;

	t75 = (x357<=(x358*(x359&x360)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = INT32_MIN;
	static int16_t x362 = -1;
	int16_t x363 = INT16_MAX;
	uint8_t x364 = 12U;
	static volatile int32_t t76 = -3719;

	t76 = (x361<=(x362*(x363&x364)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = 0;
	int32_t t77 = -72903102;

	t77 = (x365<=(x366*(x367&x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MIN;
	int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t78 = -1;

	t78 = (x369<=(x370*(x371&x372)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 4004627LL;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t79 = 353762;

	t79 = (x373<=(x374*(x375&x376)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x378 = 2965308842751LL;
	int16_t x379 = INT16_MAX;
	volatile int32_t x380 = -1;
	int32_t t80 = 334781911;

	t80 = (x377<=(x378*(x379&x380)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x381 = INT64_MIN;
	static int64_t x383 = -1LL;
	static int32_t t81 = -4538;

	t81 = (x381<=(x382*(x383&x384)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x385 = INT64_MAX;
	volatile int16_t x387 = -1;
	volatile int32_t x388 = -124;
	volatile int32_t t82 = -333615735;

	t82 = (x385<=(x386*(x387&x388)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x389 = 10711U;
	static int8_t x390 = -1;
	static int32_t x391 = -1;
	uint8_t x392 = 14U;
	volatile int32_t t83 = -548;

	t83 = (x389<=(x390*(x391&x392)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x393 = INT16_MAX;
	int16_t x395 = -1;
	int64_t x396 = -1LL;
	volatile int32_t t84 = -106981;

	t84 = (x393<=(x394*(x395&x396)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x399 = 1;
	static uint8_t x400 = UINT8_MAX;
	int32_t t85 = 1;

	t85 = (x397<=(x398*(x399&x400)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = INT16_MIN;
	static int8_t x402 = -5;
	int8_t x403 = INT8_MIN;
	static volatile uint32_t x404 = 1476383946U;

	t86 = (x401<=(x402*(x403&x404)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = 979;
	uint8_t x414 = UINT8_MAX;
	static int32_t x415 = INT32_MIN;
	volatile uint16_t x416 = UINT16_MAX;
	int32_t t87 = 3742772;

	t87 = (x413<=(x414*(x415&x416)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = INT8_MIN;
	int32_t x418 = -562076971;
	int64_t x419 = -1LL;
	int32_t x420 = -1;
	volatile int32_t t88 = -12057;

	t88 = (x417<=(x418*(x419&x420)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = 1625LL;
	uint64_t x427 = 118817982755LLU;
	volatile int64_t x428 = 7900744131052658LL;
	int32_t t89 = 114175554;

	t89 = (x425<=(x426*(x427&x428)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x430 = INT8_MIN;
	int64_t x431 = INT64_MIN;
	static volatile uint32_t x432 = 0U;
	volatile int32_t t90 = 1;

	t90 = (x429<=(x430*(x431&x432)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = INT8_MAX;
	int64_t x435 = -1LL;
	int64_t x436 = -995882722LL;
	volatile int32_t t91 = 233766;

	t91 = (x433<=(x434*(x435&x436)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x437 = INT8_MAX;
	volatile uint16_t x439 = 147U;
	static int64_t x440 = INT64_MAX;
	volatile int32_t t92 = -5088817;

	t92 = (x437<=(x438*(x439&x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x441 = -1LL;
	volatile int32_t t93 = 0;

	t93 = (x441<=(x442*(x443&x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x445 = 33U;
	uint8_t x447 = 40U;
	volatile int64_t x448 = INT64_MIN;
	int32_t t94 = -392;

	t94 = (x445<=(x446*(x447&x448)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x453 = -1;
	static int32_t x454 = -1;
	volatile int64_t x455 = INT64_MIN;
	int64_t x456 = 4437069545117LL;
	static int32_t t95 = -493572;

	t95 = (x453<=(x454*(x455&x456)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x458 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	int64_t x460 = 45469498963LL;
	volatile int32_t t96 = 312;

	t96 = (x457<=(x458*(x459&x460)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x461 = 29130883287119LLU;
	volatile uint64_t x462 = UINT64_MAX;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = -495407918499915452LL;
	volatile int32_t t97 = 330646;

	t97 = (x461<=(x462*(x463&x464)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x466 = UINT32_MAX;
	int32_t x467 = INT32_MIN;
	volatile int32_t t98 = 56;

	t98 = (x465<=(x466*(x467&x468)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x469 = INT64_MIN;
	int32_t x470 = 39604;
	int16_t x471 = INT16_MAX;
	uint64_t x472 = UINT64_MAX;
	int32_t t99 = -63;

	t99 = (x469<=(x470*(x471&x472)));

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
