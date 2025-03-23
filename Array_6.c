#include <stdio.h>

int main()
{
    int array1[30], array2[30], i, n;

    printf("How many Numbers: ");
    scanf("%d", &n);

    // Input values into array1
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]); // Fix: Added & before array1[i]
    }

    // Display array1
    printf("Array1: ");
    for (i = 0; i < n; i++)
    { // Fix: Changed loop condition to i < n
        printf("%d ", array1[i]);
    }
    printf("\n");

    // Copy elements from array1 to array2
    for (i = 0; i < n; i++)
    {
        array2[i] = array1[i];
    }

    // Display array2
    printf("Array2: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array2[i]);
    }

    return 0;
}
