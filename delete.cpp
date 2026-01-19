#include <iostream>
#include "inventory.h"

using namespace std;

void deleteItem(Item *items, int *count) {
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    for (int i = 0; i < *count; i++) {
        if (items[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                items[j] = items[j + 1];
            }
            (*count)--;
            cout << "Item deleted.\n";
            return;
        }
    }

    cout << "Item not found.\n";
}
