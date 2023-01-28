#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<bool> visited(200000, false);


void dfs(int pos, vector<set<int>>& graph)
{
    visited[pos] = true;
    for(int i : graph[pos])
    {
        if(visited[i] == true)
        {
            continue;
        }

        dfs(i, graph);
    }

}

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

    dfs(0, graph);

    bool result = true;
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == false)
        {
            result = false;
            break;
        }
    }

    if(result)
    {
        int sideCount2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(graph[i].size() >= 3)
            {
                result = false;
                break;
            }
            else if(graph[i].size() == 2)
            {
                sideCount2++;
            }
        }
        if(sideCount2 == n)
        {
            result = false;
        }

    }
    
    if(result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}