#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cin >> n >> x;

    for(int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        
        if(p == x)
        {
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}