#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,length;
    char string[100];
    scanf("%d" , &n);
    for ( i = 1; i <=n; i++)
    {
        scanf("%s" , &string);
        length=strlen(string);
        if(length>10)
        {
            printf("%c", string[0]);
            printf("%d" , length-2);
            printf("%c\n" , string[length-1]);
        }
        
        else
        {
            printf("%s\n" , string);
        }
         
         
    }
    return 0;
    
}