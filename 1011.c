#include<stdio.h>
int main()
{
    double R, pi, volume;

    pi = 3.14159;
    scanf("%lf", &R);

    volume = (4/3.0)*pi*(R*R*R);

    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
