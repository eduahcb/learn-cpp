#include <iostream>

// namespaces prevents names conflicts

namespace first {
int x;
}

namespace second {
int x;
}

int main() {

    int x = 0;
    first::x = 50;
    second::x = 100;

    std::cout << x << "\n";
    std::cout << first::x << "\n";
    std::cout << second::x << "\n";

    return 0;
}
