#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Keeper.h"

using namespace std;

class Shop {
public:
    Shop();
    virtual ~Shop();
    virtual void setVal() = 0;
};
