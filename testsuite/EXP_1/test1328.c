#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x6 = UINT16_MAX;
volatile int32_t x7 = 28731;
static int32_t t1 = -438953;
volatile uint8_t x14 = 36U;
int16_t x31 = INT16_MAX;
int16_t x33 = -600;
int64_t x44 = 442LL;
volatile int64_t x47 = -13594LL;
volatile int16_t x48 = 57;
int16_t x55 = INT16_MAX;
volatile int32_t t10 = 250963187;
volatile uint32_t x66 = UINT32_MAX;
volatile int32_t t13 = -267023;
uint16_t x73 = 20U;
uint32_t x76 = UINT32_MAX;
volatile uint32_t t14 = 2648216U;
int32_t x77 = 17104888;
int16_t x82 = INT16_MIN;
static int64_t x84 = -7LL;
int16_t x96 = INT16_MIN;
volatile uint32_t t19 = 6452U;
int8_t x101 = -1;
volatile int32_t t23 = -20721;
int64_t x118 = INT64_MIN;
int16_t x130 = INT16_MIN;
static volatile int32_t t26 = 2018;
uint64_t x135 = 825761207LLU;
volatile uint64_t x136 = 6812132023432506926LLU;
static int16_t x137 = -1;
int64_t x138 = -1LL;
volatile int32_t t28 = 1783;
static int8_t x150 = -1;
int64_t x151 = 48129LL;
int32_t x158 = 1;
int32_t x159 = -1;
int8_t x160 = -1;
int8_t x162 = INT8_MIN;
uint32_t x163 = 392U;
volatile uint32_t t33 = 3U;
uint16_t x169 = 0U;
int8_t x171 = -22;
int8_t x172 = INT8_MIN;
int16_t x173 = -2;
int16_t x176 = INT16_MAX;
int32_t x179 = -55494622;
int64_t x188 = INT64_MIN;
volatile int64_t t39 = -121LL;
static uint16_t x190 = UINT16_MAX;
volatile uint64_t t40 = 4220803440263638LLU;
int32_t t41 = -463;
int16_t x224 = -1;
int8_t x245 = -1;
static int8_t x251 = 1;
volatile int32_t t52 = -1;
uint64_t x254 = 114270031LLU;
int16_t x255 = -23;
int64_t x262 = INT64_MAX;
static volatile int8_t x266 = INT8_MIN;
volatile uint16_t x267 = 1U;
static int64_t x272 = INT64_MAX;
volatile uint64_t t57 = 1582LLU;
static volatile int8_t x277 = -3;
int64_t x279 = 74172LL;
uint8_t x280 = 4U;
int8_t x298 = -1;
static uint16_t x316 = UINT16_MAX;
static volatile int32_t t67 = 2512057;
uint64_t t68 = 67839977898183LLU;
uint32_t x321 = UINT32_MAX;
volatile int16_t x324 = -1;
uint64_t x328 = UINT64_MAX;
static uint16_t x332 = UINT16_MAX;
uint32_t x346 = 242U;
int32_t x349 = -1;
uint64_t t77 = 1LLU;
volatile int32_t t78 = -110304;
uint32_t x365 = UINT32_MAX;
static uint64_t x368 = 11410281921413LLU;
volatile uint32_t x370 = 9520107U;
volatile uint16_t x372 = 189U;
uint64_t t82 = 14277457261LLU;
volatile uint32_t t85 = 11490U;
uint64_t x400 = 17078LLU;
uint8_t x402 = UINT8_MAX;
int32_t t87 = -238;
uint8_t x407 = 77U;
int8_t x409 = INT8_MIN;
int32_t x410 = -47419;
int8_t x434 = INT8_MIN;
int16_t x436 = -1;
int8_t x440 = INT8_MIN;
int32_t x444 = 2;
uint64_t x450 = 7220973705976427674LLU;
static uint8_t x451 = 5U;
volatile int8_t x453 = INT8_MIN;


void f0(void) {
	int64_t x1 = 14LL;
	int8_t x2 = INT8_MIN;
	uint8_t x3 = 10U;
	uint32_t x4 = UINT32_MAX;
	static volatile uint32_t t0 = 41892827U;

	t0 = (((x1==x2)|x3)-x4);

	if (t0 != 11U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 1U;
	int32_t x8 = -1;

	t1 = (((x5==x6)|x7)-x8);

	if (t1 != 28732) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 133898021905676338LLU;
	uint8_t x10 = 40U;
	int32_t x11 = -1;
	int16_t x12 = -5;
	volatile int32_t t2 = -1058913714;

	t2 = (((x9==x10)|x11)-x12);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x15 = -3;
	int16_t x16 = -1;
	volatile int32_t t3 = -8185;

	t3 = (((x13==x14)|x15)-x16);

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	volatile int8_t x22 = INT8_MAX;
	int8_t x23 = -1;
	uint8_t x24 = 6U;
	int32_t t4 = 6477248;

	t4 = (((x21==x22)|x23)-x24);

	if (t4 != -7) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 23178U;
	int16_t x30 = 0;
	int16_t x32 = 1;
	static int32_t t5 = 23;

	t5 = (((x29==x30)|x31)-x32);

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x34 = INT16_MIN;
	volatile uint16_t x35 = 242U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t6 = 0;

	t6 = (((x33==x34)|x35)-x36);

	if (t6 != 370) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	volatile int16_t x42 = 2037;
	int16_t x43 = -1;
	int64_t t7 = 34LL;

	t7 = (((x41==x42)|x43)-x44);

	if (t7 != -443LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	volatile int64_t t8 = -450224599LL;

	t8 = (((x45==x46)|x47)-x48);

	if (t8 != -13650LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = 2841769LLU;
	static int8_t x54 = INT8_MAX;
	volatile int16_t x56 = -23;
	int32_t t9 = 127990760;

	t9 = (((x53==x54)|x55)-x56);

	if (t9 != 32790) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x57 = 15LLU;
	static int64_t x58 = INT64_MIN;
	volatile uint16_t x59 = UINT16_MAX;
	int8_t x60 = INT8_MIN;

	t10 = (((x57==x58)|x59)-x60);

	if (t10 != 65663) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = 0;
	uint8_t x62 = UINT8_MAX;
	int32_t x63 = -1;
	int32_t x64 = INT32_MIN;
	static int32_t t11 = INT32_MAX;

	t11 = (((x61==x62)|x63)-x64);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x67 = 5;
	uint8_t x68 = 3U;
	static volatile int32_t t12 = 98040760;

	t12 = (((x65==x66)|x67)-x68);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x69 = UINT16_MAX;
	int16_t x70 = -2869;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = 47U;

	t13 = (((x69==x70)|x71)-x72);

	if (t13 != 32720) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;

	t14 = (((x73==x74)|x75)-x76);

	if (t14 != 128U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -1LL;
	uint64_t x79 = UINT64_MAX;
	volatile int16_t x80 = 508;
	uint64_t t15 = 514350LLU;

	t15 = (((x77==x78)|x79)-x80);

	if (t15 != 18446744073709551107LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x81 = -1;
	int16_t x83 = INT16_MAX;
	int64_t t16 = -3705317755113943LL;

	t16 = (((x81==x82)|x83)-x84);

	if (t16 != 32774LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 1U;
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 2U;
	int8_t x92 = 3;
	uint32_t t17 = UINT32_MAX;

	t17 = (((x89==x90)|x91)-x92);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x93 = 7436LLU;
	int16_t x94 = INT16_MIN;
	static volatile uint16_t x95 = UINT16_MAX;
	volatile int32_t t18 = 2296123;

	t18 = (((x93==x94)|x95)-x96);

	if (t18 != 98303) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = -30153719035311870LL;
	volatile uint8_t x98 = 7U;
	int32_t x99 = INT32_MIN;
	volatile uint32_t x100 = 671U;

	t19 = (((x97==x98)|x99)-x100);

	if (t19 != 2147482977U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x102 = INT64_MIN;
	static uint8_t x103 = 88U;
	int8_t x104 = -5;
	int32_t t20 = -8296076;

	t20 = (((x101==x102)|x103)-x104);

	if (t20 != 93) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x105 = INT16_MAX;
	int8_t x106 = INT8_MAX;
	int16_t x107 = 6218;
	uint64_t x108 = 83LLU;
	uint64_t t21 = 1939LLU;

	t21 = (((x105==x106)|x107)-x108);

	if (t21 != 6135LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x109 = INT64_MIN;
	static int16_t x110 = 63;
	static int64_t x111 = INT64_MIN;
	int32_t x112 = INT32_MIN;
	int64_t t22 = 2075LL;

	t22 = (((x109==x110)|x111)-x112);

	if (t22 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = 3152U;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = 43490;
	int16_t x116 = 1;

	t23 = (((x113==x114)|x115)-x116);

	if (t23 != 43489) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -25697841070672110LL;
	static uint64_t x119 = 2537LLU;
	int8_t x120 = -1;
	uint64_t t24 = 5049290684161723054LLU;

	t24 = (((x117==x118)|x119)-x120);

	if (t24 != 2538LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MIN;
	int64_t x123 = 209601256861634980LL;
	static int8_t x124 = 13;
	volatile int64_t t25 = -113994839286863LL;

	t25 = (((x121==x122)|x123)-x124);

	if (t25 != 209601256861634968LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x129 = -1LL;
	uint8_t x131 = 20U;
	uint16_t x132 = UINT16_MAX;

	t26 = (((x129==x130)|x131)-x132);

	if (t26 != -65515) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = 7;
	uint32_t x134 = 5U;
	volatile uint64_t t27 = 510937579305112LLU;

	t27 = (((x133==x134)|x135)-x136);

	if (t27 != 11634612051102805897LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x139 = -1;
	static int16_t x140 = INT16_MAX;

	t28 = (((x137==x138)|x139)-x140);

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x145 = 34U;
	int32_t x146 = 29596;
	static int16_t x147 = INT16_MIN;
	volatile uint8_t x148 = 1U;
	volatile int32_t t29 = 494;

	t29 = (((x145==x146)|x147)-x148);

	if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x152 = 1329;
	int64_t t30 = 532185701624857LL;

	t30 = (((x149==x150)|x151)-x152);

	if (t30 != 46800LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x153 = INT16_MIN;
	int16_t x154 = -151;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 1392362LLU;
	uint64_t t31 = 222828LLU;

	t31 = (((x153==x154)|x155)-x156);

	if (t31 != 18446744071560675606LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = -740LL;
	int32_t t32 = 0;

	t32 = (((x157==x158)|x159)-x160);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = INT8_MAX;
	static int8_t x164 = 14;

	t33 = (((x161==x162)|x163)-x164);

	if (t33 != 378U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x165 = 55406U;
	uint8_t x166 = 15U;
	uint32_t x167 = UINT32_MAX;
	static volatile uint64_t x168 = 265624835109LLU;
	volatile uint64_t t34 = 839564428511738LLU;

	t34 = (((x165==x166)|x167)-x168);

	if (t34 != 18446743812379683802LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x170 = UINT8_MAX;
	volatile int32_t t35 = -6837;

	t35 = (((x169==x170)|x171)-x172);

	if (t35 != 106) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x174 = 15851910U;
	volatile int32_t x175 = -3442942;
	int32_t t36 = 10406;

	t36 = (((x173==x174)|x175)-x176);

	if (t36 != -3475709) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	static volatile int32_t x178 = -1;
	int32_t x180 = INT32_MIN;
	int32_t t37 = -52805;

	t37 = (((x177==x178)|x179)-x180);

	if (t37 != 2091989026) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = -12;
	int32_t x183 = -1;
	int64_t x184 = 1456389224205353LL;
	volatile int64_t t38 = -3747663LL;

	t38 = (((x181==x182)|x183)-x184);

	if (t38 != -1456389224205354LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MIN;
	int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MIN;

	t39 = (((x185==x186)|x187)-x188);

	if (t39 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = 4;
	uint64_t x191 = 1858579380552LLU;
	uint8_t x192 = UINT8_MAX;

	t40 = (((x189==x190)|x191)-x192);

	if (t40 != 1858579380297LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 11177U;
	uint8_t x194 = 56U;
	int8_t x195 = -1;
	int8_t x196 = -2;

	t41 = (((x193==x194)|x195)-x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x197 = 2115U;
	static int16_t x198 = INT16_MIN;
	static int64_t x199 = INT64_MAX;
	static volatile int64_t x200 = INT64_MAX;
	int64_t t42 = 5633496266978666LL;

	t42 = (((x197==x198)|x199)-x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x201 = INT8_MIN;
	static int32_t x202 = INT32_MAX;
	uint64_t x203 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	uint64_t t43 = 834098345923638LLU;

	t43 = (((x201==x202)|x203)-x204);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = 259637;
	uint32_t t44 = 47U;

	t44 = (((x205==x206)|x207)-x208);

	if (t44 != 4294707658U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x213 = INT16_MIN;
	static int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	static int32_t t45 = 1;

	t45 = (((x213==x214)|x215)-x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = 3;
	int16_t x222 = INT16_MIN;
	volatile uint16_t x223 = 19069U;
	static int32_t t46 = -844277306;

	t46 = (((x221==x222)|x223)-x224);

	if (t46 != 19070) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 1U;
	int8_t x231 = -3;
	static uint16_t x232 = 20450U;
	volatile int32_t t47 = 6615;

	t47 = (((x229==x230)|x231)-x232);

	if (t47 != -20453) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MIN;
	uint8_t x236 = 9U;
	volatile int32_t t48 = -987096;

	t48 = (((x233==x234)|x235)-x236);

	if (t48 != -137) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x237 = 16U;
	int32_t x238 = -1;
	uint16_t x239 = 0U;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t49 = -1275;

	t49 = (((x237==x238)|x239)-x240);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = -1LL;
	int64_t x242 = -1LL;
	uint16_t x243 = 1793U;
	int8_t x244 = 3;
	volatile int32_t t50 = -177011774;

	t50 = (((x241==x242)|x243)-x244);

	if (t50 != 1790) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x246 = INT64_MIN;
	uint16_t x247 = 7994U;
	uint32_t x248 = UINT32_MAX;
	uint32_t t51 = 7741U;

	t51 = (((x245==x246)|x247)-x248);

	if (t51 != 7995U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = -227LL;
	int16_t x252 = INT16_MIN;

	t52 = (((x249==x250)|x251)-x252);

	if (t52 != 32769) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x253 = UINT16_MAX;
	static volatile int8_t x256 = INT8_MAX;
	volatile int32_t t53 = -1498683;

	t53 = (((x253==x254)|x255)-x256);

	if (t53 != -150) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x257 = 7842349U;
	int32_t x258 = INT32_MAX;
	uint64_t x259 = 169LLU;
	int16_t x260 = 25;
	uint64_t t54 = 669242LLU;

	t54 = (((x257==x258)|x259)-x260);

	if (t54 != 144LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -1;
	int32_t x263 = 54741;
	volatile int8_t x264 = 1;
	volatile int32_t t55 = -2374;

	t55 = (((x261==x262)|x263)-x264);

	if (t55 != 54740) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MAX;
	int16_t x268 = 1528;
	int32_t t56 = 15847211;

	t56 = (((x265==x266)|x267)-x268);

	if (t56 != -1527) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x269 = -3LL;
	int64_t x270 = -1LL;
	uint64_t x271 = 13692LLU;

	t57 = (((x269==x270)|x271)-x272);

	if (t57 != 9223372036854789501LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = -2;
	int16_t x274 = -1;
	volatile int32_t x275 = INT32_MAX;
	int16_t x276 = 5369;
	int32_t t58 = 669466391;

	t58 = (((x273==x274)|x275)-x276);

	if (t58 != 2147478278) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x278 = INT8_MIN;
	volatile int64_t t59 = 2735090424221LL;

	t59 = (((x277==x278)|x279)-x280);

	if (t59 != 74168LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x281 = UINT64_MAX;
	static int64_t x282 = -27132563821LL;
	uint8_t x283 = 1U;
	int16_t x284 = -3;
	volatile int32_t t60 = -401403;

	t60 = (((x281==x282)|x283)-x284);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	static int8_t x287 = -7;
	int8_t x288 = INT8_MIN;
	volatile int32_t t61 = 2834379;

	t61 = (((x285==x286)|x287)-x288);

	if (t61 != 121) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x289 = 83135014636496LLU;
	uint8_t x290 = 7U;
	uint64_t x291 = UINT64_MAX;
	int16_t x292 = 18;
	uint64_t t62 = 7LLU;

	t62 = (((x289==x290)|x291)-x292);

	if (t62 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x293 = 3U;
	int32_t x294 = -1949203;
	int32_t x295 = -115075;
	int32_t x296 = 1850276;
	int32_t t63 = -840;

	t63 = (((x293==x294)|x295)-x296);

	if (t63 != -1965351) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x297 = INT8_MAX;
	volatile int16_t x299 = INT16_MIN;
	uint32_t x300 = 1328120U;
	volatile uint32_t t64 = 53470U;

	t64 = (((x297==x298)|x299)-x300);

	if (t64 != 4293606408U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x301 = 1;
	static int16_t x302 = 503;
	uint8_t x303 = 1U;
	static int16_t x304 = INT16_MAX;
	static volatile int32_t t65 = 51639810;

	t65 = (((x301==x302)|x303)-x304);

	if (t65 != -32766) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x305 = -1;
	static int16_t x306 = 1;
	int8_t x307 = -49;
	static volatile int8_t x308 = -1;
	volatile int32_t t66 = -374;

	t66 = (((x305==x306)|x307)-x308);

	if (t66 != -48) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x314 = UINT16_MAX;
	int8_t x315 = -1;

	t67 = (((x313==x314)|x315)-x316);

	if (t67 != -65536) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x317 = -172;
	volatile int32_t x318 = INT32_MIN;
	volatile uint64_t x319 = 3958465LLU;
	int32_t x320 = 67979;

	t68 = (((x317==x318)|x319)-x320);

	if (t68 != 3890486LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x322 = 1U;
	int32_t x323 = -43155013;
	static int32_t t69 = -97;

	t69 = (((x321==x322)|x323)-x324);

	if (t69 != -43155012) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = -1LL;
	int16_t x327 = -1;
	static uint64_t t70 = 142544697526LLU;

	t70 = (((x325==x326)|x327)-x328);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MAX;
	static int64_t t71 = 103912027591646LL;

	t71 = (((x329==x330)|x331)-x332);

	if (t71 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = 12567U;
	volatile int8_t x334 = INT8_MIN;
	static int16_t x335 = INT16_MIN;
	volatile int8_t x336 = -19;
	volatile int32_t t72 = -574085520;

	t72 = (((x333==x334)|x335)-x336);

	if (t72 != -32749) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = INT64_MIN;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = INT32_MIN;
	static int64_t t73 = 110LL;

	t73 = (((x341==x342)|x343)-x344);

	if (t73 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = INT32_MIN;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t74 = 4728094;

	t74 = (((x345==x346)|x347)-x348);

	if (t74 != -32640) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x350 = 0U;
	int16_t x351 = -38;
	int32_t x352 = INT32_MIN;
	int32_t t75 = -274001;

	t75 = (((x349==x350)|x351)-x352);

	if (t75 != 2147483610) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x353 = UINT32_MAX;
	int32_t x354 = 8;
	int32_t x355 = INT32_MIN;
	uint32_t x356 = UINT32_MAX;
	uint32_t t76 = 4305U;

	t76 = (((x353==x354)|x355)-x356);

	if (t76 != 2147483649U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = -1;
	uint64_t x358 = 128103232188884LLU;
	static uint64_t x359 = 146593790LLU;
	int32_t x360 = INT32_MAX;

	t77 = (((x357==x358)|x359)-x360);

	if (t77 != 18446744071708661759LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x361 = 41474U;
	int64_t x362 = 116475565720LL;
	int16_t x363 = INT16_MIN;
	volatile int8_t x364 = INT8_MIN;

	t78 = (((x361==x362)|x363)-x364);

	if (t78 != -32640) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x366 = 126223494;
	static int8_t x367 = INT8_MAX;
	volatile uint64_t t79 = 15497931400849034LLU;

	t79 = (((x365==x366)|x367)-x368);

	if (t79 != 18446732663427630330LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	int16_t x371 = INT16_MAX;
	int32_t t80 = 510439324;

	t80 = (((x369==x370)|x371)-x372);

	if (t80 != 32578) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 25U;
	volatile uint64_t x374 = UINT64_MAX;
	int8_t x375 = 0;
	static int16_t x376 = -1;
	static volatile int32_t t81 = -110571;

	t81 = (((x373==x374)|x375)-x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 19U;
	int8_t x378 = -1;
	volatile int32_t x379 = 4360;
	uint64_t x380 = 3883851582241502805LLU;

	t82 = (((x377==x378)|x379)-x380);

	if (t82 != 14562892491468053171LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x381 = -1;
	uint32_t x382 = 604743598U;
	static volatile uint64_t x383 = 448LLU;
	int16_t x384 = -1;
	volatile uint64_t t83 = 17820350798397689LLU;

	t83 = (((x381==x382)|x383)-x384);

	if (t83 != 449LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = -1;
	int64_t x386 = -1LL;
	int32_t x387 = INT32_MAX;
	static int8_t x388 = INT8_MAX;
	int32_t t84 = 41306364;

	t84 = (((x385==x386)|x387)-x388);

	if (t84 != 2147483520) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 2U;

	t85 = (((x393==x394)|x395)-x396);

	if (t85 != 125U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = -1;
	uint16_t x398 = 18019U;
	uint64_t x399 = 121053571LLU;
	volatile uint64_t t86 = 31828579LLU;

	t86 = (((x397==x398)|x399)-x400);

	if (t86 != 121036493LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x401 = 0;
	int16_t x403 = INT16_MIN;
	static volatile uint16_t x404 = 5U;

	t87 = (((x401==x402)|x403)-x404);

	if (t87 != -32773) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x405 = 827383565LLU;
	volatile uint16_t x406 = UINT16_MAX;
	uint64_t x408 = UINT64_MAX;
	uint64_t t88 = 111109070LLU;

	t88 = (((x405==x406)|x407)-x408);

	if (t88 != 78LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x411 = 10;
	uint32_t x412 = 1957U;
	static volatile uint32_t t89 = 37379061U;

	t89 = (((x409==x410)|x411)-x412);

	if (t89 != 4294965349U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint16_t x413 = 30U;
	int8_t x414 = 1;
	int8_t x415 = -1;
	int32_t x416 = 19;
	int32_t t90 = 472;

	t90 = (((x413==x414)|x415)-x416);

	if (t90 != -20) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x417 = 2594U;
	static uint8_t x418 = UINT8_MAX;
	int32_t x419 = -1;
	int16_t x420 = INT16_MAX;
	static volatile int32_t t91 = 324;

	t91 = (((x417==x418)|x419)-x420);

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x425 = UINT8_MAX;
	uint8_t x426 = 0U;
	int16_t x427 = INT16_MIN;
	static int16_t x428 = INT16_MAX;
	int32_t t92 = 255;

	t92 = (((x425==x426)|x427)-x428);

	if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = INT8_MAX;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 15621LLU;
	uint16_t x432 = 55U;
	volatile uint64_t t93 = 26085951LLU;

	t93 = (((x429==x430)|x431)-x432);

	if (t93 != 15566LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	int32_t t94 = 1;

	t94 = (((x433==x434)|x435)-x436);

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = INT32_MIN;
	uint64_t x438 = 10287817134LLU;
	uint16_t x439 = 28U;
	volatile int32_t t95 = -16603724;

	t95 = (((x437==x438)|x439)-x440);

	if (t95 != 156) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x441 = 810U;
	uint32_t x442 = 3492U;
	volatile int8_t x443 = INT8_MIN;
	int32_t t96 = -118;

	t96 = (((x441==x442)|x443)-x444);

	if (t96 != -130) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x445 = INT8_MIN;
	static int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MAX;
	int32_t x448 = -38;
	int32_t t97 = 475948407;

	t97 = (((x445==x446)|x447)-x448);

	if (t97 != 165) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = -1;
	static int8_t x452 = INT8_MIN;
	int32_t t98 = -257751;

	t98 = (((x449==x450)|x451)-x452);

	if (t98 != 133) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x454 = 3U;
	int8_t x455 = -3;
	uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t99 = 439481323U;

	t99 = (((x453==x454)|x455)-x456);

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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
