#include <iostream>
#include <map>

using namespace std;
int main()
{
    map<string, int> stringCnt;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        if(stringCnt.count(s))
        {
            cout << s << '(' << stringCnt[s] << ')' << endl;
        }
        else
        {
            cout << s << endl;
        }
         stringCnt[s]++;
    }
}