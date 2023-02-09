#include <iostream>
//bubble sort
using namespace std;
int count;
void bubsort(int arr[],int n)
{
     int i, j,temp;count++;

    for (i = 0; i < n - 1; i++)
    { count++;

        for (j = 0; j < n - i - 1; j++)
        {count++;

             if (arr[j] > arr[j + 1])
             {
                 temp=arr[j];count++;
                 arr[j]=arr[j+1];count++;
                 arr[j+1]=temp;count++;
             }count++;

        }count++;

    }count++;

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
    bubsort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";


    cout<<"total steps taken:"<<count<<endl;

    return 0;
}
