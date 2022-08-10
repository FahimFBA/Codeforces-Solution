#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, high, highest;
    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    high = 1, highest = 1;
    for (j = 1; j < n; j++)
    {

        if (array[j] >= array[j - 1])
        {
            high++;
            if (high > highest)
            {
                highest = high;
            }
            else
            {
                continue;
            }
        }
        else
        {
            high = 1;
        }
    }
    cout << highest << endl;
}