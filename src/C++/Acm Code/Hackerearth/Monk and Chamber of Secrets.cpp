#include "stdafx.h"
#include <utility>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	pair<long, long>b;
	queue<pair<long, long> >a, c;
	long x, n, i, k, count;
	cin >> n >> x;
	for (i = 0; i < n; i++)
	{
		cin >> k;
		a.push(make_pair(k, i));
	}
	count = x;
	while (count--)
	{
		b.first = -10;
		b.second = -10;
		k = a.size();
		for (i = 0; i < min(x, k); i++)
		{
			if (a.front().first > b.first)
				b = a.front();
			c.push(a.front());
			a.pop();
		}
		printf("%ld ", b.second + 1);
		for (i = 0; i < min(x, k); i++)
		{
			if (c.front().second == b.second)
			{
				c.pop();
				continue;
			}
			if(c.front().first)
				c.front().first--;
			a.push(c.front());
			c.pop();
		}
	}
	printf("\n");
	return 0;
}