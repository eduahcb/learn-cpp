#include <iostream>

int main() {
    // const key prevent reassign

    const int myConst = 3;

    int number;
    number = 5;

    std::cout << number << "\n";

    // you cannot reassign the myConst
    // myConst = 5;

    std::cout << myConst;
    return 0;
}
