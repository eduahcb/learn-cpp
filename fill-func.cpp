#include <algorithm>
#include <iostream>
#include <string>

int main() {

    // fill() = fills a range of elements with a specified value fill(begin, end, value)

    const int SIZE = 200;
    std::string foods[SIZE];

    std::fill(foods, foods + SIZE, "pizza");

    for (std::string food : foods) {
        std::cout << food << "\n";
    }

    return 0;
}
