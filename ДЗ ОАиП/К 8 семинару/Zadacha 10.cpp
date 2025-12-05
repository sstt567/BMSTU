/*
#include <iostream>
#include <cmath>

using namespace std;

double* averageLoadPerNode(int** load, int n, int t) {
    double* averages = new double[n];
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < t; j++) {
            sum += *(*(load + i) + j);
        }
        averages[i] = static_cast<double>(sum) / t;
    }
    return averages;
}

void normalizeLoad(int** load, int n, int t) {
    double** tempLoad = new double* [n];
    for (int i = 0; i < n; i++) {
        tempLoad[i] = new double[t];
        for (int j = 0; j < t; j++) {
            tempLoad[i][j] = load[i][j];
        }
    }

    for (int j = 0; j < t; j++) {
        for (int i = 0; i < n; i++) {
            if (tempLoad[i][j] > 80) {
                double amount = 0.1 * tempLoad[i][j];
                tempLoad[i][j] -= amount;
                double add_per_node = amount / (n - 1);
                for (int k = 0; k < n; k++) {
                    if (k != i) {
                        tempLoad[k][j] += add_per_node;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t; j++) {
            double value = round(tempLoad[i][j]);
            if (value < 0) value = 0;
            if (value > 100) value = 100;
            load[i][j] = static_cast<int>(value);
        }
    }

    for (int i = 0; i < n; i++) {
        delete[] tempLoad[i];
    }
    delete[] tempLoad;
}

int findCriticalInterval(int** load, int n, int t) {
    int max_sum = 0;
    int critical_interval = 0;
    for (int j = 0; j < t; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += *(*(load + i) + j);
        }
        if (sum > max_sum) {
            max_sum = sum;
            critical_interval = j;
        }
    }
    return critical_interval;
}

void printMatrix(int** load, int n, int t) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < t; j++) {
            cout << load[i][j] << "%\t";
        }
        cout << endl;
    }
}

int main() {
    setlocale(LC_ALL, "RU");
    int N, T;
    cout << "Введите количество узлов и интервалов: ";
    cin >> N >> T;

    int** load = new int* [N];
    cout << "Введите нагрузку для каждого узла по интервалам:" << endl;
    for (int i = 0; i < N; i++) {
        load[i] = new int[T];
        cout << "Узел " << i << ": ";
        for (int j = 0; j < T; j++) {
            cin >> load[i][j];
            if (load[i][j] < 0 || load[i][j] > 100) {
                cout << "Ошибка: нагрузка должна быть от 0 до 100%" << endl;
                return 1;
            }
        }
    }

    cout << "\nИсходная матрица нагрузок:" << endl;
    printMatrix(load, N, T);

    double* averages = averageLoadPerNode(load, N, T);
    cout << "\nСредняя нагрузка на каждом узле:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Узел " << i << ": " << averages[i] << "%" << endl;
    }

    normalizeLoad(load, N, T);
    cout << "\nМатрица нагрузок после нормализации:" << endl;
    printMatrix(load, N, T);

    int critical = findCriticalInterval(load, N, T);
    cout << "\nКритический интервал: " << critical << endl;

    delete[] averages;
    for (int i = 0; i < N; i++) {
        delete[] load[i];
    }
    delete[] load;

    return 0;
}
*/