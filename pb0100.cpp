#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if (n >= 101 && n <= pow(10, 6)){
        return n - 10;
    }
    else if (n >= 1 && n <= 100){
        return f(f(n + 11));
    }
}

int main (){
    int n;
    cin >>  n;
    cout << f(n);
    return 0;
}
