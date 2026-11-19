#include "../include/registers.h"

#include <stdio.h>

void dump_gw_registers(void) {
	for (size_t i = 0; i < REGISTER_AMOUNT; i++) {
		printf("gw_register %zu: ",i);
		for (size_t j = 0; j < GENERAL_WIDTH_REGISTER_SIZE; j++) {
			printf("%02X, ",gw_registers[i][j]);
		}
		printf("\n");
	}
}
