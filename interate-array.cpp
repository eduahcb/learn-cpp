#include <iostream>
#include <string>

int main() {
    std::string students[] = {"Eduardo", "Maria", "José", "Carlim"};
    int sizeStudents = sizeof(students) / sizeof(std::string);

    for (int i = 0; i < sizeStudents; i++) {
        std::cout << students[i] << "\n";
    }

    return 0;
}
