#include <iostream>
#include <list>
#include <stack>
using namespace std;
int c;
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
    c++;
    this->V = V;
    c++;
    adj = new list<int>[V];
}
void Graph::addEdge(int v, int w)
{
    c++;
    adj[v].push_back(w);
}
void Graph::topological(int v, bool visited[], stack<int>& Stack)
{
    c++;
    visited[v] = true;
    c++;
    list<int>::iterator i;
    c++;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
    {
        c++;
        if (!visited[*i]) topological(*i, visited, Stack);
    }
    c++;
    Stack.push(v);
}
void Graph::toposort()
{
    stack<int> Stack;
    c++;
    bool* visited = new bool[V];
    c++;
    c++;
    for (int i = 0; i < V; i++)
    {
        c++;
        visited[i] = false;
    }
    c++;
    for (int i = 0; i < V; i++)
    {
        c++;
        if (visited[i] == false)
        {
            c++;
            topological(i, visited, Stack);
        }
    }
    c++;
    while (Stack.empty() == false)
    {
        c++;
        cout << Stack.top() << " ";
        c++;
        Stack.pop();
    }
}
int main()
{

    cout<<"no. of nodes:";int g; cin>>g;Graph G(g);
    cout<<"enter edges:"<<endl;

    int a,b;
    while(true)
    {
        cin>>a>>b;
      if(a!=-1&&b!=-1)
        {
        G.addEdge(a,b);
        }
        else
            break;
    }

    cout << "Following is a Topological Sort of the given graph \n";
    G.toposort();
    cout<<"\nStep count is "<<c;
    return 0;
}
