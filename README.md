# Inventory Management System (C++)

## Description
This project is a simple **Inventory Management System** built for a fundamentals of programming course.  
It demonstrates **CRUD operations (Create, Read, Update, Delete)** using only **arrays, pointers, functions, structs, and C-style strings**.  
No STL containers or advanced data structures are used.

---

## Project Structure and Function Purpose

- **createItem()**  
  Adds a new item to the inventory array by taking user input and storing it in the next available position.

- **displayItems()**  
  Displays all items currently stored in the inventory array.

- **updateItem()**  
  Searches for an item by ID and updates its information if found.

- **deleteItem()**  
  Removes an item from the inventory by shifting array elements and reducing the item count.

- **main() / menu**  
  Controls program flow using a menu and calls the appropriate CRUD functions based on user input.

---

## Files

- `inventory.h` – Defines the Item structure, constants, and function declarations  
- `main.cpp` – Menu and program control  
- `create.cpp` – Create operation  
- `read.cpp` – Read operation  
- `update.cpp` – Update operation  
- `delete.cpp` – Delete operation  

---

## How to Compile and Run

```bash
g++ main.cpp create.cpp read.cpp update.cpp delete.cpp -o inventory
./inventory
