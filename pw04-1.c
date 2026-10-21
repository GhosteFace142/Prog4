//Вариант №23
#include <stdio.h>
#define k 1000;
int main()
{
    int base = 0, older = 0, young = 0;
    while (scanf("%d", &base)==1 && base >= 0)
    {
        older = base / k;
        young = base % k;
        printf("Мощность: %d кВт %d Вт\n", older, young);
    }
    return 0;
}
