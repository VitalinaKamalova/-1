#include <math.h>

float tcheck(float a, float b, float c) 
{
    if (a + b > c && a + c > b && b + c > a) 
    {
        return 1;
    } else {
        return 0;
           }
}


float tperimeter(float a, float b, float c) 
{
    return a + b + c;
}


float tarea(float a, float b, float c) 
{
    float p = (a + b + c) / 2.;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
