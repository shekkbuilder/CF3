#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x6 = 1187078994LLU;
uint8_t x8 = UINT8_MAX;
int16_t x13 = 31;
int8_t x22 = 1;
uint32_t x23 = UINT32_MAX;
uint32_t x24 = 11227880U;
uint16_t x31 = 1U;
int32_t x34 = -1;
static uint8_t x38 = 18U;
static uint16_t x43 = UINT16_MAX;
int64_t x44 = INT64_MAX;
uint16_t x45 = 2U;
volatile uint64_t x46 = 1284188045897670064LLU;
uint32_t x53 = 6172U;
volatile uint32_t x55 = 314697662U;
static uint16_t x57 = UINT16_MAX;
uint64_t x58 = UINT64_MAX;
int32_t x61 = -1;
static uint32_t x65 = UINT32_MAX;
volatile int32_t t18 = 77477665;
volatile int32_t x79 = INT32_MIN;
uint32_t x81 = 4003934U;
uint16_t x84 = 8U;
int32_t t21 = -18;
int64_t x93 = -1LL;
volatile uint8_t x96 = UINT8_MAX;
int32_t x98 = 1682883;
static volatile int32_t t25 = -49;
int32_t x109 = INT32_MIN;
volatile int32_t x112 = 116208;
int8_t x113 = -1;
volatile int32_t t27 = -3587996;
uint8_t x120 = UINT8_MAX;
int8_t x122 = INT8_MAX;
uint32_t x125 = 12208244U;
static volatile uint64_t x126 = 5818848518440206LLU;
uint8_t x130 = UINT8_MAX;
int8_t x131 = INT8_MIN;
int32_t t31 = -233;
uint16_t x143 = UINT16_MAX;
int64_t x147 = INT64_MAX;
static int32_t x156 = INT32_MIN;
int16_t x162 = INT16_MIN;
volatile int32_t t39 = 2119576;
int32_t x169 = -1;
static int32_t t41 = 58729867;
uint64_t x179 = UINT64_MAX;
int8_t x180 = -3;
static int32_t t42 = -203297649;
int16_t x181 = 233;
int32_t x182 = 10;
uint64_t x189 = 23047069682LLU;
int8_t x194 = 17;
int8_t x202 = INT8_MIN;
volatile int16_t x203 = INT16_MAX;
static volatile int8_t x210 = INT8_MIN;
volatile uint32_t x214 = UINT32_MAX;
static int64_t x215 = INT64_MAX;
int64_t x217 = INT64_MIN;
uint64_t x218 = 68883772LLU;
int32_t t52 = -117418;
static volatile int64_t x231 = INT64_MAX;
static int32_t x235 = -1;
int64_t x237 = -1LL;
int64_t x238 = INT64_MAX;
volatile int8_t x244 = INT8_MAX;
int32_t x247 = INT32_MIN;
volatile int64_t x248 = INT64_MAX;
int8_t x252 = INT8_MIN;
int16_t x253 = INT16_MAX;
int64_t x254 = -1LL;
static int32_t t61 = 492281504;
int16_t x259 = INT16_MAX;
int32_t x261 = -1;
volatile int8_t x263 = INT8_MAX;
int32_t t63 = 247963;
int64_t x274 = INT64_MAX;
int64_t x280 = INT64_MIN;
static uint32_t x285 = 18609742U;
static int16_t x286 = -1;
int16_t x287 = -2257;
int8_t x290 = INT8_MAX;
int32_t t70 = 813896772;
int64_t x294 = INT64_MIN;
static int64_t x312 = -1LL;
int16_t x315 = -1;
uint64_t x317 = 3783889LLU;
volatile uint16_t x319 = UINT16_MAX;
volatile int32_t t77 = 3999;
volatile int64_t x329 = 305075866687085LL;
volatile int16_t x338 = -6;
int8_t x344 = INT8_MIN;
static uint16_t x347 = 0U;
int32_t x353 = INT32_MAX;
int64_t x355 = 122240060LL;
int32_t t86 = -48882864;
int32_t x357 = INT32_MIN;
static uint64_t x358 = 485LLU;
volatile int16_t x372 = INT16_MIN;
int32_t t90 = 1;
volatile int32_t t91 = -1341;
uint64_t x378 = 8933633LLU;
int8_t x389 = INT8_MIN;
uint16_t x396 = 25U;
int32_t t96 = 10;
uint64_t x399 = 1127LLU;
static int64_t x405 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 42U;
	int16_t x2 = INT16_MIN;
	volatile int64_t x3 = 1892310453479554LL;
	int32_t x4 = -3774;
	int32_t t0 = -550;

	t0 = (x1==(x2/(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	volatile uint16_t x7 = 12640U;
	volatile int32_t t1 = 80409483;

	t1 = (x5==(x6/(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint32_t x10 = 1959072U;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -1;
	volatile int32_t t2 = -65209729;

	t2 = (x9==(x10/(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x14 = 0U;
	int32_t x15 = INT32_MAX;
	static volatile int32_t x16 = INT32_MIN;
	int32_t t3 = -150;

	t3 = (x13==(x14/(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = INT16_MAX;
	volatile int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -36;

	t4 = (x17==(x18/(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	volatile int32_t t5 = -673135;

	t5 = (x21==(x22/(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = 1;
	static uint8_t x26 = 123U;
	volatile int64_t x27 = -636972LL;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = 590885648;

	t6 = (x25==(x26/(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	uint8_t x30 = 120U;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = 312719400;

	t7 = (x29==(x30/(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 26U;
	volatile uint32_t x35 = UINT32_MAX;
	static int64_t x36 = INT64_MAX;
	int32_t t8 = 129;

	t8 = (x33==(x34/(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 923915601U;
	volatile uint16_t x39 = 21U;
	uint64_t x40 = 1476652845867LLU;
	int32_t t9 = -1;

	t9 = (x37==(x38/(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 105U;
	uint32_t x42 = 1U;
	int32_t t10 = -15;

	t10 = (x41==(x42/(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MIN;
	static int8_t x48 = 0;
	volatile int32_t t11 = 8828982;

	t11 = (x45==(x46/(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	int16_t x52 = 1;
	static int32_t t12 = 2521397;

	t12 = (x49==(x50/(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = UINT32_MAX;
	int8_t x56 = -1;
	volatile int32_t t13 = -466665;

	t13 = (x53==(x54/(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x59 = 7U;
	volatile int64_t x60 = -1LL;
	volatile int32_t t14 = -240180;

	t14 = (x57==(x58/(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MAX;
	volatile int64_t x63 = INT64_MAX;
	uint32_t x64 = 67776378U;
	volatile int32_t t15 = -5706;

	t15 = (x61==(x62/(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x66 = INT64_MIN;
	int16_t x67 = 3786;
	int32_t x68 = -1;
	int32_t t16 = 36042;

	t16 = (x65==(x66/(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -13;
	volatile uint16_t x70 = 75U;
	static int32_t x71 = INT32_MIN;
	volatile int64_t x72 = 463LL;
	volatile int32_t t17 = 0;

	t17 = (x69==(x70/(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = 78104;
	int32_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t18 = (x73==(x74/(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 29U;
	int64_t x78 = -1LL;
	static volatile int32_t x80 = -126;
	int32_t t19 = 507275159;

	t19 = (x77==(x78/(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = 12;
	static volatile int32_t t20 = -14098;

	t20 = (x81==(x82/(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 11829U;
	int16_t x86 = -3;
	int64_t x87 = -1LL;
	int64_t x88 = INT64_MIN;

	t21 = (x85==(x86/(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MIN;
	volatile int64_t x95 = INT64_MAX;
	volatile int32_t t22 = -11199833;

	t22 = (x93==(x94/(x95^x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	uint16_t x99 = UINT16_MAX;
	static int16_t x100 = INT16_MAX;
	int32_t t23 = -12956;

	t23 = (x97==(x98/(x99^x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x101 = INT8_MIN;
	int32_t x102 = -430369807;
	uint32_t x103 = 111064U;
	static volatile uint16_t x104 = UINT16_MAX;
	int32_t t24 = -1380;

	t24 = (x101==(x102/(x103^x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	static volatile uint16_t x106 = UINT16_MAX;
	volatile int64_t x107 = 179024047819269LL;
	int8_t x108 = INT8_MAX;

	t25 = (x105==(x106/(x107^x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = 247447245875432LL;
	uint8_t x111 = UINT8_MAX;
	int32_t t26 = -57067671;

	t26 = (x109==(x110/(x111^x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x114 = INT8_MIN;
	static uint32_t x115 = 41U;
	volatile int8_t x116 = -1;

	t27 = (x113==(x114/(x115^x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	static int32_t t28 = -45519391;

	t28 = (x117==(x118/(x119^x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t29 = 895;

	t29 = (x121==(x122/(x123^x124)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 729014U;
	static int32_t t30 = 3;

	t30 = (x125==(x126/(x127^x128)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x129 = 683U;
	volatile int64_t x132 = INT64_MIN;

	t31 = (x129==(x130/(x131^x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	int32_t x134 = 20;
	static uint32_t x135 = 9578U;
	int64_t x136 = 141164388565462365LL;
	int32_t t32 = 1145224;

	t32 = (x133==(x134/(x135^x136)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x137 = INT32_MIN;
	int16_t x138 = -12633;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 33U;
	int32_t t33 = 3214499;

	t33 = (x137==(x138/(x139^x140)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = 58;

	t34 = (x141==(x142/(x143^x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -3204LL;
	int16_t x146 = -2977;
	int8_t x148 = -47;
	volatile int32_t t35 = -3586860;

	t35 = (x145==(x146/(x147^x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = UINT8_MAX;
	static int64_t x152 = INT64_MAX;
	static int32_t t36 = -1344989;

	t36 = (x149==(x150/(x151^x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x154 = -1;
	static uint64_t x155 = 1596704028423LLU;
	int32_t t37 = 1882291;

	t37 = (x153==(x154/(x155^x156)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = -1;
	uint16_t x163 = 782U;
	int64_t x164 = INT64_MIN;
	volatile int32_t t38 = -4;

	t38 = (x161==(x162/(x163^x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -1;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = UINT64_MAX;
	volatile uint8_t x168 = UINT8_MAX;

	t39 = (x165==(x166/(x167^x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x170 = -1LL;
	static volatile int16_t x171 = 23;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = 3;

	t40 = (x169==(x170/(x171^x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = 3LLU;
	int16_t x175 = -2;
	int16_t x176 = 345;

	t41 = (x173==(x174/(x175^x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MAX;

	t42 = (x177==(x178/(x179^x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x183 = -128841LL;
	int64_t x184 = INT64_MIN;
	int32_t t43 = 21;

	t43 = (x181==(x182/(x183^x184)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x186 = 103U;
	static int32_t x187 = -1;
	static int16_t x188 = INT16_MIN;
	volatile int32_t t44 = -20;

	t44 = (x185==(x186/(x187^x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = 56396731;
	uint32_t x191 = 19U;
	static int8_t x192 = -1;
	int32_t t45 = 17281;

	t45 = (x189==(x190/(x191^x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 1U;
	uint64_t x195 = 4855424LLU;
	volatile int8_t x196 = 2;
	int32_t t46 = 108458;

	t46 = (x193==(x194/(x195^x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x197 = 4534U;
	static uint8_t x198 = 5U;
	int8_t x199 = 1;
	uint16_t x200 = 8380U;
	int32_t t47 = 3684;

	t47 = (x197==(x198/(x199^x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x201 = 83984573578044163LLU;
	uint16_t x204 = UINT16_MAX;
	int32_t t48 = 24689491;

	t48 = (x201==(x202/(x203^x204)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MIN;
	int16_t x206 = INT16_MAX;
	volatile int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MIN;
	static volatile int32_t t49 = 359;

	t49 = (x205==(x206/(x207^x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x209 = 290973LLU;
	uint32_t x211 = UINT32_MAX;
	int32_t x212 = -7;
	static volatile int32_t t50 = 1;

	t50 = (x209==(x210/(x211^x212)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -142;
	int8_t x216 = -1;
	static int32_t t51 = 1;

	t51 = (x213==(x214/(x215^x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x219 = INT32_MAX;
	uint64_t x220 = 75LLU;

	t52 = (x217==(x218/(x219^x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = -113LL;
	int64_t x222 = -48LL;
	uint64_t x223 = UINT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	static volatile int32_t t53 = 944;

	t53 = (x221==(x222/(x223^x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x225 = 161U;
	int8_t x226 = INT8_MIN;
	volatile uint8_t x227 = 12U;
	int64_t x228 = INT64_MIN;
	static volatile int32_t t54 = 581077031;

	t54 = (x225==(x226/(x227^x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = -1;
	volatile int32_t x230 = INT32_MIN;
	uint8_t x232 = UINT8_MAX;
	int32_t t55 = 121124;

	t55 = (x229==(x230/(x231^x232)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MAX;
	int32_t x234 = INT32_MAX;
	static int32_t x236 = INT32_MIN;
	static volatile int32_t t56 = 6505673;

	t56 = (x233==(x234/(x235^x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x239 = 492;
	int8_t x240 = INT8_MIN;
	int32_t t57 = -60;

	t57 = (x237==(x238/(x239^x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = INT64_MAX;
	uint8_t x242 = UINT8_MAX;
	static int32_t x243 = INT32_MAX;
	static volatile int32_t t58 = 25294;

	t58 = (x241==(x242/(x243^x244)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MIN;
	int32_t t59 = -6894;

	t59 = (x245==(x246/(x247^x248)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x249 = 55869U;
	int64_t x250 = INT64_MIN;
	uint8_t x251 = 19U;
	int32_t t60 = 959492;

	t60 = (x249==(x250/(x251^x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x255 = UINT16_MAX;
	static volatile int8_t x256 = 23;

	t61 = (x253==(x254/(x255^x256)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t62 = 11819;

	t62 = (x257==(x258/(x259^x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x262 = -3505;
	int64_t x264 = 1507146544LL;

	t63 = (x261==(x262/(x263^x264)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 45308U;
	int64_t x266 = -1999LL;
	static uint16_t x267 = 900U;
	uint8_t x268 = UINT8_MAX;
	int32_t t64 = -3;

	t64 = (x265==(x266/(x267^x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -1LL;
	volatile int16_t x270 = 29;
	int8_t x271 = -1;
	int8_t x272 = INT8_MAX;
	int32_t t65 = 469508;

	t65 = (x269==(x270/(x271^x272)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = 0;
	static uint32_t x275 = 717607U;
	int64_t x276 = -344687LL;
	int32_t t66 = -74976;

	t66 = (x273==(x274/(x275^x276)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 4414U;
	int32_t x278 = 60;
	uint8_t x279 = UINT8_MAX;
	static volatile int32_t t67 = -1;

	t67 = (x277==(x278/(x279^x280)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 7U;
	uint32_t x282 = UINT32_MAX;
	volatile int64_t x283 = INT64_MIN;
	uint32_t x284 = 5362015U;
	int32_t t68 = -3642227;

	t68 = (x281==(x282/(x283^x284)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x288 = -1LL;
	int32_t t69 = 124;

	t69 = (x285==(x286/(x287^x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x291 = -1;
	uint8_t x292 = 117U;

	t70 = (x289==(x290/(x291^x292)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -3592387859LL;
	volatile int32_t t71 = -127352;

	t71 = (x293==(x294/(x295^x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	int64_t x298 = -1LL;
	static uint8_t x299 = UINT8_MAX;
	uint8_t x300 = 0U;
	int32_t t72 = -1;

	t72 = (x297==(x298/(x299^x300)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x301 = -1;
	int32_t x302 = INT32_MIN;
	volatile int32_t x303 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	volatile int32_t t73 = 12195;

	t73 = (x301==(x302/(x303^x304)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = INT16_MIN;
	uint8_t x306 = 59U;
	int8_t x307 = 53;
	int64_t x308 = -1LL;
	int32_t t74 = 228;

	t74 = (x305==(x306/(x307^x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x309 = 0;
	int16_t x310 = -1;
	static int32_t x311 = -15244;
	volatile int32_t t75 = -255132;

	t75 = (x309==(x310/(x311^x312)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = -534;
	volatile int32_t x316 = INT32_MIN;
	int32_t t76 = 1250512;

	t76 = (x313==(x314/(x315^x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x318 = -1;
	int8_t x320 = INT8_MAX;

	t77 = (x317==(x318/(x319^x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x321 = 209;
	int16_t x322 = 115;
	int16_t x323 = INT16_MIN;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t78 = -1;

	t78 = (x321==(x322/(x323^x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	uint32_t x328 = 16066U;
	int32_t t79 = 1011;

	t79 = (x325==(x326/(x327^x328)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = INT16_MAX;
	volatile uint64_t x331 = 2646LLU;
	volatile int8_t x332 = INT8_MAX;
	volatile int32_t t80 = -7;

	t80 = (x329==(x330/(x331^x332)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x333 = -1;
	int16_t x334 = -1;
	int64_t x335 = INT64_MAX;
	static int32_t x336 = INT32_MIN;
	volatile int32_t t81 = 18905;

	t81 = (x333==(x334/(x335^x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x337 = 188157859LLU;
	static uint8_t x339 = 4U;
	int32_t x340 = INT32_MIN;
	volatile int32_t t82 = 121;

	t82 = (x337==(x338/(x339^x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MAX;
	static uint16_t x342 = 13U;
	volatile uint32_t x343 = 65283U;
	int32_t t83 = 240988;

	t83 = (x341==(x342/(x343^x344)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x345 = -45;
	int16_t x346 = INT16_MAX;
	int32_t x348 = 7387035;
	int32_t t84 = -4267;

	t84 = (x345==(x346/(x347^x348)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = -4;
	int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	int8_t x352 = -23;
	static int32_t t85 = 3701860;

	t85 = (x349==(x350/(x351^x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x354 = -161081042;
	static uint8_t x356 = 1U;

	t86 = (x353==(x354/(x355^x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x359 = UINT8_MAX;
	static int8_t x360 = INT8_MIN;
	int32_t t87 = 42246887;

	t87 = (x357==(x358/(x359^x360)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 6634U;
	uint32_t x362 = 210645314U;
	int64_t x363 = 9884913LL;
	uint8_t x364 = 89U;
	static int32_t t88 = 35348306;

	t88 = (x361==(x362/(x363^x364)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x365 = -1LL;
	static int32_t x366 = 115369;
	static volatile int8_t x367 = INT8_MIN;
	static int16_t x368 = INT16_MIN;
	volatile int32_t t89 = 725;

	t89 = (x365==(x366/(x367^x368)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = 24LL;
	volatile int16_t x370 = INT16_MAX;
	volatile int64_t x371 = INT64_MIN;

	t90 = (x369==(x370/(x371^x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = -1;
	int16_t x374 = -1;
	uint8_t x375 = 3U;
	int8_t x376 = INT8_MIN;

	t91 = (x373==(x374/(x375^x376)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 135800080U;
	volatile uint32_t x379 = 24U;
	uint8_t x380 = 2U;
	static volatile int32_t t92 = 313001;

	t92 = (x377==(x378/(x379^x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x381 = INT32_MAX;
	int64_t x382 = 219938LL;
	uint16_t x383 = 114U;
	int8_t x384 = -19;
	int32_t t93 = 81741164;

	t93 = (x381==(x382/(x383^x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = 13403;
	uint8_t x386 = 47U;
	int32_t x387 = INT32_MIN;
	volatile int16_t x388 = INT16_MIN;
	int32_t t94 = 0;

	t94 = (x385==(x386/(x387^x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x390 = 36238834;
	int8_t x391 = 6;
	int16_t x392 = INT16_MAX;
	int32_t t95 = -251278;

	t95 = (x389==(x390/(x391^x392)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x393 = -25581256733274843LL;
	int32_t x394 = -11289374;
	static uint16_t x395 = 55U;

	t96 = (x393==(x394/(x395^x396)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x397 = -1LL;
	int8_t x398 = -1;
	int8_t x400 = INT8_MAX;
	int32_t t97 = -714154755;

	t97 = (x397==(x398/(x399^x400)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 8684983;
	uint16_t x402 = 169U;
	static volatile int32_t x403 = INT32_MIN;
	int32_t x404 = -153;
	volatile int32_t t98 = 70332;

	t98 = (x401==(x402/(x403^x404)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MIN;
	static uint8_t x408 = 3U;
	int32_t t99 = 412540178;

	t99 = (x405==(x406/(x407^x408)));

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
