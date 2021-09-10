#include <stdio.h>
int main()
{
    int L, B, year = 0;
    scanf("%d%d", &L, &B);
    while (L <= B)
    {
        L *= 3;
        B *= 2;
        year++;
    }
    printf("%d\n", year);
}