#include<stdio.h>
int main()
{
    int Num, Work_Hour;
    double Salary_Per_Hour, Total_Salary;

    scanf("%d %d %lf", &Num, &Work_Hour, &Salary_Per_Hour);
    printf("NUMBER = %d\n", Num);

    Total_Salary = Work_Hour*Salary_Per_Hour;
    printf("SALARY = U$ %.2lf\n", Total_Salary);

    return 0;
}
