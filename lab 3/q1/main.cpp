#include <iostream>
using namespace std;
int count, edges, vertices;
class Stack
{
    int top;
    int a[100];
    public:
    Stack()
    {
        top = -1;
    }
    bool isEmpty();
    void push(int x);
    int pop();
};
bool Stack::isEmpty()
{
    if (top < 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::push(int x)
{
    if (top < 100)
    {
        top++;
        a[top] = x;
    }
    else
    {
        cout << "\nStack is Full !\n";
    }
}
int Stack::pop()
{
    if (!isEmpty())
    {
        return (a[top--]);
    }
    else
    {
        cout << "\nStack is Empty !\n";
        return 0;
    }
}
void DFS(int a[][10], int *visited, int source, int *parent)
{
    count++;
    visited[source] = 1;
    count++;
    for (int i = 1; i <= vertices; i++)
    {
        count++;
        if (a[source][i - 1] == 1 && !visited[i - 1])
        {
            count++;
            parent[i - 1] = source;
            count++;
            DFS(a, visited, i - 1, parent);
            count++;
        }
    }
    count++;
}
int main()
{
    int a[10][10], count = 0, i, j;
    cout << "Enter Number of Vertices : ";
    cin >> vertices;
    cout << "Enter Number of Edges : ";
    cin >> edges;
    for (i = 0; i < vertices; i++)
    for (int j = 0; j < vertices; j++)
    a[i][j] = 0;
    int p, q;
    for (i = 1; i <= edges; i++)
    {
        cout << "Enter Source : ";
        cin >> p;
        cout << "Enter Destination : ";
        cin >> q;
        a[p - 1][q - 1] = 1;
    }
    cout << "\nThe Adjacency Matrix is : \n\n";
    for (i = 0; i < vertices; i++)
    {
        for (j = 0; j < vertices; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter Source : ";
    int source;
    cin >> source;
    cout << "Enter Destination : ";
    int destination;
    cin >> destination;
    int visited[10];
    count++;
    for (i = 0; i < vertices; i++)
    {
        count++;
        visited[i] = 0;
        count++;
    }
    count++;
    int parent[10];
    count++;
    for (i = 0; i < vertices; i++)
    {
        count++;
        parent[i] = i;
        count++;
    }
    count++;
    DFS(a, visited, source - 1, parent);
    count++;
    if (!visited[destination - 1])
    {
        count++;
        cout << "NO path exists!";
    }
    else
    {
        count++;
        Stack s;
        count++;
        while (parent[destination - 1] != (destination - 1))
        {
            count++;
            s.push(destination);
            count++;
            destination = parent[destination - 1] + 1;
            count++;
        }
        count++;
        s.push(destination);
        count++;
        while (!s.isEmpty())
        {
            count++;
            cout << s.pop() << " --> ";
        }
       count++;
    }
    cout << "NULL"<< "\n\nNumber of steps : " << count;
}
