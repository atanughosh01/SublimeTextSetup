#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define mod 1000000007
#define inf LLONG_MAX
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define FOR(i, a, b)    for(int i=a; i<b; i++)
#define FORrev(i,a,b)  for(int i= a-1; i>=b; i--)
#define vll vector <ll>
#define pll pair<ll, ll>
#define vpll vector <pll>
#define input(a,n) FOR(i,0,n) cin>>a[i]
#define mems(x, y) memset(x, y, sizeof(x))
#define ThisIsDragonDen ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

using namespace std;

//------------------------------------

int func(int n)
{
    if (n <= 1)
        return 0;
    else
        return n / 2 + func(n - 2) - 1;
}

int main() {
    ThisIsDragonDen
#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#else
    //online submission
#endif
    clock_t tStart = clock();
    int T;
    cin >> T;
    while (T--)
    {
        int B;
        cin >> B;
        cout << func(B) << endl;
    }
    cerr << "Completed in: " << (double)((clock() - tStart) * 1000) / CLOCKS_PER_SEC << " ms" << endl;
    return 0;
}
