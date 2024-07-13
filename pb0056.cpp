#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort (a, a + n);
    long long sum = 0;
    for (int i = 0; i < n; i++){
        if ( a[i] != a[n - 1]){
            sum += a[i];
        }
    }

    cout << sum;
    return 0;
}
