#include <stdio.h>

int main()
{
    char str1[30] = "Rabby Khan";
    char str2[30];
    int i = 0;
    int len = 0;
    int j;

    // Calculate the length of str1
    while (str1[i] != '\0')
    {
        len++;
        i++;
    }

    // Reverse str1 into str2
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

    // Null-terminate str2
    str2[j] = '\0';

    // Print the reversed string
    printf("Original string = %s\n", str1);
    printf("Reversed string = %s\n", str2);

    return 0;
}

// Original string = Rabby Khan
// Reversed string = nahK ybbaR