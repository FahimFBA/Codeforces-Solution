#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    a = a + b; // concatenation of a and b
    sort(c.begin(), c.end()), sort(a.begin(), a.end());
    if (c == a)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}