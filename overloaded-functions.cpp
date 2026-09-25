#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    std::cout << sum(2, 3) << "\n";
    std::cout << sum(2, 3, 7) << "\n";

    return 0;
}
