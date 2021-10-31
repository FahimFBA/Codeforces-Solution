#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count = 0;

    cin >> n;
    int array[n];
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        for (i = 1; i < n; i++)
        {
            if (array[i] >= array[i - 1])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}