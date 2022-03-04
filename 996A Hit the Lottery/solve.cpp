#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, minimum_number_of_bills = 0;
    int array[] = {100, 20, 10, 5, 1};
    cin >> n;
    int i;
    for (i = 0; i < 5; i++)
    {
        minimum_number_of_bills += n / array[i];
        n = n % array[i];
    }
    cout << minimum_number_of_bills << endl;
}