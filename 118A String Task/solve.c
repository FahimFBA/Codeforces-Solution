#include <stdio.h>
#include <string.h>
#include <ctype.h> // for using tolower
int main()
{
    char str[100];
    int i;
    scanf("%s", &str);     // as we are taking only single word, so scanf is completely fine here
    int len = strlen(str); // length of the string
    for (i = 0; i < len; i++)
    {
        if (!strchr("aeiouyAEIOUY", str[i])) // The strchr() function returns a pointer to the first occurrence of c that is converted to a character in string. The function returns NULL if the specified character is not found.
        // if we find a/e/i/o/u/y/A/E/I/O/U/Y at the beginning of the string then,
        {
            printf(".%c", tolower(str[i])); // using tolower() to convert the whole string into lowercase before printing out
        }
    }
}