#include <bits/stdc++.h>

using namespace std;

int main() {
    double x, k;
    cin >> x >> k;
    double c = sqrt( abs(x));
    double a = pow(c, 4) + pow(k, 3);
    double fx = pow(log10(a), 3) + pow(cos(x), 5);
    cout << setprecision(2) << fixed << fx;
    return 0;
}
