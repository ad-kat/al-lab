#include <iostream>

using namespace std;
int count;
void linsort(int arr[],int n)
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
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
        {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            {
                return mid;
                }


        if (arr[mid] > x)
           {

            return binarySearch(arr, l, mid - 1, x);
            }

        if (arr[mid] > x)
            {
                return binarySearch(arr, mid + 1, r, x);
                }

    }


    return -1;
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

   int result= binarySearch(arr,0, n, ele);
   if(result==-1)
    cout<<"not found";
   else
    cout<<"found"<<endl;
    cout<<"total steps taken:"<<count<<endl;

    return 0;
}
