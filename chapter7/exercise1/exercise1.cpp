#include <iostream>

double harmonicMean(double x, double y);

int main() {
    double x, y;
    std::cout << "Enter two numbers" << std::endl;
    while (std::cin >> x >> y && x && y) {
        std::cout << "Harmonic mean for the numbers [ "
                  << x
                  << ", "
                  << y
                  << " ] equals "
                  << harmonicMean(x, y)
                  << std::endl;
        std::cout << "Enter two numbers" << std::endl;

    }
    std::cout << "Goodbye!" << std::endl;
    return EXIT_SUCCESS;
}

double harmonicMean(double x, double y) {
    return  2 * x * y / (x + y);
}

