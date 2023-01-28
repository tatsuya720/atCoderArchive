#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int half = n - n / 2;

    int forCount = 0;
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(s == "For")
        {
            forCount++;
        }
    }

    if(forCount >= half)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}