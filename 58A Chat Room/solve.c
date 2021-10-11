#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101];
    char str2[101] = "hello";
    scanf("%s", &str1);
    int i, j = 0, count = 0;
    int len = strlen(str1);
    for (i = 0; i < len; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
            count++;
        }
    }
    if (count == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}