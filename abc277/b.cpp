#include <iostream>
#include <set>

using namespace std;
int main()
{
    set<string> strs;
    int n;

    cin >> n;

    string ans = "Yes";
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        auto itr = strs.insert(s);

        if(!itr.second)
        {
            ans = "No";
            break;
        }
        else if(s[0] != 'H' &&
            s[0] != 'D' &&
            s[0] != 'C' &&
            s[0] != 'S'
        ) {
            ans = "No";
            break;
        }
        else if(s[1] != 'A' &&
            s[1] != '2' &&
            s[1] != '3' &&
            s[1] != '4' &&
            s[1] != '5' &&
            s[1] != '6' &&
            s[1] != '7' &&
            s[1] != '8' &&
            s[1] != '9' &&
            s[1] != 'T' &&
            s[1] != 'J' &&
            s[1] != 'Q' &&
            s[1] != 'K'
        ) {
            ans = "No";
            break;
        }
    }

    
    cout << ans << endl;
}