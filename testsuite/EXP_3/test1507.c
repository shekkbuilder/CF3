#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
uint16_t x3 = UINT16_MAX;
int32_t x6 = 6042;
static volatile int32_t t2 = -226564061;
int8_t x13 = 37;
uint64_t x15 = UINT64_MAX;
int64_t x22 = INT64_MAX;
static int64_t x23 = INT64_MIN;
int16_t x25 = -9090;
static int32_t x29 = INT32_MIN;
static uint32_t x36 = UINT32_MAX;
volatile int32_t t8 = 101589561;
int8_t x37 = 6;
volatile int16_t x42 = -5780;
int8_t x51 = INT8_MIN;
volatile int16_t x54 = 0;
volatile int32_t t13 = 18458030;
static int64_t x60 = INT64_MIN;
static int8_t x64 = INT8_MAX;
int8_t x68 = -1;
volatile uint8_t x70 = UINT8_MAX;
volatile int16_t x73 = INT16_MIN;
uint8_t x78 = 3U;
volatile int64_t t20 = 34864295LL;
volatile int8_t x89 = INT8_MIN;
int64_t x90 = -14711076173LL;
int8_t x91 = INT8_MAX;
int64_t x92 = INT64_MAX;
volatile int32_t t23 = -12143196;
uint64_t x100 = UINT64_MAX;
uint64_t t24 = 81766645257174LLU;
static int16_t x101 = -1;
int64_t x103 = -64653189LL;
volatile uint64_t t26 = 91071604490LLU;
volatile int64_t x110 = -25959856LL;
int8_t x117 = -1;
volatile int32_t x125 = 32501;
int16_t x128 = INT16_MIN;
int16_t x129 = INT16_MAX;
static uint32_t x132 = UINT32_MAX;
static uint64_t t32 = UINT64_MAX;
static uint64_t x143 = 1609035185LLU;
int16_t x148 = 7704;
volatile uint64_t x157 = UINT64_MAX;
uint64_t x162 = UINT64_MAX;
static uint64_t x163 = UINT64_MAX;
uint8_t x169 = 1U;
volatile uint32_t x175 = UINT32_MAX;
int32_t t43 = -452;
static int32_t x179 = -72337009;
int64_t t44 = 98LL;
int16_t x187 = INT16_MIN;
static int64_t x190 = INT64_MIN;
int64_t x196 = INT64_MIN;
int8_t x205 = INT8_MIN;
int16_t x206 = 347;
uint32_t x215 = 13793U;
int16_t x218 = 0;
int64_t x238 = -644LL;
uint8_t x256 = 107U;
int32_t t63 = INT32_MAX;
uint16_t x260 = UINT16_MAX;
int32_t x265 = INT32_MIN;
int8_t x266 = INT8_MIN;
int16_t x267 = -1;
int64_t x274 = INT64_MAX;
static int64_t t68 = INT64_MAX;
int64_t x283 = INT64_MIN;
uint64_t x286 = UINT64_MAX;
volatile uint8_t x295 = 2U;
int64_t x299 = INT64_MIN;
static uint16_t x301 = UINT16_MAX;
uint8_t x317 = 5U;
static int16_t x318 = INT16_MIN;
static int16_t x319 = -1;
int16_t x328 = 18;
volatile int64_t x331 = INT64_MIN;
volatile int64_t t84 = INT64_MAX;
static uint32_t t88 = UINT32_MAX;
volatile uint32_t x359 = 247393U;
uint64_t x362 = 2957626958LLU;
int16_t x364 = INT16_MAX;
uint64_t x368 = 311958244715633031LLU;
int8_t x370 = 1;
static int16_t x373 = INT16_MIN;
int32_t x375 = -1;
volatile uint32_t x379 = 230U;
static volatile int64_t x386 = 1470458056LL;
uint64_t t97 = UINT64_MAX;
uint16_t x394 = UINT16_MAX;
int16_t x395 = INT16_MAX;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	int64_t x4 = INT64_MIN;
	volatile int64_t t0 = 138153674609098849LL;

	t0 = ((x1|x2)|(x3<x4));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x7 = -1LL;
	int32_t x8 = INT32_MAX;
	static volatile int64_t t1 = INT64_MAX;

	t1 = ((x5|x6)|(x7<x8));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int8_t x10 = INT8_MAX;
	uint32_t x11 = UINT32_MAX;
	static uint64_t x12 = 6296797239876304273LLU;

	t2 = ((x9|x10)|(x11<x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = INT8_MAX;
	uint32_t x16 = 5U;
	static int32_t t3 = 24455;

	t3 = ((x13|x14)|(x15<x16));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = 1442798224500LL;
	uint32_t x18 = UINT32_MAX;
	volatile int8_t x19 = INT8_MAX;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 15595432286033165LL;

	t4 = ((x17|x18)|(x19<x20));

	if (t4 != 1443109011455LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x24 = -1LL;
	volatile int64_t t5 = INT64_MAX;

	t5 = ((x21|x22)|(x23<x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = ((x25|x26)|(x27<x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -2;
	volatile int32_t x31 = INT32_MAX;
	static uint64_t x32 = UINT64_MAX;
	int32_t t7 = 8121;

	t7 = ((x29|x30)|(x31<x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint16_t x34 = 211U;
	int16_t x35 = -152;

	t8 = ((x33|x34)|(x35<x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	uint32_t x39 = 2596U;
	volatile int32_t x40 = -1;
	volatile int32_t t9 = 579;

	t9 = ((x37|x38)|(x39<x40));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MIN;
	uint64_t x43 = 6LLU;
	static int8_t x44 = -1;
	int64_t t10 = 3000329534LL;

	t10 = ((x41|x42)|(x43<x44));

	if (t10 != -5779LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = 1573250;
	uint16_t x46 = 122U;
	static volatile int8_t x47 = INT8_MIN;
	volatile int16_t x48 = -4;
	volatile int32_t t11 = -1523;

	t11 = ((x45|x46)|(x47<x48));

	if (t11 != 1573371) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = 640324LL;
	uint32_t x52 = 71761U;
	static volatile int64_t t12 = 14105574770529LL;

	t12 = ((x49|x50)|(x51<x52));

	if (t12 != -60LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x53 = -12624;
	int16_t x55 = 14098;
	uint64_t x56 = 8LLU;

	t13 = ((x53|x54)|(x55<x56));

	if (t13 != -12624) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 63U;
	static uint64_t x58 = UINT64_MAX;
	static volatile int32_t x59 = INT32_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x57|x58)|(x59<x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 2U;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = ((x61|x62)|(x63<x64));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 2980;
	volatile int32_t x66 = INT32_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x65|x66)|(x67<x68));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static volatile int64_t x71 = INT64_MAX;
	static int16_t x72 = INT16_MIN;
	int32_t t17 = -62334;

	t17 = ((x69|x70)|(x71<x72));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 1937U;
	int8_t x75 = INT8_MIN;
	uint8_t x76 = 1U;
	static uint32_t t18 = 219709380U;

	t18 = ((x73|x74)|(x75<x76));

	if (t18 != 4294936465U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 816606;
	static uint8_t x79 = UINT8_MAX;
	int32_t x80 = 7;
	int32_t t19 = -130;

	t19 = ((x77|x78)|(x79<x80));

	if (t19 != 816607) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile int32_t x82 = INT32_MIN;
	int16_t x83 = -7;
	volatile int8_t x84 = 1;

	t20 = ((x81|x82)|(x83<x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	uint8_t x87 = UINT8_MAX;
	volatile int64_t x88 = 394125LL;
	volatile int64_t t21 = 70849LL;

	t21 = ((x85|x86)|(x87<x88));

	if (t21 != -127LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t t22 = -6451611LL;

	t22 = ((x89|x90)|(x91<x92));

	if (t22 != -77LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = 126;
	int8_t x95 = INT8_MIN;
	volatile uint64_t x96 = UINT64_MAX;

	t23 = ((x93|x94)|(x95<x96));

	if (t23 != -2147483521) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 23272150201927LLU;
	uint16_t x98 = UINT16_MAX;
	volatile int64_t x99 = INT64_MIN;

	t24 = ((x97|x98)|(x99<x100));

	if (t24 != 23272150204415LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x102 = 3U;
	volatile int16_t x104 = 25;
	volatile int32_t t25 = -15148457;

	t25 = ((x101|x102)|(x103<x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = 7U;
	static uint64_t x106 = 63365LLU;
	static int16_t x107 = -48;
	volatile uint16_t x108 = UINT16_MAX;

	t26 = ((x105|x106)|(x107<x108));

	if (t26 != 63367LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x109 = UINT16_MAX;
	volatile uint64_t x111 = 630734256LLU;
	volatile int8_t x112 = INT8_MIN;
	int64_t t27 = 66912107883LL;

	t27 = ((x109|x110)|(x111<x112));

	if (t27 != -25952257LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -8142;
	int32_t x114 = -1;
	int32_t x115 = 2210;
	uint8_t x116 = UINT8_MAX;
	int32_t t28 = 0;

	t28 = ((x113|x114)|(x115<x116));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = UINT64_MAX;
	int16_t x119 = -1;
	int16_t x120 = 11;
	static uint64_t t29 = UINT64_MAX;

	t29 = ((x117|x118)|(x119<x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 26U;
	int32_t x122 = -1;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -1;
	volatile int32_t t30 = 2347989;

	t30 = ((x121|x122)|(x123<x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	volatile int8_t x127 = INT8_MIN;
	int32_t t31 = 3997;

	t31 = ((x125|x126)|(x127<x128));

	if (t31 != -2147451147) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x130 = UINT64_MAX;
	static int32_t x131 = 49502264;

	t32 = ((x129|x130)|(x131<x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 0U;
	uint16_t x134 = 10U;
	int16_t x135 = 4;
	int16_t x136 = 1;
	static int32_t t33 = 70372748;

	t33 = ((x133|x134)|(x135<x136));

	if (t33 != 10) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	static int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t34 = 102374;

	t34 = ((x137|x138)|(x139<x140));

	if (t34 != -2147483393) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int64_t x142 = INT64_MAX;
	uint8_t x144 = UINT8_MAX;
	static volatile int64_t t35 = 1LL;

	t35 = ((x141|x142)|(x143<x144));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = UINT64_MAX;
	volatile int64_t x146 = -8591594852619LL;
	int8_t x147 = INT8_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = ((x145|x146)|(x147<x148));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	static int64_t x150 = -1LL;
	int64_t x151 = INT64_MAX;
	int16_t x152 = INT16_MIN;
	static int64_t t37 = 7263469459594LL;

	t37 = ((x149|x150)|(x151<x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int32_t x154 = INT32_MIN;
	static volatile uint16_t x155 = UINT16_MAX;
	volatile uint64_t x156 = 61133630934LLU;
	volatile int32_t t38 = -12;

	t38 = ((x153|x154)|(x155<x156));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x158 = INT64_MAX;
	int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MIN;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x157|x158)|(x159<x160));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = ((x161|x162)|(x163<x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 0;
	int64_t x166 = -1LL;
	static int64_t x167 = -1LL;
	int16_t x168 = INT16_MAX;
	static int64_t t41 = -6763914544LL;

	t41 = ((x165|x166)|(x167<x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 49U;
	static int32_t t42 = -183817;

	t42 = ((x169|x170)|(x171<x172));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = 63;
	volatile int8_t x174 = 10;
	static volatile int16_t x176 = -1;

	t43 = ((x173|x174)|(x175<x176));

	if (t43 != 63) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	static volatile int16_t x178 = -1;
	int32_t x180 = 0;

	t44 = ((x177|x178)|(x179<x180));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = UINT16_MAX;
	volatile int8_t x183 = 0;
	uint8_t x184 = 52U;
	volatile int32_t t45 = -6;

	t45 = ((x181|x182)|(x183<x184));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 0;
	int64_t x186 = INT64_MIN;
	static volatile uint64_t x188 = 412LLU;
	int64_t t46 = INT64_MIN;

	t46 = ((x185|x186)|(x187<x188));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int64_t x191 = -1LL;
	uint16_t x192 = 4731U;
	volatile int64_t t47 = -1LL;

	t47 = ((x189|x190)|(x191<x192));

	if (t47 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 8940U;
	static uint16_t x194 = 936U;
	int64_t x195 = INT64_MIN;
	uint32_t t48 = 3564U;

	t48 = ((x193|x194)|(x195<x196));

	if (t48 != 9196U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -197311;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	static int64_t x200 = INT64_MIN;
	int32_t t49 = 46856370;

	t49 = ((x197|x198)|(x199<x200));

	if (t49 != -197121) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int64_t x202 = 0LL;
	static volatile int16_t x203 = -13;
	int8_t x204 = INT8_MAX;
	static volatile int64_t t50 = INT64_MAX;

	t50 = ((x201|x202)|(x203<x204));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x207 = UINT32_MAX;
	int8_t x208 = -31;
	int32_t t51 = -669446;

	t51 = ((x205|x206)|(x207<x208));

	if (t51 != -37) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = 0U;
	int64_t x210 = INT64_MIN;
	uint8_t x211 = 0U;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t52 = INT64_MIN;

	t52 = ((x209|x210)|(x211<x212));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	int16_t x216 = 260;
	static int32_t t53 = -2117825;

	t53 = ((x213|x214)|(x215<x216));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -1;
	uint32_t x219 = UINT32_MAX;
	static uint16_t x220 = 951U;
	int32_t t54 = -821087214;

	t54 = ((x217|x218)|(x219<x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	volatile int16_t x222 = 184;
	volatile int8_t x223 = 2;
	static volatile int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -3630;

	t55 = ((x221|x222)|(x223<x224));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	int32_t x226 = 19084;
	int32_t x227 = -60;
	int32_t x228 = INT32_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = ((x225|x226)|(x227<x228));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	int8_t x230 = INT8_MIN;
	int64_t x231 = 1282637059LL;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -14052;

	t57 = ((x229|x230)|(x231<x232));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	static int8_t x234 = INT8_MAX;
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -14;

	t58 = ((x233|x234)|(x235<x236));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = -1LL;
	volatile int16_t x239 = INT16_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t59 = 27102LL;

	t59 = ((x237|x238)|(x239<x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 2771U;
	int16_t x242 = -1;
	int32_t x243 = INT32_MAX;
	volatile int64_t x244 = -1LL;
	volatile int32_t t60 = 9;

	t60 = ((x241|x242)|(x243<x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MAX;
	int32_t x246 = -1;
	int64_t x247 = INT64_MIN;
	uint16_t x248 = 2289U;
	int32_t t61 = 1058792329;

	t61 = ((x245|x246)|(x247<x248));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MAX;
	int8_t x250 = 3;
	volatile uint32_t x251 = 9239U;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = -479986844;

	t62 = ((x249|x250)|(x251<x252));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	int8_t x254 = INT8_MAX;
	static volatile int64_t x255 = INT64_MAX;

	t63 = ((x253|x254)|(x255<x256));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 17498U;
	volatile int8_t x258 = INT8_MIN;
	static uint32_t x259 = UINT32_MAX;
	uint32_t t64 = 193U;

	t64 = ((x257|x258)|(x259<x260));

	if (t64 != 4294967258U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	uint8_t x262 = 50U;
	int16_t x263 = -102;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -119998233;

	t65 = ((x261|x262)|(x263<x264));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x268 = 0U;
	int32_t t66 = 14063015;

	t66 = ((x265|x266)|(x267<x268));

	if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 61U;
	volatile uint64_t x270 = 307425806LLU;
	int8_t x271 = -1;
	uint16_t x272 = 21552U;
	volatile uint64_t t67 = 22193806LLU;

	t67 = ((x269|x270)|(x271<x272));

	if (t67 != 307425855LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 265U;
	int8_t x275 = INT8_MAX;
	int32_t x276 = -52;

	t68 = ((x273|x274)|(x275<x276));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x277 = 53552U;
	static int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MIN;
	uint8_t x280 = 6U;
	volatile uint32_t t69 = 239831U;

	t69 = ((x277|x278)|(x279<x280));

	if (t69 != 2147537201U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 454U;
	uint8_t x282 = 0U;
	int64_t x284 = INT64_MAX;
	volatile uint32_t t70 = 476972684U;

	t70 = ((x281|x282)|(x283<x284));

	if (t70 != 455U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int32_t x287 = INT32_MIN;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x285|x286)|(x287<x288));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	uint64_t x290 = 8209LLU;
	static uint8_t x291 = 1U;
	int16_t x292 = -6753;
	uint64_t t72 = 31570LLU;

	t72 = ((x289|x290)|(x291<x292));

	if (t72 != 9223372036854784017LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MAX;
	int16_t x294 = -1;
	uint32_t x296 = 1U;
	int32_t t73 = -1;

	t73 = ((x293|x294)|(x295<x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	volatile uint16_t x298 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -71;

	t74 = ((x297|x298)|(x299<x300));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = -387437370;
	int64_t x303 = -1798LL;
	volatile uint64_t x304 = 160990823802272LLU;
	volatile int32_t t75 = -5957302;

	t75 = ((x301|x302)|(x303<x304));

	if (t75 != -387383297) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x306 = 930U;
	uint8_t x307 = 87U;
	volatile uint32_t x308 = UINT32_MAX;
	static volatile int32_t t76 = 34527;

	t76 = ((x305|x306)|(x307<x308));

	if (t76 != 1023) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = -2;
	static volatile int32_t x311 = -1;
	volatile uint8_t x312 = 35U;
	volatile int32_t t77 = -41753;

	t77 = ((x309|x310)|(x311<x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	volatile int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	int64_t x316 = -1LL;
	volatile int64_t t78 = -3563LL;

	t78 = ((x313|x314)|(x315<x316));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x320 = -1;
	static int32_t t79 = 44832;

	t79 = ((x317|x318)|(x319<x320));

	if (t79 != -32763) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile uint16_t x322 = 0U;
	int32_t x323 = -105024032;
	volatile int16_t x324 = 6;
	volatile int32_t t80 = 480693;

	t80 = ((x321|x322)|(x323<x324));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 4U;
	int64_t x327 = -10LL;
	int32_t t81 = -1;

	t81 = ((x325|x326)|(x327<x328));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 0U;
	int32_t x330 = INT32_MIN;
	volatile uint16_t x332 = 119U;
	volatile int32_t t82 = -227;

	t82 = ((x329|x330)|(x331<x332));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MIN;
	uint64_t x334 = 53186518931384LLU;
	static uint16_t x335 = UINT16_MAX;
	uint16_t x336 = UINT16_MAX;
	uint64_t t83 = 3529798161LLU;

	t83 = ((x333|x334)|(x335<x336));

	if (t83 != 9223425223373707192LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 3U;
	int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MIN;
	int64_t x340 = INT64_MIN;

	t84 = ((x337|x338)|(x339<x340));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MAX;
	int16_t x342 = -1;
	uint64_t x343 = 437LLU;
	int16_t x344 = -14;
	int64_t t85 = -223388189108246112LL;

	t85 = ((x341|x342)|(x343<x344));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = INT64_MAX;
	volatile int32_t x346 = 4080;
	int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MIN;
	int64_t t86 = INT64_MAX;

	t86 = ((x345|x346)|(x347<x348));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 213U;
	uint8_t x350 = 4U;
	uint32_t x351 = UINT32_MAX;
	int64_t x352 = 66027LL;
	volatile int32_t t87 = -12636933;

	t87 = ((x349|x350)|(x351<x352));

	if (t87 != 213) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x353 = -1;
	uint32_t x354 = 193710501U;
	static uint16_t x355 = 21047U;
	volatile uint8_t x356 = UINT8_MAX;

	t88 = ((x353|x354)|(x355<x356));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	uint16_t x358 = UINT16_MAX;
	uint32_t x360 = 15991U;
	int32_t t89 = 76600172;

	t89 = ((x357|x358)|(x359<x360));

	if (t89 != -2147418113) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int16_t x363 = -1;
	static uint64_t t90 = 442329163931226028LLU;

	t90 = ((x361|x362)|(x363<x364));

	if (t90 != 4294967295LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 1;
	volatile int8_t x366 = INT8_MIN;
	uint32_t x367 = 538137U;
	int32_t t91 = 82169;

	t91 = ((x365|x366)|(x367<x368));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	int8_t x371 = -1;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = 2;

	t92 = ((x369|x370)|(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = INT32_MAX;
	int8_t x376 = 13;
	static volatile int32_t t93 = 17492;

	t93 = ((x373|x374)|(x375<x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x377 = INT32_MAX;
	uint32_t x378 = 0U;
	int16_t x380 = INT16_MIN;
	static uint32_t t94 = 65185U;

	t94 = ((x377|x378)|(x379<x380));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 2759349312852515LL;
	static int16_t x382 = 10020;
	static int8_t x383 = -1;
	volatile int8_t x384 = INT8_MIN;
	static volatile int64_t t95 = -1LL;

	t95 = ((x381|x382)|(x383<x384));

	if (t95 != 2759349312861991LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int64_t x385 = INT64_MAX;
	int32_t x387 = INT32_MIN;
	int8_t x388 = 1;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x385|x386)|(x387<x388));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	uint64_t x390 = UINT64_MAX;
	static volatile uint64_t x391 = 3319884312118195LLU;
	uint64_t x392 = 2LLU;

	t97 = ((x389|x390)|(x391<x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -325;
	uint32_t x396 = 0U;
	volatile int32_t t98 = 0;

	t98 = ((x393|x394)|(x395<x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x397 = -1;
	int16_t x398 = -127;
	uint64_t x399 = UINT64_MAX;
	volatile int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -54215009;

	t99 = ((x397|x398)|(x399<x400));

	if (t99 != -1) { NG(); } else { ; }
	
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
