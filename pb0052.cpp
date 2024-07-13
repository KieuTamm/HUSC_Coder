#include <bits/stdc++.h>

using namespace std;

int main () {
    double n, p, m;
    cin >> n >> p >> m;
    int thang = 0;

    double  a = log(m / n);
    double  b = log(1 + (p / 100));
    if (fmod(a,b) == 0)
    {
        thang = static_cast<int>(a / b);
        cout << thang;
    }
    else if (fmod(a, b) != 0)
    {
        thang = static_cast<int>((a / b) + 1);
        cout << thang;
    }

    return 0;

}
