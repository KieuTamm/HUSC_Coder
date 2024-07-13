#include <iostream>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int gio = n/3600;
    n = n%3600;
    int phut = n/60;
    int giay = n%60;
    printf ("%02d:%02d:%02d", gio, phut, giay);
    return 0;
}
