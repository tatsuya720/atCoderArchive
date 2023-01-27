#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<string> names;

    for(int i = 0; i < n; i++)
    {
        string name;
        cin >> name;

        names.push_back(name);
    }

    for(int i = names.size()-1; i >= 0; i--)
    {
        cout << names[i] << endl;
    }
    return 0;
}