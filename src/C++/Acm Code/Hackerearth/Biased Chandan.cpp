#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	long i, j, k, n, x, s = 0, a[100];
	stack<long>st;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> x;
		if (x == 0 && i > 0)
		{
			s = s - st.top();
			st.pop();
		}
		else if (x != 0)
		{
			st.push(x);
			s = s + x;
		}
	}
	cout << s << endl;
	return 0;
}