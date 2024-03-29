#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int uint;
typedef unsigned long long ull;


ll b, n, e;
ll bval, nval, eval;

vector<pair<ll, string>> speeds;
void prep() {
	speeds.pb({ bval + bval, "bb" });
	speeds.pb({ bval + nval, "bn" });
	speeds.pb({ bval + eval, "be" });
	speeds.pb({ nval + nval, "nn" });
	speeds.pb({ nval + eval, "ne" });
	speeds.pb({ eval + eval, "ee" });

	sort(all(speeds));
}

void dec(string s, ll& tb, ll& tn, ll& te) {
	for (auto i : s) {
		if (i == 'b') {
			tb--;
		}
		if (i == 'n') {
			tn--;
		}
		if (i == 'e') {
			te--;
		}
	}
}

bool ok(string s, ll tb, ll tn, ll te) {
	dec(s, tb, tn, te);
	return (tb >= 0) && (tn >= 0) && (te >= 0);
}

bool works(vector<ll> kayaks, ll speed) {
	ll tb = b;
	ll tn = n;
	ll te = e;

	bool works = true;
	for (auto i : kayaks) {
		bool thisworks = false;
		for (auto j : speeds) {
			if (i * j.first >= speed && ok(j.second, tb, tn, te)) {
				dec(j.second, tb, tn, te);
				thisworks = true;
				break;
			}
		}
		if (!thisworks) {
			works = false;
			break;
		}
	}

	return works;
}

int main() 
{
	cin >> b >> n >> e;
	cin >> bval >> nval >> eval;
	vector<ll> kayaks((b + n + e) / 2);
	for (auto& i : kayaks) 
		cin >> i;
	sort(all(kayaks));
	reverse(all(kayaks));
	prep();
	ll lo = 0;
	ll hi = (ll)100000 * 1000 * 2 * 100;
	while (hi - lo > 1)
	{
		ll mi = (hi + lo) / 2;
		if (works(kayaks, mi))
			lo = mi;
		else
			hi = mi;
	}
	cout << lo << endl;
	return 0;
}