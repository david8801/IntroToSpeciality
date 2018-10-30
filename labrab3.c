#include<stdio.h>
#include "math.h"
#define n 5
void sort(int a[n][n]);
void main(void)
{
    int i,j;
    static int a[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d] =", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("old array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf ("%5d", a[i][j]);
        printf("\n");
    }
    sort(a);
    float result = 1;
    float sred = 0;
    float sum = 0;


    printf("\nnew array\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf ("%5d", a[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i + j) > 4) {
                result *= a[i][j];


            }
        }
        sum += result;
        printf("Multpl in [%d] line: %f\n", i, result);


        result = 1;
    }
    sum--;
    sred = sum / 10;
    printf("\nseredne aref =  %f\n", sred );


}
void sort(int a[][n])
{
    int i, k, j, c;
    for(j = 0; j < n; j++)
    {
        for(k = n-1; k>=0; k--)
        {
            for(i = 0; i < k; i++)
            {
                if(a[i][j] < a[i+1][j])
                {
                    c = a[i][j];
                    a[i][j] = a[i+1][j];
                    a[i+1][j] =c;
                }
            }
        }
    }
}