#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	vector <int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		sum += v[i];
	}
	if (sum == 2 * (n - 1))
		cout << "Yes\n";
	else
		cout << "No\n";
    return 0;
}