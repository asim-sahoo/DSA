/*
Insertion Sort Algorithm:

1. Start with the second element (index 1) of the array.
2. Compare the current element with the elements before it (elements at indices i-1, i-2, and so on).
3. If the current element is smaller, move the larger elements to the right to make space for the current element.
4. Insert the current element into its correct position among the sorted elements.
5. Repeat this process for all elements in the array.

*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
