#include <stdio.h>

int main()
{
    int i, j, r, c;
    int a[30][30], b[30][30], diff[30][30];

    // Taking matrix dimensions from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Performing matrix subtraction
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            diff[i][j] = a[i][j] - b[i][j];

    // Displaying the difference matrix
    printf("Difference of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    return 0;
}
