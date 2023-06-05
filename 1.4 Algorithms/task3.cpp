#include <iostream>

int bubbleSortSwaps(int arr[], int size) {
    int swaps = 0;
    bool swapped;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;

        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
                ++swaps;
            }
        }

        if (!swapped) {
            break;
        }
    }

    return swaps;
}

int main() {
    int arr[] = {5, 3, 8, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int numSwaps = bubbleSortSwaps(arr, size);

    std::cout << "Number of swaps performed by Bubble Sort: " << numSwaps << std::endl;

    return 0;
}
