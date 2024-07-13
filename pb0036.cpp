#include <iostream>
#include <vector>

using namespace std;

int main() {
    char s;

    cin >> s;

    int n;
    cin >> n;

    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < numbers[i]; ++j) {
          cout << s;
        }
        cout <<endl;
    }

    return 0;
}
