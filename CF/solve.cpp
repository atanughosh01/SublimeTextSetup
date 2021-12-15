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
#define debug(x) cerr << #x << " " << x << endl;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//------------------------------------

using namespace std;
using namespace chrono;

//------------------------------------

class Solution {
public:
	int maxPower(string s) {
		if (s.length() <= 1) return s.length();
		else if (s.length() == 2) {
			if (s[0] == s[1]) return 2;
			else return 1;
		}
		else {
			int cnt = 1;
			vector<int> lst;
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == s[i + 1]) cnt++;
				else {
					lst.push_back(cnt);
					cnt = 1;
				}
			}
			return (*max_element(lst.begin(), lst.end()));
		}
	}
};

int main() {
	auto start1 = high_resolution_clock::now();

	string str = "aabbbbbccccdddddddeffffffggghhhhhiiiiijjjkkkkkllllmmmmmnnnnnoopppqrrrrsssttttuuuuvvvvwwwwwwwxxxxxyyyzzzzzzzz";
	Solution sol;
	cout << sol.maxPower(str) << "\n";

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
	cerr << "Completed in: " << duration.count() << " microsec" << endl;
	return 0;
}
