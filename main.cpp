#include <iostream>
#include "admin.cpp"
#include "client.cpp"
#include "warehouse.cpp"

using namespace std;

int main() {
    FlowerShopAdmin admin;
    FlowerShopClient client;
    FlowerShopWarehouse warehouse;

    admin.addFlowerToInventory("Роза", "Красный", 100);
    admin.addFlowerToInventory("Лилия", "Белый", 120);
    warehouse.updateInventory({Flower("Роза", "Красный", 100), Flower("Лилия", "Белый", 120)});
    client.setInventory({Flower("Роза", "Красный", 100), Flower("Тюльпан", "Розовый", 90)});

    client.searchFlowerByName("Роза");
    client.searchFlowerByColor("Розовый");

    warehouse.showInventory();

    return 0;
}

