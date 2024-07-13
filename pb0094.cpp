#include <bits/stdc++.h>
using namespace std;

bool perfect(int n){
    vector<int> uoc;
    long long sum = 1;
    uoc.push_back(1);
    if (n <= 1){
        return false;
    }

    else if (n >= 2 && n <= pow(10, 6)){
        for (int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                uoc.push_back(i);
                sum += i;
                if ( n / i != i){
                    uoc.push_back(n / i);
                        sum += n / i;
                }
            }
        }
        sort(uoc.begin(), uoc.end() );
    }

    if (sum == n){
        cout << "Yes\n";
        for (int u : uoc){
            cout << u << " ";
        }
    }
    else cout << "No";

    return (sum == n);
}

int main (){
    int n;
    cin >> n;
    perfect(n);

    return 0;
}
