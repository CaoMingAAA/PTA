#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
using namespace std;
/*
int str2int(string s)
{
	if (s == "Bu")
		return 0;
	if (s == "JianDao")
		return 1;
	if (s == "ChuiZi")
		return 2;
}
string int2str(int x)
{
	if (x == 0)
		return "Bu";
	if (x == 1)
		return "JianDao";
	if (x == 2)
		return "ChuiZi";
}
int main()
{
	int N;
	cin >> N;
	string s;
	int count=1;
	while (cin >> s)
	{
		if (s == "End")
			break;
		if (count %(N+1) == 0)
		{
			cout << s << endl;

			count++;
			continue;
		}
		cout << int2str((str2int(s) + 1) % 3)<<endl;

		count++;
	}
	return 0;
}*/