#include "pch.h"
#include"../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
int main()
{
	int n; cin >> n;
	vector<int> v(n, 0);
	int diff;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	sort(v.begin(), v.end());
	int s = 0; int r;
	for (int i = 0; i <= n / 2 + 1; i++)
	{
		s += v[i];
		if (i == n / 2 - 1)
		{
			diff = abs(sum - 2*s);
			r = i;
		}
		else if (i == n / 2 || i == n/2+1)
		{
			r = diff < sum - 2 * s ? i : r;
			diff = max(sum - 2 * s, diff);
		}
	}
	cout << "Outgoing#: " << n - r - 1 << endl;
	cout << "Introverted #: " << r+1 << endl;
	cout << "Diff = " << diff << endl;
	return 0;
}*/