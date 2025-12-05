/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    ifstream test("products.csv");
    if (!test) {
        cout << "Файл products.csv не найден. Создаем..." << endl;

        ofstream create_file("products.csv");
        create_file << "id,name,category,price,quantity" << endl;

        string categories[] = { "Электроника", "Одежда", "Книги", "Продукты", "Спорт" };
        string names[] = { "Ноутбук", "Футболка", "Роман", "Молоко", "Мяч" };

        srand(time(0));
        for (int i = 1; i <= 10; i++) {
            string name = names[rand() % 5] + " " + to_string(i);
            string category = categories[rand() % 5];
            double price = 500 + rand() % 10000 + (rand() % 100) / 100.0;
            int quantity = 1 + rand() % 50;

            create_file << i << "," << name << "," << category << ","
                << fixed << setprecision(2) << price << "," << quantity << endl;
        }
        create_file.close();
    }
    test.close();

    ifstream file("products.csv");
    if (!file) {
        cout << "Ошибка открытия файла!" << endl;
        return 1;
    }

    string line, header;
    getline(file, header);

    double total_value = 0;
    int total_quantity = 0, product_count = 0;
    double min_price = 1e9, max_price = 0;
    string cheap_name, expensive_name;

    cout << "Товары из products.csv:" << endl;
    cout << "======================================" << endl;

    while (getline(file, line)) {
        stringstream ss(line);
        string id, name, category, price_str, quantity_str;

        getline(ss, id, ',');
        getline(ss, name, ',');
        getline(ss, category, ',');
        getline(ss, price_str, ',');
        getline(ss, quantity_str, ',');

        double price = stod(price_str);
        int quantity = stoi(quantity_str);

        total_value += price * quantity;
        total_quantity += quantity;
        product_count++;

        if (price < min_price) {
            min_price = price;
            cheap_name = name;
        }
        if (price > max_price) {
            max_price = price;
            expensive_name = name;
        }

        cout << id << ". " << name << " (" << category << ") - "
            << price << " руб. - " << quantity << " шт." << endl;
    }

    cout << "Статистика:" << endl;
    cout << "Количество товаров: " << product_count << endl;
    cout << "Общая стоимость: " << fixed << setprecision(2) << total_value << " руб." << endl;
    cout << "Общее количество на складе: " << total_quantity << " шт." << endl;
    cout << "Самый дешевый товар: " << cheap_name << " (" << min_price << " руб.)" << endl;
    cout << "Самый дорогой товар: " << expensive_name << " (" << max_price << " руб.)" << endl;

    return 0;
}
*/