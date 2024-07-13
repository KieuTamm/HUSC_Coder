#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, t;
    cin >> n >> t;
    double sum = 0.0;

    vector<double> arr(n);
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort (arr.begin(), arr.end(), greater<double>());

    for (int i = 0; i < t && i < n; i++){
        sum += arr[i];
    }

    cout << setprecision(2) << fixed << sum;

    return 0;
}
