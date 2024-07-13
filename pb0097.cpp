#include <bits/stdc++.h>
using namespace std;

long long f(long long n){
    if(n == 0) return 0;
    else if (n > 0) return (f(n - 1) + n);
}

int main(){
    long long n;
    cin >> n;
    if (n >= 0){
       cout << f(n);
    }
    return 0;
}
