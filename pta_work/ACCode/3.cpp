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
	string s1, s2;
	cin >> s1 >> s2;
	int count=0;
	for (int i = 0; s1[i] != '\0'; i++)
	{
		if ((s1[i] == 'T'&&s2[i] != 'A') || (s1[i] == 'A'&&s2[i] != 'T'))
			count++;
		else if ((s1[i] == 'C'&&s2[i] != 'G') || (s1[i] == 'G'&&s2[i] != 'C'))
			count++;
	}
	cout << count << endl;
	return 0;
}