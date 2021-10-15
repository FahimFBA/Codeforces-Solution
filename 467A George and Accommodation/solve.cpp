#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, p, q, canStay, roomNo;
    cin >> n;
    for (i = 0, roomNo = 0; i < n; i++)
    {
        cin >> p >> q;
        canStay = q - p;
        if (canStay >= 2)
        {
            roomNo++;
        }
    }
    cout << roomNo << endl;
}