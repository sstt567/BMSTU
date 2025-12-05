/*
#include <iostream>

using namespace std;

void swapPointers(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    setlocale(LC_ALL, "RU");
    int x = 10, y = 20;
    int* p1 = &x, * p2 = &y;

    cout << "До обмена:" << endl;
    cout << "p1: адрес = " << p1 << ", значение = " << *p1 << endl;
    cout << "p2: адрес = " << p2 << ", значение = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapPointers(&p1, &p2);

    cout << "\nПосле обмена:" << endl;
    cout << "p1: адрес = " << p1 << ", значение = " << *p1 << endl;
    cout << "p2: адрес = " << p2 << ", значение = " << *p2 << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
*/