#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
volatile int64_t x2 = 4388347LL;
uint16_t x3 = UINT16_MAX;
static int8_t x4 = 0;
int64_t x9 = -1LL;
uint32_t x18 = 154952U;
volatile int32_t t4 = 1114932;
int16_t x26 = -1;
volatile uint16_t x27 = 9354U;
int8_t x33 = INT8_MAX;
static int16_t x35 = -14;
uint8_t x36 = 4U;
int32_t t7 = -3378;
volatile int32_t t8 = -3896;
volatile int16_t x41 = INT16_MIN;
volatile int8_t x57 = -1;
int16_t x58 = 0;
int64_t x59 = INT64_MAX;
int8_t x63 = INT8_MIN;
int8_t x64 = -4;
int8_t x65 = 46;
int64_t x68 = INT64_MIN;
int32_t x71 = INT32_MIN;
volatile int32_t x78 = INT32_MIN;
uint16_t x80 = 0U;
volatile int32_t t19 = 295408835;
int64_t x88 = INT64_MIN;
int8_t x93 = INT8_MIN;
int64_t x97 = INT64_MAX;
int8_t x98 = 55;
static volatile int32_t t26 = -77483;
int64_t x117 = INT64_MAX;
int64_t x118 = 189869LL;
static volatile int64_t x121 = INT64_MIN;
volatile int32_t t31 = -387191;
int8_t x138 = INT8_MAX;
int16_t x139 = INT16_MIN;
int64_t x140 = -417211607383810850LL;
int16_t x142 = INT16_MIN;
int32_t x151 = -504178774;
static volatile int32_t t36 = -6;
volatile int32_t t38 = 198821;
int8_t x177 = INT8_MIN;
int64_t x181 = 16LL;
volatile int8_t x184 = -1;
int16_t x185 = INT16_MAX;
volatile uint64_t x189 = 81028612749417156LLU;
static volatile int16_t x193 = INT16_MAX;
int8_t x198 = INT8_MIN;
int32_t x199 = -1;
static uint32_t x204 = UINT32_MAX;
static volatile int32_t t47 = -2834268;
int64_t x208 = INT64_MIN;
int16_t x217 = INT16_MIN;
volatile int64_t x223 = -1LL;
int32_t t53 = -94244;
int32_t x238 = INT32_MAX;
int32_t t57 = -1851;
int64_t x254 = -1LL;
static volatile uint32_t x255 = 1U;
int8_t x259 = INT8_MAX;
uint16_t x260 = UINT16_MAX;
int32_t x261 = INT32_MIN;
volatile int64_t x262 = -632LL;
uint64_t x263 = 49594871919LLU;
int64_t x268 = INT64_MIN;
int32_t x278 = INT32_MAX;
uint8_t x279 = 50U;
volatile int64_t x283 = -60LL;
uint64_t x284 = UINT64_MAX;
int32_t t66 = -61368;
volatile int32_t t67 = 93;
uint32_t x299 = UINT32_MAX;
uint64_t x305 = 7266403346LLU;
static int64_t x307 = 193LL;
uint16_t x308 = UINT16_MAX;
volatile int64_t x317 = -2636726089604120LL;
static int32_t x321 = 1112746;
int8_t x329 = INT8_MAX;
int16_t x347 = -1;
int16_t x348 = INT16_MIN;
int32_t t81 = 87809435;
volatile int8_t x353 = INT8_MIN;
int8_t x359 = -1;
static int16_t x363 = INT16_MIN;
volatile int32_t t85 = 952342;
uint16_t x372 = UINT16_MAX;
int32_t x375 = 5;
int32_t t88 = 22522068;
static volatile uint32_t x381 = 375398U;
volatile int8_t x391 = 0;
uint16_t x392 = UINT16_MAX;
volatile int32_t t93 = -184189;
volatile int32_t x403 = 140;
int8_t x407 = INT8_MIN;
static int16_t x417 = 5449;
static int64_t x419 = -1LL;
static int32_t x421 = -1;


void f0(void) {
	int32_t t0 = -3300946;

	t0 = ((x1-(x2&x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = -1;
	uint32_t x7 = 30821U;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -14978627;

	t1 = ((x5-(x6&x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = 1621U;
	static int32_t x11 = 1232133;
	int64_t x12 = 204829822169800LL;
	volatile int32_t t2 = 0;

	t2 = ((x9-(x10&x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int32_t x14 = INT32_MIN;
	static int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 422;

	t3 = ((x13-(x14&x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	volatile int64_t x20 = INT64_MIN;

	t4 = ((x17-(x18&x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -593;
	int16_t x28 = INT16_MIN;
	static int32_t t5 = 44091292;

	t5 = ((x25-(x26&x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = 467LLU;
	int32_t x32 = 85011319;
	volatile int32_t t6 = 1149;

	t6 = ((x29-(x30&x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = INT16_MAX;

	t7 = ((x33-(x34&x35))<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = UINT32_MAX;
	static volatile uint64_t x38 = UINT64_MAX;
	volatile int32_t x39 = -1;
	static uint32_t x40 = UINT32_MAX;

	t8 = ((x37-(x38&x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = INT64_MIN;
	uint64_t x43 = 20379325LLU;
	uint32_t x44 = 1031U;
	volatile int32_t t9 = -25;

	t9 = ((x41-(x42&x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -7;
	static int16_t x46 = INT16_MIN;
	static int64_t x47 = INT64_MIN;
	uint8_t x48 = 0U;
	int32_t t10 = 64942315;

	t10 = ((x45-(x46&x47))<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = 11737U;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t11 = 51;

	t11 = ((x49-(x50&x51))<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 7277LLU;
	volatile int8_t x54 = -1;
	int64_t x55 = -193341098634913LL;
	uint64_t x56 = 149059530712159186LLU;
	volatile int32_t t12 = -65774;

	t12 = ((x53-(x54&x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x60 = 4033;
	int32_t t13 = -4151;

	t13 = ((x57-(x58&x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int32_t t14 = -17;

	t14 = ((x61-(x62&x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x66 = 55;
	uint64_t x67 = UINT64_MAX;
	volatile int32_t t15 = 37;

	t15 = ((x65-(x66&x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = 125111891950301LLU;
	static int64_t x70 = -1LL;
	uint64_t x72 = 1580901350338106LLU;
	int32_t t16 = 46186699;

	t16 = ((x69-(x70&x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 5558141048LLU;
	int8_t x74 = INT8_MAX;
	volatile uint16_t x75 = UINT16_MAX;
	int64_t x76 = INT64_MAX;
	int32_t t17 = -739;

	t17 = ((x73-(x74&x75))<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = 73U;
	uint32_t x79 = UINT32_MAX;
	static volatile int32_t t18 = 65165558;

	t18 = ((x77-(x78&x79))<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x81 = 140513LLU;
	int16_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	volatile int32_t x84 = INT32_MAX;

	t19 = ((x81-(x82&x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MIN;
	int16_t x86 = -6;
	volatile int16_t x87 = 1;
	volatile int32_t t20 = -1;

	t20 = ((x85-(x86&x87))<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 49U;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	static volatile int32_t x92 = -1;
	int32_t t21 = 41916880;

	t21 = ((x89-(x90&x91))<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = -763;
	volatile int8_t x95 = 54;
	int64_t x96 = 148289157590256049LL;
	volatile int32_t t22 = 0;

	t22 = ((x93-(x94&x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x99 = UINT16_MAX;
	int16_t x100 = 893;
	volatile int32_t t23 = 246276776;

	t23 = ((x97-(x98&x99))<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 2U;
	int32_t x102 = 11613722;
	static int32_t x103 = INT32_MIN;
	static int16_t x104 = -972;
	volatile int32_t t24 = -89113272;

	t24 = ((x101-(x102&x103))<=x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = 2290015258449596385LLU;
	int64_t x108 = INT64_MIN;
	static volatile int32_t t25 = -837;

	t25 = ((x105-(x106&x107))<=x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 103U;
	int8_t x110 = INT8_MAX;
	static uint32_t x111 = 76682256U;
	uint16_t x112 = 13U;

	t26 = ((x109-(x110&x111))<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1319653LL;
	static volatile int64_t x114 = -1LL;
	static uint32_t x115 = 1096170U;
	int64_t x116 = -1350992806498890LL;
	volatile int32_t t27 = 250;

	t27 = ((x113-(x114&x115))<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x119 = INT16_MIN;
	static int64_t x120 = INT64_MAX;
	volatile int32_t t28 = 5581312;

	t28 = ((x117-(x118&x119))<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x122 = 64;
	static volatile int8_t x123 = INT8_MIN;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t29 = 297;

	t29 = ((x121-(x122&x123))<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = -1LL;
	int8_t x126 = INT8_MAX;
	static int16_t x127 = -1;
	static volatile int32_t x128 = INT32_MIN;
	static volatile int32_t t30 = 262961119;

	t30 = ((x125-(x126&x127))<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = 1374;
	volatile uint16_t x134 = UINT16_MAX;
	int8_t x135 = -3;
	volatile int32_t x136 = INT32_MIN;

	t31 = ((x133-(x134&x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	static volatile int32_t t32 = 132;

	t32 = ((x137-(x138&x139))<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MAX;
	uint16_t x143 = 21U;
	volatile int16_t x144 = INT16_MAX;
	volatile int32_t t33 = 9;

	t33 = ((x141-(x142&x143))<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = 25101U;
	static volatile uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MAX;
	int8_t x148 = -1;
	volatile int32_t t34 = 280;

	t34 = ((x145-(x146&x147))<=x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = 392;
	static uint8_t x152 = UINT8_MAX;
	volatile int32_t t35 = -11;

	t35 = ((x149-(x150&x151))<=x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	uint32_t x154 = 605U;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;

	t36 = ((x153-(x154&x155))<=x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	volatile int16_t x162 = 15308;
	volatile uint16_t x163 = 1U;
	uint16_t x164 = 1U;
	static volatile int32_t t37 = -15761;

	t37 = ((x161-(x162&x163))<=x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = 1052539220LLU;
	uint32_t x166 = 2996U;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = INT32_MIN;

	t38 = ((x165-(x166&x167))<=x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 478U;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t39 = 46;

	t39 = ((x169-(x170&x171))<=x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = INT64_MAX;
	uint64_t x174 = 20563058933LLU;
	volatile uint32_t x175 = 7U;
	volatile int64_t x176 = INT64_MAX;
	volatile int32_t t40 = -298714;

	t40 = ((x173-(x174&x175))<=x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	int16_t x180 = INT16_MAX;
	static int32_t t41 = 88;

	t41 = ((x177-(x178&x179))<=x180);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x182 = 291U;
	volatile int8_t x183 = INT8_MAX;
	int32_t t42 = -13289267;

	t42 = ((x181-(x182&x183))<=x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x186 = 338953;
	static int16_t x187 = INT16_MIN;
	uint64_t x188 = 4433703763661511469LLU;
	int32_t t43 = -81657692;

	t43 = ((x185-(x186&x187))<=x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x190 = INT16_MIN;
	int64_t x191 = 62LL;
	int16_t x192 = -1;
	volatile int32_t t44 = -6043583;

	t44 = ((x189-(x190&x191))<=x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x194 = 1571;
	uint32_t x195 = 60297U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t45 = 15652494;

	t45 = ((x193-(x194&x195))<=x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	static int16_t x200 = -689;
	int32_t t46 = 12243;

	t46 = ((x197-(x198&x199))<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = 5U;

	t47 = ((x201-(x202&x203))<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = 169U;
	volatile uint8_t x206 = 12U;
	int64_t x207 = INT64_MIN;
	int32_t t48 = 79;

	t48 = ((x205-(x206&x207))<=x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1;
	int64_t x211 = INT64_MAX;
	int16_t x212 = 1;
	static volatile int32_t t49 = -1295;

	t49 = ((x209-(x210&x211))<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x218 = INT64_MIN;
	int16_t x219 = 13;
	volatile int8_t x220 = -1;
	int32_t t50 = -52680;

	t50 = ((x217-(x218&x219))<=x220);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MAX;
	static uint8_t x222 = 0U;
	volatile uint16_t x224 = 134U;
	static volatile int32_t t51 = -64397;

	t51 = ((x221-(x222&x223))<=x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	volatile int8_t x226 = INT8_MIN;
	static int64_t x227 = INT64_MIN;
	static volatile uint16_t x228 = 1U;
	static int32_t t52 = -3273;

	t52 = ((x225-(x226&x227))<=x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MIN;
	static int8_t x230 = INT8_MAX;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MAX;

	t53 = ((x229-(x230&x231))<=x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1LL;
	uint32_t x234 = UINT32_MAX;
	uint32_t x235 = 1124346U;
	int16_t x236 = -6119;
	int32_t t54 = -1465;

	t54 = ((x233-(x234&x235))<=x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = -1LL;
	volatile uint64_t x239 = UINT64_MAX;
	static int32_t x240 = -1;
	static int32_t t55 = 5;

	t55 = ((x237-(x238&x239))<=x240);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 128;
	int16_t x246 = INT16_MAX;
	int16_t x247 = INT16_MAX;
	int32_t x248 = 160;
	volatile int32_t t56 = 74;

	t56 = ((x245-(x246&x247))<=x248);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x249 = -2;
	volatile int32_t x250 = INT32_MIN;
	int32_t x251 = -201484614;
	uint64_t x252 = UINT64_MAX;

	t57 = ((x249-(x250&x251))<=x252);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x253 = -445;
	uint16_t x256 = 6382U;
	volatile int32_t t58 = 7351;

	t58 = ((x253-(x254&x255))<=x256);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x257 = 98U;
	volatile int64_t x258 = -3973247377970254LL;
	int32_t t59 = 0;

	t59 = ((x257-(x258&x259))<=x260);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x264 = INT8_MAX;
	volatile int32_t t60 = 460675960;

	t60 = ((x261-(x262&x263))<=x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = -230;
	volatile uint32_t x266 = UINT32_MAX;
	int8_t x267 = INT8_MIN;
	volatile int32_t t61 = 313556;

	t61 = ((x265-(x266&x267))<=x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int64_t x270 = -4234166425513LL;
	uint32_t x271 = 94U;
	static volatile int64_t x272 = -1LL;
	int32_t t62 = -1;

	t62 = ((x269-(x270&x271))<=x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x273 = 3;
	volatile uint32_t x274 = 6U;
	volatile int32_t x275 = 352;
	static uint32_t x276 = UINT32_MAX;
	int32_t t63 = 0;

	t63 = ((x273-(x274&x275))<=x276);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = 45033;
	int64_t x280 = -1LL;
	volatile int32_t t64 = 42;

	t64 = ((x277-(x278&x279))<=x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MAX;
	static uint32_t x282 = UINT32_MAX;
	volatile int32_t t65 = -27885169;

	t65 = ((x281-(x282&x283))<=x284);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x285 = 2655238564831LLU;
	uint16_t x286 = 198U;
	volatile int32_t x287 = -1;
	int8_t x288 = 46;

	t66 = ((x285-(x286&x287))<=x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x289 = 179U;
	static int32_t x290 = -1;
	int32_t x291 = 117923;
	static int64_t x292 = 586039190440230373LL;

	t67 = ((x289-(x290&x291))<=x292);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t68 = 5485;

	t68 = ((x297-(x298&x299))<=x300);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x301 = 1165U;
	static int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	int32_t t69 = 7218;

	t69 = ((x301-(x302&x303))<=x304);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x306 = 22;
	volatile int32_t t70 = 9;

	t70 = ((x305-(x306&x307))<=x308);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x309 = -6180;
	uint16_t x310 = 23U;
	static volatile int32_t x311 = -1;
	static uint32_t x312 = 697U;
	volatile int32_t t71 = -4;

	t71 = ((x309-(x310&x311))<=x312);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x313 = 17U;
	int8_t x314 = INT8_MIN;
	uint32_t x315 = 2U;
	uint64_t x316 = 4028223135648090LLU;
	int32_t t72 = 173247;

	t72 = ((x313-(x314&x315))<=x316);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x318 = 18216;
	int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t73 = 5571237;

	t73 = ((x317-(x318&x319))<=x320);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x322 = UINT8_MAX;
	int64_t x323 = -326710524024LL;
	int64_t x324 = INT64_MIN;
	volatile int32_t t74 = -304436;

	t74 = ((x321-(x322&x323))<=x324);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = -8;
	int32_t x326 = -65513;
	volatile uint8_t x327 = 5U;
	int64_t x328 = INT64_MIN;
	volatile int32_t t75 = 435;

	t75 = ((x325-(x326&x327))<=x328);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x330 = 5607U;
	uint8_t x331 = 2U;
	volatile int32_t x332 = -41;
	int32_t t76 = 142402799;

	t76 = ((x329-(x330&x331))<=x332);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MAX;
	static uint64_t x335 = 633765060LLU;
	int32_t x336 = INT32_MIN;
	int32_t t77 = 15363;

	t77 = ((x333-(x334&x335))<=x336);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	volatile int64_t x338 = 0LL;
	int8_t x339 = -51;
	volatile int32_t x340 = -1;
	volatile int32_t t78 = 93514;

	t78 = ((x337-(x338&x339))<=x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = INT32_MIN;
	static volatile int16_t x342 = 522;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -1;
	volatile int32_t t79 = -111;

	t79 = ((x341-(x342&x343))<=x344);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x345 = -3829LL;
	static uint64_t x346 = 51116LLU;
	int32_t t80 = -22556;

	t80 = ((x345-(x346&x347))<=x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = 208;
	uint64_t x350 = UINT64_MAX;
	static int8_t x351 = -1;
	static int8_t x352 = -1;

	t81 = ((x349-(x350&x351))<=x352);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x354 = INT8_MIN;
	volatile uint64_t x355 = UINT64_MAX;
	int32_t x356 = -16616;
	volatile int32_t t82 = 1;

	t82 = ((x353-(x354&x355))<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -14765;
	int16_t x358 = 1;
	uint32_t x360 = UINT32_MAX;
	int32_t t83 = -16518;

	t83 = ((x357-(x358&x359))<=x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	volatile uint16_t x362 = 3U;
	int16_t x364 = INT16_MAX;
	int32_t t84 = 1241;

	t84 = ((x361-(x362&x363))<=x364);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x365 = 8U;
	int8_t x366 = INT8_MIN;
	uint16_t x367 = 6U;
	int8_t x368 = -1;

	t85 = ((x365-(x366&x367))<=x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x369 = 118U;
	int64_t x370 = 30812817154LL;
	static volatile uint32_t x371 = UINT32_MAX;
	volatile int32_t t86 = -1;

	t86 = ((x369-(x370&x371))<=x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x373 = 0U;
	int8_t x374 = -1;
	int8_t x376 = -1;
	int32_t t87 = 49;

	t87 = ((x373-(x374&x375))<=x376);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -1;
	uint32_t x378 = 6U;
	static int64_t x379 = 4057415935070LL;
	int64_t x380 = 128347LL;

	t88 = ((x377-(x378&x379))<=x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x382 = 0U;
	uint8_t x383 = 1U;
	static uint32_t x384 = UINT32_MAX;
	static int32_t t89 = 13166;

	t89 = ((x381-(x382&x383))<=x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x385 = -1;
	static int32_t x386 = INT32_MIN;
	uint32_t x387 = UINT32_MAX;
	uint64_t x388 = UINT64_MAX;
	static int32_t t90 = 103288827;

	t90 = ((x385-(x386&x387))<=x388);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x389 = 273762321533LLU;
	int64_t x390 = 730473152638LL;
	volatile int32_t t91 = -237;

	t91 = ((x389-(x390&x391))<=x392);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = -6419;
	int32_t x394 = -1;
	static uint16_t x395 = 8U;
	volatile uint64_t x396 = 9LLU;
	volatile int32_t t92 = 191202;

	t92 = ((x393-(x394&x395))<=x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = 12121;
	static int32_t x399 = -1;
	int32_t x400 = -1;

	t93 = ((x397-(x398&x399))<=x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x401 = 1;
	int16_t x402 = INT16_MIN;
	int8_t x404 = -1;
	int32_t t94 = 492;

	t94 = ((x401-(x402&x403))<=x404);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = -1LL;
	uint8_t x406 = UINT8_MAX;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t95 = 3906;

	t95 = ((x405-(x406&x407))<=x408);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x409 = 160LLU;
	int16_t x410 = 357;
	static volatile int16_t x411 = INT16_MIN;
	static int16_t x412 = INT16_MIN;
	volatile int32_t t96 = -6793;

	t96 = ((x409-(x410&x411))<=x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x413 = UINT8_MAX;
	volatile int32_t x414 = INT32_MAX;
	int8_t x415 = -4;
	int8_t x416 = INT8_MAX;
	int32_t t97 = -4885962;

	t97 = ((x413-(x414&x415))<=x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x418 = UINT64_MAX;
	uint16_t x420 = 1970U;
	static int32_t t98 = 304;

	t98 = ((x417-(x418&x419))<=x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x422 = 2;
	uint8_t x423 = UINT8_MAX;
	volatile int64_t x424 = INT64_MIN;
	int32_t t99 = 3528;

	t99 = ((x421-(x422&x423))<=x424);

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
