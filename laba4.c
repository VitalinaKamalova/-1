#include <stdio.h>
#include "triangle.h"

int main() 
{
    float a, b, c;

    printf("Введите длины сторон треугольника: ");
    scanf("%f %f %f", &a, &b, &c);

    if (tcheck(a, b, c))
    {
        float per = tperimeter(a, b, c);
        float ar = tarea(a, b, c);

        printf("Периметр треугольника: %f\n", per);
        printf("Площадь треугольника: %.2f\n", ar);
    } else {
        printf("Треугольник с такими сторонами не существует.\n");
           }

    return 0;
}
