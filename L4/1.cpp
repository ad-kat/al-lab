#include <iostream>
using namespace std;
int count;
void max_container(int wt[], int c)
{
    int counts = 0;
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
                count++;count++;
                min=wt[i];
                pos=i;
            }
        }
        count++;
        cap+=wt[pos];
        if(cap<=c)
        {
            count++;
            counts++;
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
    cout<<"Maximum no. of containers loaded is "<<counts;
}
int main()
{
    int wt[20];int n;
    cout<<"enter no.of weights:";cin>>n;
    cout<<"Enter weights:"<<endl;//something like->4,6,5,5,12,8,3,9
    for(int i=0;i<n:i++)
        cin>>wt[i];
    int c;cout<<"enter container capacity:";//something like => 40
    max_container(wt,c);
    cout<<"\nThe step count is "<<count;
    return 0;
}
