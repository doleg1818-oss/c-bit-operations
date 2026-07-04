#include <stdio.h>
#include <stdint.h>
#include "bit_utils.h"

void print_binary_uint32(uint8_t value);
void test_bit_operations(void);

int main(void)
{
    uint32_t reg = 1;

    printf("Shift bit on 1 \n");
    reg = shift_bits(reg, 1);
    print_binary_uint32(reg);

    printf("Set bit 3 \n");
    reg = 0;
    reg = bit_set(reg, 3);
    print_binary_uint32(reg);

    printf("Before toggle bit 3 \n");
    print_binary_uint32(reg);
    reg = bit_toggle(reg, 3);
    printf("After toggle bit 3 \n");
    print_binary_uint32(reg);

    reg = 7;
    printf("Brfore bit clear ");
    print_binary_uint32(reg);
    printf("After bit clear ");
    reg = bit_clear(reg, 1);
    print_binary_uint32(reg);

    reg = 15;
    uint8_t target_bit = 3;
    print_binary_uint32(reg);
    if(bit_is_set(reg, target_bit) == 1)
    {
        printf("Bit %d is SET \n", target_bit);
    }
    else
    {
        printf("Bit %d is UNSET \n", target_bit);
    }

    test_bit_operations();

    return 0;
}

// void print_binary_uint32(uint8_t value)
// {
//     for(int i = 7; i>=0; i--)
//     {
//         printf("%u", (value >> i) & 1U);
//         if(i % 4 == 0)
//         {
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

void test_bit_operations(void)
{
    printf("--- BIT OPERATIONS ---\n");

    AND_bit_operation();
    OR_bit_operation();
    XOR_bit_operation();
    NOT_bit_operation();
    SHIFT_bit_operation();
    
//     Завдання	Оператор
// Встановити біт	`value
// Очистити біт	value &= ~(1 << n)
// Перемкнути біт	value ^= (1 << n)
// Перевірити біт	value & (1 << n)
// Інвертувати всі біти	value = ~value
// Зсунути вліво	value << n
// Зсунути вправо	value >> n

}