/*
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int id;
    char name[50];
    int age;
    double grade;
};

int main() {
    setlocale(LC_ALL, "Russian");

    Student students[3] = {
        {1, "Нахид Чурка", 20, 4.5},
        {2, "Лео Хмнкалев", 19, 4.8},
        {3, "Алексей Цуп", 21, 4.2}
    };

    cout << "Исходные данные студентов:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << students[i].id << ". " << students[i].name
            << ", возраст: " << students[i].age
            << ", средний балл: " << students[i].grade << endl;
    }

    // Запись в бинарный файл
    ofstream out("students.dat", ios::binary);
    for (int i = 0; i < 3; i++) {
        out.write((char*)&students[i], sizeof(Student));
    }
    out.close();

    // Чтение из бинарного файла
    ifstream in("students.dat", ios::binary);
    Student s;
    int count = 0;
    double max_grade = 0;
    string top_student;

    cout << "\nДанные из файла students.dat:" << endl;
    while (in.read((char*)&s, sizeof(Student))) {
        cout << s.id << ". " << s.name << ", возраст: "
            << s.age << ", средний балл: " << s.grade << endl;

        if (s.grade > max_grade) {
            max_grade = s.grade;
            top_student = s.name;
        }
        count++;
    }

    cout << "\nВсего студентов: " << count << endl;
    cout << "Лучший студент: " << top_student << " (балл: " << max_grade << ")" << endl;

    return 0;
}
*/