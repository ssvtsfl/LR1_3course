#pragma once
#include <fstream>
#include "Shop.h"
#include "Keeper.h"

using namespace std;

class Office : public Shop {
public:
    Office();
    Office(const Office&);
    ~Office();
    void setVal() override;

    friend ofstream& operator << (ofstream &fout, Office& obj);
    friend ifstream& operator >> (ifstream &fin, Office& obj);

    friend ostream& operator << (ostream &out, Office& obj);
    friend istream& operator >> (istream &in, Office& obj);
    Office& operator =(const Office &other);
private:
    string type;
    string color;
    string use;
    double price;
};
