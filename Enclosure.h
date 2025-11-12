#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

class Enclosure {
    private:
    Animal * animals;
    int capacity;
    int currentCount;
    
    public:
    Enclosure();
    Enclosure(int cap, int c);
    ~Enclosure();
    
    void addAnimal(Animal * a);
    void displayAnimals();
    
};

#endif
