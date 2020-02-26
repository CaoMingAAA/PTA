#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
/*
struct node
{
	int times;
	vector<int> child;
	float a;
};
int main()
{
	int N, sum;
	float Z, r, s; s = 0;
	cin >> N >> Z >> r;
	vector<node> party;
	party.resize(N);
	party[0].a = Z;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		int n;
		cin >> n;
		if (n == 0)
		{
			cin >> party[i].times;
			v.push_back(i);
		}
		else
		{
			int rank;
			for (int j = 0; j < n; j++) {
				cin >> rank;
				party[i].child.push_back(rank);
				party[rank].a = party[i].a*(1 - r * 0.01);
			}
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		s+=v[i]
	}
	sum = s;
	cout << sum << endl;
	return 0;
}*/