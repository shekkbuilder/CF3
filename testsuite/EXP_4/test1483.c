#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 34LLU;
volatile int64_t t1 = INT64_MAX;
static int32_t x11 = INT32_MIN;
uint64_t x17 = UINT64_MAX;
static int32_t x21 = INT32_MIN;
volatile uint32_t t6 = 2928169U;
int16_t x34 = 12428;
static int64_t t9 = 16505075280767LL;
int32_t t10 = 29698216;
static uint64_t x51 = UINT64_MAX;
volatile int64_t t12 = -3637844079493LL;
static uint64_t x62 = 548958876LLU;
int16_t x63 = 123;
int16_t x67 = -1;
volatile uint64_t t16 = 1308276476347LLU;
int64_t x80 = -1LL;
uint8_t x81 = 49U;
static uint8_t x91 = 37U;
static int32_t t23 = -16156499;
int8_t x98 = INT8_MIN;
int32_t x103 = -1;
int64_t x107 = -139939860501070LL;
volatile int16_t x110 = INT16_MAX;
static uint64_t x116 = 21425602596134LLU;
volatile int16_t x117 = -1837;
static int16_t x118 = 3224;
static int32_t t29 = 0;
int16_t x122 = INT16_MAX;
static uint64_t x124 = 15045222LLU;
int16_t x125 = 11211;
volatile int32_t t32 = -19;
uint8_t x134 = UINT8_MAX;
volatile int16_t x145 = INT16_MIN;
int16_t x149 = 1429;
int16_t x155 = -1;
int16_t x157 = INT16_MAX;
static volatile uint8_t x159 = UINT8_MAX;
volatile int16_t x160 = INT16_MIN;
uint16_t x170 = 3731U;
uint16_t x180 = 11U;
uint32_t x182 = UINT32_MAX;
volatile uint64_t t47 = 1231963991242951010LLU;
static volatile uint64_t x196 = 6766980988681LLU;
int32_t x198 = INT32_MIN;
static int64_t x200 = 200479311LL;
int16_t x207 = -1;
int64_t x216 = INT64_MIN;
static volatile int16_t x223 = INT16_MIN;
static uint32_t x226 = 637179722U;
volatile uint64_t x227 = 2909440371231521LLU;
volatile uint32_t t56 = 15305U;
int16_t x230 = 1;
uint8_t x232 = UINT8_MAX;
int32_t t57 = -49313062;
int32_t x235 = -1;
volatile uint64_t x237 = 907414683470LLU;
int8_t x244 = INT8_MAX;
int32_t t61 = 42151;
int16_t x252 = INT16_MAX;
int64_t x261 = -3217598041232516LL;
int64_t t65 = 2546455271843228LL;
uint64_t x266 = 3401324208144LLU;
uint8_t x273 = UINT8_MAX;
uint64_t x274 = 5327449140996LLU;
static uint8_t x277 = 33U;
int8_t x280 = -1;
int16_t x306 = INT16_MAX;
int8_t x307 = -34;
volatile int32_t t76 = 314561634;
int16_t x311 = -11;
int64_t t80 = -1434546802342LL;
int16_t x328 = INT16_MIN;
int64_t x333 = -1LL;
int64_t t83 = 160991915LL;
int8_t x338 = -1;
int16_t x342 = 5;
static int32_t x345 = -394;
volatile int8_t x349 = INT8_MIN;
uint32_t t87 = 10U;
static int32_t t89 = -3;
volatile uint32_t t90 = 69920U;
static int32_t x382 = INT32_MAX;
static volatile int32_t t96 = 110;
uint64_t t98 = 3872257145776992675LLU;


void f0(void) {
	static uint64_t x1 = 197730297857LLU;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	volatile uint64_t t0 = 125332087713352342LLU;

	t0 = (x1+(x2&(x3<x4)));

	if (t0 != 197730297857LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	volatile uint16_t x6 = 12144U;
	static int64_t x7 = INT64_MAX;
	volatile int8_t x8 = INT8_MIN;

	t1 = (x5+(x6&(x7<x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 280627LLU;
	static volatile int64_t x12 = -679054385LL;
	volatile uint64_t t2 = 298906321249632LLU;

	t2 = (x9+(x10&(x11<x12)));

	if (t2 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 20569616331LL;
	int64_t x14 = INT64_MIN;
	int16_t x15 = -1;
	int16_t x16 = INT16_MIN;
	int64_t t3 = 5082964434334LL;

	t3 = (x13+(x14&(x15<x16)));

	if (t3 != 20569616331LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = 55;
	static int64_t x19 = INT64_MIN;
	int64_t x20 = -1LL;
	volatile uint64_t t4 = 9379800925LLU;

	t4 = (x17+(x18&(x19<x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	int32_t t5 = -7703812;

	t5 = (x21+(x22&(x23<x24)));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 376U;
	uint16_t x26 = 3U;
	int64_t x27 = INT64_MIN;
	uint8_t x28 = 9U;

	t6 = (x25+(x26&(x27<x28)));

	if (t6 != 377U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	static int64_t x30 = INT64_MIN;
	static int16_t x31 = -1;
	volatile uint32_t x32 = UINT32_MAX;
	static int64_t t7 = -18739LL;

	t7 = (x29+(x30&(x31<x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	int16_t x35 = INT16_MIN;
	int64_t x36 = -1LL;
	static volatile int64_t t8 = INT64_MIN;

	t8 = (x33+(x34&(x35<x36)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 36969LL;
	int32_t x38 = INT32_MIN;
	static int8_t x39 = -1;
	int32_t x40 = -178;

	t9 = (x37+(x38&(x39<x40)));

	if (t9 != 36969LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int32_t x42 = INT32_MAX;
	uint64_t x43 = 387630950472919LLU;
	uint8_t x44 = 0U;

	t10 = (x41+(x42&(x43<x44)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 1;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MIN;
	int16_t x48 = -1;
	volatile int32_t t11 = 0;

	t11 = (x45+(x46&(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7U;
	int64_t x50 = INT64_MIN;
	int8_t x52 = INT8_MIN;

	t12 = (x49+(x50&(x51<x52)));

	if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	int16_t x54 = -1;
	volatile int64_t x55 = INT64_MAX;
	uint8_t x56 = 1U;
	int32_t t13 = 218151;

	t13 = (x53+(x54&(x55<x56)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	int32_t x58 = 0;
	int64_t x59 = 5693280978557933LL;
	uint64_t x60 = 21513453LLU;
	volatile int32_t t14 = 8;

	t14 = (x57+(x58&(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	volatile int16_t x64 = INT16_MIN;
	volatile uint64_t t15 = 137LLU;

	t15 = (x61+(x62&(x63<x64)));

	if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 7647481034LLU;
	int8_t x66 = 1;
	uint64_t x68 = 3837085LLU;

	t16 = (x65+(x66&(x67<x68)));

	if (t16 != 7647481034LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int64_t x70 = -1LL;
	int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = 2040359693LL;

	t17 = (x69+(x70&(x71<x72)));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = 1U;
	uint32_t x74 = 4U;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	uint32_t t18 = 20447413U;

	t18 = (x73+(x74&(x75<x76)));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	uint64_t x78 = 2462124605LLU;
	static int32_t x79 = INT32_MIN;
	static uint64_t t19 = 23995359534856LLU;

	t19 = (x77+(x78&(x79<x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x82 = INT8_MIN;
	int16_t x83 = 47;
	int64_t x84 = -1LL;
	int32_t t20 = -834157506;

	t20 = (x81+(x82&(x83<x84)));

	if (t20 != 49) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 475643537LLU;
	int8_t x86 = -1;
	volatile int32_t x87 = -1;
	int32_t x88 = -163;
	uint64_t t21 = 17867LLU;

	t21 = (x85+(x86&(x87<x88)));

	if (t21 != 475643537LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MIN;
	uint64_t x90 = 43885292LLU;
	int64_t x92 = -29208928509608581LL;
	volatile uint64_t t22 = 45558029071700LLU;

	t22 = (x89+(x90&(x91<x92)));

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -1;
	volatile int32_t x94 = -1;
	volatile int32_t x95 = -1;
	int64_t x96 = INT64_MIN;

	t23 = (x93+(x94&(x95<x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	uint32_t x99 = 128264U;
	volatile int64_t x100 = -6491LL;
	int32_t t24 = -26506902;

	t24 = (x97+(x98&(x99<x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = 549;
	volatile uint8_t x102 = UINT8_MAX;
	int16_t x104 = 1074;
	volatile int32_t t25 = -39;

	t25 = (x101+(x102&(x103<x104)));

	if (t25 != 550) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	uint32_t x106 = UINT32_MAX;
	volatile int32_t x108 = INT32_MIN;
	uint32_t t26 = 855246664U;

	t26 = (x105+(x106&(x107<x108)));

	if (t26 != 256U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 264301167;
	int32_t x111 = INT32_MIN;
	static volatile int32_t x112 = -1;
	int32_t t27 = -144;

	t27 = (x109+(x110&(x111<x112)));

	if (t27 != 264301168) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x114 = INT8_MIN;
	static int64_t x115 = -1LL;
	volatile int64_t t28 = -29334202952717LL;

	t28 = (x113+(x114&(x115<x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x119 = UINT8_MAX;
	int8_t x120 = 2;

	t29 = (x117+(x118&(x119<x120)));

	if (t29 != -1837) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int64_t x123 = INT64_MIN;
	volatile int32_t t30 = -19;

	t30 = (x121+(x122&(x123<x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -1;
	int8_t x127 = INT8_MAX;
	int8_t x128 = -7;
	int32_t t31 = 442;

	t31 = (x125+(x126&(x127<x128)));

	if (t31 != 11211) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x129 = 720U;
	int16_t x130 = -2;
	uint64_t x131 = 217056884795LLU;
	int16_t x132 = INT16_MIN;

	t32 = (x129+(x130&(x131<x132)));

	if (t32 != 720) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 3U;
	uint8_t x135 = 1U;
	volatile int16_t x136 = -8780;
	volatile uint32_t t33 = 16458935U;

	t33 = (x133+(x134&(x135<x136)));

	if (t33 != 3U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MAX;
	int32_t x139 = 350936978;
	int32_t x140 = -1;
	volatile int64_t t34 = -1094348967094082LL;

	t34 = (x137+(x138&(x139<x140)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int32_t x142 = -10287232;
	uint8_t x143 = 27U;
	static int32_t x144 = -1;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x141+(x142&(x143<x144)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 1778416846U;
	int16_t x147 = INT16_MAX;
	static int32_t x148 = -117;
	static volatile uint32_t t36 = 101065564U;

	t36 = (x145+(x146&(x147<x148)));

	if (t36 != 4294934528U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x150 = INT64_MIN;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MAX;
	volatile int64_t t37 = 35563LL;

	t37 = (x149+(x150&(x151<x152)));

	if (t37 != 1429LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 15U;
	int8_t x154 = -1;
	uint8_t x156 = 34U;
	volatile int32_t t38 = 5;

	t38 = (x153+(x154&(x155<x156)));

	if (t38 != 16) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x158 = UINT32_MAX;
	volatile uint32_t t39 = 869265U;

	t39 = (x157+(x158&(x159<x160)));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MAX;
	uint8_t x162 = 14U;
	int64_t x163 = -302LL;
	volatile int16_t x164 = -1;
	volatile int32_t t40 = 657247;

	t40 = (x161+(x162&(x163<x164)));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint64_t x166 = 353LLU;
	uint32_t x167 = 10U;
	static int16_t x168 = 9;
	static uint64_t t41 = 2405197889221197546LLU;

	t41 = (x165+(x166&(x167<x168)));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	uint32_t x172 = 932410785U;
	volatile int32_t t42 = -229169;

	t42 = (x169+(x170&(x171<x172)));

	if (t42 != -127) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	volatile int64_t x174 = INT64_MAX;
	volatile int16_t x175 = INT16_MIN;
	uint64_t x176 = 4462300725LLU;
	int64_t t43 = INT64_MIN;

	t43 = (x173+(x174&(x175<x176)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MAX;
	uint16_t x179 = 10943U;
	volatile int32_t t44 = 24985;

	t44 = (x177+(x178&(x179<x180)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x183 = -1;
	static int32_t x184 = 517706;
	uint32_t t45 = 688425U;

	t45 = (x181+(x182&(x183<x184)));

	if (t45 != 65536U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 6875U;
	int16_t x186 = -471;
	int16_t x187 = 23;
	volatile int64_t x188 = INT64_MAX;
	volatile int32_t t46 = 11;

	t46 = (x185+(x186&(x187<x188)));

	if (t46 != 6876) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = -1;
	volatile uint64_t x190 = UINT64_MAX;
	int8_t x191 = -30;
	uint16_t x192 = 55U;

	t47 = (x189+(x190&(x191<x192)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = 401;
	int8_t x194 = INT8_MAX;
	int8_t x195 = 41;
	int32_t t48 = -908;

	t48 = (x193+(x194&(x195<x196)));

	if (t48 != 402) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 9;
	int32_t x199 = -1;
	int32_t t49 = 6500;

	t49 = (x197+(x198&(x199<x200)));

	if (t49 != 9) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int64_t x202 = INT64_MIN;
	volatile uint64_t x203 = 23257LLU;
	int32_t x204 = -1008;
	int64_t t50 = 108138964287466LL;

	t50 = (x201+(x202&(x203<x204)));

	if (t50 != 127LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 3061LLU;
	int16_t x206 = INT16_MAX;
	uint64_t x208 = 839LLU;
	volatile uint64_t t51 = 539334LLU;

	t51 = (x205+(x206&(x207<x208)));

	if (t51 != 3061LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	static int64_t x210 = -1LL;
	volatile uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 24U;
	volatile int64_t t52 = 905252139LL;

	t52 = (x209+(x210&(x211<x212)));

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MAX;
	static uint64_t x215 = UINT64_MAX;
	volatile int32_t t53 = -52;

	t53 = (x213+(x214&(x215<x216)));

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MAX;
	int16_t x218 = 5021;
	int64_t x219 = -54837LL;
	int16_t x220 = -1;
	volatile int32_t t54 = 4638;

	t54 = (x217+(x218&(x219<x220)));

	if (t54 != 128) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 6380967029449LL;
	static int32_t x222 = INT32_MIN;
	volatile int32_t x224 = 437;
	volatile int64_t t55 = -17457LL;

	t55 = (x221+(x222&(x223<x224)));

	if (t55 != 6380967029449LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 16834U;
	static volatile int32_t x228 = 440;

	t56 = (x225+(x226&(x227<x228)));

	if (t56 != 16834U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -17;
	int64_t x231 = -9LL;

	t57 = (x229+(x230&(x231<x232)));

	if (t57 != -16) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static int64_t x234 = -2524364818768LL;
	static int32_t x236 = INT32_MAX;
	int64_t t58 = 116811053LL;

	t58 = (x233+(x234&(x235<x236)));

	if (t58 != -128LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MIN;
	static uint16_t x239 = UINT16_MAX;
	uint32_t x240 = 23839U;
	uint64_t t59 = 649116835047450LLU;

	t59 = (x237+(x238&(x239<x240)));

	if (t59 != 907414683470LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -457;
	static int64_t x242 = 2488905LL;
	uint16_t x243 = 27826U;
	volatile int64_t t60 = -19615LL;

	t60 = (x241+(x242&(x243<x244)));

	if (t60 != -457LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -1;
	int8_t x246 = -40;
	static volatile uint64_t x247 = 5LLU;
	uint32_t x248 = 933U;

	t61 = (x245+(x246&(x247<x248)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = 10947267;
	int16_t x251 = INT16_MAX;
	int32_t t62 = 30962043;

	t62 = (x249+(x250&(x251<x252)));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 24U;
	int16_t x254 = 1;
	int8_t x255 = 0;
	volatile int32_t x256 = INT32_MIN;
	uint32_t t63 = 58U;

	t63 = (x253+(x254&(x255<x256)));

	if (t63 != 24U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MAX;
	volatile int16_t x258 = INT16_MIN;
	int64_t x259 = -1LL;
	int8_t x260 = 0;
	int64_t t64 = INT64_MAX;

	t64 = (x257+(x258&(x259<x260)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	static uint64_t x263 = UINT64_MAX;
	int64_t x264 = INT64_MIN;

	t65 = (x261+(x262&(x263<x264)));

	if (t65 != -3217598041232516LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 5U;
	volatile int8_t x267 = INT8_MIN;
	static uint8_t x268 = 14U;
	static volatile uint64_t t66 = 1066612230577493496LLU;

	t66 = (x265+(x266&(x267<x268)));

	if (t66 != 5LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	static int16_t x270 = INT16_MIN;
	volatile int8_t x271 = 10;
	volatile int32_t x272 = -3461591;
	int32_t t67 = INT32_MIN;

	t67 = (x269+(x270&(x271<x272)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x275 = INT16_MAX;
	int16_t x276 = -3;
	volatile uint64_t t68 = 1324857367665212LLU;

	t68 = (x273+(x274&(x275<x276)));

	if (t68 != 255LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x278 = 676U;
	static int16_t x279 = INT16_MIN;
	volatile int32_t t69 = -116609877;

	t69 = (x277+(x278&(x279<x280)));

	if (t69 != 33) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = -18;
	static volatile int64_t x283 = -1LL;
	volatile int32_t x284 = 2051;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281+(x282&(x283<x284)));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = 1;
	int32_t x286 = 1005;
	int8_t x287 = INT8_MIN;
	static int32_t x288 = 193;
	volatile int32_t t71 = 2;

	t71 = (x285+(x286&(x287<x288)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 1U;
	volatile int64_t t72 = INT64_MIN;

	t72 = (x289+(x290&(x291<x292)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	static volatile int8_t x294 = -1;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MAX;
	int32_t t73 = -102;

	t73 = (x293+(x294&(x295<x296)));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint8_t x299 = 2U;
	uint16_t x300 = 213U;
	int64_t t74 = INT64_MAX;

	t74 = (x297+(x298&(x299<x300)));

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MAX;
	uint8_t x302 = 6U;
	uint16_t x303 = 342U;
	int8_t x304 = INT8_MIN;
	int64_t t75 = INT64_MAX;

	t75 = (x301+(x302&(x303<x304)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -2;
	static uint64_t x308 = UINT64_MAX;

	t76 = (x305+(x306&(x307<x308)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 7U;
	static uint16_t x310 = 3648U;
	volatile uint64_t x312 = 4925503053224954467LLU;
	int32_t t77 = -153647758;

	t77 = (x309+(x310&(x311<x312)));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = -35375514;
	uint8_t x314 = 1U;
	int8_t x315 = -2;
	volatile int8_t x316 = -1;
	static volatile int32_t t78 = -5;

	t78 = (x313+(x314&(x315<x316)));

	if (t78 != -35375513) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 479083935LLU;
	int64_t x318 = INT64_MAX;
	static uint8_t x319 = UINT8_MAX;
	uint32_t x320 = 551U;
	volatile uint64_t t79 = 8518532970LLU;

	t79 = (x317+(x318&(x319<x320)));

	if (t79 != 479083936LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 6448U;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 2U;
	int16_t x324 = -1;

	t80 = (x321+(x322&(x323<x324)));

	if (t80 != 6448LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = -4;
	int16_t x327 = 143;
	volatile int32_t t81 = 86;

	t81 = (x325+(x326&(x327<x328)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	int8_t x331 = 1;
	int32_t x332 = -1;
	int32_t t82 = -26431;

	t82 = (x329+(x330&(x331<x332)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;

	t83 = (x333+(x334&(x335<x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 1330639132LLU;
	static uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MAX;
	uint64_t t84 = 1991458186947059LLU;

	t84 = (x337+(x338&(x339<x340)));

	if (t84 != 1330639132LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static volatile int8_t x343 = 1;
	int16_t x344 = INT16_MAX;
	int32_t t85 = -74520;

	t85 = (x341+(x342&(x343<x344)));

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MIN;
	int32_t x348 = -1;
	volatile uint64_t t86 = 785134592LLU;

	t86 = (x345+(x346&(x347<x348)));

	if (t86 != 18446744073709551223LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 4U;
	uint8_t x352 = 67U;

	t87 = (x349+(x350&(x351<x352)));

	if (t87 != 4294967169U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1189301LL;
	static int8_t x354 = INT8_MAX;
	uint8_t x355 = 6U;
	uint16_t x356 = 3296U;
	int64_t t88 = -665129297LL;

	t88 = (x353+(x354&(x355<x356)));

	if (t88 != -1189300LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = 0;
	int16_t x358 = -9400;
	uint8_t x359 = 2U;
	int32_t x360 = -201;

	t89 = (x357+(x358&(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = 1;
	uint32_t x362 = UINT32_MAX;
	uint64_t x363 = 26504689969466160LLU;
	int64_t x364 = 8772082390827LL;

	t90 = (x361+(x362&(x363<x364)));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = 61943U;
	static int32_t x367 = INT32_MIN;
	static volatile uint16_t x368 = UINT16_MAX;
	uint32_t t91 = 39U;

	t91 = (x365+(x366&(x367<x368)));

	if (t91 != 4294934529U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MIN;
	int16_t x370 = -1;
	volatile int64_t x371 = INT64_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x369+(x370&(x371<x372)));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	uint64_t x374 = 2013059703969LLU;
	static volatile int64_t x375 = -1LL;
	static volatile int64_t x376 = -1LL;
	static uint64_t t93 = UINT64_MAX;

	t93 = (x373+(x374&(x375<x376)));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x378 = 54072LLU;
	static uint64_t x379 = 122035443795907LLU;
	uint16_t x380 = 2U;
	volatile uint64_t t94 = 8133945484039LLU;

	t94 = (x377+(x378&(x379<x380)));

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 3U;
	int16_t x383 = -1;
	static uint32_t x384 = 2733U;
	static int32_t t95 = 2542;

	t95 = (x381+(x382&(x383<x384)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 1U;
	static int16_t x386 = INT16_MIN;
	static int8_t x387 = -1;
	uint16_t x388 = UINT16_MAX;

	t96 = (x385+(x386&(x387<x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = 24563655U;
	int16_t x394 = -1;
	static int64_t x395 = -1LL;
	volatile int16_t x396 = INT16_MIN;
	volatile uint32_t t97 = 2U;

	t97 = (x393+(x394&(x395<x396)));

	if (t97 != 24563655U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x397 = 2LLU;
	int64_t x398 = INT64_MAX;
	volatile int32_t x399 = 59746315;
	uint32_t x400 = 174988U;

	t98 = (x397+(x398&(x399<x400)));

	if (t98 != 2LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MAX;
	uint8_t x402 = 13U;
	uint64_t x403 = 175711753300592LLU;
	int16_t x404 = 1;
	volatile int32_t t99 = INT32_MAX;

	t99 = (x401+(x402&(x403<x404)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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
