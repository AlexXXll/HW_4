#include <stdio.h>

int main()
{
    int k = 7;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, k, i*k);
    }
    return 0;
}