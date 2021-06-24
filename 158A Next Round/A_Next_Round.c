#include<stdio.h>
int main()
{
    int n,k,i, num[100],c=0;
    scanf("%d %d" , &n, &k);
    
    for (i=0; i<n; i++)
    {
        scanf("%d" , &num[i]);
        
        
    }

    for (i=0; i<n; i++)
    {
        if ((num[i]>=num[k-1]) && num[i]>0)
        {
            c++;
        }
    }
    printf("%d\n" , c);
    

}