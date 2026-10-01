#include <iostream>
#include <string>

int main() {

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    double prices[] = {5.00, 7.50, 9.99, 15.99};

    int elements = sizeof(prices) / sizeof(double);

    for (int index = 0; index < elements; index++) {
        std::cout << prices[index] << "\n";
    }

    return 0;
}
