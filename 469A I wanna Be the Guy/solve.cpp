#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, i, intArray[10000], count = 0;
    cin >> n;
    cin >> p;
    for (i = 0; i < p; i++)
    {
        cin >> intArray[i];
    }
    cin >> q;
    for (i = p; i < (p + q); i++)
    {
        cin >> intArray[i];
    }
    // we have got all the data in a single int array
    sort(intArray, ((intArray) + (p + q))); // sorting the complete int array
    for (i = 0; i < (p + q); i++)
    {
        if (intArray[i] != intArray[i + 1])
        {
            count++;
        }
    }
    cout << ((count == n) ? "I become the guy." : "Oh, my keyboard!");
}