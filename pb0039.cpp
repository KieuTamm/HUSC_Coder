// a + b = m và 2a + 4b = n
// b = m - a; a = m - b
// n = 2a + 4*( m - a ) -> a = (n -4m)/-2
// n = 2*(m - b) + 4b

#include <bits/stdc++.h>
using namespace std;

int main() {

	int m, n;
	cin >> m >> n;

	if (m > 0 && n > 0) {
		int Ga = (n - 4*m) / -2;
		int Cho = m - ((n - 4*m) / -2);
		if ( Ga > 0 && Cho > 0) {
			cout << "Ga = " << Ga << endl;
			cout << "Cho = " << Cho;
		}
		else cout << "-1";
	}
	else cout << "-1";
	return 0;
}
