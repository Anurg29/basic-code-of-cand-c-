#include <iostream>
using namespace std;

int main() {
    double costPrice, roadTax;
    cout << "Enter the cost price of the bike (in Rs): ";
    cin >> costPrice;
    if (costPrice > 100000) {
        roadTax = costPrice * 0.15; 
    } else if (costPrice > 50000 && costPrice <= 100000) {
        roadTax = costPrice * 0.10; 
    } else {
        roadTax = costPrice * 0.05; 
    }
    cout << "Road tax to be paid: Rs " << roadTax << endl;
}
