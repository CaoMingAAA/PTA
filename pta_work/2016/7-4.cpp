#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
/*
using namespace std;
int main()
{
	vector<int> v;
	set <int> S;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		set<int> st;
		int K;
		cin >> K;
		while (K--)
		{
			int num;
			cin >> num;
			st.insert(num);
		}
		if (st.size() <= 1)
		{
			st.clear();
			continue;
		}
		for (auto it : st)
		{
			S.insert(it);
		}
	
	}
	int M,c;
	c = 0;
	cin >> M;
	while (M--)
	{
		int num;
		cin >> num;
		if (S.find(num) == S.end())
		{
			c++;
			v.push_back(num);
			S.insert(num);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		int d = v[i];
		int n = 0;
		while (d < 10000&&n<5)
		{
			cout << '0';
			d *= 10;
			n++;
		}

		cout << v[i];
		if (i != v.size() - 1)
			cout << ' ';
	}
	if (c == 0)
		cout << "No one is handsome" << endl;
	return 0;
}*/
