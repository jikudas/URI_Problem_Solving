#include<stdio.h>
int main()
{
    int X;
    float Y, avg_consumption;

    scanf("%d %f", &X, &Y);

    avg_consumption = X/Y;

    printf("%.3f km/l\n", avg_consumption);

    return 0;
}
