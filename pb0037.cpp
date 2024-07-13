#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int a = 1; a <= 200200; ++a) {
        for (int b = 1; b <= 200; b++){
            if ((a * b) == n * (a + b)){
                cout << a << " " << b << endl;
            }
        }
    }

    return 0;
}
