#include <stdio.h>

int main()
{
    int i, j, k, r1, c1, r2, c2;
    int a[30][30], b[30][30], product[30][30];

    // Taking dimensions of first matrix
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    // Taking dimensions of second matrix
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication condition: columns of first must equal rows of second
    if (c1 != r2)
    {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Initializing product matrix to zero
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            product[i][j] = 0;

    // Performing matrix multiplication
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Displaying the product matrix
    printf("Product of matrices:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
            printf("%d ", product[i][j]);
        printf("\n");
    }

    return 0;
}
