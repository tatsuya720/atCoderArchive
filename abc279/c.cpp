#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int h, w;

    cin >> h >> w;

    vector<int> s_count(h, 0);
    
    for(int i = 0; i < h; i++)
    {
        string s;
        cin >> s;

        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == '#')
            {
                s_count[i]++;
            }
        }
    }

    bool ans = true;
    for(int i = 0; i < h; i++)
    {
        string s;
        cin >> s;

        int count = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == '#')
            {
                count++;
            }
        }

        if(s_count[i] != count)
        {
            ans = false;
            break;
        }
    }

    if(ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

}