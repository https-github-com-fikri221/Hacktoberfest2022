#include <stdio.h>

int main()
{
    int t, n, m, sum = 0;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        while (n > 0)
        {
            m = n % 10;
            sum = sum * 10 + m;
            n = n / 10;
        }
        printf("nilai sum: %d\n", sum);
    }
    return 0;
}