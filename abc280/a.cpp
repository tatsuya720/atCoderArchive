#include <iostream>

using namespace std;

int main()
{

    int h, w;
    cin >> h >> w;

    int ans = 0;
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            char c;
            cin >> c;

            if(c == '#')
            {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}