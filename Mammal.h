#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Mammal : public Animal {
    private:
    string furColor;
    
    public:
    Mammal();
    Mammal(string n, int a, bool isH, string f);
    ~Mammal();
};

#endif
