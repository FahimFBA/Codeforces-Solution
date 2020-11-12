#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char arr[1000];
    scanf("%s" , &arr);
    for(i=0; i<strlen(arr); i++)
    {
        if (arr[0]>=97 && arr[0]<=122)
        
            arr[0]=65+arr[0]-97;
        
    }
    printf("%s\n" , arr);
    return 0;


}
