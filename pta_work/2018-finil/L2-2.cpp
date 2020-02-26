#include "pch.h"
#include "../pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>/*
using namespace std;
const int Max = 100000;
struct node {
	int pre;
	int data;
	int next;
};

int main()
{
	node v[Max];
	int head, N;
	cin >> head >> N;
	for (int i = 0; i < N; i++)
	{
		int x; 
		cin >> x;
		cin >> v[x].data;
		cin >> v[x].next;
		if(v[x].next!=-1)
		v[v[x].next].pre = x;
	}
	int p = head;
	int temp = head;
	while (v[p].next != -1)
		p = v[p].next;

	int tail = p;
	int w = tail;
	p = head;
	int count=1;
	for (int i = 0; i < N ; i++)
	{
		int next;
		if (i % 2 == 0)
		{ 
			int temp = w;
			while (temp < 10000 &&count<5)
			{
				cout << '0';
				temp *= 10;
				count++;
			}
			cout << w << ' ' << v[w].data << ' ';
			temp = p;
			if (p != w) {
				while (temp < 10000 && count < 5)
				{
					cout << '0';
					temp *= 10;
					count++;
				}
				cout << p << endl;
				w = v[w].pre;
			}
			else {
				cout << -1;
			}
		}
		else {
			temp = p;
			while (temp < 10000 && count < 5)
			{
				cout << '0';
				temp *= 10;
				count++;
			}
			cout << p << ' ' << v[p].data << ' ';
			if (p != w) {
				int temp = w;
				while (temp < 10000 && count < 5)
				{
					cout << '0';
					temp *= 10;
					count++;
				}
				cout << w << endl;
				p = v[p].next;
			}
			else{
				cout << -1;
			}
		}
		count = 1;
	}
	return 0;
}*/