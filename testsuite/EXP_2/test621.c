#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x5 = -1;
int32_t x15 = -1;
uint16_t x17 = 15U;
int8_t x26 = INT8_MIN;
int64_t x31 = 1544LL;
volatile int32_t t7 = -379480;
uint8_t x36 = 1U;
uint64_t x38 = UINT64_MAX;
int16_t x40 = -1;
int8_t x43 = INT8_MAX;
int32_t x49 = 260813374;
int16_t x62 = INT16_MIN;
volatile int8_t x65 = INT8_MIN;
volatile int32_t t17 = -241554;
int64_t x74 = -61987963673147885LL;
uint8_t x76 = 1U;
static int16_t x81 = INT16_MAX;
volatile int32_t t23 = 4096717;
int16_t x98 = INT16_MAX;
static volatile int64_t x99 = INT64_MIN;
volatile int32_t t24 = -12610;
static volatile int8_t x104 = INT8_MAX;
int64_t x108 = INT64_MIN;
volatile int32_t t27 = 81067770;
uint64_t x113 = 20444072049LLU;
int32_t x116 = 437522822;
volatile int32_t t31 = 2;
int8_t x131 = INT8_MIN;
int16_t x139 = INT16_MIN;
static uint8_t x140 = 14U;
volatile int16_t x146 = -4092;
int32_t x151 = INT32_MIN;
int32_t t36 = -3;
int64_t x155 = -1LL;
int8_t x172 = INT8_MIN;
static int64_t x179 = -94578368284029989LL;
uint16_t x181 = 4343U;
int32_t t44 = 233051638;
volatile int16_t x185 = INT16_MAX;
uint32_t x187 = 2107362085U;
static int16_t x192 = -1;
int64_t x198 = INT64_MIN;
static uint8_t x204 = 125U;
volatile uint64_t x207 = 1264827LLU;
int32_t t49 = 3239;
int16_t x210 = INT16_MIN;
int32_t x212 = 18;
int16_t x223 = -34;
int32_t x229 = INT32_MIN;
uint64_t x235 = 8305590125234005314LLU;
int64_t x238 = -1564356LL;
static int32_t x240 = -52953341;
int64_t x243 = INT64_MIN;
static volatile int32_t t58 = -28490;
volatile int32_t x245 = INT32_MAX;
int8_t x246 = -4;
volatile int32_t x248 = INT32_MIN;
volatile int8_t x250 = 11;
uint64_t x256 = 10347273351849555LLU;
volatile int32_t t61 = -4001177;
uint64_t x263 = UINT64_MAX;
volatile uint16_t x267 = UINT16_MAX;
int16_t x272 = -1552;
static uint16_t x274 = UINT16_MAX;
static int32_t t65 = 1;
int64_t x278 = INT64_MAX;
volatile int8_t x279 = 10;
volatile int8_t x284 = -12;
uint16_t x291 = 10450U;
uint8_t x296 = UINT8_MAX;
int32_t t70 = -43743465;
int32_t x297 = -9155;
int16_t x300 = 40;
int32_t x303 = -1;
static int32_t t74 = -25618;
static int16_t x324 = INT16_MAX;
int32_t t76 = 29;
volatile int8_t x326 = -1;
int64_t x339 = INT64_MIN;
int32_t t80 = -37;
static int64_t x342 = -16LL;
static volatile int8_t x346 = INT8_MAX;
volatile uint32_t x348 = 15114206U;
volatile uint32_t x351 = 453471U;
int64_t x352 = -1LL;
volatile uint16_t x356 = UINT16_MAX;
volatile int64_t x357 = INT64_MIN;
uint64_t x362 = 913240095887435722LLU;
int32_t x367 = 102;
static int32_t t87 = -1950;
static int32_t x371 = INT32_MAX;
uint32_t x376 = 14U;
volatile int16_t x377 = INT16_MIN;
static volatile int32_t t90 = 28142225;
uint16_t x384 = 0U;
static volatile int8_t x391 = -1;
uint8_t x409 = UINT8_MAX;
uint64_t x411 = 31LLU;
int32_t t98 = -11;
uint8_t x419 = UINT8_MAX;
volatile int32_t t99 = -112534;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = 24U;
	static uint8_t x3 = 40U;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = 7;

	t0 = ((x1<(x2/x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 46U;
	uint8_t x7 = UINT8_MAX;
	static volatile uint32_t x8 = 22609079U;
	int32_t t1 = 1;

	t1 = ((x5<(x6/x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 0;
	int8_t x10 = 13;
	int16_t x11 = -247;
	int64_t x12 = 391LL;
	volatile int32_t t2 = -672757834;

	t2 = ((x9<(x10/x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	int8_t x16 = INT8_MAX;
	int32_t t3 = 96427967;

	t3 = ((x13<(x14/x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 14U;
	uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 152U;
	int32_t t4 = 80954;

	t4 = ((x17<(x18/x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = 9U;
	int8_t x22 = 5;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = -67013951868LL;
	volatile int32_t t5 = 4347286;

	t5 = ((x21<(x22/x23))<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	int32_t x27 = INT32_MAX;
	int16_t x28 = INT16_MIN;
	volatile int32_t t6 = 331;

	t6 = ((x25<(x26/x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -1;
	uint8_t x30 = 1U;
	volatile uint32_t x32 = 2506U;

	t7 = ((x29<(x30/x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	int64_t x34 = 106754LL;
	uint32_t x35 = 129029310U;
	static volatile int32_t t8 = -300287286;

	t8 = ((x33<(x34/x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int64_t x39 = -1LL;
	volatile int32_t t9 = 3896;

	t9 = ((x37<(x38/x39))<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = 29U;
	static uint16_t x44 = 1329U;
	static int32_t t10 = -3784;

	t10 = ((x41<(x42/x43))<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int64_t x46 = -1LL;
	static int8_t x47 = INT8_MIN;
	static int64_t x48 = INT64_MAX;
	int32_t t11 = 6711;

	t11 = ((x45<(x46/x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MAX;
	int32_t x51 = 5;
	static volatile uint16_t x52 = UINT16_MAX;
	static volatile int32_t t12 = -8314964;

	t12 = ((x49<(x50/x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -82;

	t13 = ((x53<(x54/x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int8_t x58 = INT8_MIN;
	int8_t x59 = -1;
	int8_t x60 = -5;
	int32_t t14 = -2244189;

	t14 = ((x57<(x58/x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = -1;
	volatile int32_t t15 = -3;

	t15 = ((x61<(x62/x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x66 = INT16_MIN;
	int64_t x67 = 835LL;
	int16_t x68 = 248;
	volatile int32_t t16 = 727068;

	t16 = ((x65<(x66/x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	static volatile uint32_t x72 = UINT32_MAX;

	t17 = ((x69<(x70/x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint8_t x75 = 2U;
	static int32_t t18 = -357313;

	t18 = ((x73<(x74/x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	volatile int16_t x78 = -1;
	volatile uint32_t x79 = 292466U;
	static uint16_t x80 = 102U;
	int32_t t19 = -109;

	t19 = ((x77<(x78/x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 8200U;
	volatile uint32_t x84 = UINT32_MAX;
	int32_t t20 = 0;

	t20 = ((x81<(x82/x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 30754U;
	uint64_t x86 = 4LLU;
	int16_t x87 = 1;
	int8_t x88 = INT8_MAX;
	static int32_t t21 = 2429926;

	t21 = ((x85<(x86/x87))<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 107U;
	volatile int8_t x90 = -12;
	int64_t x91 = -3LL;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 75008797;

	t22 = ((x89<(x90/x91))<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	volatile int64_t x94 = 58770354354621LL;
	uint64_t x95 = 11706LLU;
	volatile int32_t x96 = -1;

	t23 = ((x93<(x94/x95))<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	int32_t x100 = INT32_MIN;

	t24 = ((x97<(x98/x99))<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 7U;
	int16_t x102 = -15426;
	int8_t x103 = INT8_MIN;
	volatile int32_t t25 = 357744449;

	t25 = ((x101<(x102/x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	int8_t x106 = -1;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t t26 = -149;

	t26 = ((x105<(x106/x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	int64_t x110 = -40511550084812LL;
	uint8_t x111 = 3U;
	int8_t x112 = 10;

	t27 = ((x109<(x110/x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x114 = 3503U;
	int32_t x115 = INT32_MIN;
	static volatile int32_t t28 = -66640604;

	t28 = ((x113<(x114/x115))<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	static volatile int32_t x118 = INT32_MIN;
	static uint32_t x119 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = 23162618;

	t29 = ((x117<(x118/x119))<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = UINT32_MAX;
	int32_t x122 = -1;
	int16_t x123 = -1;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 986;

	t30 = ((x121<(x122/x123))<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x125 = 457345255612LL;
	uint8_t x126 = UINT8_MAX;
	uint32_t x127 = 2495U;
	static int32_t x128 = -1;

	t31 = ((x125<(x126/x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -27;
	static int8_t x130 = -1;
	static int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = 1316;

	t32 = ((x129<(x130/x131))<=x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -2719545348LL;
	static volatile int8_t x138 = -1;
	volatile int32_t t33 = -5026140;

	t33 = ((x137<(x138/x139))<=x140);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int16_t x142 = 17;
	volatile uint32_t x143 = UINT32_MAX;
	volatile int16_t x144 = INT16_MAX;
	int32_t t34 = 84694696;

	t34 = ((x141<(x142/x143))<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = 696378;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 0;
	static int32_t t35 = -1;

	t35 = ((x145<(x146/x147))<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	int8_t x152 = -30;

	t36 = ((x149<(x150/x151))<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = -26048343832LL;
	uint8_t x154 = UINT8_MAX;
	volatile int64_t x156 = -1LL;
	static int32_t t37 = -209;

	t37 = ((x153<(x154/x155))<=x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = -1;
	int32_t x158 = INT32_MIN;
	int16_t x159 = -6688;
	int8_t x160 = 1;
	volatile int32_t t38 = -365;

	t38 = ((x157<(x158/x159))<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = -1LL;
	uint16_t x162 = 1095U;
	uint8_t x163 = 30U;
	uint32_t x164 = 20555U;
	static volatile int32_t t39 = -3996533;

	t39 = ((x161<(x162/x163))<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 26LLU;
	int8_t x166 = 12;
	int32_t x167 = INT32_MAX;
	int16_t x168 = -168;
	int32_t t40 = -51986;

	t40 = ((x165<(x166/x167))<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -1LL;
	int64_t x170 = 23759214116846006LL;
	int64_t x171 = INT64_MAX;
	static volatile int32_t t41 = 146;

	t41 = ((x169<(x170/x171))<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	uint64_t x174 = 39996213690LLU;
	volatile int64_t x175 = -811341673LL;
	uint16_t x176 = 111U;
	static int32_t t42 = -7180216;

	t42 = ((x173<(x174/x175))<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = 3612;
	static int8_t x178 = INT8_MIN;
	uint32_t x180 = 1U;
	volatile int32_t t43 = 5;

	t43 = ((x177<(x178/x179))<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x182 = 17222U;
	uint16_t x183 = 15U;
	uint64_t x184 = 29033103LLU;

	t44 = ((x181<(x182/x183))<=x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x186 = INT32_MIN;
	volatile int32_t x188 = -2121;
	int32_t t45 = 24;

	t45 = ((x185<(x186/x187))<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = UINT32_MAX;
	int64_t x190 = 1051LL;
	uint64_t x191 = 29088454173LLU;
	volatile int32_t t46 = -113273;

	t46 = ((x189<(x190/x191))<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = -82;
	int32_t x199 = INT32_MIN;
	int16_t x200 = -1;
	int32_t t47 = -2979840;

	t47 = ((x197<(x198/x199))<=x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x201 = -10;
	int32_t x202 = INT32_MIN;
	int64_t x203 = INT64_MIN;
	volatile int32_t t48 = 71774767;

	t48 = ((x201<(x202/x203))<=x204);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = 157LL;
	int16_t x206 = 0;
	static int32_t x208 = INT32_MAX;

	t49 = ((x205<(x206/x207))<=x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int8_t x211 = INT8_MIN;
	int32_t t50 = -4875;

	t50 = ((x209<(x210/x211))<=x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x213 = 1608U;
	int32_t x214 = 122;
	volatile int32_t x215 = -1;
	uint16_t x216 = UINT16_MAX;
	int32_t t51 = 189287972;

	t51 = ((x213<(x214/x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x217 = -2094058;
	static uint16_t x218 = 57U;
	uint16_t x219 = UINT16_MAX;
	volatile int64_t x220 = INT64_MAX;
	int32_t t52 = 63125702;

	t52 = ((x217<(x218/x219))<=x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = -422;
	static volatile int32_t x222 = INT32_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t53 = 980;

	t53 = ((x221<(x222/x223))<=x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = -1;
	static volatile uint32_t x226 = UINT32_MAX;
	int64_t x227 = 5613655011379127LL;
	int64_t x228 = -1LL;
	int32_t t54 = 78984320;

	t54 = ((x225<(x226/x227))<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x230 = INT32_MAX;
	static int16_t x231 = 2;
	volatile uint16_t x232 = 14499U;
	volatile int32_t t55 = 107272065;

	t55 = ((x229<(x230/x231))<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x233 = -38446392132298LL;
	static volatile int64_t x234 = -1LL;
	volatile uint32_t x236 = UINT32_MAX;
	volatile int32_t t56 = 16;

	t56 = ((x233<(x234/x235))<=x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 9843090U;
	int64_t x239 = 100248LL;
	volatile int32_t t57 = 218;

	t57 = ((x237<(x238/x239))<=x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 107045908639LLU;
	static int32_t x244 = -792835766;

	t58 = ((x241<(x242/x243))<=x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x247 = -62;
	volatile int32_t t59 = 118259177;

	t59 = ((x245<(x246/x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -15728304;
	static volatile uint16_t x251 = 4U;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t60 = 39340;

	t60 = ((x249<(x250/x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = 693U;
	int16_t x254 = -1;
	uint32_t x255 = 878626U;

	t61 = ((x253<(x254/x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = UINT8_MAX;
	int64_t x262 = INT64_MAX;
	int8_t x264 = 0;
	volatile int32_t t62 = 2192452;

	t62 = ((x261<(x262/x263))<=x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x265 = UINT16_MAX;
	static volatile int64_t x266 = -10LL;
	volatile int8_t x268 = -1;
	int32_t t63 = 19446007;

	t63 = ((x265<(x266/x267))<=x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x269 = -3;
	int8_t x270 = -15;
	int32_t x271 = INT32_MIN;
	volatile int32_t t64 = 1383558;

	t64 = ((x269<(x270/x271))<=x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x275 = 3;
	uint64_t x276 = 9538645812314178LLU;

	t65 = ((x273<(x274/x275))<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x277 = INT8_MIN;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t66 = -351533471;

	t66 = ((x277<(x278/x279))<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x281 = -2023;
	int64_t x282 = INT64_MAX;
	int8_t x283 = INT8_MAX;
	volatile int32_t t67 = 6410398;

	t67 = ((x281<(x282/x283))<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x285 = -507200913632LL;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MIN;
	volatile int32_t t68 = 1;

	t68 = ((x285<(x286/x287))<=x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	int8_t x290 = -1;
	volatile int8_t x292 = INT8_MIN;
	static volatile int32_t t69 = -146893215;

	t69 = ((x289<(x290/x291))<=x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x293 = UINT8_MAX;
	int16_t x294 = 2459;
	int8_t x295 = -1;

	t70 = ((x293<(x294/x295))<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x298 = INT8_MIN;
	uint32_t x299 = 192U;
	volatile int32_t t71 = 1145493;

	t71 = ((x297<(x298/x299))<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = -28;
	static int16_t x302 = -1;
	int32_t x304 = INT32_MIN;
	volatile int32_t t72 = -744;

	t72 = ((x301<(x302/x303))<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -1;
	static volatile int64_t x306 = -1LL;
	uint64_t x307 = 63684949514097020LLU;
	static int32_t x308 = INT32_MIN;
	int32_t t73 = 563291;

	t73 = ((x305<(x306/x307))<=x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	volatile int8_t x310 = 20;
	int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;

	t74 = ((x309<(x310/x311))<=x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = -223418926626LL;
	volatile uint32_t x316 = 5U;
	volatile int32_t t75 = 929;

	t75 = ((x313<(x314/x315))<=x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = INT16_MIN;
	static int8_t x322 = INT8_MIN;
	volatile uint8_t x323 = 7U;

	t76 = ((x321<(x322/x323))<=x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 29U;
	static int64_t x327 = -10676688LL;
	static volatile int32_t x328 = INT32_MAX;
	int32_t t77 = -3067096;

	t77 = ((x325<(x326/x327))<=x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 2179206U;
	uint16_t x330 = 1070U;
	int32_t x331 = -25;
	int64_t x332 = INT64_MIN;
	static volatile int32_t t78 = 1;

	t78 = ((x329<(x330/x331))<=x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = 12;
	int32_t x334 = 253;
	uint64_t x335 = 1433818847LLU;
	static int64_t x336 = INT64_MAX;
	static int32_t t79 = 2;

	t79 = ((x333<(x334/x335))<=x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x337 = 0U;
	static uint16_t x338 = UINT16_MAX;
	uint64_t x340 = 9458834392775219LLU;

	t80 = ((x337<(x338/x339))<=x340);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = INT64_MAX;
	int8_t x343 = INT8_MIN;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t81 = 524941570;

	t81 = ((x341<(x342/x343))<=x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x345 = -1;
	static int16_t x347 = INT16_MIN;
	volatile int32_t t82 = 2836;

	t82 = ((x345<(x346/x347))<=x348);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = -1;
	volatile int32_t t83 = 29681530;

	t83 = ((x349<(x350/x351))<=x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = INT8_MAX;
	uint8_t x354 = 39U;
	int32_t x355 = INT32_MIN;
	static volatile int32_t t84 = -373350167;

	t84 = ((x353<(x354/x355))<=x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x358 = 1555U;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t85 = 27;

	t85 = ((x357<(x358/x359))<=x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	int64_t x363 = -1LL;
	uint8_t x364 = 0U;
	int32_t t86 = 12800;

	t86 = ((x361<(x362/x363))<=x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	uint8_t x368 = UINT8_MAX;

	t87 = ((x365<(x366/x367))<=x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile int32_t t88 = 576;

	t88 = ((x369<(x370/x371))<=x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 0U;
	int8_t x375 = INT8_MIN;
	int32_t t89 = 264297174;

	t89 = ((x373<(x374/x375))<=x376);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x378 = INT8_MAX;
	volatile uint32_t x379 = UINT32_MAX;
	int16_t x380 = INT16_MAX;

	t90 = ((x377<(x378/x379))<=x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = INT8_MAX;
	uint8_t x382 = 1U;
	int32_t x383 = INT32_MIN;
	volatile int32_t t91 = 834;

	t91 = ((x381<(x382/x383))<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x385 = INT8_MIN;
	int8_t x386 = 21;
	volatile int16_t x387 = 2373;
	static int16_t x388 = INT16_MIN;
	static int32_t t92 = 313388;

	t92 = ((x385<(x386/x387))<=x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	static int8_t x390 = INT8_MIN;
	static uint16_t x392 = UINT16_MAX;
	volatile int32_t t93 = -1039781;

	t93 = ((x389<(x390/x391))<=x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x393 = 239U;
	int16_t x394 = INT16_MIN;
	volatile int16_t x395 = INT16_MIN;
	uint8_t x396 = 1U;
	volatile int32_t t94 = -243;

	t94 = ((x393<(x394/x395))<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MIN;
	int16_t x400 = -1;
	static int32_t t95 = -1;

	t95 = ((x397<(x398/x399))<=x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = INT32_MIN;
	volatile int32_t x406 = INT32_MIN;
	int8_t x407 = 2;
	int32_t x408 = -1;
	static int32_t t96 = -11;

	t96 = ((x405<(x406/x407))<=x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x410 = UINT16_MAX;
	static uint16_t x412 = 631U;
	volatile int32_t t97 = 1074193;

	t97 = ((x409<(x410/x411))<=x412);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x413 = 0;
	uint32_t x414 = UINT32_MAX;
	uint32_t x415 = 9728U;
	int32_t x416 = INT32_MAX;

	t98 = ((x413<(x414/x415))<=x416);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 11U;
	int16_t x418 = INT16_MIN;
	int64_t x420 = INT64_MIN;

	t99 = ((x417<(x418/x419))<=x420);

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
