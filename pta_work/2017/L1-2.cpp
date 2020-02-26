#include "pch.h"
#include"../pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
/*
int main()
{
	int N,K;
	vector<int> v(1001, 0);
	cin >> N;
	int max = -1;
	int rank;
	for (int i = 0; i < N; i++)
	{
		cin>>K;
		for (int j = 0; j < K; j++)
		{
			int sign; cin >> sign;
			v[sign] ++;
			max = max < v[sign] ? v[sign] : max;
		}
	}
	for (int i = 1000; i >= 0; i--)
	{
		if (v[i] == max)
		{
			cout << i << ' ' << v[i];
			break;
		}
	}
	
}*/