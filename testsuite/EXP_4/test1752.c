#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -1;
volatile int32_t t1 = -980;
int8_t x11 = INT8_MIN;
uint64_t x13 = UINT64_MAX;
static uint64_t x15 = 5176865530LLU;
volatile uint16_t x16 = UINT16_MAX;
uint64_t x25 = UINT64_MAX;
static int32_t x27 = -30364;
static int32_t t7 = -737966;
int32_t x39 = 904065;
static int8_t x40 = INT8_MIN;
volatile int8_t x41 = INT8_MAX;
static int64_t x52 = -2275LL;
static int32_t t11 = 2;
volatile uint8_t x63 = 71U;
uint64_t x64 = 10324307686271LLU;
static int16_t x67 = INT16_MIN;
volatile int32_t t13 = 12;
volatile int32_t t14 = -1232089;
uint16_t x77 = 131U;
int8_t x78 = 0;
volatile int32_t x80 = INT32_MAX;
uint8_t x90 = 89U;
static int8_t x110 = INT8_MIN;
int32_t x119 = -1451535;
uint64_t x122 = 7057536LLU;
int16_t x131 = INT16_MIN;
volatile int32_t t25 = -257;
int8_t x136 = INT8_MIN;
volatile uint8_t x139 = 2U;
int8_t x152 = INT8_MIN;
volatile uint16_t x155 = UINT16_MAX;
uint8_t x162 = 11U;
static uint16_t x163 = 210U;
int16_t x169 = INT16_MIN;
int64_t x172 = INT64_MIN;
int16_t x182 = INT16_MIN;
volatile int32_t t37 = -2103120;
static volatile int16_t x188 = -1;
int32_t t38 = 8261504;
volatile int32_t t41 = 2900;
int64_t x210 = INT64_MIN;
int64_t x212 = INT64_MIN;
int32_t t42 = 5;
static int64_t x216 = 362401806536LL;
static uint8_t x224 = UINT8_MAX;
volatile int32_t t44 = 1;
int16_t x227 = INT16_MAX;
int64_t x234 = 6431523236827537LL;
int32_t x238 = -1;
int32_t t48 = -6;
volatile int32_t x246 = 3431092;
int8_t x251 = -1;
static int32_t x257 = INT32_MIN;
static int8_t x258 = INT8_MAX;
volatile int16_t x267 = -61;
volatile int8_t x270 = INT8_MAX;
int16_t x301 = INT16_MIN;
volatile int32_t t58 = -327366;
uint32_t x312 = UINT32_MAX;
static uint8_t x315 = UINT8_MAX;
static int32_t x316 = -68;
int32_t t61 = -65;
int8_t x318 = 33;
uint8_t x334 = UINT8_MAX;
volatile int16_t x336 = 14;
static int64_t x345 = -253090084019432LL;
volatile int64_t x346 = 191868LL;
static int32_t t67 = -977030911;
int32_t x350 = INT32_MIN;
static int32_t x352 = 14101846;
int32_t t69 = 3659832;
static uint64_t x360 = 445787580420551866LLU;
int8_t x362 = 0;
int32_t x364 = -1;
int32_t t71 = 3;
int8_t x385 = 26;
int32_t x386 = 1;
volatile uint16_t x387 = 989U;
int64_t x391 = 1589160170LL;
int8_t x392 = INT8_MAX;
int8_t x393 = -1;
uint8_t x394 = 103U;
static int64_t x396 = 1598354723LL;
uint64_t x399 = UINT64_MAX;
volatile uint64_t x400 = 2LLU;
volatile uint16_t x411 = UINT16_MAX;
volatile uint32_t x425 = UINT32_MAX;
uint8_t x426 = UINT8_MAX;
uint8_t x427 = UINT8_MAX;
volatile int32_t t83 = 43;
int8_t x432 = 3;
int8_t x436 = -1;
static uint64_t x437 = 198287095420LLU;
int32_t t86 = 999464;
volatile int64_t x458 = -445722471416LL;
volatile int64_t x459 = INT64_MAX;
int8_t x460 = INT8_MAX;
int8_t x463 = 7;
int64_t x464 = 3LL;
int64_t x467 = 48119537LL;
uint16_t x478 = 252U;
int16_t x482 = INT16_MIN;
volatile int16_t x485 = -242;
uint64_t x486 = 711115182589498LLU;
volatile int32_t x489 = INT32_MIN;
uint16_t x495 = 13U;


void f0(void) {
	int32_t x1 = 0;
	int32_t x2 = INT32_MAX;
	int64_t x3 = INT64_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = -245603187;

	t0 = (x1<=(x2%(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int8_t x7 = -1;
	volatile int64_t x8 = INT64_MIN;

	t1 = (x5<=(x6%(x7&x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = -672640;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -21165420;

	t2 = (x9<=(x10%(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MAX;
	volatile int32_t t3 = 2;

	t3 = (x13<=(x14%(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3;
	int64_t x18 = -860224953111LL;
	int32_t x19 = -1;
	int8_t x20 = 4;
	int32_t t4 = -120622;

	t4 = (x17<=(x18%(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int16_t x22 = -1;
	static int64_t x23 = INT64_MIN;
	int64_t x24 = -131035LL;
	int32_t t5 = 0;

	t5 = (x21<=(x22%(x23&x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 6435438551LLU;
	int8_t x28 = -1;
	int32_t t6 = 18125736;

	t6 = (x25<=(x26%(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MIN;
	static volatile int16_t x31 = -1;
	int8_t x32 = 11;

	t7 = (x29<=(x30%(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;
	int32_t t8 = 25;

	t8 = (x37<=(x38%(x39&x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = -1LL;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = 30LL;
	int32_t t9 = 30765389;

	t9 = (x41<=(x42%(x43&x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 68799781939716LLU;
	volatile int16_t x50 = INT16_MAX;
	static int16_t x51 = INT16_MIN;
	int32_t t10 = -846793626;

	t10 = (x49<=(x50%(x51&x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	uint64_t x59 = 1317076270638LLU;
	int64_t x60 = -13219993LL;

	t11 = (x57<=(x58%(x59&x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	int16_t x62 = -1;
	volatile int32_t t12 = -2099139;

	t12 = (x61<=(x62%(x63&x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = 1;
	volatile int64_t x68 = -7LL;

	t13 = (x65<=(x66%(x67&x68)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	uint64_t x70 = 223319342LLU;
	static volatile uint16_t x71 = 4U;
	static int8_t x72 = INT8_MAX;

	t14 = (x69<=(x70%(x71&x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 5U;
	static int16_t x74 = -1;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MAX;
	volatile int32_t t15 = -59;

	t15 = (x73<=(x74%(x75&x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x79 = -244;
	static int32_t t16 = 1759815;

	t16 = (x77<=(x78%(x79&x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -1;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	volatile int32_t t17 = 98815821;

	t17 = (x81<=(x82%(x83&x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x85 = INT16_MIN;
	uint32_t x86 = 44830U;
	static volatile uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t18 = 531612471;

	t18 = (x85<=(x86%(x87&x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	static int32_t t19 = 3350;

	t19 = (x89<=(x90%(x91&x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	uint32_t x94 = 18939259U;
	static int16_t x95 = -8733;
	uint8_t x96 = 42U;
	volatile int32_t t20 = 2971212;

	t20 = (x93<=(x94%(x95&x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = 2131U;
	int64_t x111 = -104910036313987489LL;
	int16_t x112 = INT16_MIN;
	volatile int32_t t21 = 76156;

	t21 = (x109<=(x110%(x111&x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x117 = -47LL;
	int64_t x118 = 3083341LL;
	uint64_t x120 = UINT64_MAX;
	int32_t t22 = 1304;

	t22 = (x117<=(x118%(x119&x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x121 = 8U;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t23 = -8383293;

	t23 = (x121<=(x122%(x123&x124)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x125 = -13;
	uint16_t x126 = 6U;
	int16_t x127 = INT16_MIN;
	static int8_t x128 = -1;
	volatile int32_t t24 = -1;

	t24 = (x125<=(x126%(x127&x128)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = 664LLU;
	static volatile uint8_t x130 = 27U;
	int16_t x132 = INT16_MIN;

	t25 = (x129<=(x130%(x131&x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = 15231;
	uint32_t x135 = 350U;
	volatile int32_t t26 = -22;

	t26 = (x133<=(x134%(x135&x136)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile uint32_t x138 = 67U;
	volatile uint32_t x140 = 79U;
	static int32_t t27 = -731367179;

	t27 = (x137<=(x138%(x139&x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = UINT32_MAX;
	uint64_t x142 = 5388LLU;
	int8_t x143 = INT8_MIN;
	volatile int32_t x144 = -105331;
	volatile int32_t t28 = -9789;

	t28 = (x141<=(x142%(x143&x144)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = 7152;
	uint64_t x146 = 195506LLU;
	int8_t x147 = -1;
	volatile int32_t x148 = -6;
	static volatile int32_t t29 = -723;

	t29 = (x145<=(x146%(x147&x148)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	uint8_t x150 = 0U;
	int8_t x151 = -1;
	static int32_t t30 = 2113856;

	t30 = (x149<=(x150%(x151&x152)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = 0LL;
	int8_t x154 = 26;
	volatile uint32_t x156 = 15U;
	int32_t t31 = 62762;

	t31 = (x153<=(x154%(x155&x156)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 165;
	uint8_t x158 = 53U;
	static int8_t x159 = -1;
	int32_t x160 = -1;
	volatile int32_t t32 = 126;

	t32 = (x157<=(x158%(x159&x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x161 = 11560687804449LL;
	uint16_t x164 = 190U;
	static volatile int32_t t33 = -211;

	t33 = (x161<=(x162%(x163&x164)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = -1;
	static int16_t x167 = -53;
	static int64_t x168 = INT64_MIN;
	int32_t t34 = -102008;

	t34 = (x165<=(x166%(x167&x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	volatile int32_t t35 = 0;

	t35 = (x169<=(x170%(x171&x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MAX;
	static volatile int16_t x178 = 8;
	static volatile int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t36 = -106072;

	t36 = (x177<=(x178%(x179&x180)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int8_t x183 = -1;
	uint32_t x184 = UINT32_MAX;

	t37 = (x181<=(x182%(x183&x184)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x185 = INT64_MAX;
	static int32_t x186 = 3877473;
	int64_t x187 = -1LL;

	t38 = (x185<=(x186%(x187&x188)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = 4983U;
	int16_t x190 = 5;
	int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t39 = 15773025;

	t39 = (x189<=(x190%(x191&x192)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x193 = UINT8_MAX;
	volatile int32_t x194 = -1;
	static uint16_t x195 = UINT16_MAX;
	int16_t x196 = INT16_MAX;
	static int32_t t40 = -1475;

	t40 = (x193<=(x194%(x195&x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	volatile int8_t x202 = INT8_MIN;
	int32_t x203 = 146;
	volatile uint16_t x204 = UINT16_MAX;

	t41 = (x201<=(x202%(x203&x204)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = INT64_MAX;
	int32_t x211 = INT32_MIN;

	t42 = (x209<=(x210%(x211&x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = 615;
	int32_t x214 = -122;
	int16_t x215 = INT16_MIN;
	static volatile int32_t t43 = -130608;

	t43 = (x213<=(x214%(x215&x216)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x221 = 56U;
	volatile uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 60919820652598322LLU;

	t44 = (x221<=(x222%(x223&x224)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x225 = -9202LL;
	volatile uint64_t x226 = 8210528241057325LLU;
	volatile uint32_t x228 = 13742U;
	static volatile int32_t t45 = 26136225;

	t45 = (x225<=(x226%(x227&x228)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = -2;
	int8_t x230 = INT8_MIN;
	volatile int32_t x231 = INT32_MAX;
	int16_t x232 = 35;
	static int32_t t46 = 78;

	t46 = (x229<=(x230%(x231&x232)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = INT8_MAX;
	int32_t x235 = -5;
	int8_t x236 = INT8_MIN;
	int32_t t47 = -27302909;

	t47 = (x233<=(x234%(x235&x236)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x237 = INT32_MIN;
	static uint8_t x239 = UINT8_MAX;
	static int64_t x240 = -1LL;

	t48 = (x237<=(x238%(x239&x240)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 2;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	volatile int32_t t49 = 6;

	t49 = (x245<=(x246%(x247&x248)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x249 = INT16_MIN;
	int8_t x250 = 0;
	uint32_t x252 = UINT32_MAX;
	static volatile int32_t t50 = 8767;

	t50 = (x249<=(x250%(x251&x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t51 = 7523;

	t51 = (x253<=(x254%(x255&x256)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x259 = UINT64_MAX;
	uint64_t x260 = 5660411785754801592LLU;
	static int32_t t52 = -220;

	t52 = (x257<=(x258%(x259&x260)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x265 = 0LLU;
	uint32_t x266 = 325U;
	uint16_t x268 = UINT16_MAX;
	volatile int32_t t53 = 2084056;

	t53 = (x265<=(x266%(x267&x268)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x269 = 803546LLU;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MAX;
	int32_t t54 = -1049603;

	t54 = (x269<=(x270%(x271&x272)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x277 = UINT8_MAX;
	static uint32_t x278 = UINT32_MAX;
	int32_t x279 = 16;
	int64_t x280 = -1LL;
	volatile int32_t t55 = 45;

	t55 = (x277<=(x278%(x279&x280)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = INT16_MIN;
	static int64_t x290 = 3760779831LL;
	int64_t x291 = -1LL;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t56 = -428;

	t56 = (x289<=(x290%(x291&x292)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x293 = INT16_MIN;
	int64_t x294 = 1893348619542LL;
	int16_t x295 = INT16_MAX;
	uint64_t x296 = UINT64_MAX;
	static volatile int32_t t57 = 2;

	t57 = (x293<=(x294%(x295&x296)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x302 = -25;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = 3114;

	t58 = (x301<=(x302%(x303&x304)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x305 = -1LL;
	uint8_t x306 = 20U;
	int16_t x307 = INT16_MIN;
	static volatile int32_t x308 = -1;
	int32_t t59 = -1849;

	t59 = (x305<=(x306%(x307&x308)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x309 = -129052;
	volatile int64_t x310 = -6LL;
	int16_t x311 = INT16_MAX;
	static int32_t t60 = 363761972;

	t60 = (x309<=(x310%(x311&x312)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x313 = -64138728LL;
	int8_t x314 = 13;

	t61 = (x313<=(x314%(x315&x316)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x317 = INT32_MIN;
	uint32_t x319 = 820U;
	int64_t x320 = -1LL;
	volatile int32_t t62 = 5;

	t62 = (x317<=(x318%(x319&x320)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x321 = -104;
	int32_t x322 = 7;
	uint32_t x323 = UINT32_MAX;
	volatile uint32_t x324 = 2078811U;
	volatile int32_t t63 = 22;

	t63 = (x321<=(x322%(x323&x324)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -1LL;
	int32_t x327 = 1591960;
	uint64_t x328 = UINT64_MAX;
	static volatile int32_t t64 = 530;

	t64 = (x325<=(x326%(x327&x328)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x333 = 1LLU;
	int16_t x335 = -1;
	volatile int32_t t65 = 69545;

	t65 = (x333<=(x334%(x335&x336)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = INT64_MAX;
	int32_t x342 = -1;
	volatile int64_t x343 = -100633987962LL;
	uint64_t x344 = 227LLU;
	static int32_t t66 = 125;

	t66 = (x341<=(x342%(x343&x344)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x347 = 18;
	static int64_t x348 = -1LL;

	t67 = (x345<=(x346%(x347&x348)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x349 = 12507U;
	int16_t x351 = -1;
	static int32_t t68 = -65851;

	t68 = (x349<=(x350%(x351&x352)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x353 = UINT64_MAX;
	uint32_t x354 = UINT32_MAX;
	int64_t x355 = INT64_MIN;
	volatile int64_t x356 = -1380496857320274087LL;

	t69 = (x353<=(x354%(x355&x356)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x357 = INT16_MIN;
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = 23819026363LL;
	volatile int32_t t70 = -39214808;

	t70 = (x357<=(x358%(x359&x360)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x361 = INT32_MAX;
	static int8_t x363 = INT8_MAX;

	t71 = (x361<=(x362%(x363&x364)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -1;
	int16_t x367 = 1639;
	int32_t x368 = 41099;
	volatile int32_t t72 = 375674;

	t72 = (x365<=(x366%(x367&x368)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x373 = INT32_MIN;
	uint16_t x374 = UINT16_MAX;
	uint64_t x375 = UINT64_MAX;
	static uint32_t x376 = UINT32_MAX;
	int32_t t73 = 472128595;

	t73 = (x373<=(x374%(x375&x376)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x381 = 0U;
	static int32_t x382 = -1;
	static int16_t x383 = 1;
	volatile int8_t x384 = 7;
	volatile int32_t t74 = 36441;

	t74 = (x381<=(x382%(x383&x384)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x388 = INT32_MAX;
	int32_t t75 = -2744;

	t75 = (x385<=(x386%(x387&x388)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x389 = 473091U;
	int8_t x390 = INT8_MAX;
	int32_t t76 = -57376;

	t76 = (x389<=(x390%(x391&x392)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x395 = -1;
	int32_t t77 = -449400;

	t77 = (x393<=(x394%(x395&x396)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	int32_t t78 = 15;

	t78 = (x397<=(x398%(x399&x400)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x409 = 150;
	static int16_t x410 = INT16_MAX;
	uint32_t x412 = 28564431U;
	int32_t t79 = 454511;

	t79 = (x409<=(x410%(x411&x412)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x413 = INT32_MAX;
	int64_t x414 = -9614165103675349LL;
	static volatile int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t80 = -784985294;

	t80 = (x413<=(x414%(x415&x416)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x417 = UINT32_MAX;
	volatile uint16_t x418 = UINT16_MAX;
	int8_t x419 = -1;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t81 = -740;

	t81 = (x417<=(x418%(x419&x420)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x421 = INT64_MIN;
	static int16_t x422 = INT16_MIN;
	uint16_t x423 = 36U;
	uint16_t x424 = 53U;
	volatile int32_t t82 = -1445;

	t82 = (x421<=(x422%(x423&x424)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x428 = 3751798782472668LL;

	t83 = (x425<=(x426%(x427&x428)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x429 = UINT16_MAX;
	static int32_t x430 = INT32_MIN;
	int64_t x431 = -3691751338618LL;
	int32_t t84 = 2;

	t84 = (x429<=(x430%(x431&x432)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = -1;
	int8_t x434 = INT8_MIN;
	static volatile int16_t x435 = 14;
	volatile int32_t t85 = 4;

	t85 = (x433<=(x434%(x435&x436)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x438 = UINT16_MAX;
	static volatile int64_t x439 = -1LL;
	int8_t x440 = INT8_MIN;

	t86 = (x437<=(x438%(x439&x440)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x441 = INT32_MIN;
	uint8_t x442 = 0U;
	volatile uint16_t x443 = 46U;
	static int8_t x444 = 26;
	volatile int32_t t87 = 0;

	t87 = (x441<=(x442%(x443&x444)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x453 = UINT64_MAX;
	int16_t x454 = 978;
	uint8_t x455 = 13U;
	uint64_t x456 = 2718677LLU;
	volatile int32_t t88 = -3297183;

	t88 = (x453<=(x454%(x455&x456)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x457 = 1650U;
	int32_t t89 = -26032;

	t89 = (x457<=(x458%(x459&x460)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x461 = -3;
	static int32_t x462 = 3662609;
	volatile int32_t t90 = 14;

	t90 = (x461<=(x462%(x463&x464)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = 8659064194LL;
	int16_t x466 = INT16_MIN;
	volatile int32_t x468 = -1;
	volatile int32_t t91 = -8331820;

	t91 = (x465<=(x466%(x467&x468)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x469 = UINT8_MAX;
	static uint16_t x470 = UINT16_MAX;
	uint32_t x471 = UINT32_MAX;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t92 = 746605363;

	t92 = (x469<=(x470%(x471&x472)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x473 = 28U;
	int16_t x474 = -1;
	volatile uint64_t x475 = 2707043324614LLU;
	uint32_t x476 = 10U;
	volatile int32_t t93 = -108;

	t93 = (x473<=(x474%(x475&x476)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x477 = INT64_MIN;
	int16_t x479 = 125;
	uint16_t x480 = UINT16_MAX;
	int32_t t94 = 65110;

	t94 = (x477<=(x478%(x479&x480)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x481 = -7363;
	int32_t x483 = -1;
	uint64_t x484 = UINT64_MAX;
	static int32_t t95 = 176441;

	t95 = (x481<=(x482%(x483&x484)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x487 = INT32_MAX;
	static int32_t x488 = 54235589;
	int32_t t96 = -8283243;

	t96 = (x485<=(x486%(x487&x488)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x490 = INT16_MAX;
	int64_t x491 = INT64_MAX;
	static uint64_t x492 = 567972431239982009LLU;
	int32_t t97 = 57464;

	t97 = (x489<=(x490%(x491&x492)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x493 = 115012U;
	int16_t x494 = 33;
	int32_t x496 = -1;
	int32_t t98 = -1680;

	t98 = (x493<=(x494%(x495&x496)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x497 = INT32_MAX;
	uint32_t x498 = 1U;
	int32_t x499 = INT32_MAX;
	uint16_t x500 = 6U;
	volatile int32_t t99 = -2139;

	t99 = (x497<=(x498%(x499&x500)));

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
