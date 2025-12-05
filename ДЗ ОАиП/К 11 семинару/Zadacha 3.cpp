/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ofstream file3("application.log");
    for (int i = 1; i <= 250; i++) {
        file3 << "Лог запись #" << i << ": Пользователь выполнил действие\n";
    }
    file3.close();

    ifstream in("application.log");
    if (!in) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    int part = 1, count = 0;
    string line;
    ofstream out;
    ofstream index("index.txt");

    while (getline(in, line)) {
        if (count % 100 == 0) {
            if (out.is_open()) out.close();
            string filename = "log_part" + to_string(part) + ".txt";
            out.open(filename);
            index << filename << endl;
            part++;
        }
        out << line << endl;
        count++;
    }

    out.close();
    index.close();

    cout << "Создано " << (part - 1) << " файлов из application.log" << endl;
    cout << "Размер исходного файла: " << count << " строк" << endl;

    return 0;
}
*/