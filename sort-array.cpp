#include <iostream>

void bubbleSort(int numbers[], int size) {
    for (int index = 0; index < size - 1; index++) {
        bool swapped = false;

        for (int j = size - 1; j > index; --j) {
            if (numbers[j] < numbers[j - 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j - 1];
                numbers[j - 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int numbers[] = {73, 12, 89, 4,  56, 31,  98, 22, 65, 41, 8,  94, 17, 60, 35, 81, 2,
                     47, 76, 29, 53, 10, 100, 38, 69, 14, 85, 26, 58, 43, 91, 6,  72, 19,
                     49, 96, 33, 62, 11, 79,  24, 87, 45, 1,  67, 30, 93, 16, 54, 39, 82,
                     21, 64, 7,  50, 97, 28,  75, 13, 44, 59, 3,  86, 34, 70, 18, 99, 42,
                     25, 61, 9,  78, 36, 92,  15, 55, 32, 84, 20, 68, 46, 5,  90, 27, 63,
                     40, 95, 23, 74, 52, 37,  80, 48, 66, 57, 88, 71, 83, 51, 77};

    int size = sizeof(numbers) / sizeof(int);
    bubbleSort(numbers, size);

    for (int number : numbers) {
        std::cout << number << "\n";
    }

    return 0;
}
