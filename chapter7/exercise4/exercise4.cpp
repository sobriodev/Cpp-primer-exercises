#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main() {
    unsigned numbers, picks, extraNumbers;
    std::cout << "Enter [numbers picks extraNumbers]";
    while (std::cin >> numbers >> picks >> extraNumbers && picks <= numbers) {
        std::cout << "Probability equals 1 : "
                  << probability(numbers, picks) * probability(extraNumbers, 1)
                  << std::endl;
        std::cout << "Enter other numbers" << std::endl;
    }
    return EXIT_SUCCESS;
}

long double probability(unsigned numbers, unsigned picks) {
    long double result = 1;
    for (int i = 0; i < picks; ++i) {
        result *= (long double) (numbers - i) / (picks - i);
    }
    return result;
}