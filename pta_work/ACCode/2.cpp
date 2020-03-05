#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	vector<int> dp(n+2, m+1);
	
	int	count = 0;
	vector<int> cw(n+2, m+1);
	for (int i = 1; i <= n; i++) 
		cin >> cw[i];
	dp[1] = 1;
	int j = 0;
	for (int i = 2; i <= n+1; i++)
	{
		if (cw[i] + cw[i - 1] <= m)
		{
			dp[i] = dp[i - 1] * (i-j);
		}
		else
		{
			dp[i] = 1;
			if (dp[i - 1] != 1)
			{
				count += dp[i - 1];
				j = i;
			}
		}
	}
	cout << count;
	return 0;
		
		
}