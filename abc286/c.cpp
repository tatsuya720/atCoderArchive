#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int n, a, b;
    string s;
    
    cin >> n >> a >> b;
    cin >> s; 

    long long cost = 1e18;
    for(int i = 0; i < n; i++)
    {
        long long nowCost = (long long)a * i;
        string t = s;
        rotate(t.begin(), t.begin()+i, t.end());
        for(int l = 0, r = n-1; l < r; l++, r--) 
        {
            if(t[l] != t[r])
            {
                nowCost += b;
            }
        }

        cost = min(cost, nowCost);
    }

    cout << cost << endl;

    
    return 0;
}