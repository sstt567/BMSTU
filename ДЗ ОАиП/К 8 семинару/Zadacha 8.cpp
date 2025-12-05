/*
#include <iostream>
using namespace std;

double** allocatePlate(int n, int m) {
    double** plate = new double* [n];
    for (int i = 0; i < n; i++) {
        plate[i] = new double[m];
    }
    return plate;
}

void freePlate(double** plate, int n) {
    for (int i = 0; i < n; i++) {
        delete[] plate[i];
    }
    delete[] plate;
}

void updateTemperature(double** plate, int n, int m) {
    double** newPlate = allocatePlate(n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == n / 2 && j == m / 2) {
                newPlate[i][j] = 100.0;
            }
            else if (i > 0 && i < n - 1 && j > 0 && j < m - 1) {
                newPlate[i][j] = (plate[i - 1][j] + plate[i + 1][j] +
                    plate[i][j - 1] + plate[i][j + 1]) / 4.0;
            }
            else {
                newPlate[i][j] = plate[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            plate[i][j] = newPlate[i][j];
        }
    }

    freePlate(newPlate, n);
}

int main() {
    setlocale(LC_ALL, "RU");

    int N = 5, M = 5, K = 5;
    double** plate = allocatePlate(N, M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            plate[i][j] = 20.0;
        }
    }

    plate[N / 2][M / 2] = 100.0;

    for (int iter = 0; iter < K; iter++) {
        updateTemperature(plate, N, M);
    }

    cout << "Температура после " << K << " итераций:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << plate[i][j] << " ";
        }
        cout << endl;
    }

    freePlate(plate, N);
    return 0;
}
*/