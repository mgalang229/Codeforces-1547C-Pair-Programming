#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int k, n, m;
		cin >> k >> n >> m;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(m);
		for (int i = 0; i < m; i++) {
			cin >> b[i];
		}
		int i = 0;
		int j = 0;
		int ans = 0;
		vector<int> vec;
		while (i < n || j < m) {
			int save_i = i;
			int save_j = j;
			while (i < n) {
				if (a[i] == 0) {
					vec.push_back(a[i]);
					i++;
					k++;
				} else if (a[i] <= k) {
					vec.push_back(a[i]);
					i++;
				} else {
					break;
				}
			}
			while (j < m) {
				if (b[j] == 0) {
					vec.push_back(b[j]);
					j++;
					k++;
				} else if (b[j] <= k) {
					vec.push_back(b[j]);
					j++;
				} else {
					break;
				}
			}
			if (save_i == i && save_j == j) {
				ans = -1;
				break;
			}
		}
		if (ans != -1) {
			for (auto& x : vec) {
				cout << x << " ";
			}
		} else {
			cout << ans;
		}
		cout << '\n';
	}
	return 0;
}
