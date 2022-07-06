#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, i, evenCount = 0, oddCount = 0;
    cin >> num;
    int array[num];
    for (i = 0; i < num; i++)
    {
        cin >> array[i];
        if (array[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    if (evenCount == 1)
    {
        for (int j = 0; j < num; j++)
        {
            if (array[j] % 2 == 0)
                cout << j + 1 << endl;
        }
    }

    if (oddCount == 1)
    {
        for (int i = 0; i < num; i++)
        {
            if (array[i] % 2 == 1)
                cout << i + 1 << endl;
        }
    }
}