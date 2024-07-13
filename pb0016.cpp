#include <bits/stdc++.h>
using namespace std;
int main(){
	double a, b, c, x1, x2;
	cin >> a >> b >> c;
	double delta = pow(b, 2) - 4*a*c;
	if (delta < 0)
	  cout << "No Solution";
	else if (delta == 0 ){
	  x1 = x2 = (-b)/(2*a);
	  cout << setprecision(4) << fixed << x1;
	  return 0;
}
   else if (delta > 0){
	  x1 = (-b + sqrt(delta)) / (2*a);
	  x2 = (-b - sqrt(delta)) / (2*a);
	  cout << setprecision(4) << fixed << x1 << endl;
	  cout << setprecision(4) << fixed << x2;
	}
    return 0;
}
