#include <iostream>
#include <stack>
#include <set>

using namespace std;

int  main()
{
    string s;
    cin >> s;

    stack<string> alphabetStrSt;
    set<char> alphabetSet;

    alphabetStrSt.push("");

    for(char c : s)
    {
        if(c == '(')
        {
            alphabetStrSt.push("");
        }
        else if(c == ')')
        {
            for(char c2 : alphabetStrSt.top())
            {
                alphabetSet.erase(c2);
            }

            alphabetStrSt.pop();
        }
        else
        {
            if(alphabetSet.count(c) != 0)
            {
                cout << "No" << endl;
                return 0;
            }

            alphabetSet.insert(c);
            alphabetStrSt.top() += c;
        }
    }

    cout << "Yes" << endl;
    return 0;

}