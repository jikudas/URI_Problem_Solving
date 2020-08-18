#include<stdio.h>

int main()
{
    int x, y, z;

    scanf("%d", &x);

    y = x%3600;
    z = y%60;

    printf("%d:%d:%d\n", x/3600, y/60, z);

    return 0;
}
