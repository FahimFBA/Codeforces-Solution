#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, min, max, Index_min, Index_max;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    Index_min = 0;
    Index_max = 0;
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            Index_max = i;
        }
        if (min >= arr[i])
        {
            min = arr[i];
            Index_min = i;
        }
    }
    if (Index_max > Index_min)
    {
        Index_min = (n - 1) - Index_min;
        cout << (Index_min + Index_max - 1) << endl;
    }
    else
    {
        Index_min = (n - 1) - Index_min;
        cout << (Index_min + Index_max) << endl;
    }
}