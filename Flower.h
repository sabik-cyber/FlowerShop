#ifndef FLOWER_H
#define FLOWER_H

#include <string>
using namespace std;

class Flower {
public:
    string name;
    string color;
    float price;

    Flower(string n, string c, float p) : name(n), color(c), price(p) {}
};

#endif 
