
#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

// using is more recommended
using number_t = int;

int main() {
    pairlist_t pairlist;
    text_t firstName = "Eduardo";
    number_t number = 5;

    std::cout << firstName << "\n";
    std::cout << number << "\n";

    return 0;
}
