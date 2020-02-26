#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
/*
struct user
{
	string name;
	int count;
	float avg;
	bool operator <(user u2)
	{
		if (count == u2.count)
			return avg < u2.avg;
		return count > u2.count;
	}
};
int main()
{
	int N; 
	cin >> N;
	vector<user> v; 
	v.resize(N+1);;
	for(int i = 0;i<N;i++)
	{
		int sum, avg,K,fi;
		set <int> F;
		cin >> v[i].name;
		cin >> K; 
		for (int j = 0; j < K; j++)
		{
			cin >> fi;
			F.insert(fi);
		}
		v[i].count = F.size();
		v[i].avg = K *1.0 / (v[i].count*1.0);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
	{
		if (i >= v.size()-1)
			cout << '-';
		else
			cout << v[i].name;
		if (i != 2)
			cout << ' ';
	}
	return 0;
}*/

