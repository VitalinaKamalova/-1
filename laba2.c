#include <stdio.h>
#include <math.h>

int main()
{
   
    int i, j;
    int N;
    
    printf("Введите значения размера квадратного массива: ");
    scanf("%d", &N);
    double array[N][N];
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        {
            printf("введите значения array[%d][%d]: ", i+1, j+1);
            scanf("%lf", &array[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
        {
            printf("%lf ",array[i][j]);
        }
    printf("\n");
    }
}
