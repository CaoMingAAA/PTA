#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
/*
int gcd(int a,int b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int maxt;
	maxt = gcd(a, c);
	int a1 = a / maxt;
	int c1 = c / maxt;
	long long sum,ans;
	sum = ans = 1;
	while (b-- && d--)
	{
		sum *= a1;
		ans *= c1;
	}
	while (b-- >= 0) sum *= a;
	while (d-- >= 0) ans *= c;
	if (sum%ans == 0)
		cout << "divisible" << endl;
	else
		cout << "not divisible" << endl;
	return 0;

}*/