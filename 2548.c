#include<stdio.h>

int main()
{
    int n = 0, m = 0, i=0, result;

    while(scanf("%d %d", &n, &m) !=EOF)
    {
        result = 0;

        for(i=1; i<=n; i++)
        {
            int value;
            scanf("%d", &value);

            if(i>(n-m))
            {
                result = value + result;
            }
        }
        printf("%d\n", result);
    }

    return 0;
}
