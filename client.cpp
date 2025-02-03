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

class FlowerShopClient {
private:
    vector<Flower> inventory;

public:
    void showInventory() {
        cout << "Available flowers in inventory:\n";
        for (auto& flower : inventory) {
            cout << "Flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
        }
    }

    void searchFlowerByName(string name) {
        for (auto& flower : inventory) {
            if (flower.name == name) {
                cout << "Found flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
                return;
            }
        }
        cout << "Flower not found.\n";
    }

    void searchFlowerByColor(string color) {
        bool found = false;
        for (auto& flower : inventory) {
            if (flower.color == color) {
                cout << "Flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "No flowers with the color " << color << " found.\n";
        }
    }

    void setInventory(vector<Flower> inv) {
        inventory = inv;
    }
};

