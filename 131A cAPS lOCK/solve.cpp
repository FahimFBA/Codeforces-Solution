#include <bits/stdc++.h>
using namespace std;

int main()
{
    string array;
    cin >> array;
    char ch;
    bool flag = true;
    int i, j;
    for (i = 1; i < array.length(); i++)
    {
        if (islower(array[i]))
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        for (j = 0; j < array.length(); j++)
        {
            if (islower(array[j]))
            {
                ch = toupper(array[j]);
            }
            else
            {
                ch = tolower(array[j]);
            }
            cout << ch;
        }
    }
    else
    {
        cout << array;
    }
}