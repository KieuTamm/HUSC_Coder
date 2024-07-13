#include <bits/stdc++.h>
using namespace std;

int f(int a, int b, int c, int n){
    if(n == 0) return a;
    else if (n > 0) return (f(a, b, c, n - 1) + b*n + c);
}
int main(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;;
    if (n >= 0 and n <= 10000){
       cout << f(a, b, c, n);
    }
    return 0;
}
