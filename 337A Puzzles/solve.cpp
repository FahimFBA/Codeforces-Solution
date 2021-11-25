#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, LeastValue, array[1000];
    cin >> n >> m;
    for (i = 0; i < m; i++)
    {
        cin >> array[i];
    }
    sort(array, array + m);
    LeastValue = array[n - 1] - array[0];
    for (i = 1; i <= m - n; i++)
    {
        if (LeastValue > array[i + n - 1] - array[i])
        {
            LeastValue = array[i + n - 1] - array[i];
        }
    }
    cout << LeastValue << endl;
}