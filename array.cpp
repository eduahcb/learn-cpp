#include <iostream>
#include <string>

int main() {

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    double prices[] = {5.00, 7.50, 9.99, 15.99};

    for (const std::string& car : cars) {
        std::cout << car << "\n";
    }

    std::cout << prices[1];

    return 0;
}
