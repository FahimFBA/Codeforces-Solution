#include <bits\stdc++.h>
using namespace std;

int main()
{
    int test_case, i, a, b, minMove;
    cin >> test_case;
    for (i = 1; i <= test_case; i++)
    {
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            minMove = a % b;
            cout << b - minMove << endl;
        }
    }
}
