#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin >> s){
		int countUpper = 0;
		int d = s.length();
		for (int i = 0; i < d; i++){
			if (isupper(s[i])) countUpper++;
		}
		int countLower = d - countUpper;
		if (countUpper > countLower){
			for (int i = 0; i < d; i++){
				if (islower(s[i]))
					s[i] = (char)toupper(s[i]);
			}
		}
		else if (countUpper <= countLower) {
			for (int i = 0; i < d; i++){
				if (isupper(s[i]))
					s[i] = (char)tolower(s[i]);
			}
		}
		cout << s << endl;
	}
	return 0;
}
