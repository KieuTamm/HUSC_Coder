#include <bits/stdc++.h>

using namespace std;

double GT(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * GT(n - 1);
    }
}

int main (){
    double x;
    cin >> x;
    int i = 1;
    double sum = 1.0;
    double term = pow(x, i) / GT(i);
    while (term > pow(10, -9)){
        sum += term;
        i++;
        term = pow(x, i) / GT(i);
    }
    cout << setprecision(4) << fixed << sum;
    return 0;
}
