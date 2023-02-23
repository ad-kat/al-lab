#include <iostream>
#include <list>
#include <stack>
using namespace std;
int count;
class Graph
{
    int V;
    list<int>* adj;
    void topological(int v, bool visited[], stack<int>& Stack);
public:
    Graph(int V);
    void addEdge(int v, int w);
    void toposort();
};
Graph::Graph(int V)
{
    count++;this->V = V;
    count++; adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
       count++;adj[v].push_back(w);
}
void Graph::topological(int v, bool visited[], stack<int>& Stack)
{
    count++;
    visited[v] = true;
    count++;
    list<int>::iterator i;
    count++;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        count++;
        if (!visited[*i]) topological(*i, visited, Stack);
    }
    count++;
    Stack.push(v);
}
void Graph::toposort()
{
    stack<int> Stack;
    count++;
    bool* visited = new bool[V];
     count++;
     count++;
    for (int i = 0; i < V; i++)
    {
        count++;
        visited[i] = false;
    }
    count++;
    for (int i = 0; i < V; i++)
    {
       count++;
        if (visited[i] == false)
        {
            count++;
            topological(i, visited, Stack);
        }
    }
    count++;
    while (Stack.empty() == false)
    {
        count++;
        cout << Stack.top() << " ";
        count++;
        Stack.pop();
    }
}
int main()
{
    cout<<"enter size:";int n;cin>>n;
    Graph g(n);
    cout<<"enter edges:"<<endl;
    while(true)
    {
        int a=0,b=0;
        cin>>a>>b;
        if(a!=-1&&b!=-1)
        {
           g.addEdge(a,b);
        }
        else{
            break;
        }
    }

    cout << "Following is a Topological Sort of the given graph \n";
    g.toposort();
    cout<<"\nStep count is "<<count;
    return 0;
}
