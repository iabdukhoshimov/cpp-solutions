#include <iostream>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 15;

    int index = linearSearch(arr, n, key);

    if (index != -1) {
        std::cout << "Element " << key << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << key << " not found in the array" << std::endl;
    }

    return 0;
}
