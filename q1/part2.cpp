#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	set<ll> s;
	ll cur = 0;
	string line;	

	while(getline(cin, line)) {
		if(line == "") {
			s.insert(cur);
			if(s.size() > 3) s.erase(s.begin());
			cur = 0;
		}else {
			cur += stol(line, nullptr, 10);
		}
	}
	ll ans = 0;
	for(auto it : s) 
		ans += it;

	cout << ans << "\n";
	return 0;	
}