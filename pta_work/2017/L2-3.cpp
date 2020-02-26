#include "pch.h"
#include"../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
struct user {
	string n;
	int like;
	bool friend  operator < (user u1,user u2)
	{
		return u1.n < u2.n;
	}
	
};
/*
int main()
{
	int N, M; cin >> N;
	vector<string> v(N,"");
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cin >> M;
	int avge = 0;
	vector<user> u;
	for (int i = 0; i < M; i++)
	{
		string name; cin >> name;
		if (!binary_search(v.begin(), v.end(), name))
		{
			user t; t.n = name;
			cin >> t.like;
			avge += t.like;
			u.push_back(t);
		}
		else
		{
			int c;
			cin >> c;
			avge += c;
		}
	}
	avge /= M;
	sort(u.begin(), u.end());
	bool you = false;
	for (auto it = u.begin(); it != u.end(); it++)
	{
		if (it->like > avge)
		{
			you = true;
			cout << it->n << endl;
		}
	}
	if (!you)
	{
		cout << "Bing Mei You" << endl;
	}
	return 0;
}*/