#include "pch.h"
#include"../pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
int main()
{
	int n;
	cin >> n;
	string s;
	getchar();
	getline(cin,s);
	int len = s.length();
	vector<vector<char>> v(n);
	int row = 0;
	int max = 0;
	for (int i = 0; i < len; i++)
	{
		v[row].push_back(s[i]);
		
		max = max < v[row].size() ? v[row].size() : max;
		row++;
		if (row >= n)
			row = 0;
	}
	for (int i = 0; i < n; i++)
		v[i].resize(max, ' ');
	for (int i = 0; i < n; i++)
	{
		for (int j = max - 1; j >= 0; j--)
		{
			cout << v[i][j];
		}
		cout << endl;
	}
}*/