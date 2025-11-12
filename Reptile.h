#ifndef REPTILE_H
#define REPTILE_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Reptile : public Animal {
    private:
    bool isVenomous;
    
    public:
    Reptile();
    Reptile(string n, int a, bool isH, bool isV);
    ~Reptile();

};

#endif
