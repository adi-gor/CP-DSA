#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long int ll;
const ll mod = 1e9 + 7;

void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n == 2) cout << 1 << endl;
	else
	{
		int o = 0, e = 0;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == '1')
			{
				if (i & 1) o++;
				else e++;
			}
		}
		cout << (o > 0 && e > 0 ? 1 : 2) << endl;
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);





	int t;
	cin >> t;
	//t = 1;
	while (t--)
	{
		solve();
	}
	return 0;
}