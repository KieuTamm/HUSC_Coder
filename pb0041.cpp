#include<bits/stdc++.h>

using namespace std;

int main () {
	int n;
	cin >> n;
	long long kq = 1;
	if (n == 0 || n == 1) {
		kq = 1;
	}
	else {
		if (n % 2 == 1) {
			for (int i = 1; i <= n; i+=2) {
				kq *= i;
			}
		}
		else if (n % 2 == 0) {
			for (int i = 2; i <= n; i += 2) {
				kq *= i;
			}
		}
	}
	cout << kq;
	return 0;
}
