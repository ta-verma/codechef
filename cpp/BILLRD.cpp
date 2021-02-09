#pragma region cp - helper
#include <bits/stdc++.h>
using namespace std;
#define AC ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define int long long
#define ll long long
#define ull unsigned long long
#define ii pair<ll, ll>
#define lll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vll vector<lll>
#define vvl vector<vl>
#define vii vector<ii>
#define all(a) a.begin(), a.end()
#define qsort(a) sort(all(a))
#define qsortd(a) sort(all(a), greater < > ())
#define qsortf(a, f) sort(all(a), f)
#define pb(n) push_back(n)
#define eb(n) emplace_back(n)
#define pp(a, b) emplace_back(a, b)
#define umap unordered_map
#define uset unordered_set
#define nl '\n'
#define fileio(in, out) freopen(in, "r", stdin); freopen(out, "w", stdout)
#define qmod % mod
#define pls signed
#define give main()
const int mod = 1000000007;
#pragma endregion

pls give{
	AC;
	// fileio("input.txt", "output.txt");
	int t;
	cin >> t;
	while (t--) {
		int N, K, x, y, hits;
		cin >> N >> K >> x >> y;
		hits = K % 4;
		if (x == y)
			cout << N << " " << N << nl;
		else if (x < y) {
			if (hits == 1)
				cout << N + x - y << " " << N << nl;
			else if (hits == 2)
				cout << N << " " << N + x - y << nl;
			else if (hits == 3)
				cout << y - x << " " << '0' << nl;
			else
				cout << '0' << " " << y - x << nl;
		}
		else {
			if (hits == 1)
				cout << N << " " << y + N - x << nl;
			else if (hits == 2)
				cout << y + N - x << " " << N << nl;
			else if (hits == 3)
				cout << '0' << " " << x - y << nl;
			else
				cout << x - y << " " << '0' << nl;
		}
	}

}