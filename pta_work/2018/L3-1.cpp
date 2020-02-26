#include "pch.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<set>
#include<stack>
#include<vector>
using namespace std;

void kg(int n)
{
	for (int i = 0; i < n; i++)
		cout << ' ';
}

void passblank(string s, int &i)
{

}
/*
int main()
{
	string s;
	getline(cin, s); //point 1
	string temp;
	int len = s.length();
	bool inhk = false;
	int in;
	bool inbracket = false;
	bool inmain = false;
	int hkn = 0;
	int swt = 0;
	int T = 0;

	bool declare = false;
	for (int i = 0; i < len; i++)
	{	if (s[i] == ';')
		{
			
			cout << temp << ';' << endl;
			s.clear();
		}
		else if (s[i] == '(')
		{
			inbracket = true;
			temp[T++] = '(';
		}
		else if (s[i] == '{' && !inhk)
		
		else if (s[i] == '}')
		{

		}
		else if (s[i] == ' ' && !inbracket)
			continue;
		else if (s[i] == 'i'&&s[i + 1] == 'f')
		{
			kg(swt);
			cout << "if ";
			i++;
			inhk = true;
			swt += 2;
		}
		else if (s.substr(i,2) == "if")
		{
			]
		}
		else if (iswhile(s, i))
		{
			kg(swt);
			i += 4;
			cout << "while {" << endl;
			swt += 2;
		}
		else if (ismain())
		{
			cout << "int main()" << endl;
			cout << '{';
			i
		}
		else
			temp[T++] = s[i];
	return 0;
}
	*/