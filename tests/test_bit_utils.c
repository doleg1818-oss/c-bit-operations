#include <assert.h>
#include <stdint.h>
#include <stdbool.h>
#include "bit_utils.h"

int main(void)
{
    uint32_t reg = 0;

    reg = bit_set(reg, 3);
    assert(reg == 0x00000008);
    assert(bit_is_set(reg, 3) == true);

    reg = bit_clear(reg, 3);
    assert(reg == 0x00000000);
    assert(bit_is_set(reg, 3) == false);

    reg = bit_toggle(reg, 5);
    assert(reg == 0x00000020);

    reg = bit_toggle(reg, 5);
    assert(reg == 0x00000000);

    return 0;
}