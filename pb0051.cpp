#include <bits/stdc++.h>

using namespace std;

int main(){
    long long h, a, b;
    cin >> h >> a >> b;

    if (h >= 0 && a >= 0 && b >= 0) {

        if (h==a){
            cout << "1";
        }
        else if (h != a && a != b && a >= b){
            if ((h - b) % (a - b) == 0){
                cout << (h - b) / (a - b);
            }
            else cout << ((h - b) / (a - b)) + 1;
        }
        else if (a <= b){
            cout << "-1";
        }
    }
    else cout << "-1";
    return 0;
}
