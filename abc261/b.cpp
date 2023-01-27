#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int n;

    cin >> n;

    vector<vector<char>> map(n, vector<char>(n, '-'));

    for(int i = 0; i < n; i++)
    {
         for(int j = 0; j < n; j++)
         {
            char a;
            cin >> a;
            map[i][j] = a;
         }
    }

    bool result = true;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if( i == j)
            {
                continue;
            }

            if(map[i][j] == 'W' && map[j][i] != 'L')
            {
                result = false;
                break;
            }
            else if(map[i][j] == 'L' && map[j][i] != 'W')
            {
                result = false;
                break;
            }
            else if(map[i][j] == 'D' && map[j][i] != 'D')
            {
                result = false;
                break;
            }
        }
    }

    if(result)
    {
        cout << "correct" << endl;
    }
    else
    {
        cout << "incorrect " << endl;
    }

}