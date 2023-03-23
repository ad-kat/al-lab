#include <iostream>
using namespace std;
int count;
struct Pair {
public:
    int min;
    int max;
};

Pair getMinMax(int arr[], int low, int high)
 {
    Pair minMax, leftMinMax, rightMinMax;count++;
    int mid;count++;

    // If there is only one element
    count++;
    if (low == high) {
        minMax.max = arr[low];count++;
        minMax.min = arr[low];count++;
        count++; return minMax;
    }

    // If there are two elements
    count++;
    if (high == low + 1) {
            count++;
        if (arr[low] > arr[high]) {
            minMax.max = arr[low];count++;
            minMax.min = arr[high];count++;
        }
        else {
            minMax.max = arr[high];count++;
            minMax.min = arr[low];count++;
        }
        count++;return minMax;
    }

    // If there are more than 2 elements
    mid = (low + high) / 2;count++;
    leftMinMax = getMinMax(arr, low, mid);count++;
    rightMinMax = getMinMax(arr, mid + 1, high);count++;

    // Compare minimums of two parts
    count++;
    if (leftMinMax.min < rightMinMax.min)
    {
        minMax.min = leftMinMax.min;count++;
    }
    else
        {
        minMax.min = rightMinMax.min;count++;
        }

    // Compare maximums of two parts
    count++;count++;
    if (leftMinMax.max > rightMinMax.max)
        minMax.max = leftMinMax.max;
    else
        minMax.max = rightMinMax.max;

    return minMax;count++;
}

int main()
 {
     int arr[20];count=0;
     cout<<"array length:";int n; cin>>n;
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

    Pair minMax = getMinMax(arr, 0, n - 1);

    cout << "Minimum element is " << minMax.min << endl;
    cout << "Maximum element is " << minMax.max << endl;
    cout<<"steps taken:"<<count<<endl;

    return 0;
}
