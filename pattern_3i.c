#include <stdio.h>
int main()
{

    int n, row, col;
    printf("Enter N =");
    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {

        for (col = 1; col <= row; col++)
        {
            printf("%d ", row % 2);
        }
        printf("\n");
    }
}

// Enter N =5
// 1 1 1 1 1 
// 0 0 0 0 
// 1 1 1 
// 0 0 
// 1 