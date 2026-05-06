#include <stdio.h>
#include <stdint.h>
#include "bit_utils.h"

int main(void)
{
    uint32_t reg = 0;

uint32_t test = 0;

    reg = bit_set(reg, 3);
    printf("After set bit 3: 0x%08X\n", reg);

    reg = bit_toggle(reg, 3);
    printf("After toggle bit 3: 0x%08X\n", reg);

    reg = bit_set(reg, 7);
    printf("After set bit 7: 0x%08X\n", reg);

    reg = bit_clear(reg, 7);
    printf("After clear bit 7: 0x%08X\n", reg);

    return 0;
}