#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a + b + c;
    sum = max(sum, (a * b * c));
    sum = max(sum, ((a + b) * c));
    sum = max(sum, (a * (b + c)));
    sum = max(sum, (a + (b * c)));
    sum = max(sum, ((a * b) + c));
    cout << sum << endl;
}