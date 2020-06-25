#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;

void reverse(int i) {
	k -= i;
	k = n - i - 1 - k;
	k = k + i;
	return;
}
void decode() {
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		if(k < i) {
			break;
		}
		else {
			reverse(i);
		}
	}
	cout << k << "\n";
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
