#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
/*
float count_time(vector<int> S, vector<int> E)
{
	float sum = 0;
	if (E[1] < S[1])
	{
		sum = (E[0] - 1 - S[0])*60;
		sum += E[1] + 60 - S[1];
	}
	else
	{
		sum = (E[0] - S[0])*60;
		sum += E[1] - S[1];
	}
	return sum;
}
void count(int &avg, int& times)
{
	int rank;
	char act;
	string time;
	times = 0; avg = 0;
	float a = 0;
	vector<int> S[1001],E[1001];
	for (int i = 0; i < 1001; i++)
	{
		S[i].resize(2, 60);
		E[i].resize(2, 60);
	}
	while (true)
	{
		cin >> rank;
		cin >> act;
		cin >> time;
		if (rank == 0)
			break;
		if (act == 'S' )
		{
			int ans = 0;
			for (int i = 0; i < 2; i++)
			{
				ans = (time[i] - '0') + ans * 10;
			}
			S[rank][0] = ans; 
			ans = 0;
			for (int i = 3; i < 5; i++)
			{
				ans = (time[i] - '0') + ans * 10;
			}
			S[rank][1] = ans;
		}
		else if (act == 'E')
		{
			int ans = 0;
			if (S[rank][0] != 60)
			{
				for (int i = 0; i < 2; i++)
				{
					ans = (time[i] - '0') + ans * 10;
				}
				E[rank][0] = ans;
				ans = 0;
				for (int i = 3; i < 5; i++)
				{
					ans = (time[i] - '0') + ans * 10;
				}
				E[rank][1] = ans;
			    a += count_time(S[rank], E[rank]);
				times++;
				
			}
			E[rank][0] = E[rank][1] = S[rank][0] = S[rank][1] = 60;
		}	
	}
	if (times != 0)
	{
		a /= times;
		avg = a;
		if(a - avg >= 0.5)
			avg += 1;
	}

}
int main()
{
	int N; cin >> N;
	while (N--)
	{
		int avg, times;
		count(avg, times);
		cout << times << ' ' << avg << endl;
	}
	return 0;
}*/