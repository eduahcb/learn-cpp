

#include <iostream>
int main() {

    // sizeOf() = determines the size in bytes of a variable, data type, class, objects, etc

    double gpa = 2.5;
    std::string name = "Bro";
    char grade = 'F';
    char grades[] = {'A', 'B', 'C', 'D'};
    std::string students[] = {"Eduardo", "Larissa", "Ana", "Ian", "Crispim"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}
