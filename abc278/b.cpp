#include <iostream>

using namespace std;
int main()
{
    int h, m;
    cin >> h >> m;

    int t[4];

    t[0] = h / 10;
    t[1] = h % 10;
    t[2] = m / 10;
    t[3] = m % 10;

    while(1)
    {
        int checkHour = t[0] * 10 + t[2];
        int checkMin = t[1] * 10 + t[3];

        if(checkHour >= 0 && checkHour <= 23 &&
            checkMin >= 0 && checkMin <= 59
        ) {
            break;
        }

       int min = t[2] * 10 + t[3];
       min++;

       int addHour = 0;
       if(min >= 60)
       {
        min = 0;
        addHour = 1;
       }

       int hour = (t[0] * 10 + t[1]) + addHour;
       if(hour >= 24)
       {
          hour = 0;
       }

        t[0] = hour / 10;
        t[1] = hour % 10;
        t[2] = min / 10;
        t[3] = min % 10;
    }

    cout << t[0] << t[1] << " " << t[2] << t[3];
}