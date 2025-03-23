#include <stdio.h>

int main()
{
    int i, j, r, c, a[30][30], b[30][30], c1[30][30];
    printf("Enther row and column: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++)     // Looping through rows
        for (j = 0; j < c; j++) // Looping through columns
            scanf("%d", &b[i][j]);

    // Performing matrix addition
    for (i = 0; i < r; i++)     // Looping through rows
        for (j = 0; j < c; j++) // Looping through columns
            c1[i][j] = a[i][j] + b[i][j];

    // Printing the resulting matrix
    printf("Sum of matrices:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d ", c1[i][j]);
        printf("\n");
    }

    return 0;
}