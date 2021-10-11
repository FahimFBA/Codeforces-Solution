#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int i = 0;
    int len = str.length();
    int count = 0;
    for (i = 0; i < len; i++)
    {
        if (str[i] == '4' || str[i] == '7')
        {
            count++;
        }
    }
    if (count == 7 || count == 4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}