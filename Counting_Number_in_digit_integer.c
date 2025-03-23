#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter any Integer: ");
    scanf("%d", &num);

    // If the number is 0, it should be counted as 1 digit
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);

    return 0;
}
