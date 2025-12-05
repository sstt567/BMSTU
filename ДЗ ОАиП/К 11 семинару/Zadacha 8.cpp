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

    ifstream test("products.csv");
    if (!test) {
        cout << "Файл products.csv не найден. Создаем..." << endl;
   
        ofstream create_file("products.csv");
        create_file << "id,name,category,price,quantity" << endl;
        create_file << "1,Ноутбук,Электроника,45000,10" << endl;
        create_file << "2,Футболка,Одежда,1500,50" << endl;
        create_file << "3,Роман,Книги,500,30" << endl;
        create_file << "4,Смартфон,Электроника,30000,15" << endl;
        create_file << "5,Джинсы,Одежда,2500,25" << endl;
        create_file.close();
    }
    test.close();

    ifstream in("products.csv");
    string line;
    string header;
    getline(in, header);  

    vector<Product> products, filtered;

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

    cout << "Все товары (" << products.size() << "):" << endl;
    for (auto p : products) {
        cout << p.id << ". " << p.name << " - " << p.price << " руб." << endl;
    }

    copy_if(products.begin(), products.end(), back_inserter(filtered),
        [](const Product& p) { return p.price > 5000; });

    ofstream out("filtered_products.csv");
    out << "id,name,category,price,quantity" << endl;
    for (auto p : filtered) {
        out << p.id << "," << p.name << "," << p.category << ","
            << p.price << "," << p.quantity << endl;
    }

    cout << "\nОтфильтровано " << filtered.size() << " товаров (цена > 5000 руб.)" << endl;
    cout << "Результат в filtered_products.csv" << endl;

    return 0;
}
*/