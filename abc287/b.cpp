#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> ss;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ss.push_back(s);
    }

    vector<string> halfStrings;
    for(int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        halfStrings.push_back(s);
    }

    int result = 0;
    for(int i = 0; i < n; i++)
    {
        string halfS = ss[i].substr(ss[0].length() - 3);

        for(int j = 0; j < m; j++)
        {
            if(halfS == halfStrings[j])
            {
                result++;
                break;
            }
        }
    }

    cout << result << endl;

    return 0;
}