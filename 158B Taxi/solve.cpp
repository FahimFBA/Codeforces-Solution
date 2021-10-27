// Haven't got accepted yet now!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, v, sum = 0, result;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v;
        sum += v;
    }
    if (sum % 4 == 0)
    {
        result = sum / 4;
    }
    else
    {
        result = (sum / 4) + 1;
    }

    cout << result << endl;
}