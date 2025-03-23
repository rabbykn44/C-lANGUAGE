#include <stdio.h>
int main()
{

    int a[100], n, i, sum = 0; // a[0],a[1]...
    float avg;

    printf("Enter numbers : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i <= n; i++)
    {
        sum = sum + a[i];
        avg = (float)sum / 2;
    }
    printf(" Sum = %d\n", sum);
    printf(" Avg = %.2f\n", avg);
}

//  Sum = 150
//  Avg = 75.00