#include<bits/stdc++.h>

using namespace std;

int main () {
	int T;
	long long a1, a2, a3, a4, b;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> a1 >> a2 >> a3 >> a4 >> b;
	if ( a1 == a2 && a2 == a3 && a3 == a4) {
		cout << "Yes"<< endl;
	}
	else {
		int max = a1;
		if (a2 > max) {
			max = a2;
		}
		if (a3 > max) {
			max = a3;
		}
		if (a4 > max) {
			max = a4;
		}

		if (a1 != max) {
			a1 += b;
		}
		else if ( a2 != max) {
			a2 += b;
		}
		else if ( a3!= max) {
			a3 += b;
		}
		else if ( a4 != max) {
			a4 += b;
		}

		if (a1 == a2 && a2 == a3 && a3 == a4) {
			cout << "Yes" << endl;
		}
		else {
		cout << "No" << endl;
		}
	}
}
	return 0;
}
