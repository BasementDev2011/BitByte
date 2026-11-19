#ifndef BIT_BYTE_INSTRUCTIONS_H
#define BIT_BYTE_INSTRUCTIONS_H

#include "registers.h"

#define LITERAL_SIZE 255
#define LITERALS_AVAILABLE 4

enum {
	NOT_IN_USE = 0x00,
	IN_USE = 0x01
};

enum {
	LT_0 = 0x00,
	LT_1 = 0x01,
	LT_2 = 0x02,
	LT_3 = 0x03,
	LT_4 = 0x04
}

struct instruction_t {
	unsigned char instruction;
	unsigned char literal[LITERALS_AVAILABLE][LITERAL_SIZE];
	unsigned char used_registers[REGISTER_AMOUNT];
};

enum {
	NOP = 0x00,
	MOV_I = 0x01,
	MOV_R = 0x02,
	PUSH = 0x03,
	POP = 0x04,
	STORE_R = 0x05,
	STORE_I = 0x06,
	BLOCK = 0x07
};

#endif /*BIT_BYTE_INSTRUCTIONS_H*/
