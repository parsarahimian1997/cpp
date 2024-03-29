#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

long long moves = 0, k;
long long checkUp(long long l, long long r);
long long checkDown(long long l, long long r);
void ifMovingDown(long long l, long long r, long long cd, long long cUp, long long ln, long long rn, long long *a);
void ifMovingUp(long long l, long long r, long long cd, long long cUp, long long ln, long long rn, long long *a);
bool checkIfPalindrome(long long *check);

int main()
{
	string s;
	cin >> s;
	k = s.length();
	long long *a, l, r, ln, rn, cd, cUp;
	a = new long long[k + 7];
	for (long long i = 0; i < k; i++)
		a[i] = s[i] - '0';
	do
	{
		for (long long i = 0; i < k / 2; i++)
		{
			l = a[k / 2 - 1 - i];
			r = a[k / 2 + i];
			ln = k / 2 - 1 - i;
			rn = k / 2 + i;
			cUp = checkUp(l, r);
			cd = checkDown(l, r);
			ifMovingDown(l, r, cd, cUp, ln, rn, a);
			ifMovingUp(l, r, cd, cUp, ln, rn, a);
		}
	} while (checkIfPalindrome(a));
	if (moves > k)
		moves--;
	else if (moves < k && moves != 0)
		moves++;
	cout << moves << endl;
	return 0;
}

long long checkUp(long long l, long long r)
{
	long long c = 0;
	if (l > r)
		c = 10 - l + r;
	else if (r > l)
		c = 10 - r + l;
	return c;
}

long long checkDown(long long l, long long r)
{
	return abs(l - r);
}

void ifMovingDown(long long l, long long r, long long cd, long long cUp, long long ln, long long rn, long long *a)
{
	if (cd <= cUp)
	{
		if (l > r)
		{
			a[ln] -= cd;
			moves += cd;
		}
		else
		{
			a[rn] -= cd;
			moves += cd;
		}
	}
}

void ifMovingUp(long long l, long long r, long long cd, long long cUp, long long ln, long long rn, long long *a)
{
	long long counter = 0;
	if (cUp < cd && l > r)
	{
		a[ln] = l - (l - r);
		moves += cUp;
		counter++;
		if (a[ln - counter] == 9)
			while (a[ln - counter] == 9)
			{
				a[ln - counter] = 0;
				a[ln - counter - 1]++;
				counter++;
				moves++;
			}
		else
			a[ln - counter] += 1;
	}
	else if (cUp < cd && r > l)
	{
		a[rn] = r - (r - l);
		moves += cUp;
		counter++;
		if (a[rn - counter] == 9)
			while (a[rn - counter] == 9)
			{
				a[rn - counter] = 0;
				a[rn - counter - 1]++;
				counter++;
				moves++;
			}
		else
			a[rn - counter] += 1;
	}
	counter = 0;
}

bool checkIfPalindrome(long long *check)
{
	string firstHalf = "";
	string secondHalf = "";
	long long k = 0;
	for (long long i = 0; i < k / 2; i++)
	{
		firstHalf += check[i];
		secondHalf += check[k - 1 - i];
	}
	if (firstHalf == secondHalf)
		return false;
	else
		return true;
}