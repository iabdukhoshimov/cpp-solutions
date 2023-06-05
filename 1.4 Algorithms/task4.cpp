#include <iostream>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* tempLeft = new int[n1];
    int* tempRight = new int[n2];

    for (int i = 0; i < n1; ++i) {
        tempLeft[i] = arr[left + i];
    }
    for (int j = 0; j < n2; ++j) {
        tempRight[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (tempLeft[i] <= tempRight[j]) {
            arr[k] = tempLeft[i];
            ++i;
        } else {
            arr[k] = tempRight[j];
            ++j;
        }
        ++k;
    }

    while (i < n1) {
        arr[k] = tempLeft[i];
        ++i;
        ++k;
    }

    while (j < n2) {
        arr[k] = tempRight[j];
        ++j;
        ++k;
    }

    delete[] tempLeft;
    delete[] tempRight;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}
