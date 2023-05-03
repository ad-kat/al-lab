#include <bits/stdc++.h>
using namespace std;
#define V 4

void tsp(int graph[][V], bool v[], int currPos, int n, int count, int cost, int& ans)
{
    if (count == n && graph[currPos][0])
    {
        ans = min(ans, cost + graph[currPos][0]);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!v[i] && graph[currPos][i])
        {
            v[i] = true;
            tsp(graph, v, i, n, count + 1, cost + graph[currPos][i], ans);
            v[i] = false;
        }
    }
}
int main()
{
    cout<<"n=";int n;cin>>n;// = 4;


    int graph[n][V];/* = {  { 0, 15, 35, 10 },
                        { 15, 0, 15, 25 },
                        { 35, 15, 0, 18 },
                        { 10, 25, 18, 0 } };   */
    cout<<"enter graph:"<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
          cin>>graph[i][j];
    bool v[V];
    for (int i = 0; i < n; i++)
        v[i] = false;
    v[0] = true;
    int ans = 50000;
    tsp(graph, v, 0, n, 1, 0, ans);
    cout << ans;
    return 0;
}
