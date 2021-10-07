#include <stdio.h>
int max(int a, int b);
int main()
{
    int n, a, b, i, passengers = 0, counter = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        counter = counter - a;
        counter = counter + b;
        passengers = max(passengers, counter);
    }
    printf("%d\n", passengers);
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}