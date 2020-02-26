#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <map>

using namespace std;

struct person
{
	int n;
	float m;
	int count;
	bool operator < (person p)
	{	
		if (m == p.m && count != p.count)
			return count > p.count;
		if(m == p.m && count == p.count)
			return n < p.n;
		return m > p.m;
	}
	person()
	{
		n = -1;
		m = 0;
		count = 0;
	}
};
vector<person> peo;
int main()
{
	
	int N;
	cin >> N;
	peo.resize(N+1);
	for(int i=0;i<N;i++)
	{
		int K;
		cin >> K;
		set<int> st;
		float sum = 0;
		for (int j = 0; j < K; j++)
		{
			person p;
			cin >>p.n >> p.m;
			p.m /= 100;
			if (st.find(p.n) == st.end())
			{
				sum += p.m;
				peo[p.n].m += p.m;
				peo[p.n].count++;
				st.insert(p.n);
			}
		}
		peo[i + 1].n = i+1;
		peo[i + 1].m -= sum;
		st.clear();
	}
	sort(peo.begin(), peo.end());

	for (int i = 0; i < peo.size(); i++)
	{
		if (peo[i].n != -1)
		{
			printf("%d %.2f\n", peo[i].n, peo[i].m);
		}
	}
	return 0;
}
