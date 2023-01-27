#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, y, z;

    cin >> n >> x >> y >> z;

    vector<bool> passed(n, false);

    vector<int> mathPoints;
    vector<int> engPoints;

    for(int i = 0; i < n; i ++)
    {
        int a;
        cin >> a;
        mathPoints.push_back(a);
    }
    for(int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        engPoints.push_back(b);
    }

    for(int i = 0; i < x; i++)
    {
        int max = -1;
        int number = -1;
        for(int j = 0; j < n; j++)
        {
            if(passed[j] == false && max < mathPoints[j])
            {
                max = mathPoints[j];
                number = j;
            }
        }

        passed[number] = true;
    }

    for(int i = 0; i < y; i++)
    {
        int max = -1;
        int number = -1;
        for(int j = 0; j < n; j++)
        {
            if(passed[j] == false && max < engPoints[j])
            {
                max = engPoints[j];
                number = j;
            }
        }

        passed[number] = true;
    }

    for(int i = 0; i < z; i++)
    {
        int max = -1;
        int number = -1;
        for(int j = 0; j <n ; j++)
        {
            if(passed[j] == false && max < mathPoints[j] + engPoints[j])
            {
                max = mathPoints[j] + engPoints[j];
                number = j;
            }
        }

        passed[number] = true;
    }

    int index = 1;
    for(auto itr = passed.begin(); itr != passed.end(); itr++)
    {
        if(*itr == true)
        {
            cout << index << endl;
        }

        index++;
    }
}