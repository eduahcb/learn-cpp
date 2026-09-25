#include <iostream>
#include <string>

int main() {

    std::string name;
    int age;

    std::cout << "What's your name?: ";
    // for white spaces you can use helper function cause you break line;
    // std::cin >> name;
    std::getline(std::cin, name);

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old";
    return 0;
}
