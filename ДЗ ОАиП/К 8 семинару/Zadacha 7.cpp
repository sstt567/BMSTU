/*
#include <iostream>
#include <cstring>
using namespace std;

void sortWords(char** words, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                char* temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "RU");

    const int n = 7;
    char** words = new char* [n];

    words[0] = new char[10] {"€блоко"};
    words[1] = new char[10] {"банан"};
    words[2] = new char[10] {"апельсин"};
    words[3] = new char[10] {"виноград"};
    words[4] = new char[10] {"юлла"};
    words[5] = new char[10] {"манго"};
    words[6] = new char[10] {"картошечк"};

    cout << "»сходный массив слов:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    sortWords(words, n);

    cout << "\nќтсортированный массив слов:" << endl;
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] words[i];
    }
    delete[] words;

    return 0;
}
*/