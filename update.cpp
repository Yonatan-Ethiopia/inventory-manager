#include <iostream>
#include "inventory.h"

using namespace std;

void updateItem(Item *items, int count) {
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    for (int i = 0; i < count; i++) {
        if (items[i].id == id) {
            cout << "Enter new name: ";
            cin.ignore();
            cin.getline(items[i].name, 50);

            cout << "Enter new quantity: ";
            cin >> items[i].quantity;

            cout << "Enter new price: ";
            cin >> items[i].price;

            cout << "Item updated.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}
