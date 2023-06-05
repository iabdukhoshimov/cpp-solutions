#include <iostream>

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  
        }

        if (arr[mid] < key) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1) {
        std::cout << "Element " << key << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << key << " not found in the array" << std::endl;
    }

    return 0;
}
