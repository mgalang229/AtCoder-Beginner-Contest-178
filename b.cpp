#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long a[4];
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	long long n1 = a[0] * a[2];
	long long n2 = a[1] * a[3];
	long long nn1 = a[0] * a[3];
	long long nn2 = a[1] * a[2];
	cout << max({n1, n2, nn1, nn2}) << '\n';
	return 0;
}
