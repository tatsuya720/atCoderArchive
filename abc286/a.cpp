#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int main()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;

    vector<int> nums;
    queue<int> swap1, swap2;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);

        if(i >= p-1 && i <= q-1)
        {
            swap1.push(a);
        }
        else if(i >= r-1 && i <= s-1)
        {
            swap2.push(a);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(i >= p-1 && i <= q-1)
        {
            cout << swap2.front();
            swap2.pop();
        }
        else if(i >= r-1 && i <= s-1)
        {
            cout << swap1.front();
            swap1.pop();
        }
        else
        {
            cout << nums[i];
        }
        cout << " ";
    }



    return 0;
}