#include<stdio.h>
#include<stdint.h>

int main(void){
    uint8_t data = 10; 
    data = 50;
    uint8_t const data2 = 30;
    printf(" data 2 init value %u\n", data2);
    uint8_t *ptr = &data2;
    *ptr = 50;
    printf(" data 2 value modified%u\n", data2);
    return 0;
}