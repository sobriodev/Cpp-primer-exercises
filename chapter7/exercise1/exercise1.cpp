#include <iostream>

double harmonicMean(double x, double y);

int main() {
    double x, y;
    while (std::cin >> x >> y && x && y) {
        std::cout << "Harmonic mean for the numbers [ "
                  << x
                  << ", "
                  << y
                  << " ] equals "
                  << harmonicMean(x, y)
                  << std::endl;

    }
    return EXIT_SUCCESS;
}

double harmonicMean(double x, double y) {
    return  2 * x * y / (x + y);
}

