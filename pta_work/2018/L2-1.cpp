#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 10005;
int N, M, K;
bool isVaild(vector<int>Adj[], vector<int> V)
{
	int Np;
	cin >> Np;
	for (int i = 0; i < Np; i++)
	{
		int a;
		cin >> a;
		V[a] = 0;
		int len = Adj[a].size();
		for (int j = 0; j < len; j++)
			if(V[Adj[a][j]] != 0)
				V[Adj[a][j]] --;
	}
	for (int i = 1; i <= N; i++)
	{
		if (V[i] != 0)
			return false;
	}
	return true;
}
/*
int main()
{
	cin >> N >> M;
	if (N == 1)
	{
		int a;
		cin >> K;
		for (int i = 0; i < K; i++)
		{
			cin >> a;
			if (a == 1)
				cout << "YES"  << endl;
		}
		return 0;
	}
	vector<int>V(N+2,0);
	vector<int>Adj[MAX];
	for (int i = 0; i < M; i++)
	{
		int a; cin >> a;
		int b; cin >> b;
		Adj[a].push_back(b);
		Adj[b].push_back(a);
		V[a]++;
		V[b]++;
	}
	cin >> K;
	while (K!=0)
	{
		if (isVaild(Adj, V))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		K--;
	}

	return 0;
}
*/