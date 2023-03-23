#include <iostream>
#include <vector>

using namespace std;
int count;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; count++;             //last element=pivot
    int i = low - 1;   count++;                 // index of smaller element

    for (int j = low; j <= high - 1; j++)
        {count++;
        count++;

        if (arr[j] <= pivot) {
            i++;count++;
            swap(arr[i], arr[j]);count++;
        }
    }count++;
    swap(arr[i + 1], arr[high]);count++;
    count++;return i + 1; // Return pivot index
}


void quickSort(vector<int>& arr, int low, int high) {
    count++;
    if (low < high) {
        int pi = partition(arr, low, high);count++;

    quickSort(arr, low, pi - 1);count++;
    quickSort(arr, pi + 1, high);count++;
    }
}


void printArray(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    count=0;
     cout<<"array length:";int n; cin>>n;
     vector<int>arr(n);
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout << "Original array: ";
    printArray(arr);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr);

    cout<<"total steps taken:"<<count<<endl;

    return 0;
}
