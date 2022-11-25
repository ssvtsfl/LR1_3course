#pragma once
#include <fstream>
#include "Keeper.h"
#include "Shop.h"

using namespace std;

class Book : public Shop {
public:

private:
    string name;
    string autor;
    string annotation;
    string genre;
    double year;
    double pages;
    double price;
public:
    Book();
    Book(const Book &other);
    ~Book();
    void setVal() override;


    friend ofstream& operator << (ofstream &fout, Book& obj);
    friend ifstream& operator >> (ifstream &fin, Book& obj);

    friend ostream& operator << (ostream &out, Book& obj);
    friend istream& operator >> (istream &in, Book& obj);

    Book& operator =(const Book &other);
};
