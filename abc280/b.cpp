#include <iostream>

using namespace std;
int main()
{
    int n;

    cin >> n;

    int total = 0;
    for(int i = 0; i < n; i++)
    {
        int s;
        cin >> s;

        int a = s - total;
        cout << a << " ";

        total += a;
    }

    return 0;
}