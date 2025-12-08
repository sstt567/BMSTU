#include <iostream>
using namespace std;

class Shape {
protected:
    double length;

public:
    Shape(double l) : length(l) {}
};

class Rectangle : public Shape {
private:
    double width;

public:
    Rectangle(double l, double w) : Shape(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    void displayInfo() {
        cout << "\nИнформация о прямоугольнике:" << endl;
        cout << "Длина: " << length << endl;
        cout << "Ширина: " << width << endl;
        cout << "Площадь: " << calculateArea() << endl;
        cout << "Периметр: " << calculatePerimeter() << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    double length, width;

    cout << "Введите размеры прямоугольника:" << endl;
    cout << "Длина: ";
    cin >> length;

    cout << "Ширина: ";
    cin >> width;

    if (length <= 0 || width <= 0) {
        cout << "Ошибка: размеры должны быть положительными числами!" << endl;
        return 1;
    }

    Rectangle rect(length, width);

    rect.displayInfo();

    return 0;
}