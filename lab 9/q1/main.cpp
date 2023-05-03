#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int store[MAX], n;
int graph[MAX][MAX];
//int d[MAX];

bool is_clique(int b)
{
    for (int i = 1; i < b; i++)
    {
        for (int j = i + 1; j < b; j++)
            if (graph[store[i]][store[j]] == 0)
                return false;
    }
    return true;
}

int maxCliques(int i, int l)
{
    int max_ = 0;
    for (int j = i + 1; j <= n; j++)
    {
        store[l] = j;
        if (is_clique(l + 1))
        {
            max_ = max(max_, l);
            max_ = max(max_, maxCliques(j, l + 1));
        }
    }
    return max_;
}

int main()
{
    int edges, size;
    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> size;
    cout << "Enter the edges in the format 'u v':" << endl;
    for (int i = 0; i < size; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
       // d[u]++;
       // d[v]++;
    }
    cout << maxCliques(0, 1);
    return 0;
}
