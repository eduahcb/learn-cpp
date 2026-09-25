#include <iostream>

void sayHello(std::string name) {
    std::cout << "Hello " << name << "!!!\n";
}

int sum(int number1, int number2) {
    return number1 + number2;
}

int mult(int number, int times) {
    return number * times;
}

int main() {
    sayHello("Eduardo");

    int result = mult(5, 120);

    std::cout << sum(5, 10);
    std::cout << result;

    return 0;
}
