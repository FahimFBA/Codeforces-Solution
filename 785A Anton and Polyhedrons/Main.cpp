#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cin >> n;
    string str;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        if (str == "Tetrahedron")
            count = count + 4;
        else if (str == "Cube")
            count = count + 6;
        else if (str == "Octahedron")
            count = count + 8;
        else if (str == "Dodecahedron")
            count = count + 12;
        else
            count = count + 20;
    }
    cout << count << endl;
}