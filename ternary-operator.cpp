
#include <iostream>
int main() {
    int number;

    std::cout << "Choose a number: ";
    std::cin >> number;

    std::string message = number >= 50 ? "OK" : "Not Ok";

    std::cout << message;
    return 0;
}
