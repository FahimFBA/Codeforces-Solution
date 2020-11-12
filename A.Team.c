#include<stdio.h>
int main()
{
    int t_case,i,a,b,c;
    scanf("%d" ,&t_case);
    int counter=0;
    for (i=0; i<t_case; i++)
    {
        scanf("%d%d%d" , &a, &b, &c);
        if (a==1 && b==1 || b==1 && c==1 || a==1 && c==1 || a==1 && b==1 && c==1)
        counter++;
    }
    printf("%d" , counter);
}