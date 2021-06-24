#include <stdio.h>

int main() {
    int year;
    scanf("%d" , &year);
    for (;;)
    {
        year++;
        int a=year/1000;
        int b=(year/100)%10;
        int c=(year/10) % 10;
        int d=(year%10);
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        } 

    }
    printf("%d\n" , year);
}
