#include <iostream>


using namespace std;
int main()
{
    string s,t;

    cin >> s;
    cin >> t;

    if(s.find(t) != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}