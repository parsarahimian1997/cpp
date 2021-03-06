#include "stdafx.h"
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

char p[100 + 7];
char s[100 + 7][100 + 7];
int a[100 + 7];
int n;

void solve(int x)
{
	int i, j;
	queue<int> q;
	vector<int> v, r;
	v.push_back(a[x]);
	r.push_back(x);
	q.push(x);
	while (!q.empty())
	{
		j = q.front();
		q.pop();
		for (i = 1; i <= n; i++)
			if (j != i && !p[i] && (s[j][i] == 'Y' || s[i][j] == 'Y'))
			{
				q.push(i);
				r.push_back(i);
				v.push_back(a[i]);
				p[i] = 1;
			}
	}
	sort(v.begin(), v.end());
	sort(r.begin(), r.end());
	for (j = 0; j < v.size(); j++)
		a[r[j]] = v[j];
}

int main()
{
	int i, j;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		scanf_s("%d", a + i);
	for (i = 1; i <= n; i++)
		scanf_s("%s", s[i] + 1);
	for (i = 1; i <= n; i++)
	{
		if (p[i])
			continue;
		p[i] = 1;
		solve(i);
	}
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}