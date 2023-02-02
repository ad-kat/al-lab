#include <iostream>

using namespace std;
int count;
void selsort(int arr[],int n)
{
     int i, j, min_idx,temp;count++;

    for (i = 0; i < n-1; i++)
        {
        min_idx = i;count++;
        for (j = i+1; j < n; j++)
        {
            count++;
         if (arr[j] < arr[min_idx])
         {
             count++;
              min_idx = j;
         }

        }
        count++;
        count++;
        if(min_idx!=i)
        {

            temp=arr[min_idx];count++;
            arr[min_idx]=arr[i];count++;
           arr[i]=temp;count++;
        }

    }
    count++;
}

int main()
{
    int n,ele;count=0;
    cout << "enter no. of elements:" << endl;
    cin>>n;
    cout<<"Enter n numbers:"<<endl;
    int arr[25];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    selsort(arr,n);


    cout<<"total steps taken:"<<count<<endl;

    return 0;
}

