#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> path;
int count;

void dfs(int node, int dest) {
    visited[node] = true;count++;
    path.push_back(node);count++;

    count++;
    if (node == dest) {
        // Found a path from source to destination
        for (int i = 0; i < path.size(); i++)
            {count++;
            cout << path[i] << "-->";count++;
        }count++;
        cout <<"path"<< endl;count++;
    } else {
        for (int i = 0; i < adj[node].size(); i++)
            {count++;
            int next = adj[node][i];count++;
            count++;
            if (!visited[next])
             {

                dfs(next, dest);count++;
            }
        }count++;
    }
    visited[node] = false;count++;
    path.pop_back();count++;
}

int main() {
    int n;
    count=0;
    cout<<"enter no. of nodes:";
    cin >> n;
    adj.resize(n);
    visited.resize(n, false);
    cout<<"Enter the edges:"<<endl;
    while(true)
        {
        int u, v;
        cin >> u >> v;
        if(u!=-1&&v!=-1)
            adj[u].push_back(v);
        else
            break;

    }
    int source, dest;
    cout<<"source:";cin>>source;
    cout<<"Destination:";cin>> dest;
    dfs(source, dest);
    cout<<"Total no.of steps="<<count<<endl;
    return 0;
}
