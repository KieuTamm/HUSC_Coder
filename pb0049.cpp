#include <bits/stdc++.h>

using namespace std;

int main () {

    long long n;
    cin >> n;

    long long sum = 0;

    for (long long i=n; i>0; i/=10) {
        sum += i%10;
    }

    if (n % sum == 0)
    {
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}
