#ifndef BIRD
#define BIRD
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Bird : public Animal {
    private:
    float wingspan;
    
    public:
    Bird();
    Bird(string n, int a, bool isH, float w);
    ~Bird();
   
};

#endif
