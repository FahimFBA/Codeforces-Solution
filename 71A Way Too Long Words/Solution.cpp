#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, i;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> s;
		if (s.length() > 10)
		{
			cout << s[0];
			cout << s.length() - 2;
			cout << s[s.length() - 1] << endl;
		}
		else
			cout << s << endl;
	}
}