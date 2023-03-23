#include <iostream>
#include <vector>

using namespace std;
int count;
void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);count++;
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);count++;

    int i = 0, j = 0, k = left;count++;
    while (i < leftArr.size() && j < rightArr.size())
        {count++;
        count++;
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];count++;
        } else {
            arr[k++] = rightArr[j++];count++;
        }
    }count++;

    while (i < leftArr.size())
        {count++;

        arr[k++] = leftArr[i++];count++;
    }count++;

    while (j < rightArr.size())
        {count++;
        arr[k++] = rightArr[j++];count++;
    }count++;
}

void mergeSort(vector<int>& arr, int left, int right)
 {count++;count++;
    if (left < right) {
        int mid = left + (right - left) / 2;count++;

        mergeSort(arr, left, mid);count++;
        mergeSort(arr, mid + 1, right);count++;

        merge(arr, left, mid, right);count++;
    }
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

    mergeSort(arr, 0, arr.size() - 1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] <<"\t";
    }
    cout<<"total steps taken="<<count;
    return 0;
}
