
#include <iostream>

int searchArray(int array[], int size, int element) {

    for (int index = 0; index < size; index++) {
        if (array[index] == element) {
            return index;
        }
    }

    return -1;
}

int main() {

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for:" << "\n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if (index == -1) {
        std::cout << myNum << " is not in the array";
    } else {
        std::cout << myNum << " is at indx " << index;
    }

    return 0;
}
