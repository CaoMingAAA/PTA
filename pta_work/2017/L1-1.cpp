#include "pch.h"
#include"../pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;/*
void int2ch(int c[4], int x)
{
	for (int i = 3; i >= 0; i--)
	{
		c[i] = x % 10;
		x /= 10;
	}
}
int main()
{
	vector<int> count(10,0);
	int year[4];
	int n,y,dif;
	cin >> y >> n; 
	dif = 4;
	int2ch(year, y);
	int age=0;
	while (true)
	{
		
		for (int i = 0; i < 4; i++)
		{
			count[year[i]]++;
			dif = count[year[i]] > 1 ? dif -1 : dif;
			
		}
		if (n == dif)
			break;
		age++;
		dif = 4;
		count.assign(10, 0);
		for (int i = 3; i >= 0; i--)
		{
			if (year[i] + 1 <= 9)
			{
				year[i] += 1;
				break;
			}
			year[i] = 0;
		}
	}
	cout << age <<' ';
	for (int i = 0; i < 4; i++)
	{
		cout << year[i];
	}
	return 0;
}*/