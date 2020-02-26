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
struct node {
	int data;
	node* lchild;
	node* rchild;
	node(int a, node* lc = NULL, node* rc = NULL)
	{
		data = a;
		lchild = lc;
		rchild = rc;
	}
	node(){}
};

node* built(int* pre, int* in,int n)
{
	if (n <= 0)
		return NULL;
	node* r = new node();
	r->data = pre[0];
	int i = 0;
	for (; i < n; i++)
	{
		if (*pre == in[i])
			break;
	}
	r->lchild = built(pre + 1, in, i);
	r->rchild = built(pre + i + 1, in + i + 1, n - (i + 1));
	return r;
}
void level_tra(node* r)
{
	queue<node*>Q;
	Q.push(r);
	node* p = r;
	bool flag = true;
	while (!Q.empty())
	{
		p = Q.front();
		Q.pop();
		if (flag)
		{
			cout << p->data;
			flag = false;
		}
		else
			cout << " " << p->data;
		if (p->lchild != NULL)
			Q.push(p->lchild);
		if (p->rchild != NULL)
			Q.push(p->rchild);
	}
}

node *change(node *T) {   //×ª»»Ê÷
	node *t;
	if (T) {
		if (T->lchild != NULL || T->rchild != NULL) {
			t = T->lchild;
			T->lchild = T->rchild;
			T->rchild = t;
		}
		change(T->lchild);
		change(T->rchild);
	}
	return T;
}
int main()
{

	int N; cin >> N;
	int *pre = new int[N];
	int *in = new int[N];
	for (int i = 0; i < N; i++)
		cin >> in[i];
	for (int i = 0; i < N; i++)
		cin >> pre[i];
	node* root = built(pre, in, N);
	root = change(root);
	level_tra(root);
	return 0;
}*/