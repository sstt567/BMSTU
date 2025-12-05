/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ofstream file2("config.txt");
    file2 << "server_ip=192.168.1.1\n";
    file2 << "port=8080\n";
    file2 << "timeout=30\n";
    file2 << "max_connections=100\n";
    file2.close();

    cout << "Исходный файл config.txt:" << endl;
    ifstream show("config.txt");
    string line;
    while (getline(show, line)) {
        cout << line << endl;
    }
    show.close();

    fstream file("config.txt", ios::in | ios::out);
    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string content;
    while (getline(file, line)) {
        if (line.find("timeout=") == 0) {
            line = "timeout=60";
        }
        content += line + "\n";
    }

    file.clear();
    file.seekp(0);
    file << content;
    file.close();

    cout << "\nОбновленный файл config.txt:" << endl;
    ifstream show2("config.txt");
    while (getline(show2, line)) {
        cout << line << endl;
    }

    return 0;
}
*/