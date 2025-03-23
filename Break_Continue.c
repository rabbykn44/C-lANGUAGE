#include <stdio.h>
int main()
{

    int i;
    for (i = 1; i < 20; i++)
    {
        if (i % 3 == 0)
            continue;
        printf("%d\n", i);

        if (i == 10)
            break;
    }

    return 0;
}
/*
1
2
4
5
7
8
10
*/
