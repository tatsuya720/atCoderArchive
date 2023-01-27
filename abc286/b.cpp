#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    bool isN = false;
    for(int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        
        if(c == 'n')
        {
            isN = true;
        }
        else if(isN)
        {
            isN = false;
            if(c == 'a')
            {
                cout << "ya";
                continue;
            }
        }
        
        cout << c;
    }
    return 0;
}