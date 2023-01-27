#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, x, y;

    cin >> n >> x >> y;

    map<long long, long long> reds, blues;

    reds[n] = 1;
    blues[1] = 0;

    while( n > 1)
    {
        reds[n - 1] += reds[n];
        blues[n] += reds[n] * x;
        reds[n] = 0;

        reds[n - 1] += blues[n];
        blues[n - 1] += blues[n] * y;
        blues[n] = 0;

        n--;
    }
    
    cout << blues[1] << endl;

}