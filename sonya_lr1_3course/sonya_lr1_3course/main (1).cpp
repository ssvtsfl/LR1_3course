/*
Разработать класс Keeper, который реализует контейнер для хранения и обработки
объектов. Класс Keeper должен обеспечивать следующие функции:
    ▪ добавление и удаление производных объектов абстрактного класса Base;
    ▪ полное сохранение себя в файле;
    ▪ полное восстановление себя из файла.
Класс Книжный магазин хранит данные о Книгах, Учебниках, Канцелярии.
Для книг: название, автор, год выпуска, аннотация, жанр, объем страниц, стоимость.
Для учебник: название, автор, год выпуска, учебное заведение, год обучения, объем страниц, стоимость.
Для канцелярия: тип канцелярии, цвет, назначение, стоимость.
*/

#include <iostream>
#include <string>
#include "Keeper.h"
#include "Shop.h"
#include "Book.h"
#include "Textbook.h"
#include "Office.h"
#include "menu.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    Keeper <Book> books;
    Keeper <Textbook> textbooks;
    Keeper <Office> office;


    int button;
    bool flag = true;
    while (flag) {
//        system("cls");
        cout << "Menu: " << endl << endl;
        cout << "1 - Book" << endl;
        cout << "2 - Textbook" << endl;
        cout << "3 - Office" << endl;
        cout << "4 - Exit from the program" << endl << endl;
        cout << "Select operation: ";
        cin >> button;
        if (cin.fail()) {
            button = -1;
            cin.clear();
            cin.ignore(10000, '\n');
        }

        switch (button) {
        case 1:
            menu(books, "books.txt");
            break;
        case 2:
            menu(textbooks, "textbooks.txt");
            break;
        case 3:
            menu(office, "office.txt");
            break;
        case 4:
            flag = false;
            cout << "\n THE END" << endl;
            break;
        default:
            cout << endl << "Wrong data, try again!" << endl << endl;
//            system("pause");
            break;
        }
    }
    return 0;
}
