#ifndef BIT_UTILS_H
#define BIT_UTILS_H

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

uint32_t shift_bits(uint32_t value, uint8_t bit);
uint32_t bit_set(uint32_t value, uint8_t bit);
uint32_t bit_clear(uint32_t value, uint8_t bit);
uint32_t bit_toggle(uint32_t value, uint8_t bit);
bool bit_is_set(uint32_t value, uint8_t bit);

void print_binary_uint32(uint8_t value);

void AND_bit_operation(void);
void OR_bit_operation(void);
void XOR_bit_operation(void);
void NOT_bit_operation(void);
void SHIFT_bit_operation(void);

#endif