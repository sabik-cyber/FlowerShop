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

class Bouquet {
public:
    string bouquetName;
    vector<Flower> flowers;

    void addFlower(Flower flower) {
        flowers.push_back(flower);
    }

    float totalPrice() {
        float total = 0;
        for (auto& flower : flowers) {
            total += flower.price;
        }
        return total;
    }

    void display() {
        cout << "Bouquet: " << bouquetName << endl;
        for (auto& flower : flowers) {
            cout << "Flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
        }
        cout << "Total price: " << totalPrice() << endl;
    }
};

class FlowerShopAdmin {
private:
    vector<Flower> inventory;
    vector<Bouquet> bouquets;

public:
    void addFlowerToInventory(string name, string color, float price) {
        inventory.push_back(Flower(name, color, price));
    }

    void createBouquet(string bouquetName) {
        Bouquet bouquet;
        bouquet.bouquetName = bouquetName;
        bouquets.push_back(bouquet);
    }

    void addFlowerToBouquet(string bouquetName, string flowerName) {
        for (auto& bouquet : bouquets) {
            if (bouquet.bouquetName == bouquetName) {
                for (auto& flower : inventory) {
                    if (flower.name == flowerName) {
                        bouquet.addFlower(flower);
                        return;
                    }
                }
            }
        }
    }

    void displayInventory() {
        cout << "Flower Inventory:\n";
        for (auto& flower : inventory) {
            cout << "Flower: " << flower.name << " Color: " << flower.color << " Price: " << flower.price << endl;
        }
    }

    void displayBouquets() {
        cout << "Bouquets in store:\n";
        for (auto& bouquet : bouquets) {
            bouquet.display();
        }
    }
};

