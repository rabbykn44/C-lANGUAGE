#include <stdio.h>

int main()
{
    int num[100], i, n;

    printf("How many numbers: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0], min = num[0];

    for (i = 1; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}

// How many numbers:6
// 3 2 1 4 2 1
// Maximum = 4