#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    vector<vector<int>> city(n, vector<int>());


    for(int i = 0; i < m; i++)
    {
        int a, b;

        cin >> a >> b;

        city[a-1].push_back(b);
        city[b-1].push_back(a);
    }


    for(auto itr = city.begin(); itr != city.end(); itr++)
    {
        cout << itr->size() << " ";

        sort(itr->begin(), itr->end());

        for(int j = 0; j < (*itr).size(); j++)
        {
            cout << (*itr).at(j) <<" ";
        }

        cout << endl;
    }
}