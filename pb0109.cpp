#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool isDifferent = true;
    for (int i = 0; i < s.length(); i++){
        for(int j = i + 1; j < s.length(); j++){
            if (s[i] == s[j]){
                isDifferent = false;
                break;
            }
        }
        if(!isDifferent) break;
    }
    if(isDifferent) cout << "yes";
    else cout << "no";
	return 0;
}
