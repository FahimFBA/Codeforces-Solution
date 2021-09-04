#include <stdio.h>
int main()
{
    int n, i, count;
    char array[50];
    scanf("%d", &n);
    scanf("%s", &array);
    for (i = 1, count = 0; i < n; ++i)
    {
        if (array[i] == array[i - 1])
        {
            count++;
        }
    }

    printf("%d\n", count);
}
