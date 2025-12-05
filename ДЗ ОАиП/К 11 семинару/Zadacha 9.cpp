/*
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Product {
    int id;
    string name;
    string category;
    double price;
    int quantity;
};

int main() {
    setlocale(LC_ALL, "Russian");

    ofstream file9("products.csv");
    file9 << "id,name,category,price,quantity" << endl;
    file9 << "1,Ноутбук,Электроника,45000,10" << endl;
    file9 << "2,Футболка,Одежда,1500,50" << endl;
    file9 << "3,Роман,Книги,500,30" << endl;
    file9 << "4,Смартфон,Электроника,30000,15" << endl;
    file9 << "5,Джинсы,Одежда,2500,25" << endl;
    file9.close();

    // Чтение CSV
    ifstream in("products.csv");
    string line, header;
    getline(in, header);

    vector<Product> products;

    while (getline(in, line)) {
        stringstream ss(line);
        Product p;
        string temp;

        getline(ss, temp, ',');
        p.id = stoi(temp);
        getline(ss, p.name, ',');
        getline(ss, p.category, ',');
        getline(ss, temp, ',');
        p.price = stod(temp);
        getline(ss, temp, ',');
        p.quantity = stoi(temp);

        products.push_back(p);
    }

    cout << "Исходный список товаров:" << endl;
    for (auto p : products) {
        cout << p.id << ". " << p.name << " - " << p.price << " руб." << endl;
    }

    sort(products.begin(), products.end(),
        [](const Product& a, const Product& b) { return a.price < b.price; });

    ofstream out("sorted_products.csv");
    out << "id,name,category,price,quantity" << endl;
    for (auto p : products) {
        out << p.id << "," << p.name << "," << p.category << ","
            << p.price << "," << p.quantity << endl;
    }

    cout << "\nОтсортированный список (по возрастанию цены):" << endl;
    for (auto p : products) {
        cout << p.id << ". " << p.name << " - " << p.price << " руб." << endl;
    }

    cout << "\nФайл sorted_products.csv создан!" << endl;

    return 0;
}
*/