#include <iostream>
using namespace std;
int count;
void max_container(int wt[], int c)
{
    int cc = 0;
    int cap=0,pos;
   count++;
    count++;
    for(int j=0;j<8;j++)
    {
       count++;
        int min=100;
        count++;
        for(int i=0;i<8;i++)
        {
           count++;
            if(wt[i]<min && wt[i]!=-1)
            {
                count++;
                count++;
                min=wt[i];
                pos=i;
            }
        }
        count++;
        cap+=wt[pos];
        if(cap<=c)
        {
            count++;
            cc++;
           count++;
            wt[pos]=-1;
        }
        else
        {
            count++;
            break;
        }
    }
   count++;
    cout<<"Maximum no. of containers loaded is "<<cc;
}
int main()
{
    int wt[12];int n;
    cout<<"enter total no. of containers:";
    cin>>n;
    cout<<"enter weight for all "<<n<<" containers:"<<endl;
    for(int i=0;i<n;i++)
        cin>>wt[i];
    int c;
    cout<<"enter weight limit:";cin>>c;
    max_container(wt,c);
    cout<<"\nThe step count is "<<count;
    return 0;
}
