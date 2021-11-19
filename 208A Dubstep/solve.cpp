#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int i;
    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i = i + 2;
            cout << " ";
        }
        else
        {
            cout << str[i];
        }
    }
}