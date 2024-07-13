#include <iostream>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int pnam = n/k;
    int pnu = m/k;
    if (n%k != 0)
      pnam = pnam + 1;
    if (m%k != 0)
      pnu = pnu + 1;
    cout << pnam + pnu;
    return 0;
}
