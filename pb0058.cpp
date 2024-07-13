#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, kq;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    long long max = a[0];
    long long min = a[0];
    int vt_max = 0;
    int vt_min = 0;

    for (int i = 0; i < n; i++){
            if ( a[i] > max){
                max = a[i];
                vt_max = i;
            }

            else if ( a[i] < min){
                min = a[i];
                vt_min = i;
            }
    }

    if (vt_max > vt_min){
        kq = (vt_max - vt_min);
    }
    else if (vt_max < vt_min){
        kq = vt_min - vt_max;
    }

    cout << kq;
    return 0;
}
