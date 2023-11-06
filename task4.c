#include <stdio.h>

int main()
{
    int n, m = 8;
    printf("n = ");scanf("%d", &n);
    for(int i = 9; i <= n; ++i)
    m = m * i;

    printf("произведение от 8 до %d = %d\n", n, m);
    
    return 0;
}