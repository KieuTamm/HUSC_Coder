#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c[128] = {0};
    getline(cin, s);
    int A = s.length();
    for(int i = 0; i < A; i++){
        if(isalnum(s[i])) c[s[i]]++;
    }
    for (int i = 0; i < 128; i++){
        if(c[i] > 0){
            cout << static_cast<char>(i) << " " << c[i] << endl;
        }
    }
    return 0;
}
