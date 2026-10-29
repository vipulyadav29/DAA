//use binary search array function in arr [20, 30, 40, 50, 60]
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is smaller than mid, search in the left subarray
        if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);

        // If target is larger than mid, search in the right subarray
        return binarySearch(arr, mid + 1, high, target);
    }

    // Target is not present in the array
    return -1;
}
int main() {
    int arr[] = {20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target to search: ";
    cin >> target;

    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) {
        cout << target << " found at index " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}