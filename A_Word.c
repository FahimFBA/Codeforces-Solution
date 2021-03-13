#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];

    scanf("%s" , &s);
    int upperCase=0, lowerCase=0,i;
    for (i=0; i<strlen(s); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        lowerCase++;
        else if (s[i]>=65 && s[i]<=90)
        upperCase++;
    }
    
    if (upperCase>lowerCase)
    {
        for (i=0; i<=strlen(s) ; i++)
       {
            if(s[i]>=97&&s[i]<=122)
            {
                s[i]=65+s[i]-97;
            }
        }
    }
    else 
    {
        for (i=0; i<=strlen(s) ; i++)
       {
            if(s[i]>=65&&s[i]<=90)
            {
                s[i]=97+s[i]-65;
            }
        }
        
    }
    
    

    
    printf("%s\n" , s);
    
    return 0;
    
}
