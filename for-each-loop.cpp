#include <iostream>
#include <string>
int main() {
    // foreach loop = loop that eases the transversal over an iterable data set
    std::string students[] = {"Eduardo", "Maria", "José"};
    int grades[] = {65, 72, 81, 100};

    // int studentsSize = sizeof(students) / sizeof(std::string);
    // for (int i = 0; i < studentsSize; i++) {
    //     std::cout << students[i] << "\n";
    // }

    std::cout << "---------------------" << "\n";
    std::cout << "Students" << "\n";
    std::cout << "---------------------" << "\n";

    for (std::string student : students) {
        std::cout << student << "\n";
    }

    std::cout << "---------------------" << "\n";
    std::cout << "Grades" << "\n";
    std::cout << "---------------------" << "\n";

    for (int grade : grades) {
        std::cout << grade << "\n";
    }

    return 0;
}
