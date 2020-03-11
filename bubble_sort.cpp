#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size);
void print_array(int arr[], int size);
void swap(int *a, int *b);

int main() {
    int arr_size = 12;
    int arr[] = {2, 3, 1, 10, 4, 2, 6, 8, 100, 20, 15, 14};

    bubble_sort(arr, arr_size);

    print_array(arr, arr_size);
}

void bubble_sort(int arr[], int size) {
    bool swapped;

    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int size) {
    for (size_t i = 0; i < size; ++i) {
        if (i > 0) cout << ", ";
        cout << arr[i];
    }
    cout << endl;
}