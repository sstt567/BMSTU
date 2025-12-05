/*
#include <iostream>
using namespace std;

void sortRowsBySum(int** arr, int n, int m) {
    int* sums = new int[n];
    for (int i = 0; i < n; i++) {
        sums[i] = 0;
        for (int j = 0; j < m; j++) {
            sums[i] += arr[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (sums[j] > sums[j + 1]) {
                int* tempPtr = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tempPtr;

                int tempSum = sums[j];
                sums[j] = sums[j + 1];
                sums[j + 1] = tempSum;
            }
        }
    }
    delete[] sums;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n = 3, m = 4;

    int** arr = new int* [n];
    arr[0] = new int[m] {5, 2, 8, 1};
    arr[1] = new int[m] {1, 1, 1, 1};
    arr[2] = new int[m] {9, 0, 2, 3};

    cout << "Исходный массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    sortRowsBySum(arr, n, m);

    cout << "После сортировки по сумме:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
*/