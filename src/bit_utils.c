#include "bit_utils.h"

uint32_t bit_set(uint32_t value, uint8_t bit)
{
    return value | (1UL << bit);
}

uint32_t bit_clear(uint32_t value, uint8_t bit)
{
    return value & ~(1UL << bit);
}

uint32_t bit_toggle(uint32_t value, uint8_t bit)
{
    return value ^ (1UL << bit);
}

bool bit_is_set(uint32_t value, uint8_t bit)
{
    return (value & (1UL << bit)) != 0;
}