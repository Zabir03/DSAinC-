#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number to find BN --> ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n&1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i++;
    }

    cout << "Answer is --> " << ans << endl;
}