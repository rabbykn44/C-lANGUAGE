#include <stdio.h>
int main()
{

    int i, j;
    int A[3][4], B[3][4];

    printf("Enter elements For A matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            scanf("%d", &A[i][j]);
        }
    }
    printf("A = ");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements For B matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {

            scanf("%d", &B[i][j]);
        }
    }
    printf("B = ");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 4; j++)
        {

            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
}