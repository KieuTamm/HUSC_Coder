#include <bits/stdc++.h>
using namespace std;
int main(){
	long int a, b, c;
	cin >> a >> b >> c;
    if ((a+b > c) && ( a+c > b) && ( b+c > a))
    {
  	  if ( (a==b) && (b==c))
	    cout << "Tam giac deu";
	  else if ((a==b)|| (b==c)|| (c==a))
	    cout << "Tam giac can";
	  else cout << "Tam giac thuong";
}
    return 0;
}
