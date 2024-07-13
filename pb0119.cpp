#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, tmp, num, result;
	getline(cin, s);
	for (int i = 0; i < s.length();i++){
        if (!isdigit(s[i]) and s[i] != '.'){
            s[i] = ' ';
        }
	}
	if(!s.empty()){
        stringstream ss(s);
        while(ss >> num){
            result += num + " ";
        }
        result.pop_back();
	}
	cout << result << endl;
	return 0;
}
