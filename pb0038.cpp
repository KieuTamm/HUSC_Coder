#include <iostream>
#include <math.h>
using namespace std;
main()
 {
    int n,count;

    cin >> n;
    if(n < 2)
	{
       cout << "No";
        return 0;
    }
    count = 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            count++;
    if(count == 0)
        cout << "Yes";
	else
        cout << "No";
}
