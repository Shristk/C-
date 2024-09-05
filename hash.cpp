#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//Multiplication method
int hashFunction(float key, float tableSize) {
    double fraction = (key * 0.357840) - floor(key*0.357840);
    return floor(tableSize*fraction);
}

void insert(vector<int>& hashTable, int key) {
    int index = hashFunction(key, hashTable.size());
    // Linear probing
    while (hashTable[index] != -1) {
        index = (index + 1) % hashTable.size();
    }
    hashTable[index] = key;
}

void displayHashTable(const vector<int>& hashTable) {
    for (int i = 0; i < hashTable.size(); ++i) {
        if (hashTable[i] != -1) {
            cout << i << " --> " << hashTable[i] << endl;
        } else {
            cout << i << " --> " << "Empty" << endl;
        }
    }
}

int main() {
    int tableSize = 10;
    vector<int> hashTable(tableSize, -1); // Initialize hash table with -1 (empty slots)
    //int keys[] = {23, 43, 13, 27};
    int keys[] = {10,11,12,13,14,20,21};
    for (int key : keys) {
        insert(hashTable, key);
    }

    displayHashTable(hashTable);

    return 0;
}