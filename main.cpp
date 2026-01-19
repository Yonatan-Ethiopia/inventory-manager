#include <iostream>
#include "inventory.h"

using namespace std;

int main() {
    Item items[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\n1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Update Item\n";
        cout << "4. Delete Item\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createItem(items, &count);
                break;
            case 2:
                displayItems(items, count);
                break;
            case 3:
                updateItem(items, count);
                break;
            case 4:
                deleteItem(items, &count);
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
