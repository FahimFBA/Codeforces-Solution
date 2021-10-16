#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, magnet[100000], count = 0;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> magnet[i];
    }

    for (i = 0; i < n; i++)
    {

        if (magnet[i] != magnet[i + 1])
            count++;
    }
    cout << count << endl;
}