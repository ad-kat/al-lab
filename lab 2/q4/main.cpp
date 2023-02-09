#include <iostream>
using namespace std;

class Graph//class Graph
{
public:
    int V,arr[20][20];
};
void input()//forming the adjacency matrix...
{
    int t;
    cout<<"enter no vertices:";
    cin>>V;
    cout<<"\n enter 1 if connects,else enter 0"<<endl;
    for(int i=0;i<V;i++)//row
    {
        for(int j=0;j<V;j++)//col
        {
            cout<<"\n does"<<i<<" directs towards"<<j<<"?:";cin>>t;
            arr[i][j]=t;
        }
    }
}

void trans()
{
  for(int i=0;i<V/2;i++)
  {
      for(int j=0;j<V/2;j++)
      {
          int temp=arr[i][j];
          arr[i][j]=arr[j][i];
          arr[j][i]=temp;
      }
  }
}
void print()
{
   for(int i=0;i<V/2;i++)
  {
      cout<<i<<"-->"
      for(int j=0;j<V/2;j++)
      {
          cout<<j<<"-->";
      }
      cout<<"\n|\n|\n^"<<endl;
  }
}


int main()
{
    Graph g;
    g.input;
    g.trans;
    g.print;



    return 0;
}
