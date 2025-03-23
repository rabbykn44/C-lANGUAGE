#include <stdio.h>
#include <string.h> // For strcmp function

int main()
{
    char str1[30] = "Rabby Khan"; // Original string
    char str2[30];                // To store the reversed string
    int i = 0;
    int len = 0;

    // Calculate the length of str1
    while (str1[i] != '\0')
    {
        len++;
        i++;
    }

    // Reverse str1 into str2
    for (int j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }

    // Null-terminate str2
    str2[len] = '\0';

    // Print the original and reversed strings
    printf("Original string = %s\n", str1);
    printf("Reversed string = %s\n", str2);

    // Check if the string is a palindrome
    if (strcmp(str1, str2) == 0)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}