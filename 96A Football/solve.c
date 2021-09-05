#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    if (strstr(str, "0000000") || strstr(str, "1111111")) // The strstr() function returns pointer to the first occurrence of the matched string in the given string. It is used to return substring from first match till the last character.
        printf("YES");
    else
        printf("NO");
    return 0;
}