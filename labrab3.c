
#include<stdio.h>
#include "math.h"
#define N 5
void sort(int a[][N])
{
    int line, k,  column, swap;
    for(column = 0; column < N; column++)
    {
        for(k = N-1; k>=0; k--)
        {
            for(line = 0; line < k; line++)
            {
                if(a[line][column] < a[line+1][column])
                {
                    swap = a[line][column];
                    a[line][column] = a[line+1][column];
                    a[line+1][column] =swap;
                }
            }
        }
    }
}
void main()
{
    int line,column;
    static int a[N][N];

    for (line = 0; line < N; line++)
    {
        for (column = 0; column < N; column++)
        {
            printf("a[%d][%d] =", line+1, column+1);
            scanf("%d", &a[line][column]);
        }
    }
    printf("old array\n");
    for (line = 0; line < N; line++)
    {
        for (column = 0; column < N; column++)
            printf ("%5d", a[line][column]);
        printf("\n");
    }
    sort(a);
    float result = 1;
    float avarage = 0;
    float sum = 0;


    printf("\nnew array\n");
    for (line = 0; line < N; line++)
    {
        for (column = 0; column < N; column++)
        {
            printf ("%5d", a[line][column]);
        }
        printf("\n");
    }
    for(line = 0; line < N; line++) {
        for (column = 0; column < N; column++) {
            if ((line + column) > 4) {
                result *= a[line][column];


            }
        }
        sum += result;
        if(line>=1) {
            printf("Multpl in [%d] line: %f\n", line + 1, result);
        }

        result = 1;
    }
    sum--;
    avarage = sum / 10;
    printf("\nseredne aref =  %f\n", avarage);
}


