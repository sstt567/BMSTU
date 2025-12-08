/*
#include <iostream>
#include <string>
using namespace std;


class Publication {
protected:
    string title;

public:

    Publication(string t) : title(t) {}
};

class Book : public Publication {
private:
    string author;
    int year;

public:

    Book(string t, string a, int y) : Publication(t), author(a), year(y) {}

    void displayInfo() {

        cout << "\nИнформация о книге:" << endl;
        cout << "Название: " << title << endl;
        cout << "Автор: " << author << endl;
        cout << "Год выпуска: " << year << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    string title, author;
    int year;

    cout << "Введите информацию о книге:" << endl;
    cout << "Название: ";
    getline(cin, title);

    cout << "Автор: ";
    getline(cin, author);

    cout << "Год выпуска: ";
    cin >> year;

    Book book(title, author, year);

    book.displayInfo();

    return 0;
}
*/