#include <stdio.h>

int main()
{
    char s1[] = "Rabby Khan";
    int i = 0, len = 0;

    while (s1[i] != '\0')
    {
        printf("%c\n", s1[i]);
        i++;
        len++;
    }
    printf("Length =%d\n", len);

    return 0;
}
// R
//     a
//         b
//             b
//                 y

//                     K
//                         h
//                             a
//                                 n
//                                     Length = 10