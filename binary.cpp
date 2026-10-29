#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {

    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;
    }
    else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, high, key);
    }
    else {
        return binarySearch(arr, low, mid - 1, key);
    }
}

int main() {

    int arr[] = {2, 5, 8, 12, 16, 23, 38};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, 0, size - 1, key);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;
return 0;
}