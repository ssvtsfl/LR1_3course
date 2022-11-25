#pragma once
#include <fstream>
#include "Shop.h"
#include "Keeper.h"

using namespace std;

class Textbook : public Shop
{
public:
    Textbook();
    Textbook(const Textbook&);
    ~Textbook();
    void setVal() override;
    friend ofstream& operator << (ofstream &fout, Textbook& obj);
    friend ifstream& operator >> (ifstream &fin, Textbook& obj);

    friend ostream& operator << (ostream &out, Textbook& obj);
    friend istream& operator >> (istream &in, Textbook& obj);
    Textbook& operator =(const Textbook &other);
private:
    string name;
    string autor;
    string intended; //для какого учебного заведения предназначено
    double learn; //год обучения
    double year; //год выпуска
    double pages;
    double price;

};
