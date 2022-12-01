#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	ll ans = 0, cur = 0;
	string line;	

	while(getline(cin, line)) {
		if(line == "") {
			ans = max(ans, cur);
			cur = 0;
			continue;
		}
		cur += stol(line, nullptr, 10);
	}

	cout << ans << "\n";
	return 0;	
}