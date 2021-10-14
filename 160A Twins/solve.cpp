#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, sum1 = 0, sum2 = 0, count = 0;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        sum1 += array[i];
    }
    sum1 /= 2;
    sort(array, array + n);
    for (j = n - 1; j >= 0; j--)
    {
        sum2 += array[j];
        count++;
        if (sum1 < sum2)
        {
            break;
        }
    }
    cout << count << endl;
}