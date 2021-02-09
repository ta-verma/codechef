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




char decode(string k) {
	if (k == "0000")
		return 'a';
	else if (k == "0001")
		return 'b';
	else if (k == "0010")
		return 'c';
	else if (k == "0011")
		return 'd';
	else if (k == "0100")
		return 'e';
	else if (k == "0101")
		return 'f';
	else if (k == "0110")
		return 'g';
	else if (k == "0111")
		return 'h';
	else if (k == "1000")
		return 'i';
	else if (k == "1001")
		return 'j';
	else if (k == "1010")
		return 'k';
	else if (k == "1011")
		return 'l';
	else if (k == "1100")
		return 'm';
	else if (k == "1101")
		return 'n';
	else if (k == "1110")
		return 'o';
	else
		return 'p';
}

pls give{
	AC;
	// fileio("input.txt", "output.txt");
	int t;
	cin >> t;
	while (t--) {
		long long N;
		cin >> N;
		string s;
		cin >> s;
		for (int i = 0; i < N; i += 4)
		{
			cout << decode(s.substr(i, 4));
		}
		cout << nl;
	}
}


// 0000 - a	
// 0001 - b
// 0010 - c
// 0100 - e
// 1000 - i

// 0011 - d
// 0110 - g
// 1100 - m
// 1010 - k
// 0101 - f
// 1001 - j

// 0111 - h
// 1011 - l
// 1101 - n
// 1110 - o

// 1111 - p
	