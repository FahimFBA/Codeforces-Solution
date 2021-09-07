#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, out, i, sum = 0;
    cin >> k >> n >> w;
    for (i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    if (sum > n)
    {
        cout << (sum - n) << endl;
    }
    else if (sum <= n)
    {
        cout << 0 << endl;
    }
}