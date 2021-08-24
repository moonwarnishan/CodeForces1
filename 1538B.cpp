#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int s = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			s += a[i];
		}
		if (s % n != 0) {
			cout << "-1" << '\n';
			continue;
		}

		s /= n;
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (s < a[i]) {

				res++;
			}
		}
		cout << res << '\n';
	}
	return 0;
}
