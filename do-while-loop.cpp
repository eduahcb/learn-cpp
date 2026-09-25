#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: \n";
    std::cout << number;

    return 0;
}
