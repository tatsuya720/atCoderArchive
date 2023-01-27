#include <iostream>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int result = -1;
    for(int i = s.size() -1 ; i >= 0; i--)
    {
        if(s[i] == 'a')
        {
            result = i + 1;
            break;
        }
    }

    cout << result << endl;
}