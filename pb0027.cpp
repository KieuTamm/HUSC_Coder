#include <iostream>
using namespace std;
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    long long X = ((a%100)*(b%100)*(c%100)*(d%100)%100);
    printf ("%02lld", X);

    return 0;
}
