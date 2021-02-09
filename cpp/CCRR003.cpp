#pragma region cp - helper
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
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

void solve() {
	int t;
	cin >> t;
	while (t--) {
		int l, m, n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		l = n - 1;
		m = 0;
		while (m < l)
			cout << arr[l--] << " " <<  arr[m++] << " ";
		if (n % 2 == 1)
			cout << arr[n / 2] << " ";
		cout << nl;
	}
}


pls give{
	AC;
#ifndef ONLINE_JUDGE
	fileio("input.txt", "output.txt");
#endif
	auto start1 = high_resolution_clock::now();
	solve();
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
	cerr << "Time: " << duration.count() / 1000.0 << endl;
	cout << duration.count() / 1000.0 << endl;
#endif
}