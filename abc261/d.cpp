#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, m;
    long long totalMoney;

    cin >> n >> m;

    vector<long long> moneys;
    vector<int, long long> bonues(m, 0);

    for(int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;

        moneys.push_back(x);
    } 

    for(int i = 0; i < m; i++)
    {
        int c;
        long long y;

        cin >> c >> y;
        bonues[c] = y;
    }

    
}