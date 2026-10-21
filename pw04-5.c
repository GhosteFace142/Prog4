//Вариант №16
#include <stdio.h>
const double a = 32.0;
const double b = 5.0 / 9.0;

double f_to_c(double f)
{
    return (f - a) * b;
}

int main()
{
    double f;
    while (scanf("%lf", &f)== 1)
    {
        printf("%.2f\n", f_to_c(f));
    }
    return 0;
}
