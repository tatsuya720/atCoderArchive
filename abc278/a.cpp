#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> q;

    int n, k;

    cin >>n >> k;

    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    for(int i = 0; i < k; i++)
    {
        q.pop();
        q.push(0);
    }

    while(!q.empty())
    {
        cout << q.front() << " ";

        q.pop();
    }
}