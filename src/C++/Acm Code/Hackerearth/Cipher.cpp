#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, d, m, n;
	string s;
	cin >> s >> t;
	n = t % 26;
	m = t % 10;
	d = s.size();
	for (int i = 0; i<d; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] + n>'z')
				s[i] += 'a' + n - 'z' - 1;
			else
				s[i] += n;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] + n>'Z')
				s[i] += 'A' + n - 'Z' - 1;
			else
				s[i] += n;
		}
		else if (s[i] >= '0'&& s[i] <= '9')
		{
			if (s[i] + m>'9')
				s[i] += m - 10;
			else
				s[i] += m;
		}
		cout << s[i];
	}
	cout << endl;
	return 0;
}