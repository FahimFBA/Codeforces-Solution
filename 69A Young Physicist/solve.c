#include <stdio.h>
int main()
{
    int n, i, a, b, c, x = 0, y = 0, z = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        x += a;
        y += b;
        z += c;
    }
    if (x == 0 && y == 0 && z == 0)
        printf("YES\n");
    else
        printf("NO\n");
}