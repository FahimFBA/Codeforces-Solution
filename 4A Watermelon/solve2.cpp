#include <bits/stdc++.h>
using namespace std;

int main()
{
    int weight;
    cin >> weight;
    if (weight > 2 && weight <= 100)
    {
        if (weight % 2 == 0)
        {
            cout << "YES" << endl;
            exit(0);
        }

        else
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;
}