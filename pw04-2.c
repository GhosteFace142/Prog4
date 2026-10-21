//Вариант №30
#include <stdio.h>
#include <stdint.h>

int main() 
{
    uint16_t n;
    scanf("%hd", &n);
    printf("%f\n", (float)(n * (n - 1) / 2));
    printf("%llu\n", (unsigned long long)sizeof(n));
    printf("%llu\n", (unsigned long long)sizeof(float));
    printf("%llu\n", (unsigned long long)sizeof(uint16_t));
    return 0;
}
