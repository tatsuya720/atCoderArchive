#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int count = 0;
        for(int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if(a % 2 != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}