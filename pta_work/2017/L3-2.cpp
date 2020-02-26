#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
/*
using namespace std;
bool vis[MAX];
int d[MAX];
const int MAX = 10000;
const int INF = 0xffff;

struct edge {
	int v;
	friend bool operator < (edge  n1, edge  n2)
	{
		return n1.dis > n2.dis;
	}
	edge(int _v) {

		v = _v;
	}
};
void inistial()
{
	fill(d, d + MAX, INF);
	fill(vis, vis + MAX, false);
}
int dijstra_2(int s, int e)
{
	inistial();
	d[s] = 0;
	priority_queue< edge > Q;

	Q.push(edge(s, 0));
	while (!Q.empty())
	{
		edge e = Q.top();// the top of heap is smallest.
		Q.pop();
		int u = e.v;
		if (vis[u])
			continue;
		for (int i = 0; i < Adj[u].size(); i++)
		{
			int dis = Adj[u][i].dis;
			int v = Adj[u][i].v; //target node.
			if (dis + d[u] < d[v])
			{
				d[v] = d[u] + dis;
				Q.push(edge(v, d[v]));
			}
		}
		vis[u] = true;
	}
	return d[e];
}
int main()
{
	int N,M;
	cin >> N;
	vector<edge> e;
	vector<edge>Adj[10000];
	int last;
	for (int i = 0; i < N; i++)
	{
		cin >> M;
		int rank;
		
		for (int j = 0; j < M; j++)
		{
			cin >> rank;
			Adj[i].push_back(edge(rank));
			Adj[rank].push_back(edge(last));
			int sta; cin >> sta;
			Adj[sta]
		}
	}
}*/