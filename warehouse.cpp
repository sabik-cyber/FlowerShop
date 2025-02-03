#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Flower {
public:
    string name;
    string color;
    float price;

    Flower(string n, string c, float p) : name(n), color(c), price(p) {}
};

class FlowerShopWarehouse {
private:
    vector<Flower> inventory;

public:
    void updateInventory(vector<Flower> flowers) {
        inventory = flowers;
    }

    void showInventory() {
        cout << "Current flowers in warehouse:\n";
        for (auto& flower : inventory) {
            cout << "Flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
        }
    }
};

