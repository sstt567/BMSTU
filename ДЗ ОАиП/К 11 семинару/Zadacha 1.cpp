/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ofstream File1("book.txt");
    File1 << "В этой книге главный герой отправляется в путешествие.\n";
    File1 << "Герой встречает много интересных персонажей.\n";
    File1 << "Каждый герой в книге имеет свою историю.\n";
    File1 << "Иногда герой сталкивается с трудностями.\n";
    File1.close();

    ifstream file("book.txt");
    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string word = "герой";
    vector<pair<int, int>> results;
    string line;
    int line_num = 0, total = 0;

    while (getline(file, line)) {
        line_num++;
        size_t pos = line.find(word);
        while (pos != string::npos) {
            results.push_back({ line_num, (int)pos });
            total++;
            pos = line.find(word, pos + 1);
        }
    }

    ofstream out("results.txt");
    for (auto p : results) {
        out << "Строка " << p.first << ", позиция " << p.second << ", слово: " << word << endl;
    }
    out << "Всего найдено: " << total << endl;

    cout << "Готово! Результаты в results.txt" << endl;

    cout << "\nСодержимое book.txt:" << endl;
    file.clear();
    file.seekg(0);
    while (getline(file, line)) {
        cout << line << endl;
    }

    return 0;
}
*/