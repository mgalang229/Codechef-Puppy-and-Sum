#include <bits/stdc++.h>

using namespace std;

void decode() {
	int d, n;
	cin >> d >> n;
	int t = 0, ans = 0;
	for(int i = 1; i <= d; ++i) {
		for(int j = 1; j <= n; ++j) {
			t += j;
			ans = t;
		}
		n = t;
		t = 0;
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
