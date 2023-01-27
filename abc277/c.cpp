#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    
    int n;

    cin >> n;

    vector<set<int>> ladders(n, set<int>());

    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if(a == 1)
        {
            for(int j = 0; j < ladders.size(); j++)
            {
                if(ladders[j].size() == 0)
                {
                   ladders[j].insert(a);
                   ladders[j].insert(b);
                   break;
                }
            }
        }
        else
        {
            for(int j = 0; j < ladders.size(); j++)
            {
                if(ladders[j].find(a) != ladders[j].end())
                {
                    ladders[j].insert(b);
                    break;
                }
            }
        }
    }

    int max = 1;
    for(auto itr = ladders.begin(); itr != ladders.end(); itr++)
    {
        if(itr->size() == 0)
        {
            continue;
        }

        auto itr2 = itr->rbegin();
        if(*itr2 > max)
        {
            max = *itr2;
        }
    }

    cout << max << endl;
}