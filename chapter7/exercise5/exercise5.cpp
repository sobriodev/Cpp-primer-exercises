#include <iostream>

long factorial(unsigned num);

int main() {
    unsigned num;
    std::cout << "Enter number" << std::endl;
    while (std::cin >> num) {
        std::cout << "Factorial("
                  << num
                  << " ) equals "
                  << factorial(num)
                  << std::endl;
        std::cout << "Enter another number" << std::endl;
    }
    return EXIT_SUCCESS;
}

long factorial(unsigned num) {
    if (num == 0) { return 1; }
    return num * factorial(num - 1);
}