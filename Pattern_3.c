#include <stdio.h>
int main()
{

    int n, i, j;
    printf("Enter N =");
    scanf("%d", &n);

    for (i = n; i >= 1; i--)
    {

        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Enter N =5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1