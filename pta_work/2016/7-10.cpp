#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>
using namespace std;
/*
int f[101];
int v[101][101];
int find(int x)
{
	if (x != f[x])
		return f[x] = find(f[x]);
	return f[x];
}
void Union(int a, int b)
{
	int x = find(a);
	int y = find(b);
	if (x != y)
		f[x] = y;
}
int main()
{
	int N, M, K;
	cin >> N >> M >> K;
	for (int i = 0; i < 101; i++)
	{
		f[i] = i;
		fill(v[i], v[i] + 101, 0);
	}
	for (int i = 0; i < M; i++)
	{
		int a, b, r;
		cin >> a >> b >> r;
		if (r == -1)
			v[a][b] = v[b][a] = -1;
		else {
			Union(a, b);
			v[a][b] = v[b][a] = 1;
		}
	}
	for (int i = 0; i < K; i++)
	{
		int a, b;
		cin >> a >> b;
		if (find(a) == find(b) && v[a][b] == 1)
			cout << "No problem" << endl;
		else if (find(a) != find(b) && v[a][b] == 0)
			cout << "OK" << endl;
		else if ( find(b) == find(a) && v[a][b] == -1)
			cout << "OK but..." << endl;
		else if (find(a) != find(b) && v[a][b] == -1)
			cout << "No way" << endl;
	}
}*/