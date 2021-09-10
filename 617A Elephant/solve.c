#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("%d\n", (n / 5));
    }
    else
    {
        printf("%d\n", ((n / 5) + 1));
    }
}