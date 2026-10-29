#include <iostream>
using namespace std;

int main() {
    int arr[] = {20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout<< "Enter target to search: ";
    cin >> target;

    int index = binarySearch(arr, 0, n - 1, target);
    if (index != -1) {
        cout << target << " found at index " << index << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
}