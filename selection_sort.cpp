//
// Created by John Kennedy on 3/11/20.
//
#include <iostream>

using namespace std;

void selection_sort(int arr[], int size);
void print_array(int arr[], int size);
void swap(int *a, int *b);

int main() {
    int arr_size = 12;
    int arr[] = {2, 3, 1, 10, 4, 2, 6, 8, 100, 20, 15, 14};
    selection_sort(arr, arr_size);
    print_array(arr, arr_size);
}


void selection_sort(int arr[], int size) {
    int i, j, min_loc;
    for (i = 0; i < size - 1; i++) {
        min_loc = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_loc])
                min_loc = j;
        }
        swap(&arr[min_loc], &arr[i]);
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