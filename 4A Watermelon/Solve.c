#include<stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if(w>=1 && w<=100)
    {
        if(w==2) printf("NO\n");
        else if (w%2==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
