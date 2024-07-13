#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if ( (x >= a && y >= b) or ( x >= b && x >= c ) or ( x >= a && x >= c)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}
