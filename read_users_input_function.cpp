#include <iostream>
#include "inventory.h"

using namespace std;

void displayItems(Item* items, int count) {
    if (count == 0) {
        cout << "No items in inventory.\n";
        return;
    }

    for (int i = 0; i < count; i++) {
        cout << "ID: " << items[i].id
            << " | Name: " << items[i].name
            << " | Qty: " << items[i].quantity
            << " | Price: " << items[i].price
            << endl;
    }
}