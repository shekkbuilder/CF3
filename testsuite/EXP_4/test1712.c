#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 8U;
volatile int32_t t0 = 11;
uint64_t x6 = UINT64_MAX;
volatile uint16_t x8 = 8U;
volatile int32_t t2 = 2384;
static int16_t x15 = -1;
uint64_t x16 = 27062LLU;
uint8_t x23 = 8U;
uint64_t x24 = 679569LLU;
static int16_t x28 = INT16_MIN;
uint16_t x37 = UINT16_MAX;
static int64_t x39 = INT64_MIN;
int32_t t8 = 162;
volatile int64_t x41 = -1LL;
int8_t x51 = -14;
int32_t x53 = 38205;
static int8_t x54 = -1;
static uint16_t x58 = UINT16_MAX;
int32_t t13 = 52341;
volatile int8_t x64 = 44;
int16_t x65 = INT16_MAX;
int64_t x66 = INT64_MIN;
uint64_t x75 = 10239LLU;
static uint64_t x78 = 13LLU;
volatile int32_t x79 = 34711;
int32_t x80 = -1;
int32_t x81 = INT32_MAX;
static int64_t x85 = -1LL;
uint8_t x89 = 9U;
volatile int32_t t21 = 19;
int64_t x98 = -1LL;
int8_t x99 = INT8_MIN;
volatile int32_t t22 = -472822;
int8_t x107 = 31;
static int16_t x109 = INT16_MIN;
int32_t x114 = INT32_MIN;
static int32_t x118 = -199730115;
static int32_t t27 = 43315041;
int16_t x124 = 2461;
int8_t x126 = -24;
int8_t x130 = -1;
volatile int16_t x135 = -1;
int8_t x147 = INT8_MIN;
int32_t t33 = -5550;
int32_t x149 = -1;
uint64_t x150 = 1574248680695LLU;
static int32_t x156 = 4;
int8_t x162 = INT8_MAX;
uint64_t x171 = 4849696LLU;
static int16_t x174 = 8726;
static uint8_t x175 = 106U;
volatile int32_t t39 = -26;
uint16_t x178 = UINT16_MAX;
int8_t x182 = INT8_MIN;
int8_t x183 = INT8_MIN;
uint32_t x186 = 257967071U;
int16_t x187 = -4565;
int8_t x188 = INT8_MIN;
volatile int32_t t42 = 2545593;
uint32_t x193 = 0U;
volatile int8_t x198 = 27;
volatile int32_t t47 = 27;
volatile int16_t x213 = INT16_MAX;
static int16_t x215 = INT16_MAX;
int32_t x221 = -1;
int64_t x231 = INT64_MIN;
int32_t x234 = -1;
static volatile int32_t t53 = -153452789;
int32_t t54 = -97648634;
static int16_t x245 = INT16_MIN;
int64_t x257 = -1LL;
volatile int32_t t59 = -71;
volatile int16_t x264 = -1;
int8_t x265 = 15;
int16_t x267 = INT16_MIN;
int32_t x273 = -23;
static uint8_t x283 = 5U;
volatile uint32_t x284 = 17U;
static uint64_t x293 = 513017LLU;
int32_t t68 = -106492283;
int16_t x302 = 8;
int64_t x303 = INT64_MIN;
int8_t x304 = INT8_MAX;
volatile int32_t t69 = 217028689;
int32_t x305 = -1;
uint64_t x306 = 31953LLU;
static int32_t t73 = -35983;
int32_t t75 = 120987759;
static int16_t x333 = -1;
int16_t x342 = 3;
int16_t x346 = INT16_MIN;
volatile int16_t x347 = INT16_MIN;
volatile int32_t t79 = -1;
uint16_t x356 = 37U;
int32_t x357 = -19;
int8_t x358 = -1;
uint16_t x361 = 190U;
static uint16_t x362 = UINT16_MAX;
static int32_t t84 = 428829879;
int32_t x375 = INT32_MAX;
uint32_t x380 = UINT32_MAX;
volatile int8_t x383 = INT8_MAX;
int16_t x384 = -89;
int64_t x388 = -1LL;
int64_t x389 = -1LL;
int32_t t89 = 3;
static int8_t x395 = INT8_MAX;
volatile uint16_t x400 = 4594U;
static int8_t x404 = -1;
static int8_t x413 = INT8_MIN;
volatile int32_t t95 = 138823;
uint32_t x417 = 41989151U;
int8_t x436 = 15;


void f0(void) {
	int8_t x2 = -7;
	int8_t x3 = INT8_MIN;
	volatile uint32_t x4 = UINT32_MAX;

	t0 = (x1<(x2-(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 38U;
	int64_t x7 = 37756LL;
	int32_t t1 = 363230;

	t1 = (x5<(x6-(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	volatile int8_t x10 = INT8_MAX;
	volatile int64_t x11 = INT64_MIN;
	uint16_t x12 = 5U;

	t2 = (x9<(x10-(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 3861077645445284862LLU;
	static int8_t x14 = 11;
	static volatile int32_t t3 = 48829305;

	t3 = (x13<(x14-(x15&x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 0;
	int32_t x18 = -3012;
	volatile uint8_t x19 = 0U;
	volatile int64_t x20 = -1LL;
	int32_t t4 = 12;

	t4 = (x17<(x18-(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	int32_t t5 = 454;

	t5 = (x21<(x22-(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 3;
	static uint16_t x26 = UINT16_MAX;
	int64_t x27 = -455294064464LL;
	static int32_t t6 = 25521;

	t6 = (x25<(x26-(x27&x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static volatile int8_t x30 = -4;
	volatile int16_t x31 = INT16_MAX;
	uint64_t x32 = 379722LLU;
	static volatile int32_t t7 = -83;

	t7 = (x29<(x30-(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x38 = -1LL;
	int32_t x40 = INT32_MAX;

	t8 = (x37<(x38-(x39&x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x42 = 9U;
	uint16_t x43 = 15U;
	int64_t x44 = -9585080LL;
	volatile int32_t t9 = -66720943;

	t9 = (x41<(x42-(x43&x44)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MAX;
	int16_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t10 = 2603728;

	t10 = (x45<(x46-(x47&x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 4;
	int32_t x50 = -1;
	uint16_t x52 = 5653U;
	volatile int32_t t11 = -4184856;

	t11 = (x49<(x50-(x51&x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x55 = 18U;
	static int64_t x56 = -1LL;
	volatile int32_t t12 = 3892;

	t12 = (x53<(x54-(x55&x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 2U;
	volatile uint32_t x59 = 1916078U;
	static int8_t x60 = 46;

	t13 = (x57<(x58-(x59&x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int64_t x62 = INT64_MAX;
	int64_t x63 = -1871LL;
	int32_t t14 = 362767243;

	t14 = (x61<(x62-(x63&x64)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x67 = 2599998841LLU;
	int16_t x68 = -1;
	int32_t t15 = -369095743;

	t15 = (x65<(x66-(x67&x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -67LL;
	volatile uint8_t x74 = 37U;
	int32_t x76 = -1;
	volatile int32_t t16 = 124775;

	t16 = (x73<(x74-(x75&x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static volatile int32_t t17 = -51246;

	t17 = (x77<(x78-(x79&x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x82 = -1;
	volatile int8_t x83 = INT8_MIN;
	volatile int32_t x84 = INT32_MAX;
	static int32_t t18 = -7398;

	t18 = (x81<(x82-(x83&x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = 71U;
	volatile int16_t x87 = INT16_MIN;
	uint16_t x88 = 8220U;
	static volatile int32_t t19 = -138734;

	t19 = (x85<(x86-(x87&x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 1718916U;
	static uint64_t x92 = 1832437061LLU;
	int32_t t20 = 849200;

	t20 = (x89<(x90-(x91&x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = 233;
	int16_t x94 = INT16_MIN;
	static volatile int32_t x95 = INT32_MIN;
	int32_t x96 = -438661;

	t21 = (x93<(x94-(x95&x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 2301690065LLU;
	volatile int64_t x100 = -141453364407LL;

	t22 = (x97<(x98-(x99&x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x101 = 0;
	int16_t x102 = INT16_MIN;
	int64_t x103 = 6821LL;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t23 = 4544;

	t23 = (x101<(x102-(x103&x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = 93;
	int8_t x106 = INT8_MIN;
	int8_t x108 = 50;
	volatile int32_t t24 = -243;

	t24 = (x105<(x106-(x107&x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = -1;
	static int32_t x111 = -1;
	static int16_t x112 = -1;
	int32_t t25 = -414270;

	t25 = (x109<(x110-(x111&x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x113 = -51222;
	volatile int8_t x115 = INT8_MIN;
	int16_t x116 = 34;
	volatile int32_t t26 = 3;

	t26 = (x113<(x114-(x115&x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 4465241398540463LLU;
	int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MIN;

	t27 = (x117<(x118-(x119&x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	int32_t x122 = 1595;
	int16_t x123 = INT16_MAX;
	volatile int32_t t28 = 52038391;

	t28 = (x121<(x122-(x123&x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 789LLU;
	int64_t x127 = 539730330707359017LL;
	static uint16_t x128 = UINT16_MAX;
	int32_t t29 = -23650722;

	t29 = (x125<(x126-(x127&x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = UINT16_MAX;
	static uint64_t x131 = 602687290392LLU;
	int64_t x132 = INT64_MIN;
	int32_t t30 = 22503;

	t30 = (x129<(x130-(x131&x132)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -16;
	static int8_t x134 = -1;
	static volatile uint16_t x136 = 6U;
	static volatile int32_t t31 = -1771;

	t31 = (x133<(x134-(x135&x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 3;
	volatile int32_t t32 = -5410641;

	t32 = (x137<(x138-(x139&x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	static int16_t x146 = 6;
	int16_t x148 = INT16_MIN;

	t33 = (x145<(x146-(x147&x148)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x151 = 3;
	uint16_t x152 = 6U;
	volatile int32_t t34 = 126;

	t34 = (x149<(x150-(x151&x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	volatile int16_t x154 = INT16_MIN;
	static int8_t x155 = INT8_MIN;
	int32_t t35 = -403777091;

	t35 = (x153<(x154-(x155&x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = INT8_MAX;
	int32_t x163 = -1;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t36 = 976;

	t36 = (x161<(x162-(x163&x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 1;
	static int64_t x166 = INT64_MIN;
	static volatile int32_t x167 = -1;
	int32_t x168 = -1;
	int32_t t37 = -2190921;

	t37 = (x165<(x166-(x167&x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MIN;
	static int32_t x170 = INT32_MIN;
	uint32_t x172 = 42983U;
	volatile int32_t t38 = 1;

	t38 = (x169<(x170-(x171&x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = 0;
	int16_t x176 = INT16_MIN;

	t39 = (x173<(x174-(x175&x176)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	volatile int16_t x179 = INT16_MIN;
	uint32_t x180 = 7571U;
	int32_t t40 = -888019;

	t40 = (x177<(x178-(x179&x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = INT64_MIN;
	static uint64_t x184 = 3706258128830065LLU;
	volatile int32_t t41 = 47192550;

	t41 = (x181<(x182-(x183&x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x185 = 50966389487395LLU;

	t42 = (x185<(x186-(x187&x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -496542055410582231LL;
	volatile uint64_t x190 = 423594448188LLU;
	int8_t x191 = INT8_MAX;
	uint16_t x192 = UINT16_MAX;
	static int32_t t43 = -143;

	t43 = (x189<(x190-(x191&x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x194 = UINT32_MAX;
	volatile uint64_t x195 = 2484511964131LLU;
	uint16_t x196 = 7U;
	int32_t t44 = -14;

	t44 = (x193<(x194-(x195&x196)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x197 = 3U;
	volatile int16_t x199 = 5;
	int32_t x200 = INT32_MAX;
	int32_t t45 = -451191283;

	t45 = (x197<(x198-(x199&x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 380224014U;
	uint64_t x206 = UINT64_MAX;
	static uint16_t x207 = 7693U;
	static int8_t x208 = INT8_MIN;
	int32_t t46 = 99;

	t46 = (x205<(x206-(x207&x208)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = UINT32_MAX;
	int64_t x210 = -3230055206867622LL;
	uint32_t x211 = 1U;
	volatile int8_t x212 = INT8_MIN;

	t47 = (x209<(x210-(x211&x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x214 = UINT8_MAX;
	uint64_t x216 = 64265019105LLU;
	volatile int32_t t48 = -237399;

	t48 = (x213<(x214-(x215&x216)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x217 = 3U;
	volatile uint64_t x218 = 54819098534528LLU;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -1;
	static int32_t t49 = 6009;

	t49 = (x217<(x218-(x219&x220)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x222 = INT64_MIN;
	uint64_t x223 = 8341788600581765991LLU;
	volatile int64_t x224 = INT64_MIN;
	int32_t t50 = -967629885;

	t50 = (x221<(x222-(x223&x224)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = 3886968514995509LLU;
	volatile uint32_t x227 = 1632669U;
	int64_t x228 = INT64_MIN;
	int32_t t51 = 41;

	t51 = (x225<(x226-(x227&x228)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = 8U;
	uint8_t x232 = 1U;
	int32_t t52 = 205697855;

	t52 = (x229<(x230-(x231&x232)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = INT32_MIN;
	volatile int16_t x235 = 584;
	int32_t x236 = -1058240;

	t53 = (x233<(x234-(x235&x236)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x237 = 219LLU;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 364011U;
	int64_t x240 = INT64_MIN;

	t54 = (x237<(x238-(x239&x240)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x241 = INT16_MAX;
	static int64_t x242 = -1LL;
	volatile int8_t x243 = -1;
	static int32_t x244 = INT32_MIN;
	static volatile int32_t t55 = -356072;

	t55 = (x241<(x242-(x243&x244)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x246 = 63U;
	uint32_t x247 = UINT32_MAX;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t56 = 36;

	t56 = (x245<(x246-(x247&x248)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x249 = 1;
	uint64_t x250 = 8514782895786879097LLU;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t57 = 1;

	t57 = (x249<(x250-(x251&x252)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MIN;
	int16_t x254 = INT16_MAX;
	volatile int16_t x255 = -10;
	volatile int32_t x256 = 5944;
	volatile int32_t t58 = -10525540;

	t58 = (x253<(x254-(x255&x256)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = 1;
	int16_t x259 = INT16_MIN;
	int8_t x260 = -1;

	t59 = (x257<(x258-(x259&x260)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -148577;
	int16_t x262 = -5681;
	static int32_t x263 = INT32_MIN;
	int32_t t60 = 21;

	t60 = (x261<(x262-(x263&x264)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x266 = 0;
	uint16_t x268 = 5U;
	int32_t t61 = 0;

	t61 = (x265<(x266-(x267&x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x269 = INT32_MIN;
	static volatile int16_t x270 = -1;
	volatile int64_t x271 = -1LL;
	int16_t x272 = 67;
	volatile int32_t t62 = -1289470;

	t62 = (x269<(x270-(x271&x272)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = INT64_MAX;
	int16_t x275 = INT16_MAX;
	uint32_t x276 = 346208406U;
	int32_t t63 = 4206;

	t63 = (x273<(x274-(x275&x276)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = -21217;
	volatile int64_t x278 = 620995LL;
	int64_t x279 = INT64_MIN;
	int16_t x280 = 11;
	int32_t t64 = 8544;

	t64 = (x277<(x278-(x279&x280)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x281 = UINT8_MAX;
	static int32_t x282 = 15;
	volatile int32_t t65 = 320346;

	t65 = (x281<(x282-(x283&x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x289 = INT32_MAX;
	volatile int8_t x290 = -1;
	volatile int8_t x291 = -1;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t66 = 3;

	t66 = (x289<(x290-(x291&x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x294 = INT32_MAX;
	uint64_t x295 = 3287001606487481093LLU;
	static uint8_t x296 = 0U;
	volatile int32_t t67 = -2338;

	t67 = (x293<(x294-(x295&x296)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = -1LL;
	static uint32_t x298 = 3034U;
	int32_t x299 = INT32_MIN;
	int64_t x300 = -1LL;

	t68 = (x297<(x298-(x299&x300)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = 2884369U;

	t69 = (x301<(x302-(x303&x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x307 = INT8_MIN;
	int64_t x308 = -3109LL;
	static int32_t t70 = 48764295;

	t70 = (x305<(x306-(x307&x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x309 = INT16_MAX;
	int64_t x310 = 2288799689349LL;
	volatile int32_t x311 = INT32_MIN;
	static int64_t x312 = 3787973LL;
	volatile int32_t t71 = 1;

	t71 = (x309<(x310-(x311&x312)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 14091;
	volatile int8_t x314 = -1;
	static int32_t x315 = INT32_MIN;
	uint64_t x316 = 59045LLU;
	int32_t t72 = 133309460;

	t72 = (x313<(x314-(x315&x316)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x317 = UINT16_MAX;
	int32_t x318 = -103167933;
	int64_t x319 = 2372898LL;
	int16_t x320 = INT16_MIN;

	t73 = (x317<(x318-(x319&x320)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = 9U;
	int64_t x323 = INT64_MAX;
	uint16_t x324 = 1U;
	int32_t t74 = -990;

	t74 = (x321<(x322-(x323&x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x329 = 2U;
	uint32_t x330 = 95289761U;
	int64_t x331 = INT64_MAX;
	uint16_t x332 = 15126U;

	t75 = (x329<(x330-(x331&x332)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x334 = INT16_MAX;
	static int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t76 = 2;

	t76 = (x333<(x334-(x335&x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	volatile uint64_t x339 = 15LLU;
	uint8_t x340 = 15U;
	volatile int32_t t77 = 11;

	t77 = (x337<(x338-(x339&x340)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = INT32_MIN;
	uint64_t x343 = UINT64_MAX;
	int8_t x344 = -1;
	volatile int32_t t78 = -39;

	t78 = (x341<(x342-(x343&x344)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = UINT64_MAX;
	static int64_t x348 = INT64_MIN;

	t79 = (x345<(x346-(x347&x348)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 67U;
	uint8_t x351 = 1U;
	int64_t x352 = INT64_MAX;
	volatile int32_t t80 = 7357;

	t80 = (x349<(x350-(x351&x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MIN;
	static int8_t x354 = 0;
	uint64_t x355 = UINT64_MAX;
	int32_t t81 = 58;

	t81 = (x353<(x354-(x355&x356)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x359 = 15;
	volatile int64_t x360 = INT64_MIN;
	static volatile int32_t t82 = 0;

	t82 = (x357<(x358-(x359&x360)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x363 = UINT32_MAX;
	uint32_t x364 = 1815U;
	volatile int32_t t83 = -62;

	t83 = (x361<(x362-(x363&x364)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x369 = 1U;
	uint32_t x370 = UINT32_MAX;
	uint16_t x371 = 6967U;
	static int16_t x372 = INT16_MIN;

	t84 = (x369<(x370-(x371&x372)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = -1LL;
	int32_t x374 = INT32_MAX;
	static uint8_t x376 = 81U;
	static volatile int32_t t85 = 275;

	t85 = (x373<(x374-(x375&x376)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x377 = 1;
	int64_t x378 = 1LL;
	volatile uint64_t x379 = 7978711412735303LLU;
	int32_t t86 = -29115618;

	t86 = (x377<(x378-(x379&x380)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	volatile uint32_t x382 = 366280855U;
	volatile int32_t t87 = 3373192;

	t87 = (x381<(x382-(x383&x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x385 = 3076LLU;
	uint64_t x386 = UINT64_MAX;
	static int16_t x387 = 0;
	static volatile int32_t t88 = -3491;

	t88 = (x385<(x386-(x387&x388)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x390 = 361539LL;
	uint64_t x391 = 248LLU;
	static int16_t x392 = INT16_MAX;

	t89 = (x389<(x390-(x391&x392)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x393 = 2U;
	int16_t x394 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t90 = -102;

	t90 = (x393<(x394-(x395&x396)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	uint16_t x399 = 305U;
	volatile int32_t t91 = -6;

	t91 = (x397<(x398-(x399&x400)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x401 = INT64_MIN;
	volatile uint32_t x402 = 98357U;
	int64_t x403 = 382478893948LL;
	int32_t t92 = 379771;

	t92 = (x401<(x402-(x403&x404)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x405 = -627;
	uint16_t x406 = 10008U;
	static int32_t x407 = -1;
	volatile uint8_t x408 = 27U;
	volatile int32_t t93 = 25834810;

	t93 = (x405<(x406-(x407&x408)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = 673840;
	static uint8_t x411 = UINT8_MAX;
	int16_t x412 = INT16_MAX;
	static volatile int32_t t94 = -1;

	t94 = (x409<(x410-(x411&x412)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x414 = 60;
	uint16_t x415 = 23260U;
	int8_t x416 = -61;

	t95 = (x413<(x414-(x415&x416)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x418 = 656131746681603640LL;
	uint16_t x419 = 2U;
	int8_t x420 = 7;
	volatile int32_t t96 = -751850;

	t96 = (x417<(x418-(x419&x420)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x429 = -11685LL;
	int32_t x430 = INT32_MAX;
	int64_t x431 = -1LL;
	static uint8_t x432 = 19U;
	static int32_t t97 = -29001;

	t97 = (x429<(x430-(x431&x432)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MIN;
	static int64_t x434 = -873535659793LL;
	static int64_t x435 = INT64_MIN;
	volatile int32_t t98 = 5323;

	t98 = (x433<(x434-(x435&x436)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x437 = 3LLU;
	uint16_t x438 = 168U;
	int16_t x439 = INT16_MIN;
	int64_t x440 = -7497052496048298LL;
	volatile int32_t t99 = -327;

	t99 = (x437<(x438-(x439&x440)));

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
