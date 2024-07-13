#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, p;
	cin >> n >> p;
	int c = p*4;
	if ( n%c==0)
	  cout << n/c;
	else
   	  cout << (n/c) + 1;
    return 0;
}
