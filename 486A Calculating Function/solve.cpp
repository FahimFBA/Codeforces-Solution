#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    if (n % 2 == 0)
    {
        i = n / 2;
    }
    else
    {
        i = (((n + 1) / 2) * (-1));
    }
    cout << i << endl;
}