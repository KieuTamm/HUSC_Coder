#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	double x;
	cin >> x;
	x = sin(x)+sqrt(log2(3*x)/log2(4))+ceil(3*exp(x));
	cout << setprecision(6) << fixed << x;
	return 0;
}
