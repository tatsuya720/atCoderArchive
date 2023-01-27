#include <iostream>

using namespace std;
int main()
{
    int n;
    
    cin >> n;
    
    bool isEnclose = false;
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;

        if(c == '"')
        {
            isEnclose = !isEnclose;
            cout << c;
        }
        else if(c == ',' && !isEnclose)
        {
            cout << '.';
        }
        else
        {
            cout << c;
        }

    }
    return 0;
}