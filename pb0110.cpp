#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int count = 0;
	while (getline(cin, s)){
		set<char> a;
		for (unsigned int i = 0; i < s.length(); i++){
			if(isalpha(s[i]))
			a.insert(tolower(s[i]));
		}
		for (unsigned int i = 0; i < a.size(); i++){
			count++;
		}
	cout << count;
	}
	return 0;
}
