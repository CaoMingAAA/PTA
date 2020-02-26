#include "pch.h"
#include <iostream>
#include <map>
#include <string>
#include <algorithm>
const int MAX = 10001;
using namespace std;
/*
struct stu
{
	string email;
	int point;
};
bool cmp(stu s1, stu s2)
{
	if (s1.point > s2.point)
		return true;
	else if (s1.point == s2.point)
		return s1.email < s2.email;
	else
		return false;
}
int main()
{
	stu s[MAX];
	int N; cin >> N;
	int G; cin >> G;
	int n; cin >> n;
	int sum = 0;
	string str;
	int g;
	for (int i = 0; i < N; i++)
	{
		cin >> str;
		cin >> g;
		s[i].email = str;
		s[i].point = g;
		if (60 <= g && g < G)
			sum += 20;
		else if (G <= g)
			sum += 50;
	}
	sort(s, s+N, cmp);
	int rank = 0;
	int last = 0;
	cout << sum << endl;
	int lastr = 0;
	int count = 1;
	for (int i = 0;rank != n+1; i++)
	{
		if (last != s[i].point)
		{
			if (rank + count > n)
				break;
			rank += count;
			cout << rank << ' ';
			cout << s[i].email << ' ' << s[i].point << endl;
			lastr = rank;
			count = 1;
		}
		else {
			count++;
			cout << lastr << ' ';
			cout << s[i].email << ' ' << s[i].point << endl;
			rank = lastr;
		}
		last = s[i].point;
	}
}*/