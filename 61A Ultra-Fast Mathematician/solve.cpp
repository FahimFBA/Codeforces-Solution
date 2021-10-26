#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    int i = 0;
    cin >> str1 >> str2;
    while (str1[i] != '\0')
    {
        if (str1[i] == str2[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
        i++;
    }
}