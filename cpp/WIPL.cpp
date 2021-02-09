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


// vi delete_element(vi v, int num) {
// 	auto it = find(v.begin(), v.end(), num);
// 	if (it != v.end()) {
// 		v.erase(it);
// 	}
// 	return v;
// }


void print_vector(vector<int> g1){
     for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
        cout<<'\n';
}

pls give{
	AC;
	// fileio("input.txt", "output.txt");
	int t;
	cin >> t;
	while (t--) {
		int N, K, FIRST = 0, SECOND = 0;
		cin >> N >> K;
		vi v;
		for (int i = 0; i < N; ++i)
		{
			int a;
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		FIRST = v[v.size()-1];
		// cout<<FIRST<<nl;
		v.pop_back();
		// print_vector(v);
		while (FIRST < K && v.size() > 0) {
			int diff = K - FIRST +1;
			int loc = lower_bound(v.begin(), v.end(), diff) - v.begin() -1;

			if(loc<0){
				diff = K- FIRST;
				loc = upper_bound(v.begin(), v.end(), diff) - v.begin();
			}
			if(loc>-1){
			FIRST += v[loc];
			}
			else break;

			// v = delete_element(v, v[loc]);
			if ((v.begin() + loc) != v.end() && loc>=0)
				v.erase(v.begin() + loc );
		}
		sort(v.begin(),v.end());
		SECOND = v[v.size()-1];
		v.pop_back();
		// print_vector(v);
		while (SECOND < K && v.size() > 0) {
			int diff = K - SECOND +1;
			int loc = lower_bound(v.begin(), v.end(), diff) - v.begin() -1;

			if(loc<0){
				diff = K- SECOND;
				loc = upper_bound(v.begin(), v.end(), diff) - v.begin() ;
			}
			if(loc>-1){
			SECOND += v[loc];
			// cout<<v[loc]<<" ";
		}
			else break;
			// v = delete_element(v, v[loc]);
			if ((v.begin() + loc) != v.end() && loc>=0)
				v.erase(v.begin() + loc );
		}
		// cout<<FIRST<<" "<<SECOND<<nl;
		// print_vector(v);
		if (FIRST < K|| SECOND < K)
			cout << "-1" << nl;
		else {
			cout << (N - v.size()) << nl;
		}
	}

}