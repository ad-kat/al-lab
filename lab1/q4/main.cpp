
//insertion sort

#include <iostream>

using namespace std;
int count;

void insort(int arr[], int n)
{
    int i, key, j;count++;
    for (i = 1; i < n; i++)
    {count++;
        key = arr[i];count++;
        j = i - 1;count++;

        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];count++;
            j = j - 1;count++;
        }count++;
        arr[j + 1] = key;count++;
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

    insort(arr,n);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<"\n total steps taken:"<<count<<endl;

    return 0;
}
