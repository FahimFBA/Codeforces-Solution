#include <stdio.h>
int main()
{
    int n, i, j, p, value, arr[101];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (j = 1; j <= n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i] == j)
            {
                value = i + 1;
                printf("%d ", value);
            }
        }
    }
}