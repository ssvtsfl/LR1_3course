#include "Office.h"
#include <iostream>
#include <string>

using namespace std;

Office::Office() {
    cout << "Defoult constructor Office" << endl << endl;

    type = "kek";
    color = "kek";
    use = "kek";
    price = 0;
}

Office::Office(const Office & other) {
    cout << "Constructor for copy Office" << endl << endl;
    *this = other;
}

Office::~Office() {
    cout << "Destructor Office" << endl << endl;
}

void Office::setVal() {
    cin >> *this;
}
Office & Office::operator=(const Office & other) {
    this->type = other.type;
    this->color = other.color;
    this->use = other.use;
    this->price = other.price;
    return *this;
}

ofstream & operator<<(ofstream & fout, Office & obj) {
    fout << obj.type << " " << obj.color << " " << obj.use << " " << obj.price << " ";
    fout << endl;
    return fout;
}

ifstream & operator>>(ifstream & fin, Office & obj) {
    fin >> obj.type >> obj.color >> obj.use >> obj.price;
    return fin;
}

ostream & operator<<(ostream & out, Office & obj) {
    out << "Type office: " << obj.type << endl;
    out << "Color: " << obj.color << endl;
    out << "Use: " << obj.use << endl;
    out << "Price: " << obj.price << endl;
    out << "____________________________________________________________________________";
    return out;
}

istream & operator>>(istream & in, Office & obj) {
    cout << "Input data:" << endl << endl;
    cout << "Type office: ";
    cin >> obj.type;
    cout << "Color: ";
    cin >> obj.color;
    cout << "Use: ";
    cin >> obj.use;
    
    while (1) {
        cout << "Price: ";
        cin >> obj.price;
        if (cin.fail() || obj.price < 0) {
            cout << "Wrong data,please,try again:" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        break;
    }
    return in;
}
