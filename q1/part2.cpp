#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	vector<ll> ans(3);
	ll cur = 0;
	string line;	

	while(getline(cin, line)) {
		if(line == "") {
			for(int i = 0; i < 3; i++) {
				if(cur > ans[i]) {
					ans.insert(ans.begin()+i, 1, cur);
					ans.pop_back();
					break;
				}
			}
			cur = 0;
		}else {
			cur += stol(line, nullptr, 10);
		}
	}

	cout << ans[0] + ans[1] + ans[2] << "\n";
	return 0;	
}