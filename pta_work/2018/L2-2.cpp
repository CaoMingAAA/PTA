#include "pch.h"
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <set>
const int max = 100000;
using namespace std;
int maxgene = -1;
int ge(vector<vector<int>>&v, vector<int>& ming,int r,int gene)
{
	if (v[r][2] != 0)
		return v[r][2] + 1;
	if (v[r][0] == -1)
	{
		v[r][2] = gene;
		return ++gene;
	}
	int p = v[r][0];
	return (v[r][2] = ge(v, ming, p, gene)) + 1;
}
/*
int main()
{
	int N;
	cin >> N;
	if (N == 1)
	{
		cout << 1 << endl;
		cout << 1;
		return 0;
	}
	vector<vector<int>>v(N+1);
	for (int i = 1; i <= N; i++)
	{
		int a;
		cin >> a;
	
		v[i].push_back(a);
		v[i].push_back(i);
		v[i].push_back(0);
	}

	int gene = 0;
	
	vector<int> ming;
	stack<vector<int>>S;	
	for (int i = 1; i <= N; i++)
	{
		if (v[i][2] != 0)
			continue;
		gene = v[i][2] =ge(v, ming, i, 1)-1;
		if (gene > maxgene)
		{
			maxgene = gene;
			ming.clear();
			ming.push_back(i);
		}
		else if (gene == maxgene)
			ming.push_back(i);

		
	}
	cout << maxgene << endl;
	for (int i = 0; i < ming.size(); i++)
	{
		cout << ming[i];
		if (i +1!= ming.size())
			cout << ' ';
	}

}*/