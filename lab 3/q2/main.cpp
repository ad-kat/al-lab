#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> parent;
int cycle_start, cycle_end;
int count;

bool dfs(int node, int par) {
    visited[node] = true;count++;
    parent[node] = par;count++;
    for (int i = 0; i < adj[node].size(); i++)
        {
        int next = adj[node][i];count++;
        count++;
        if (visited[next] && next != par)
         {
            cycle_start = next;count++;
            cycle_end = node;count++;
            count++;return true;
        } else if (!visited[next])
         {count++;count++;
            if (dfs(next, node)) {
                count++;return true;
            }
        }
    }count++;
    count++;return false;
}

void print_cycle() {
    vector<int> cycle;count++;
    cycle.push_back(cycle_start);count++;
    for (int i = cycle_end; i != cycle_start; i = parent[i])
        {count++;
        cycle.push_back(i);count++;
    }count++;
    cycle.push_back(cycle_start);count++;
    cout << "Cycle found:";count++;
    for (int i = cycle.size() - 1; i >= 0; i--)
    {count++;
        cout << " " << cycle[i];count++;
    }count++;
    cout << endl;count++;
}

int main() {
    int n, m;count=0;
    cout<<"enter no. of nodes:";
    cin >> n ;
    adj.resize(n);
    visited.resize(n, false);
    parent.resize(n, -1);
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
    for (int i = 0; i < n; i++) {
        if (!visited[i] && dfs(i, -1)) {
            print_cycle();
            break;
        }
    }
    cout<<"steps taken:"<<count<<endl;
    return 0;
}
