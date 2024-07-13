#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, x;
    const double pi = 3.14159;
    cin >> a >> b >> x;
    double G = (x*pi)/180;
    long double S = 0.5*a*b*sin(G);
    cout << setprecision(2) << fixed << S;
    return 0;
}
