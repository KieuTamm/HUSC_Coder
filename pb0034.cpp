#include <iostream>

using namespace std;

int main(){
    long long n,r,sum=0,temp;

     cin >> n;

    for(temp=n;n!=0;n=n/10){
         r=n%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         cout << "Yes";
    else
         cout << "No";

    return 0;
}
