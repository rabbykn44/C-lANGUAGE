#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "My name is "; // Increased size to fit concatenation
    char str2[] = "Md Rabby Khan";

    strcat(str1, str2);

    printf("str1 = %s\n", str1);

    return 0;
}
//str1 = My name is Md Rabby Khan