#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
	int t, i;
	char a, b;
	char s[100000 + 7];
	map <char, char> m;
	map <char, char>::iterator it;
	for (i = 'A'; i <= 'Z'; i++)
		m[i] = i;
	scanf_s("%d", &t);
	while (t--)
	{
		cin >> a >> b;
		for (it = m.begin(); it != m.end(); it++)
		{
			if (it->second == b)
				it->second = a;
			else if (it->second == a)
				it->second = b;
		}
	}
	getchar();
	gets_s(s);
	t = strlen(s);
	for (i = 0; i < t; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = m[s[i]];
		else
			s[i] = m[s[i] - 'a' + 'A'] + 'a' - 'A';
	}
	printf("%s\n", s);
	return 0;
}