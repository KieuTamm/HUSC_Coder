#include <bits/stdc++.h>

using namespace std;

long long tong (long long n){
    double sum = 0.0;
    while (n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

long long tich (long long n){
    double mul = 1.0;
    while (n){
        mul *= n % 10;
        n /= 10;
    }

    return mul;
}

int main (){
    long long a;
    cin >> a;
    double s = tong(a);
    double m = tich(a);
    double tyle = (m / s);
    cout << setprecision(3) << fixed << tyle;
}
