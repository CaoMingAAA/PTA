#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>/*
using namespace std;
const int Max = 501;
vector<int> Adj[Max];
int color[Max];
bool vis[Max];
int V, E, K, N;

bool DFS(int s) 
{
	vis[s] = true;
	int c = color[s];
	for (int i = 0; i < Adj[s].size(); i++)
	{
		if (color[Adj[s][i]] == c)
			return false;
		if (!vis[Adj[s][i]])
			if(!DFS(Adj[s][i]))
				return false;
	}
	return true;
}
bool BFS(int s)
{
	vis[s] = true;
	queue<int>Q;
	Q.push(s);
	while (!Q.empty())
	{
		int u = Q.front(); 
		Q.pop();
		vis[u] = true;
		int c = color[u];
		for (int i = 0; i < Adj[s].size(); i++)
		{
			if (color[Adj[s][i]] == c)
				return false;
			if (!vis[Adj[s][i]])
			{
				Q.push(Adj[s][i]);
			}
		}
	}
	
	return true;
}

bool isVaild()
{

	for (int i = 0; i <= V; i++)
	{
		if (!vis[i])
			if (!BFS(i))
				return false;
	}
	return true;
}
int main()
{
	cin>>V>>E>>K;
	fill(vis, vis + Max, false);
	for (int i = 0; i < E; i++)
	{
		int s, e;
		cin >> s >> e;
		Adj[s].push_back(e);
		Adj[e].push_back(s);
	}
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		set<int> s;
		for (int i = 1; i < V; i++)
		{
			cin >> color[i];
			s.insert(color[i]);
		}
		if(s.size()>K)
			cout << "No" << endl;
		else if (isVaild())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
		fill(color, color + Max, 0);
		fill(vis, vis + Max, false);
		s.clear();
	}
	return 0;
}*/