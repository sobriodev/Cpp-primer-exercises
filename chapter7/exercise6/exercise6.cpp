#include <iostream>

int fillArray(double *array, int length);
void showArray(const double *array, int length);
void reverseArray(double *array, int length);

int main() {
    const int MAX_SIZE = 10;
    double array[MAX_SIZE];
    int length = fillArray(array, MAX_SIZE);
    std::cout << "Before reversing" << std::endl;
    showArray(array, length);
    reverseArray(array, length);
    std::cout << "After reversing" << std::endl;
    showArray(array, length);
    return EXIT_SUCCESS;
}

int fillArray(double *array, int length) {
    int results = 0;
    for (int i = 0; i < length; ++i, ++results) {
        std::cout << "Enter result #" << results + 1 << std::endl;
        if (!(std::cin >> array[i]) || array[i] < 0) { break; }
    }
    return results;
}

void showArray(const double *array, int length) {
    for (int i = 0; i < length; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArray(double *array, int length) {
    double temp;
    for(int i = 0, j = length -1; i < length / 2; ++i, --j) {
        temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
}
