#include "pch.h"

#include <iostream>
#include <algorithm>
using namespace std;
struct team
{
	int id;
	int num;
	int table[11][11];
	team()
	{
		id = 0;
		num = 0;
	}
};
/*
int main()
{
	int N;
	std::cin >> N;

	int sumteam = 0;
	int maxtnum = 0;
	team school[100];
	for (int i = 0; i < N; i++)
	{
		int M; std::cin >> M;

		sumteam += M;
		school[i].num = M;
		school[i].id = i + 1;
		if (M > maxtnum)
			maxtnum = M;
	}
	if (N == 1)
	{
		cout << '#' << 1 << endl;
		int j = 1;
		for (int i = 0; i < school[0].num; i++)
		{

			for (int k = 0; k < 10; k++, j += 2)
			{
				cout << j;
				if (k != 9)
					cout << ' ';
			}
			cout << endl;
		}
		return 0;
	}

	int count = 0;
	int reminder = N - 1;
	int lastsch;
	for (int i = 0; i < maxtnum; i++)
	{
		for (int col = 0; col < 10; col++) {
			for (int j = 0; j < N; j++)
			{
				if (i >= school[j].num)
					continue;
				if (reminder == 0 && lastsch == school[j].num)
				{
					count += 2;
					school[j].table[i][col] = count;
					lastsch = school[j].num;
				}
				else
				{
					lastsch = school[j].num;
					school[j].table[i][col] = ++count;
				}
			}
		}
		for (int j = 0; j < N; j++)
		{
			if (i + 1 == school[j].num)
			{
				reminder--;
			}
		}
		int f = 0;
	}

	int schnum = 0;
	int r = 1;
	for (int i = 0; i < N; i++)
	{
		cout << '#' << school[i].id << endl;
		for (int j = 0; j < school[i].num; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << school[i].table[j][k];
				if (k != 9)
					cout << ' ';
			}
			cout << endl;
		}

	}
	return 0;
}*/