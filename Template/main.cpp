// Template Program

//------------------------------ By @atanughosh01 ------------------------------

#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

//----------------------------------------------------------------------------

using namespace std;
using namespace chrono;

//----------------------------------------------------------------------------

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

//----------------------------------------------------------------------------

#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define mp make_pair

#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pll>
#define vchr vector<char>
#define vint vector<int>
#define gint greater<int>

#define nln "\n"
#define INF 1e18
#define MOD 1000000007
#define MOD1 998244353
#define PI 3.141592653589793238462

#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define set_bits __builtin_popcountll
#define input(a,n) FOR(i,0,n) cin>>a[i]
#define output(a,n,sep) FOR(i,0,n) cout<<a[i]<<sep;

#define FOR(i,a,b) for(ll i=a; i<b; i++)
#define FORrev(i,a,b) for(ll i= a-1; i>=b; i--)
#define FORinc(i,a,b,c) for(ll i=a; i<b; i+=c)
#define FORdec(i,a,b,c) for(ll i=a-1; i>=b; i-=c)

#define mems(x, y) memset(x, y, sizeof(x))
#define fastIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

//----------------------------------------------------------------------------

#define deb1(a) cerr << #a << " : " << a << endl
#define deb2(a,b) cerr << #a << " : " << a << ", " << #b << " : " << b << endl
#define deb3(a,b,c) cerr<<#a<<" : "<<a<<", "<<#b<<" : "<<b<<", "<<#c<<" : "<<c<<endl
#define deb4(a,b,c,d) cerr<<#a<<" : "<<a<<", "<<#b<<" : "<<b<<", "<<#c<<" : "<<c<<", "<<#d<<" : "<<d<<endl
#define deb5(a,b,c,d,e) cerr<<#a<<" : "<<a<<", "<<#b<<" : "<<b<<", "<<#c<<" : "<<c<<", "<<#d<<" : "<<d<<", "<<#e<<" : "<<e<<endl

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " : "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//----------------------------------------------------------------------------

// const int MAX_NUM = 200000;

ll gcd(ll a, ll b) {
	if (a > b) swap(a, b);
	if (a == 0) return 0;
	if (b % a) return gcd(a, b - a);
	return a;
}

ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

//--------------------------------  S O L V E  --------------------------------

void solve() {
    // cout.precision(10);
    // cout << fixed;
    // priority_queue<int, vint, gint> pq;

    ll n, m;
    cin >> n;
    m = n*n + 2*n;
    deb2(n, m);
    cout << m << endl;
}

//----------------------------------------------------------------------------


int main() {

    fastIO();

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    freopen("error.txt", "w", stderr);

#else
    //online submission

#endif
    auto start1 = high_resolution_clock::now();

    int test = 1;
    cin >> test;
    FOR(i, 1, test + 1) {
        solve();
    }

    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "\nCompleted in: " << duration.count() << " microsec" << endl;
    return 0;
}
