#include <iostream>

int inputData(int *array, int length);
void printData(const int *array, int length);
double calculateAverage(const int *array, int length);

int main() {
    const int MAX_LENGTH = 10;
    int arr[MAX_LENGTH];
    printData(arr, inputData(arr, MAX_LENGTH));
    return EXIT_SUCCESS;
}

int inputData(int *array, int length) {
    int results = 0;
    for (int i = 0; i < length; ++i, ++results) {
        std::cout << "Enter result #" << results + 1 << std::endl;
        if (!(std::cin >> array[i]) || array[i] < 0) { break; }
    }
    return results;
}

void printData(const int *array, int length) {
    if (length > 0) {
        std::cout << "Results: ";
        for (int i = 0; i < length; ++i) {
            std::cout << array[i] << " ";
        }
    } else {
        std::cout << "Results: NONE ";
    }
    std::cout << "| average: " << calculateAverage(array, length);
}

double calculateAverage(const int *array, int length) {
    if (length == 0) { return 0; }
    double avg = 0;
    for (int i = 0; i < length; ++i) {
        avg += array[i];
    }
    return avg / length;
}
