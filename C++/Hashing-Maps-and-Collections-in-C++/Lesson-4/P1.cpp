/*Welcome! Modify the grocery store inventory system to remove a product from the inventory. Use what you've learned to apply the erase method on the std::unordered_map and remove the entry for the product with ID 1001. Afterward, print out the remaining inventory.*/

#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered_map to track the quantity of products by their unique IDs
    std::unordered_map<int, int> productInventory;

    // Adding products with their unique IDs as keys and quantities as values
    productInventory[1001] = 10; // ID 1001 has 10 units
    productInventory[1002] = 6;  // ID 1002 has 6 units

    // TODO: Remove the product with ID 1001 from the inventory
    productInventory.erase(1001);

    // Print the updated inventory
    std::cout << "Updated product inventory: " << std::endl;
    for (const auto& pair : productInventory) {
        std::cout << "ID " << pair.first << ": " << pair.second << " units" << std::endl;
    }

    return 0;
}