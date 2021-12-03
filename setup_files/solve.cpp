
// Hello, this is a snippet.

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

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


// Complete the 'plusMinus' function below.
// The function accepts INTEGER_ARRAY arr as parameter.

void plusMinus(vector<int> arr) {

	double pos = 0, neg = 0, zero = 0;
	int N = arr.size();

	FOR(i, 0, N) {
		if (arr[i] < 0)
			neg += 1;
		else if (arr[i] > 0)
			pos += 1;
		else if (arr[i] == 0)
			zero += 1;
	}
	cout << (pos / N) << endl << (neg / N) << endl << (zero / N) << endl;
}

int main() {

	fastio();

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	// freopen("error.txt", "w", stderr);

#else
	//online submission

#endif
	auto start1 = high_resolution_clock::now();

	string n_temp;
	getline(cin, n_temp);

	int n = stoi(ltrim(rtrim(n_temp)));

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split(rtrim(arr_temp_temp));

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}
	plusMinus(arr);

	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
	cerr << "Completed in: " << duration.count() << " microsec" << endl;
	return 0;
}


string ltrim(const string &str) {
	string s(str);

	s.erase(
	    s.begin(),
	    find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
	);

	return s;
}

string rtrim(const string &str) {
	string s(str);

	s.erase(
	    find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
	    s.end()
	);

	return s;
}

vector<string> split(const string &str) {
	vector<string> tokens;

	string::size_type start = 0;
	string::size_type end = 0;

	while ((end = str.find(" ", start)) != string::npos) {
		tokens.push_back(str.substr(start, end - start));

		start = end + 1;
	}

	tokens.push_back(str.substr(start));

	return tokens;
}
