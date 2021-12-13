// https://codeforces.com/problemset/problem/231/A

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
#define vll vector <ll>
#define pll pair<ll, ll>
#define vpll vector <pll>
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
	int test = 1;
	cin >> test;
	int cnt = 0;
	FOR(i, 1, test + 1) {
		int c = 0;
		FOR(j, 1, 4) {
			int num = 1;
			cin >> num;
			if (num == 1) c++;
		}
		if (c >= 2) cnt++;
	}
	cout << cnt;
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

	solve();

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
	cerr << "Completed in: " << duration.count() << " microsec" << endl;
	return 0;
}
