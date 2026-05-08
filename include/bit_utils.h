#ifndef BIT_UTILS_H
#define BIT_UTILS_H

#include <stdint.h>
#include <stdbool.h>

uint32_t shift_bits(uint32_t value, uint8_t bit);
uint32_t bit_set(uint32_t value, uint8_t bit);
uint32_t bit_clear(uint32_t value, uint8_t bit);
uint32_t bit_toggle(uint32_t value, uint8_t bit);
bool bit_is_set(uint32_t value, uint8_t bit);

#endif