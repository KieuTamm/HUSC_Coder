#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;

    while(getline(cin, s)){
    stringstream ss(s);
    string tmp, n;

    while (ss >> tmp){
        n += tmp + " ";
    }
    if (!n.empty() && n.back() == ' ') {
            n.pop_back();
        }
    cout << n << endl;
    }
    return 0;
}
