#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long n, i, j, a[100000 + 7];
	long long odd = 0, even = 0, count;
	scanf_s("%ld", &n);
	a[0] = 0;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%ld", &j);
		a[i] = (a[i - 1] + j) % 2;
		if (a[i])
			odd++;
		else
			even++;
	}
	count = even + (even*(even - 1) / 2) + (odd*(odd - 1) / 2);
	printf("%lld\n", count);
	return 0;
}