#include <bits/stdc++.h>
using namespace std;

int main()
{
	int size;
	cin >> size;
	long long array[size];
	long long sum = 0;
	for (int i = 0; i < size; ++i)
	{
		cin >> array[i];
		sum += array[i];
	}
	cout << abs(sum) << endl;
}