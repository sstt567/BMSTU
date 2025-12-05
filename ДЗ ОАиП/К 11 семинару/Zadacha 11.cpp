/*
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ofstream file11("sensor_data.txt");
    file11 << "25.3\n";
    file11 << "-12.7\n";
    file11 << "38.9\n";
    file11 << "999.9\n"; 
    file11 << "22.1\n";
    file11 << "-60.5\n"; 
    file11 << "18.7\n";
    file11 << "45.2\n";
    file11.close();

    ifstream in("sensor_data.txt");
    if (!in) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    vector<double> temps;
    double temp;

    cout << "Исходные данные из sensor_data.txt:" << endl;
    while (in >> temp) {
        cout << temp << "°C ";
        if (temp >= -50 && temp <= 50) {
            temps.push_back(temp);
        }
    }

    ofstream out("filtered_data.txt");
    for (double t : temps) {
        out << t << endl;
    }

    if (!temps.empty()) {
        double sum = accumulate(temps.begin(), temps.end(), 0.0);
        double average = sum / temps.size();

        cout << "\n\nОтфильтрованные данные (от -50°C до +50°C):" << endl;
        for (double t : temps) {
            cout << t << "°C ";
        }

        cout << "\n\nСтатистика:" << endl;
        cout << "Всего значений: " << temps.size() << endl;
        cout << "Средняя температура: " << average << "°C" << endl;
        cout << "\nОтфильтрованные данные сохранены в filtered_data.txt" << endl;
    }
    else {
        cout << "\nНет корректных данных в файле!" << endl;
    }

    return 0;
}
*/