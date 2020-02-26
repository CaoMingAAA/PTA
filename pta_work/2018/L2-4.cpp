#include "pch.h"

#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<queue>
#include<vector>
using namespace std;
/*
const int Max = 1001;
struct people {
	int sex;
	int rank;
	bool operator ==(people p)
	{
		if (sex == p.sex&&rank == p.rank)
			return true;
		else
			return false;
	}
};
vector<vector<people>> photo;
people str2p(string s)
{
	people p;
	int len = s.length(), num = 0;
	p.sex = 1;//male;
	if (s[0] == '-') p.sex = -1; //female
	else 
		num = s[0] - '0';
	for (int i = 1; i < len; i++) {
		num = num * 10 + s[i] - '0';
	}
	p.rank = num;
	return  p;
}
int main()
{
	int N, M;
	cin >> N >> M;
	vector <double> alike(N,0.0);
	vector <double> blike(N,0.0);
	string s;
	photo.resize(M);
	for (int i = 0; i < M; i++)
	{
		int K; cin >> K;
		photo[i].resize(K);
		for (int j = 0; j < K; j++)
		{
			cin >> s;
			photo[i][j] = str2p(s);
		}
	}
	people A, B;
	cin >> s; A = str2p(s);
	cin >> s; B = str2p(s);
	int a, b; double ma, mb;
	ma = mb = -1.0;
	for (int i = 0; i < M; i++)
	{
		double g = 1.0 / photo[i].size();
		int fg = 2;
		bool fa = find(photo[i].begin(), photo[i].end(), A) != photo[i].end();
		bool fb = find(photo[i].begin(), photo[i].end(), B) != photo[i].end();
		if (fa || fb)
		{
			int K = photo[i].size();
			for (int j = 0; j < K; j++)
			{
				if (fa &&  photo[i][j].sex != A.sex)
				{
					alike[photo[i][j].rank] += double(1.0 / K);
					if (ma < alike[photo[i][j].rank])
					{
						ma = alike[photo[i][j].rank];
						a = photo[i][j].rank;
					}
					if (ma == alike[photo[i][j].rank] && photo[i][j].rank == B.rank)
						a = photo[i][j].rank;
				}
				else if (fb &&  photo[i][j].sex != B.sex)
				{
					blike[photo[i][j].rank] += double(1.0 / K);
					if (mb < blike[photo[i][j].rank])
					{
						mb = blike[photo[i][j].rank];
						b = photo[i][j].rank;
					}
					if (ma == alike[photo[i][j].rank] && photo[i][j].rank == A.rank)
						b = photo[i][j].rank;
				}
			}
		}
	}
		if (abs(a) == B.rank&& abs(b) == A.rank)
		{
			if (A.sex < 0) cout << '-';
			cout << A.rank << ' ';
			if (B.sex < 0)cout << '-';
			cout << B.rank << ' ' ;
			return 0;
		}
		for (int i = 0; i < N; i++)
		{
			if (ma == alike[i]) 
			{
				if (A.sex < 0) 
					cout << '-' << A.rank << ' ' << i << endl;
				else
					cout << A.rank << ' ' << '-' << i << endl;
			}
		}
		for (int i = 0; i < N; i++)
		{
			if (mb == blike[i])
			{
				if (B.sex < 0) 
					cout << '-' << B.rank << ' ' << i << endl;
				else
					cout << B.rank << ' ' << '-' << i << endl;
			}
		}
		return 0;
}


4 4
4 -1 2 -3 -0
2 - 0 2
3 -0 -3 2
2 -1 2
-3 2*/