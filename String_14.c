#include <stdio.h>
#include <string.h>

int main()
{
    char str[30] = "Rabby Khan";
    strlwr(str);
    printf("str = %s\n", str);
 
    strupr(str);
    printf("str = %s\n", str);
}

// str = rabby khan
// str = RABBY KHAN