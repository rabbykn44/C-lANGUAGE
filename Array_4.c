#include <stdio.h>
int main()
{

    int a[30], i, n;
    printf("How many fibonacci numbers :");
    scanf("%d,&n");

    a[0] = 0;
    a[1] = 1;
    for (i =2; i < n; i++)
    {

        a[i] = a[i - 1] + a[i - 2];
    }


    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}

// How many fibonacci numbers :7
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 