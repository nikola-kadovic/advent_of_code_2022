#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<vector<int>> a;
ll ans;

void solve() {
	for(int i = 1; i < a.size(); i++) {
		if(a[i][0] == a[i-1][0] && a[i][1] == a[i-1][1] && a[i][2] == a[i-1][2] + 1) {
			ans -= 2;
		}
	}
}

void rotate() {
	for(int i = 0; i < a.size(); i++) {
		rotate(a[i].begin(), a[i].begin()+1, a[i].end());
	}
	sort(a.begin(), a.end());	
}

int main() {
	string line;	

	while(getline(cin, line)) {
		int x, y, z;
		sscanf(line.c_str(), "%d,%d,%d", &x, &y, &z);
		a.push_back({x, y, z});
	}

	ans = a.size() * 6; // assume all cubes not conneted.

	sort(a.begin(), a.end());

	for(int i = 0; i < 3; i++) {
		solve();
		rotate();
	}

	cout << ans << "\n";

	return 0;	
}
