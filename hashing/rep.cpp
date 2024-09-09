#include <iostream>
#include <list>
#include <vector>

class HashTable {
int table_size;
std::vector<std::list<int>> table;

public:
HashTable(int size);
void insert(int key);
void remove(int key);
bool search(int key);
int hashFunction(int key);
void display();
};

HashTable::HashTable(int size) {
this->table_size = size;
table.resize(table_size);
}

int HashTable::hashFunction(int key) {
return key % table_size;
}

void HashTable::insert(int key) {
int index = hashFunction(key);
table[index].push_back(key);
}

void HashTable::remove(int key) {
int index = hashFunction(key);
table[index].remove(key);
}

bool HashTable::search(int key) {
int index = hashFunction(key);
for (auto& item : table[index]) {
if (item == key) {
return true;
}
}
return false;
}

void HashTable::display() {
for (int i = 0; i < table_size; i++) {
std::cout << "Index " << i << ": ";
for (auto& item : table[i]) {
std::cout << item << " ";
}
std::cout << std::endl;
}
}

int main() {
HashTable hashTable(10); // Example table size

hashTable.insert(15);
hashTable.insert(25);
hashTable.insert(35);
hashTable.insert(45);

hashTable.display();

std::cout << "Searching for 25: " << (hashTable.search(25) ? "Found" : "Not Found") << std::endl;
std::cout << "Searching for 55: " << (hashTable.search(55) ? "Found" : "Not Found") << std::endl;

hashTable.remove(25);
std::cout << "After removing 25:" << std::endl;
hashTable.display();

return 0;
}