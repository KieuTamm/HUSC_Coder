#include <bits/stdc++.h>
using namespace std;

int f(int m, int n){
    if (m == 0 || m == n){
        return 1;
    }
    else if (m > 0 && n > 0 && n > m){
        return (f(m - 1, n - 1) + f(m, n - 1));
    }
}

int main (){
    int m, n;
    cin >> n>> m;
    if (0 <= n && n <= 20 && 0 <= m && m <= 20){
        cout << f(m, n);
    }
    return 0;
}
