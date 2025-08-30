#include <stdio.h>

int main() 
{
     int hexNumber;
    printf("Enter a hexadecimal number (with or without 0x): ");
    scanf("%x", &hexNumber);
    printf("Decimal (integer) value: %u\n", hexNumber);
    return 0;
}