#include <iostream>
using namespace std;

int main() {
    // Введення кількості місяців та кількості кроликів, яких з'їдає монстр
    int n, k;
    cout << "Wedit kilkist misyatsiv: ";
    cin >> n;
    cout << "Wedit kilkist krolikiv kotrix zyidae monstr: ";
    cin >> k;

    // Ініціалізація змінних для зберігання кількості кроликів на попередньому та поточному місяцях
    int beginr = 1; // Початкова кількість кроликів (нульовий місяць)
    int currentr = beginr; // Кількість кроликів на поточному місяці

    

    // Обчислення кількості кроликів на кожен місяць
    for (int i = 1; i <= n; ++i) {
        // Обчислення кількості новонароджених кроликів
        int newr = currentr;
        // Якщо кількість кроликів на поточному місяці перевищує k, з'їдаємо k кроликів
        if (currentr > k) {
            newr -= k;
            currentr -= k; // Одразу віднімаємо k кроликів
        }
        // Оновлення кількості кроликів на попередньому та поточному місяцях
        beginr = currentr;
        currentr += newr;
    }

    // Виведення кількості кроликів на кінцевий місяць
    cout << "ostanniy misyats: " << currentr << " krolikiv" << endl;

    return 0;
}