#include<stdio.h>
int main()
{
    int years, months, days;

    scanf("%d", &days);

    years = days/365;
    days = days%365;
    printf("%d ano(s)\n", years);

    months = days/30;
    days = days%30;
    printf("%d mes(es)\n", months);

    printf("%d dia(s)\n", days);

    return 0;
}
