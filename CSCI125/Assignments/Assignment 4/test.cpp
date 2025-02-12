#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    Car() { // Default Constructor
        brand = "Unknown";
    }

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
    
    bool operator==(const Car &other) const {
        return brand == other.brand;
    }
};

int main() {
    Car myCar; // Default constructor is called
    myCar.displayBrand();
    return 0;
}
