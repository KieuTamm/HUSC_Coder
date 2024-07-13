#include <bits/stdc++.h>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a[1000];
    int j = 0;
    while (n!=0)
    {
        j++;
        a[j] = n % 16;
        n /= 16;
    }
    for (int i = j; i >= 1; i--){
        if (a[i] == 10) {
            cout << "A";
        }
        else if (a[i] == 11) {
            cout << "B";
        }
        else if (a[i] == 12) {
            cout << "C";
        }
        else if (a[i] == 13) {
            cout << "D";
        }
        else if (a[i] == 14) {
            cout << "E";
        }
        else if (a[i] == 15) {
            cout << "F";
        }
        else cout << a[i];
    }
    return 0;

}
