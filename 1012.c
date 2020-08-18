#include<stdio.h>
int main()
{
    double A, B, C, pi, triangle, circle, trapizium, square, rectangle;

    scanf("%lf %lf %lf", &A, &B, &C);

    pi = 3.14159;
    triangle = (1/2.0)*A*C;
    circle = pi*(C*C);
    trapizium = (1/2.0)*(A+B)*C;
    square = B*B;
    rectangle = A*B;

    printf("TRIANGULO: %.3lf\n", triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapizium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}
