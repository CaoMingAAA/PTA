#include "pch.h"
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <iomanip>
typedef long long ll;
using namespace std;
/*
int main()
{
	char str [101][101];
	char c;
	cin >> c;
	int n;
	cin >> n;
	bool flag=true;
	int half = n >> 1;
	char x;
	getchar();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0;j<n;)
		{
			x = getchar();
			if (x != '\n')
			{
				if(x == ' ')
					str[i][j] = ' ';
				else
					str[i][j] = c;
				j++;
			}
		}
		getchar();
	}
	for (int i = 0; i < half; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (str[i][j] != str[n - 1 - i][n - 1 - j])
				flag = false;
			std::swap(str[i][j], str[n - 1 - i][n - 1 - j]);
		}
	}
	if (flag)
		cout << "bu yong dao le" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << str[i][j];
		}
		if(i!=n-1)
			cout << endl;
	}
	return 0;
}*/