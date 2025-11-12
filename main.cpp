#include <iostream>
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
using namespace std;

Animal::Animal(){
    name = "Unknown";
    age =0;
    isHungry = false;
}
Animal::Animal(string n, int a, bool isH){
    name = n;
    age = a;
    isHungry = isH;
}
Animal::~Animal(){}
 void Animal::display(){
        cout << getName() << " " << getAge() <<  " " <<  getIsHungry() << endl;
    }
   void Animal::feed(){
       if (getIsHungry() == true){
       cout << "Animal is fed" << endl;}
       else {
           cout << "Animal is not hungry." << endl;
       }
   }
    string Animal::getName(){
        return name;
    }
    int Animal::getAge(){
        return age;
    }
    bool Animal::getIsHungry(){
        return isHungry;
    }
    void Animal::setName(string n){
        name =n;
    }
   void Animal::setAge(int a){
        age =a;
    }
    void Animal::setIsHungry(bool i){
        isHungry = i;
    }
    
   /* Mammal::Mammal(){
        name = "Unkown";
        age =0;
        isHungry = false;
        furColor = "Unknown";
    }
    Mammal::Mammal(string n, int a, bool isH, string f){
        name = n;
        age =a;
        isHungry = isH;
        furColor = f;
    }
    Mammal::~Mammal(){} */
    
    
    Enclosure::Enclosure(){
        animals = new Animal [0];
        capacity = 0;
        currentCount = 0;
    }
    Enclosure::Enclosure(int cap, int c){
        animals = new Animal [cap];
        capacity = cap;
        currentCount = c;
    }
    Enclosure::~Enclosure(){
        delete [] animals;
    }
    
  /*  void Enclosure::addAnimal(Animal * a){
        int n = sizeof(animals)/sizeof(Animal);
        for (int i =0; i < n; i++){
            if (animals[i].getName() == null) {
        animals[i] = a; 
                break;
            }
    }}
    
    void Enclosure::displayAnimals(){
        int n = sizeof(animals)/sizeof(Animal);
        for (int i =0; i < n; i++){
            cout << animals[i] << ", ";
        }
    } */
    
    
   Visitor::Visitor(){
        visitorName = "Unknown";
        ticketsBought = 0;
    }
    Visitor::Visitor(string v, int t){
        visitorName = v;
        ticketsBought =t;
    }
    Visitor::~Visitor(){} 
    
  void Visitor::displayInfo(){
        }
    

int main()
{
Animal a1("Lion", 5, true);
cout << a1.getName() << endl;


    return 0;
}
