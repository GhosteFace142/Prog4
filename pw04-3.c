//Вариант №6
#include <stdio.h>

int main() 
{
    int n, i = 0;
    long long a = 1;
    scanf("%d", &n);
    while (n-- > 0)
    {
        printf("%lld ", a);
        a = a * 5;
        i++;
    }
    printf("\n");
    return 0;
}
