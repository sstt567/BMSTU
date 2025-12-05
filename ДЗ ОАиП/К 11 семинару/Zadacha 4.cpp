/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int numbers[] = { 15, 23, 7, 42, 18, 91, 3, 56, 77, 10 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    ofstream out("numbers.bin", ios::binary);
    out.write((char*)numbers, sizeof(numbers));
    out.close();

    ifstream in("numbers.bin", ios::binary);
    in.seekg(0, ios::end);
    int file_size = in.tellg();
    in.seekg(0, ios::beg);

    int* buffer = new int[file_size / sizeof(int)];
    in.read((char*)buffer, file_size);

    int sum = 0;
    cout << "\nПрочитано из файла: ";
    for (int i = 0; i < file_size / sizeof(int); i++) {
        cout << buffer[i] << " ";
        sum += buffer[i];
    }

    cout << "\nРазмер файла numbers.bin: " << file_size << " байт" << endl;
    cout << "Сумма чисел: " << sum << endl;

    delete[] buffer;
    return 0;
}
*/