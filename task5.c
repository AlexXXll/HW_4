#include <stdio.h>

int main()
{
    int n, s = 0;
    printf("n = ");scanf("%d", &n);
    for(int i = n; i <= n*2; i++)
    {
        s = (2*n*(2*n + 1) * (n*4 + 1) - (n-1) * n * (2*n - 1))/6;
    }
    

    printf("сумма %d^2 + (%d+1)^2 + … + 2*%d^2 = %d\n", n, n, n, s);
    
    return 0;
}