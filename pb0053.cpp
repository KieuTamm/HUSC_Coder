#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int dem = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	;
		int canhai = sqrt(arr[i]);
		if (canhai * canhai == arr[i]) {
			dem += 1;
		}

}

	cout << dem;
	return 0;
}
