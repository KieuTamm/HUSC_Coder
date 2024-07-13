#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp, email;
    while(ss >> tmp){
        email += (char)tolower(tmp[0]);
    }
    email.pop_back();
    transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);
    cout << email << tmp << "@husc.edu.vn";
    return 0;
}
