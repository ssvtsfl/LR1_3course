#include "Textbook.h"
#include <iostream>
#include <string>

using namespace std;

Textbook::Textbook() {
    cout << "Defoult constructor Workers" << endl << endl;

     name = "kek";
     autor = "kek";
     intended = "kek";
     year = 0;
     learn = 0;
     pages = 0;
     price = 0;
}

Textbook::Textbook(const Textbook & other) {
    cout << "Constructor for copy Textbook" << endl << endl;
    *this = other;
}

Textbook::~Textbook() {
    cout << "Destructor Textbook" << endl << endl;
}

void Textbook::setVal() {
    cin >> *this;
}

Textbook & Textbook::operator=(const Textbook & other) {
    this->name = other.name;
    this->autor = other.autor;
    this->intended = other.intended;
    this->year = other.year;
    this->learn = other.learn;
    this->pages = other.pages;
    this->price = other.price;
    return *this;
}

ofstream & operator<<(ofstream & fout, Textbook & obj) {
    fout << obj.name << " " << obj.autor << " " << obj.intended << " " << obj.year << " " << obj.learn << " " << obj.pages << " " << obj.price << " " ;
    fout << endl;
    return fout;
}

ifstream & operator>>(ifstream & fin, Textbook & obj) {
    fin >> obj.name >> obj.autor >> obj.intended >> obj.year >> obj.learn >> obj.pages >> obj.price;
    return fin;
}

ostream & operator<<(ostream & out, Textbook & obj) {
    out << "Name: " << obj.name << endl;
    out << "Autor: " << obj.autor << endl;
    out << "Intended: " << obj.intended << endl;
    out << "Year: " << obj.year << endl;
    out << "Learn: " << obj.learn << endl;
    out << "Pages: " << obj.pages << endl;
    out << "Price: " << obj.price << endl;
    out << "____________________________________________________________________________";
    return out;
}

istream & operator>>(istream & in, Textbook & obj) {
    cout << "Input data" << endl << endl;
    cout << "Name: ";
    cin >> obj.name;
    cout << "Autor: ";
    cin >> obj.autor;
    cout << "Intended: ";
    cin >> obj.intended;

    while (1) {
        cout << "Year: ";
        cin >> obj.year;
        if (cin.fail() || obj.year < 0) {
            cout << "Wrong data,please,try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    
    while (1) {
        cout << "Learn: ";
        cin >> obj.learn;
        if (cin.fail() || obj.learn < 0) {
            cout << "Wrong data,please,try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    
    while (1) {
        cout << "Pages: ";
        cin >> obj.pages;
        if (cin.fail() || obj.pages < 0) {
            cout << "Wrong data,please,try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    
    while (1) {
        cout << "Price: ";
        cin >> obj.price;
        if (cin.fail() || obj.price < 0) {
            cout << "Wrong data,please,try again" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    return in;
}
