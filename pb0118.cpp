#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++){
        if (!isdigit(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string temp;
    while (ss >> temp){
        sum += atoi(temp.c_str());
    }
    cout << sum;
}
