#include<stdio.h>

int main()
{
    int spent_time, avg_speed;
    float fuel_spent;

    scanf("%d %d", &spent_time, &avg_speed);

    fuel_spent = (spent_time*avg_speed)/12.0;

    printf("%.3f\n", fuel_spent);

    return 0;
}
