/*
#include <iostream>
using namespace std;

int sumElements(int** arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += *(*(arr + i) + j);
        }
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "RU");

    int n = 3, m = 5;

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    int value = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            *(*(arr + i) + j) = value++;
        }
    }

    cout << "Массив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }

    int total = sumElements(arr, n, m);
    cout << "Сумма всех элементов: " << total << endl;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
*/