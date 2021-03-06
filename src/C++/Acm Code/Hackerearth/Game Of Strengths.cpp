#include "stdafx.h"
#include <cstdio>
#include <algorithm>
#include <vector>
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	long n, i, j;
	long long m, sum;
	vector<long long>a;
	scanf_s("%d", &t);
	while (t--)
	{
		a.clear();
		sum = 0;
		scanf_s("%ld", &n);
		for (i = 0; i < n; i++)
		{
			scanf_s("%lld", &m);
			a.push_back(m);
		}
		sort(a.begin(), a.end());
		j = n - 1;
		for (i = j; i >= 0; i--)
		{
			sum += a[i] * j;
			j -= 2;
		}
		sum %= mod;
		a[n - 1] %= mod;
		printf("%lld\n", (a[n - 1] * sum) % mod);
	}
	return 0;
}