#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100];
bool visited[100];

void dfs(int u){
    visited[u]=true;
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    cout<<"enter total nodes and edges:";
    int n,m;
    cin>>n>>m;
    cout<<"enter the "<<m<<" edges:"<<endl;
    for(int i=1;i<=m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    bool connected=true;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            connected=false;
            break;
        }
    }
    if(connected){
        cout<<"Graph is connected"<<endl;
    }
    else{
        cout<<"Graph is not connected"<<endl;
    }
    return 0;
}
