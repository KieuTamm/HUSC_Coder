#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;

    while (true) {
        cin >> number;

        if (number == -1) {
            break;
        }
        sum += number;
    }

    cout << sum;

    return 0;
}
