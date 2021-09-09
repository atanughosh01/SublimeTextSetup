#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func(int);

int main()
{
#ifndef ONLINE_JUDGE
	// for getting input from input.txt
	freopen("input1.txt", "r", stdin);

	//for writing output to output.txt
	freopen("output1.txt", "w", stdout);
#endif
	// int n;
	// cin >> n;
	// cout << n * n;

	int T;
	// scanf("%d", &T);
	cin >> T;
	while (T != 0)
	{
		int B;
		// scanf("%d", &B);
		// printf("%d\n", func(B));
		cin >> B;
		cout << func(B) << endl;
		T--;
	}
	return 0;
}

int func(int n)
{
	if (n <= 1)
		return 0;
	else
		return n / 2 + func(n - 2) - 1;
}
