#include "bit_utils.h"

uint32_t shift_bits(uint32_t value, uint8_t bit)
{
    return value << bit;
}

uint32_t bit_set(uint32_t value, uint8_t bit)
{
   return value | (1UL << bit);
}

uint32_t bit_toggle(uint32_t value, uint8_t bit)
{
    return value &~(1UL << bit);
}

uint32_t bit_clear(uint32_t value, uint8_t bit)
{
    return value &~(1UL << bit);
}

bool bit_is_set(uint32_t value, uint8_t bit)
{
    if(value &(1UL << bit))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


//-------------------------------------------------------------------
void print_binary_uint32(uint8_t value)
{
    for(int i = 7; i>=0; i--)
    {
        printf("%u", (value >> i) & 1U);
        if(i % 4 == 0)
        {
            printf(" ");
        }
    }
    printf("\n");
}

void AND_bit_operation(void)
{
     /*
    1. AND
    1   &   1   =   1
    1   &   0   =   0
    0   &   1   =   0
    0   &   0   =   0
    */    
    printf("END\n");

    uint8_t data = 0b00001111;
    uint8_t mask = 0b11001100;
    uint8_t res = data & mask;
    print_binary_uint32(res);

    // USING: For check some bit in byte
    uint8_t target_bit = 3;
    if(data & (1 << target_bit))
    {
        printf("%d bit is SET\n", target_bit);
    }
    else
    {
        printf("%d bit is UNSET\n", target_bit);
    }
}

void OR_bit_operation(void)
{
    /*
    2. OR
    1   |   1   =   1
    1   |   0   =   1
    0   |   1   =   1
    0   |   0   =   0
    */ 
    printf("OR\n");

    uint8_t data = 0b00001010;
    uint8_t mask = 0b00001101;
    uint8_t res = data | mask;
    print_binary_uint32(res);

    // USING: For set some bits in byte
    uint8_t target_bit = 4;
    res = data |(1 << target_bit);
    print_binary_uint32(res);
}

void XOR_bit_operation(void)
{
    /*
    3. XOR
    0   ^   0   =   0
    1   ^   0   =   1
    0   ^   1   =   1
    1   ^   1   =   0
    */
    printf("XOR\n");

    uint8_t data = 0b11110101;
    uint8_t mask = 0b11101001;
    uint8_t res = data ^ mask;
    print_binary_uint32(res);

    // USING: Inverting some bit on bytes
    data = 0b00001000;
    res = data ^ (1 << 3);
    print_binary_uint32(res);
}

void NOT_bit_operation(void)
{
    /*
    NOT
    ~1  = 0
    ~0  = 1
    */
    printf("NOT\n");
    uint8_t data = 0b00001111;
    
    printf("Before NOT ");
    print_binary_uint32(data);

    data = ~data;
    printf("After NOT ");
    print_binary_uint32(data);

}

void SHIFT_bit_operation(void)
{
    printf("SHIFT BITS\n");

    uint8_t data = 0b00010000;
    print_binary_uint32(data);

    uint8_t shift_position = 2;
    data = data << shift_position;
    print_binary_uint32(data); 

}