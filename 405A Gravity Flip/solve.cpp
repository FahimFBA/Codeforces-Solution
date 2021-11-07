#include<bits/stdc++.h>
using namespace std;

int main()
{
    int array[101], i, n;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array, array + n);
    for(i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    return 0;
}