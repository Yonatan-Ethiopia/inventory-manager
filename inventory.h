#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX 100

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

void createItem(Item *items, int *count);
void displayItems(Item *items, int count);
void updateItem(Item *items, int count);
void deleteItem(Item *items, int *count);

#endif
