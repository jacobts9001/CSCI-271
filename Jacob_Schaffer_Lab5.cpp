#include <iostream>
#include <string>
using namespace std;

int main() {
    int record1 = 2, record2 = 3, record3 = 1, record4 = 3, record5 = 2, record6 = 3;

    int phoneCount = 0, headphoneCount = 0, chargerCount = 0;
    //This for loop processes the sale records
    for (int i = 1; i <= 6; i++) {
        int saleType = 0;

        if (i == 1) {
            saleType = record1;
        } else if (i == 2) {
            saleType = record2;
        } else if (i == 3) {
            saleType = record3;
        } else if (i == 4) {
            saleType = record4;
        } else if (i == 5) {
            saleType = record5;
        } else if (i == 6) {
            saleType = record6;
        }
        //This switch adjusts the count variables according to the number sold in the records
        switch (saleType) {
            case 1:
                phoneCount++;
                break;
            case 2:
                headphoneCount++;
                break;
            case 3:
                chargerCount++;
                break;
            default:
                cout << "Unknown Sale!" << endl;
        }

    }
    //Print Summary
    cout << "=== Daily Sale Report Summary ===" << endl;
    cout << "Phones sold: " << phoneCount << endl;
    cout << "Headphones sold: " << headphoneCount << endl;
    cout << "Charger sold: " << chargerCount << endl;

    return 0;
}
