#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "My name is ";
    char str2[] = "Md Rabby Khan";

    int d = strcmp(str1, str2);
    if (d == 0)
    {

        printf("String are equal");
    }

    else
        printf("String are not  equal");
}
