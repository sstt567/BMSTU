/*
#include <iostream>
using namespace std;

int** transpose(int** matrix, int n, int m) {
    int** result = new int* [m];
    for (int i = 0; i < m; i++) {
        result[i] = new int[n];
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix[j][i];
        }
    }
    return result;
}

int main() {
    int n = 2, m = 3;

    int** matrix = new int* [n];
    matrix[0] = new int[m] {1, 2, 3};
    matrix[1] = new int[m] {4, 5, 6};

    cout << "Исходная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int** transposed = transpose(matrix, n, m);

    cout << "Транспонированная матрица:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < m; i++) {
        delete[] transposed[i];
    }
    delete[] transposed;

    return 0;
}
*/