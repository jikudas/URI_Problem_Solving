#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a[5], b[5], i=1;
    bool x;

    for(i = 1; i <= 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 1; i <= 5; i++)
    {
        scanf("%d", &b[i]);
    }
    if(a[1] + b[1] == 1 && a[2] + b[2] == 1 && a[3] + b[3] == 1 && a[4] + b[4] == 1 && a[5] + b[5] == 1)
         {
            printf("Y\n");
         }
    else
        printf("N\n");
    return 0;
}
