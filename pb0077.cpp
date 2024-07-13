#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n;
    cin >> n;

    long long a[n + 1];
    a[0] = 2;
    if (n > 0){
        a[1] = 1;
    }
    for (int i = 2; i <= n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 0; i <= n; i++){
    cout << a[i] << " ";
    }
    return 0;
}
