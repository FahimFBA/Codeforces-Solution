#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, hi[100], ai[100], count = 0, j, k;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> hi[i] >> ai[i];
    }
    for (j = 0; j < n; j++)
    {
        for (k = 0; k < n; k++)
        {
            if ((hi[j] == ai[k]))
                count++;
        }
    }
    cout << count << endl;
    return 0;
}