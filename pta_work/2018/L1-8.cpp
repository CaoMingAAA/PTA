#include "pch.h"
#include <iostream>

#include<string>
using namespace std;
/*
int main()
{
	string mp[101];
	int n;
	cin >> n;
	int avg = 0;
	for (int i = 0; i < 101; i++)
		mp[i] = " ";
	for (int i = 0; i < n; i++)
	{
		int num;
		string name;
		cin >> name >> num;
		mp[num] = name;
		avg += num;
	}
	avg /= n;
	int avgl, avgu;
	avg /= 2;
	avgl = avgu = avg;
	string name;
	while (avgu!=101 && avgl!=-1)
	{
		if (mp[avgl] != " ")
		{
			name = mp[avgl];
			break;
		}
		if(mp[avgu] != " ")
		{
			name = mp[avgu];
			break;
		}
		avgl--;
		avgu++;
	}
	cout << avg << ' ' << name << endl;
	
	return 0;
}*/