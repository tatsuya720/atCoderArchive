#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
    int n, q;

    cin >> n >> q;

    map<int, set<int>> users;

    for(int i = 1 ; i <= q; i++)
    {
        int t, a, b;

        cin >> t >> a >> b;

        if(t == 1)
        {
            users[a-1].insert(b-1);
        }
        else if(t == 2)
        {
            users[a-1].erase(b-1);
        }
        else if(t == 3)
        {
            if( users[a-1].count(b-1) != 0 &&
                users[b-1].count(a-1) != 0
            ) {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

}