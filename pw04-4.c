//Вариант №12
#include <stdio.h>

int main()
{
    int n, i;
    long long k = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        k += i * i * i;
        i++;
    }
    printf("%.6f\n", (double)k);
    return 0;
}
