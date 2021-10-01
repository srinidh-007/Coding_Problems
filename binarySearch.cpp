#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int k) {
    int start = 0, end = n - 1;

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] == k) {
            return mid;
        }
        else if(arr[mid] < k) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    int i = binarySearch(arr, n, k);

    if(i != -1) {
        cout << "Element found at index " << i << endl;
    }

    else {
        cout << "Element not found" << endl;
    }

    delete [] arr;
}