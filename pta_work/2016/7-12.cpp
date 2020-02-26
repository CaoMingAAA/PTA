#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
vector<int> v;
int find(int a) 
{
	for (int i = 0; i < v.size(); i++) 
	{
		if (a == v[i]) {
			return i+1;
		}
	}
}
int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin>>num;
		v.push_back(num);
	}
	make_heap(v.begin(), v.end(), greater<int>());
	int flag=0;
	while (M--)
	{
		int n1, n2;
		cin >> n1;
		string s;
		cin >> s;
		if (s == "and")
		{
			cin >> n2;
			cin >> s;
			cin >> s;
			if (find(n1) / 2 == find(n2) / 2) {
				cout << "T" << endl;
			}else{
				cout << "F"<<endl;
			}
		}
		else 
		{
			while (true)
			{
				cin >> s;
				if (s == "root")
				{
					flag = 1;
					break;
				}
				else if (s == "parent")
				{
					flag = 2;
					cin >> s;
					cin >> n2;
					break;
				}
				else if(s == "child")
				{
					flag = 3;
					cin >> s;
					cin >> n2;
					break;
				}
			}
			switch (flag)
			{
			case 1: {
				if (v[0] == n1) 
					cout << "T" << endl;
				else 
					cout << "F" << endl;
				break;
			}
			case 2: {
				if (find(n1) == find(n2) / 2)
					cout << "T" << endl;
				else
					cout << "F" << endl;
				break;
			}
			case 3: {
				if (find(n2) == find(n1) / 2)
					cout << "T" << endl;
				else
					cout << "F" << endl;
				break;
			}
			default:
				break;
			}

		}
	}
	return 0;
}