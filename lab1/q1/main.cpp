#include <iostream>
//normal binary search

using namespace std;
int count;
void linsort(int arr[],int n)
{
     int i, j, min_idx,temp;count++;

    for (i = 0; i < n-1; i++)
        {count++;
        min_idx = i;count++;
        for (j = i+1; j < n; j++)
        {count++;

         if (arr[j] < arr[min_idx])
         {
             count++;
              min_idx = j;
         }count++;

        }count++;


        if(min_idx!=i)
        {

            temp=arr[min_idx];count++;
            arr[min_idx]=arr[i];count++;
           arr[i]=temp;count++;
        }count++;

    }count++;

}
void search(int arr[],int n, int e)
{
    int lo = 0, hi = n-1,mid,f=0; count++;

    while (hi>lo&&f==0)
        {
        mid = (hi + lo) / 2;count++;
        count++;
        if (e < arr[mid])
        {
            hi = mid;count++;
        }

        else if(e>arr[mid])
        {count++;

            lo = mid + 1;count++;
        }

        else if(e==arr[mid])
        {count++;

           f++; count++;
        }
    }count++;
    count++;
    if (f==0) {
       cout << "Not Found" << endl;count++;
    }
    else {
        cout << "Found"<< endl;count++;count++;
        }

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
    cout<<"search element:"<<endl;
    cin>>ele;
    linsort(arr,n);

    search(arr, n, ele);
    cout<<"total steps taken:"<<count<<endl;

    return 0;
}
