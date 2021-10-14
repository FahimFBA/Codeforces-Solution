#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a = 0, d = 0, j;
    string str;
    cin >> t;

    cin >> str;
    for (j = 0; j < str.length(); j++)
    {
        if (str[j] == 'A')
        {
            a++;
        }
        else if (str[j] == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (d > a)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}