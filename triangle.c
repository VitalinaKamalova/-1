#include <math.h>
#include <stdbool.h>

bool checkt(float a, float b, float c) 
{
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        return true;
    } else {
        return false;
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
