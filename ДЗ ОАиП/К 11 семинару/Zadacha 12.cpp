/*
#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    vector<int> numbers(100000);
    for (int i = 0; i < 100000; i++) {
        numbers[i] = i + 1;  
    }

    cout << "Тестирование скорости записи в файл..." << endl;
    cout << "Количество чисел: 100000" << endl << endl;

    auto start1 = chrono::high_resolution_clock::now();
    ofstream file1("method1.bin", ios::binary);
    for (int num : numbers) {
        file1.write((char*)&num, sizeof(int));
    }
    file1.close();
    auto end1 = chrono::high_resolution_clock::now();

    auto start2 = chrono::high_resolution_clock::now();
    ofstream file2("method2.bin", ios::binary);
    file2.write((char*)numbers.data(), numbers.size() * sizeof(int));
    file2.close();
    auto end2 = chrono::high_resolution_clock::now();

    auto time1 = chrono::duration_cast<chrono::milliseconds>(end1 - start1);
    auto time2 = chrono::duration_cast<chrono::milliseconds>(end2 - start2);

    cout << "Результаты:" << endl;
    cout << "Метод 1 (по одному): " << time1.count() << " мс" << endl;
    cout << "Метод 2 (все сразу): " << time2.count() << " мс" << endl;
    cout << "Разница: " << time1.count() - time2.count() << " мс" << endl;

    ifstream f1("method1.bin", ios::binary | ios::ate);
    ifstream f2("method2.bin", ios::binary | ios::ate);

    cout << "\nРазмер method1.bin: " << f1.tellg() << " байт" << endl;
    cout << "Размер method2.bin: " << f2.tellg() << " байт" << endl;

    f1.close();
    f2.close();

    return 0;
}
*/