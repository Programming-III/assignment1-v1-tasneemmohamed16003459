#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
    private:
    string name;
    int age;
    bool isHungry;
    
    public:
    Animal();
    Animal(string n, int a, bool isH);
    ~Animal();
    
    void display();
    void feed();
    
    string getName();
    int getAge();
    bool getIsHungry();
    void setName(string n);
    void setAge(int a);
    void setIsHungry(bool i);
};

#endif
