#ifndef BIT_BYTE_REGISTERS_H
#define BIT_BYTE_REGISTERS_H

#define REGISTER_AMOUNT 7

enum {
	imm = 0x01,
	imm2 = 0x02,
	imm4 = 0x04,
	imm8 = 0x08,
	imm16 = 0x16,
	imm32 = 0x32,
	imm64 = 0x64,
	imm255 = 0xFF
};

enum {
	R0 = 0x00,
	R1 = 0x01,
	R2 = 0x02,
	R3 = 0x03,
	R4 = 0x04,
	R5 = 0x05,
	R6 = 0x06,
	R7 = 0x07
};

enum {
	GENERAL_WIDTH_REGISTER_SIZE = 8,
	DOUBLE_EXTENDED_REGISTER_SIZE = 16,
	QUAD_EXTENDED_REGISTER_SIZE = 32,
	DQUAD_EXTENDED_REGISTER_SIZE = 64,
	LONG_REGISTER_SIZE = 255
};

extern unsigned char gw_registers[REGISTER_AMOUNT][GENERAL_WIDTH_REGISTER_SIZE];
extern unsigned char de_registers[REGISTER_AMOUNT][DOUBLE_EXTENDED_REGISTER_SIZE];
extern unsigned char qe_registers[REGISTER_AMOUNT][QUAD_EXTENDED_REGISTER_SIZE];
extern unsigned char dqe_registers[REGISTER_AMOUNT][DQUAD_EXTENDED_REGISTER_SIZE];

/*840 Bytes*/

#endif
