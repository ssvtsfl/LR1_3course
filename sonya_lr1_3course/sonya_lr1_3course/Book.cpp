#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

Book::Book() {
    cout << "Defoult constructor Book" << endl << endl;

    name = "kek";
    autor = "kek";
    annotation = "kek";
    genre = "kek";
    year = 0;
    pages = 0;
    price = 0;
}

Book::Book(const Book & obj2) {
    cout << "Constructor for copy Book" << endl << endl;
    *this = obj2;
}

Book::~Book() {
    cout << "Destructor Book" << endl << endl;
}

void Book::setVal() {
    cin >> *this;
}

Book & Book::operator=(const Book & other) {
    this->name = other.name;
    this->autor = other.autor;
    this->annotation = other.annotation;
    this->genre = other.genre;
    this->year = other.year;
    this->pages = other.pages;
    this->price = other.price;
    return *this;
}

ofstream & operator<<(ofstream & fout, Book & el) {
    fout << el.name << " " << endl;
    fout << el.autor << " " << endl;
    fout << el.annotation << " " << endl;
    fout << el.genre << " " << endl;
    fout << el.year << " " << endl;
    fout << el.pages << " " << endl;
    fout << el.price << " " << endl;
    fout << endl;
    return fout;
}

ifstream & operator>>(ifstream & fin, Book & el) {
    fin >> el.name >> el.autor >> el.annotation >> el.genre >> el.year >> el.pages >> el.price;
    return fin;
}

ostream & operator<<(ostream & out, Book & el) {
    out << "Name: " << el.name << endl;
    out << "Autor: " << el.autor << endl;
    out << "Annotation: " << el.annotation << endl;
    out << "Genre: " << el.genre << endl;
    out << "Year: " << el.year << endl;
    out << "Pages: " << el.pages << endl;
    out << "Price: " << el.price << endl;
    out << "____________________________________________________________________________";
    return out;
}

istream & operator>>(istream & in, Book & el) {
    cout << "Input data:" << endl << endl;
    cout << "Name: ";
    cin >> el.name;
    cout << "Autor: ";
    cin >> el.autor;
    cout << "Annotation: ";
    cin >> el.annotation;
    cout << "Genre: ";
    cin >> el.genre;

    while (1) {
        cout << "Year: ";
        cin >> el.year;
        if (cin.fail() || el.year < 0) {
            cout << "Wrong data,please,try again:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    while (1) {
        cout << "Pager: ";
        cin >> el.pages;
        if (cin.fail() || el.pages < 0) {
            cout << "Wrong data,please,try again:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    while (1) {
        cout << "Price: ";
        cin >> el.price;
        if (cin.fail() || el.price < 0) {
            cout << "Wrong data,please,try again:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }

    return in;
}
