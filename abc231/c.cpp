#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, q;

    cin >> n >> q;

    vector<long long> hights;

    for(int i = 0; i < n; i++)
    {
        long long a;
        cin >> a;

        hights.push_back(a);
    }

    sort(hights.begin(), hights.end());

    for(int i = 0; i < q; i++)
    {
        long long x;
        cin >> x;

        cout << hights.end() - lower_bound(hights.begin(), hights.end(), x) << endl;
    }

    
    return 0;

}