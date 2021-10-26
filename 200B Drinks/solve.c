#include <stdio.h>
int main()
{
    float n, i, value, sum = 0, avg;
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%f", &value);
        sum += value;
    }
    avg = sum / n;
    printf("%f\n", avg);
    return 0;
}