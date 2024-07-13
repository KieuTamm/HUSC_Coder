#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	cin >> n;
	double t = 0;
	for (int i = 1;i <= n; i++){
		t += (double)1/i;
	}
	cout << setprecision(6) << fixed << t;
	return 0;
}
