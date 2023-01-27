#include <iostream>
#include <vector>
#include <set>

using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;

    vector<set<int>> graph(n, set<int>());

    for(int i = 0; i < m; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        v1--;
        v2--;
        graph[v1].insert(v2);
        graph[v2].insert(v1);
    }

    vector<bool> visited(n, false);
   
    auto dfs = [&](auto dfs, int v) -> void {
        visited[v] = true;
        for(int u: graph[v])
        {
            if(visited[u])
            {
                continue;
            }
            dfs(dfs, u);
        }
    };

    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(visited[i])
        {
            continue;
        }

        dfs(dfs, i);
        count++;
    }

    cout << count << endl;

    return 0;
}