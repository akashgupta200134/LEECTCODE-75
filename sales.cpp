#include <iostream>
#include<string>
using namespace std;

int main() {
    int N;
    cin >> N;  // Number of transactions

    string bestProduct, product;
    double unitCost, totalSales = 0, averageSales = 0;
    int quantity, bestQuantity = 0;

    for (int i = 0; i < N; i++) {
        cin >> ws;  // Consume leading whitespace
        getline(cin, product, ','); // Read product name until comma
        cin >> unitCost;  // Read unit cost
        cin.ignore(); // Ignore comma
        cin >> quantity; // Read quantity

        // Calculate sales for this transaction
        double sales = unitCost * quantity;
        totalSales += sales;  // Add to total sales

        // Track best-selling product (highest quantity)
        if (quantity > bestQuantity) {
            bestQuantity = quantity;
            bestProduct = product;
        }
    }

    // Calculate average sales
    averageSales = totalSales / N;

    // Print the results
    cout << "Total Sales: " << totalSales << endl;
    cout << "Average Sales: " << averageSales << endl;
    cout << "Best Selling Product: " << bestProduct << endl;

    return 0;
}
