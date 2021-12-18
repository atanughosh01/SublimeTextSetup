// https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

//------------------------------------

#define ll long long
#define ld long double
#define lld long long double
#define ull unsigned long long
#define mod 1000000007
#define mod1 998244353
#define inf 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define all(x) x.begin(),x.end()
#define FOR(i, a, b)    for(int i=a; i<b; i++)
#define FORrev(i,a,b)  for(int i= a-1; i>=b; i--)
#define FORinc(i, a, b, c)    for(int i=a; i<b; i+=c)
#define vint vector<int>
#define vchr vector<char>
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define input(a,n) FOR(i,0,n) cin>>a[i]
#define mems(x, y) memset(x, y, sizeof(x))
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//------------------------------------

using namespace std;
using namespace chrono;

//------------------------------------

// const int MAX_N = 200000;

void solve() {
	string s;
	cin >> s;
	int cnt = 1;

	FOR(i, 0, s.size()) {
		if (s[i + 1] == s[i]) cnt++;
		else {
			if (cnt >= 7) {
				cout << "YES" << endl;
				return;
			}
			else cnt = 1;
		}
	}
	cout << "NO" << endl;
}

int main() {

	fastio();

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("error.txt", "w", stderr);

#else
	//online submission

#endif
	auto start1 = high_resolution_clock::now();

	int test = 1;
	// cin >> test;
	FOR(i, 1, test + 1) {
		solve();
	}

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
	cerr << "Completed in: " << duration.count() << " microsec" << endl;
	return 0;
}