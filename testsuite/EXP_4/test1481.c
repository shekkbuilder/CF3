#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 0;
int32_t x5 = INT32_MIN;
int64_t x11 = 111123671LL;
uint32_t x21 = 472043819U;
static volatile int16_t x24 = INT16_MAX;
int64_t x27 = -55206450156439293LL;
uint32_t x44 = 1428913709U;
int64_t t11 = INT64_MIN;
int8_t x50 = INT8_MIN;
uint32_t x56 = 9U;
volatile int64_t x57 = INT64_MAX;
static volatile int64_t t14 = INT64_MAX;
static volatile int32_t x70 = -1;
static int32_t x73 = -2706335;
int16_t x75 = -1;
volatile int32_t t18 = -430254;
int32_t x88 = INT32_MAX;
int32_t x89 = -1;
int16_t x96 = 1319;
uint64_t x97 = UINT64_MAX;
static volatile uint32_t x99 = 21613912U;
uint64_t t24 = UINT64_MAX;
static uint64_t x103 = UINT64_MAX;
volatile int32_t t27 = 864366;
int64_t x113 = INT64_MAX;
static uint8_t x114 = UINT8_MAX;
volatile uint64_t x120 = UINT64_MAX;
volatile uint32_t x128 = 5844U;
static int32_t t31 = -1313;
static int32_t x131 = 669;
uint8_t x133 = 22U;
static volatile uint16_t x135 = 145U;
volatile int32_t t34 = 1;
volatile uint16_t x141 = 25U;
int32_t x143 = INT32_MIN;
int16_t x150 = INT16_MIN;
volatile int32_t t37 = 28;
int64_t x154 = -139311629058903985LL;
int64_t x161 = INT64_MIN;
int64_t t40 = INT64_MIN;
static int32_t x173 = -92515816;
volatile int64_t x174 = -4815858191574LL;
uint64_t x177 = UINT64_MAX;
volatile int64_t t45 = -128704779293501008LL;
static int8_t x189 = -49;
int8_t x191 = INT8_MAX;
volatile int32_t t47 = -400636460;
static uint8_t x194 = 62U;
static int16_t x197 = 6;
volatile uint32_t x203 = 428044U;
int32_t x206 = -1;
int64_t x210 = -1LL;
volatile int32_t t52 = -5;
uint32_t x216 = 2235864U;
uint64_t x217 = 176238089690499LLU;
uint8_t x227 = 1U;
int32_t x233 = INT32_MIN;
int8_t x237 = -52;
uint16_t x238 = UINT16_MAX;
static volatile int64_t x243 = INT64_MIN;
int8_t x245 = -1;
uint16_t x247 = 15U;
int16_t x251 = -769;
volatile int64_t t62 = -3861771076626LL;
int16_t x254 = -1012;
int8_t x270 = INT8_MAX;
int32_t t67 = -324530;
volatile int16_t x279 = INT16_MAX;
uint16_t x282 = 9510U;
static int16_t x287 = INT16_MAX;
uint8_t x299 = UINT8_MAX;
int32_t t74 = -202004755;
volatile int32_t t76 = INT32_MAX;
int32_t x310 = INT32_MIN;
volatile uint32_t x313 = UINT32_MAX;
int32_t x315 = INT32_MIN;
static uint32_t t78 = UINT32_MAX;
volatile uint32_t t80 = UINT32_MAX;
int16_t x327 = INT16_MIN;
volatile int16_t x328 = INT16_MIN;
int16_t x333 = -478;
uint32_t x342 = UINT32_MAX;
volatile int64_t t85 = INT64_MIN;
uint16_t x355 = 12534U;
int32_t x359 = INT32_MAX;
int64_t x360 = INT64_MAX;
volatile uint64_t t91 = 2151559057074905LLU;
static int64_t x375 = INT64_MIN;
uint64_t x376 = 206699LLU;
volatile uint32_t x380 = UINT32_MAX;
volatile uint32_t t94 = 1436587010U;
uint64_t x381 = 9000093LLU;
uint32_t x385 = 715U;
volatile uint8_t x391 = 3U;
int32_t x398 = -1;
static int32_t t99 = -3506;


void f0(void) {
	int32_t x1 = 7284575;
	int64_t x2 = INT64_MAX;
	int32_t x3 = -2;
	int32_t x4 = 2469540;

	t0 = (x1|(x2<=(x3<x4)));

	if (t0 != 7284575) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = -1;
	uint32_t x8 = 0U;
	int32_t t1 = INT32_MIN;

	t1 = (x5|(x6<=(x7<x8)));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 23209LL;
	static uint16_t x10 = UINT16_MAX;
	int8_t x12 = INT8_MIN;
	volatile int64_t t2 = 1353400LL;

	t2 = (x9|(x10<=(x11<x12)));

	if (t2 != 23209LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 29153450LL;
	int8_t x14 = 12;
	int32_t x15 = -67441;
	static uint8_t x16 = 3U;
	volatile int64_t t3 = 30963478LL;

	t3 = (x13|(x14<=(x15<x16)));

	if (t3 != 29153450LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int16_t x18 = 1;
	volatile int8_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 2;

	t4 = (x17|(x18<=(x19<x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	static volatile uint32_t t5 = 1U;

	t5 = (x21|(x22<=(x23<x24)));

	if (t5 != 472043819U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	volatile int32_t x26 = -6816;
	volatile uint8_t x28 = 14U;
	volatile int32_t t6 = 22189477;

	t6 = (x25|(x26<=(x27<x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 16274U;
	int64_t x30 = INT64_MIN;
	volatile uint32_t x31 = 1U;
	uint8_t x32 = 27U;
	int32_t t7 = -13589195;

	t7 = (x29|(x30<=(x31<x32)));

	if (t7 != 16275) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -1LL;
	int32_t x34 = 7044;
	uint8_t x35 = UINT8_MAX;
	volatile int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -22LL;

	t8 = (x33|(x34<=(x35<x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 1163497542LLU;
	int8_t x38 = INT8_MAX;
	static uint8_t x39 = 0U;
	volatile int64_t x40 = INT64_MAX;
	uint64_t t9 = 448827916010436703LLU;

	t9 = (x37|(x38<=(x39<x40)));

	if (t9 != 1163497542LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 980;
	static int16_t x42 = 6494;
	int64_t x43 = INT64_MAX;
	static volatile int32_t t10 = 24886;

	t10 = (x41|(x42<=(x43<x44)));

	if (t10 != 980) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	uint16_t x46 = 59U;
	uint32_t x47 = 8U;
	int16_t x48 = 3;

	t11 = (x45|(x46<=(x47<x48)));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	volatile uint16_t x51 = 281U;
	static int8_t x52 = INT8_MIN;
	int32_t t12 = 4;

	t12 = (x49|(x50<=(x51<x52)));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 435;
	static volatile uint64_t x54 = 75497539232898LLU;
	uint16_t x55 = 72U;
	int32_t t13 = -444;

	t13 = (x53|(x54<=(x55<x56)));

	if (t13 != 435) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x58 = UINT64_MAX;
	volatile int8_t x59 = INT8_MIN;
	volatile int32_t x60 = -1;

	t14 = (x57|(x58<=(x59<x60)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int8_t x62 = INT8_MIN;
	int16_t x63 = -45;
	int64_t x64 = -27304455LL;
	int32_t t15 = 855486;

	t15 = (x61|(x62<=(x63<x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	int8_t x66 = -1;
	int16_t x67 = -1;
	int8_t x68 = INT8_MIN;
	int64_t t16 = INT64_MAX;

	t16 = (x65|(x66<=(x67<x68)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -32744367;
	int8_t x71 = 6;
	int64_t x72 = 32911617813261LL;
	volatile int32_t t17 = 233;

	t17 = (x69|(x70<=(x71<x72)));

	if (t17 != -32744367) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	int32_t x76 = INT32_MIN;

	t18 = (x73|(x74<=(x75<x76)));

	if (t18 != -2706335) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 309501265U;
	uint64_t x78 = 21233031LLU;
	int64_t x79 = 326645074868LL;
	int64_t x80 = -1LL;
	uint32_t t19 = 12055007U;

	t19 = (x77|(x78<=(x79<x80)));

	if (t19 != 309501265U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = 0;
	static uint32_t x82 = 351605U;
	int64_t x83 = INT64_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int32_t t20 = 0;

	t20 = (x81|(x82<=(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 7;
	volatile int64_t x86 = -29758065LL;
	uint32_t x87 = 321631U;
	int32_t t21 = -92006510;

	t21 = (x85|(x86<=(x87<x88)));

	if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -1LL;
	int16_t x91 = INT16_MIN;
	static volatile int32_t x92 = INT32_MAX;
	int32_t t22 = 107659042;

	t22 = (x89|(x90<=(x91<x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	static volatile int64_t x94 = INT64_MAX;
	static int8_t x95 = INT8_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = (x93|(x94<=(x95<x96)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x98 = 4012;
	int16_t x100 = 814;

	t24 = (x97|(x98<=(x99<x100)));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MAX;
	static volatile uint64_t x102 = 252LLU;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t25 = 42336;

	t25 = (x101|(x102<=(x103<x104)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	int8_t x108 = 6;
	int32_t t26 = 952413491;

	t26 = (x105|(x106<=(x107<x108)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 20U;
	int32_t x110 = INT32_MIN;
	int32_t x111 = -1618244;
	volatile int16_t x112 = INT16_MIN;

	t27 = (x109|(x110<=(x111<x112)));

	if (t27 != 21) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x115 = 3264142U;
	int16_t x116 = INT16_MIN;
	int64_t t28 = INT64_MAX;

	t28 = (x113|(x114<=(x115<x116)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	static int8_t x118 = INT8_MAX;
	static uint8_t x119 = UINT8_MAX;
	volatile int32_t t29 = -34120;

	t29 = (x117|(x118<=(x119<x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile int8_t x122 = 0;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t30 = 204037609;

	t30 = (x121|(x122<=(x123<x124)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1444;
	int32_t x126 = INT32_MAX;
	int8_t x127 = -1;

	t31 = (x125|(x126<=(x127<x128)));

	if (t31 != -1444) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int16_t x130 = INT16_MIN;
	int32_t x132 = -3;
	volatile int32_t t32 = 599723;

	t32 = (x129|(x130<=(x131<x132)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = -203357037;
	static volatile int64_t x136 = INT64_MIN;
	static int32_t t33 = -7386;

	t33 = (x133|(x134<=(x135<x136)));

	if (t33 != 23) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 4U;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = -1;
	int16_t x140 = 233;

	t34 = (x137|(x138<=(x139<x140)));

	if (t34 != 4) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	volatile uint8_t x144 = 23U;
	static volatile int32_t t35 = 1790;

	t35 = (x141|(x142<=(x143<x144)));

	if (t35 != 25) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 1;
	volatile uint8_t x146 = UINT8_MAX;
	int16_t x147 = -21;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -1069877934;

	t36 = (x145|(x146<=(x147<x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 0;
	int32_t x151 = INT32_MAX;
	uint32_t x152 = 1987392U;

	t37 = (x149|(x150<=(x151<x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 13432U;
	volatile int32_t x156 = INT32_MIN;
	int32_t t38 = 31209;

	t38 = (x153|(x154<=(x155<x156)));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 64563U;
	uint16_t x158 = 1U;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1059660735LL;
	uint32_t t39 = 2125037U;

	t39 = (x157|(x158<=(x159<x160)));

	if (t39 != 64563U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = UINT32_MAX;
	static volatile uint64_t x163 = 210716516375LLU;
	volatile int64_t x164 = INT64_MIN;

	t40 = (x161|(x162<=(x163<x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int32_t x167 = INT32_MIN;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 143;

	t41 = (x165|(x166<=(x167<x168)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	volatile int64_t x171 = -1LL;
	static int32_t x172 = INT32_MIN;
	int32_t t42 = -1;

	t42 = (x169|(x170<=(x171<x172)));

	if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x175 = 6U;
	static int64_t x176 = -1LL;
	int32_t t43 = 1;

	t43 = (x173|(x174<=(x175<x176)));

	if (t43 != -92515815) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = UINT32_MAX;
	uint64_t x179 = UINT64_MAX;
	static int64_t x180 = -97047844037934LL;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x177|(x178<=(x179<x180)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -1065853560766LL;
	uint32_t x182 = UINT32_MAX;
	static int16_t x183 = INT16_MIN;
	volatile int16_t x184 = INT16_MIN;

	t45 = (x181|(x182<=(x183<x184)));

	if (t45 != -1065853560766LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 1U;
	uint8_t x186 = 1U;
	int8_t x187 = -1;
	uint32_t x188 = 140983767U;
	volatile int32_t t46 = 18;

	t46 = (x185|(x186<=(x187<x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = 296;
	uint16_t x192 = 4U;

	t47 = (x189|(x190<=(x191<x192)));

	if (t47 != -49) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	volatile uint16_t x195 = 23U;
	static uint32_t x196 = 32524804U;
	int32_t t48 = -55429403;

	t48 = (x193|(x194<=(x195<x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -1;
	int8_t x199 = INT8_MIN;
	int32_t x200 = -112271;
	int32_t t49 = 1984219;

	t49 = (x197|(x198<=(x199<x200)));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = INT8_MIN;
	static int64_t x202 = INT64_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t50 = 0;

	t50 = (x201|(x202<=(x203<x204)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x207 = -13LL;
	static uint64_t x208 = 338299LLU;
	static volatile int32_t t51 = -3796;

	t51 = (x205|(x206<=(x207<x208)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 61097;
	int32_t x211 = INT32_MIN;
	static uint64_t x212 = 2919285293279LLU;

	t52 = (x209|(x210<=(x211<x212)));

	if (t52 != 61097) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int16_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	volatile int32_t t53 = 2854754;

	t53 = (x213|(x214<=(x215<x216)));

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x218 = INT64_MIN;
	static int16_t x219 = INT16_MIN;
	int32_t x220 = INT32_MAX;
	volatile uint64_t t54 = 2117565827LLU;

	t54 = (x217|(x218<=(x219<x220)));

	if (t54 != 176238089690499LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x221 = 6;
	int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = 4U;
	int32_t t55 = 25;

	t55 = (x221|(x222<=(x223<x224)));

	if (t55 != 6) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x225 = -3620LL;
	static uint8_t x226 = 15U;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t56 = 1LL;

	t56 = (x225|(x226<=(x227<x228)));

	if (t56 != -3620LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 1U;
	uint64_t x230 = 0LLU;
	static int8_t x231 = 12;
	uint32_t x232 = 555U;
	static int32_t t57 = -638540;

	t57 = (x229|(x230<=(x231<x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x234 = INT32_MAX;
	int32_t x235 = 233678631;
	int32_t x236 = -1;
	int32_t t58 = INT32_MIN;

	t58 = (x233|(x234<=(x235<x236)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x239 = INT32_MAX;
	static int64_t x240 = -1LL;
	static volatile int32_t t59 = 29476;

	t59 = (x237|(x238<=(x239<x240)));

	if (t59 != -52) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x242 = INT16_MIN;
	volatile int8_t x244 = -9;
	volatile int32_t t60 = -212399466;

	t60 = (x241|(x242<=(x243<x244)));

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	static uint64_t x248 = UINT64_MAX;
	int32_t t61 = 1609;

	t61 = (x245|(x246<=(x247<x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 2901966628651762284LL;
	static uint32_t x250 = 1U;
	volatile int8_t x252 = INT8_MAX;

	t62 = (x249|(x250<=(x251<x252)));

	if (t62 != 2901966628651762285LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	volatile int8_t x255 = INT8_MAX;
	static volatile int64_t x256 = INT64_MAX;
	int32_t t63 = -972179647;

	t63 = (x253|(x254<=(x255<x256)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = INT8_MIN;
	int32_t x258 = INT32_MAX;
	static int64_t x259 = INT64_MIN;
	int16_t x260 = -1;
	static volatile int32_t t64 = 723624739;

	t64 = (x257|(x258<=(x259<x260)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 111677260LLU;
	int64_t x262 = -2162936478901900142LL;
	int32_t x263 = INT32_MIN;
	static volatile uint16_t x264 = UINT16_MAX;
	static uint64_t t65 = 7773960356878180LLU;

	t65 = (x261|(x262<=(x263<x264)));

	if (t65 != 111677261LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int64_t x266 = INT64_MIN;
	volatile int16_t x267 = -107;
	int32_t x268 = -20768;
	uint64_t t66 = UINT64_MAX;

	t66 = (x265|(x266<=(x267<x268)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -8;
	int8_t x271 = 29;
	uint64_t x272 = 15782887LLU;

	t67 = (x269|(x270<=(x271<x272)));

	if (t67 != -8) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	uint32_t x274 = 8254297U;
	int64_t x275 = INT64_MAX;
	uint32_t x276 = 73U;
	volatile int32_t t68 = -50;

	t68 = (x273|(x274<=(x275<x276)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MIN;
	volatile int64_t x280 = -1LL;
	int32_t t69 = 1;

	t69 = (x277|(x278<=(x279<x280)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x283 = 56320625966785458LLU;
	static int8_t x284 = 1;
	volatile int32_t t70 = -905;

	t70 = (x281|(x282<=(x283<x284)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	int8_t x286 = INT8_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	int32_t t71 = INT32_MIN;

	t71 = (x285|(x286<=(x287<x288)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	volatile int16_t x291 = 1;
	static volatile int8_t x292 = 1;
	volatile int32_t t72 = -3;

	t72 = (x289|(x290<=(x291<x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static int16_t x294 = 12275;
	uint64_t x295 = 3023045510LLU;
	volatile int32_t x296 = INT32_MAX;
	int32_t t73 = 18725668;

	t73 = (x293|(x294<=(x295<x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 1U;
	uint8_t x298 = 1U;
	static int32_t x300 = INT32_MIN;

	t74 = (x297|(x298<=(x299<x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	volatile int16_t x302 = 1;
	int16_t x303 = -99;
	static uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = INT32_MAX;

	t75 = (x301|(x302<=(x303<x304)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = INT32_MAX;
	int8_t x306 = -1;
	int16_t x307 = INT16_MAX;
	volatile int64_t x308 = -1LL;

	t76 = (x305|(x306<=(x307<x308)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = UINT16_MAX;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 57LLU;
	int32_t t77 = 69003;

	t77 = (x309|(x310<=(x311<x312)));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = -1LL;
	int8_t x316 = INT8_MAX;

	t78 = (x313|(x314<=(x315<x316)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = UINT64_MAX;
	uint32_t x318 = 4784005U;
	uint32_t x319 = 7205466U;
	uint16_t x320 = UINT16_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x317|(x318<=(x319<x320)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 240611817779LLU;
	int16_t x323 = INT16_MAX;
	uint16_t x324 = 106U;

	t80 = (x321|(x322<=(x323<x324)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MAX;
	static volatile int32_t t81 = INT32_MIN;

	t81 = (x325|(x326<=(x327<x328)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = 267659743601948424LL;
	static uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	int8_t x332 = -1;
	int64_t t82 = 4LL;

	t82 = (x329|(x330<=(x331<x332)));

	if (t82 != 267659743601948424LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x334 = 2U;
	volatile int8_t x335 = 4;
	static uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -49063;

	t83 = (x333|(x334<=(x335<x336)));

	if (t83 != -478) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 1035U;
	static uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = INT8_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = -255017;

	t84 = (x337|(x338<=(x339<x340)));

	if (t84 != 1035) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = INT64_MIN;
	int64_t x343 = -1LL;
	volatile int32_t x344 = INT32_MIN;

	t85 = (x341|(x342<=(x343<x344)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 464342887142749LLU;
	uint16_t x346 = 1U;
	static volatile int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MAX;
	volatile uint64_t t86 = 284050614031276043LLU;

	t86 = (x345|(x346<=(x347<x348)));

	if (t86 != 464342887142749LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1016181425581LL;
	int32_t x350 = -1510;
	int32_t x351 = INT32_MAX;
	uint32_t x352 = 701886521U;
	volatile int64_t t87 = 462LL;

	t87 = (x349|(x350<=(x351<x352)));

	if (t87 != -1016181425581LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	volatile uint32_t x354 = UINT32_MAX;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -1;

	t88 = (x353|(x354<=(x355<x356)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = 853;
	uint64_t t89 = UINT64_MAX;

	t89 = (x357|(x358<=(x359<x360)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int64_t x362 = INT64_MAX;
	uint32_t x363 = 26U;
	uint8_t x364 = 25U;
	volatile int32_t t90 = 175529404;

	t90 = (x361|(x362<=(x363<x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x365 = 911LLU;
	static volatile int16_t x366 = 10;
	uint64_t x367 = 231716072LLU;
	volatile uint8_t x368 = 27U;

	t91 = (x365|(x366<=(x367<x368)));

	if (t91 != 911LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	int64_t x372 = INT64_MAX;
	volatile int64_t t92 = -4799107LL;

	t92 = (x369|(x370<=(x371<x372)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 9U;
	volatile uint8_t x374 = 1U;
	volatile int32_t t93 = -8058;

	t93 = (x373|(x374<=(x375<x376)));

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 7377U;
	uint16_t x378 = 6U;
	int32_t x379 = INT32_MIN;

	t94 = (x377|(x378<=(x379<x380)));

	if (t94 != 7377U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MIN;
	volatile int16_t x383 = INT16_MIN;
	uint8_t x384 = UINT8_MAX;
	uint64_t t95 = 8271769LLU;

	t95 = (x381|(x382<=(x383<x384)));

	if (t95 != 9000093LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x386 = 1U;
	uint32_t x387 = 15196507U;
	volatile int8_t x388 = INT8_MIN;
	uint32_t t96 = 29U;

	t96 = (x385|(x386<=(x387<x388)));

	if (t96 != 715U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MIN;
	uint16_t x390 = 2022U;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x389|(x390<=(x391<x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int8_t x394 = INT8_MIN;
	static uint64_t x395 = 578151099182LLU;
	int64_t x396 = -13229143517115873LL;
	uint64_t t98 = UINT64_MAX;

	t98 = (x393|(x394<=(x395<x396)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x397 = -1;
	uint8_t x399 = 1U;
	int16_t x400 = INT16_MIN;

	t99 = (x397|(x398<=(x399<x400)));

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
