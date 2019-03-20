// this program generates the product of numbers in the range [1, 10)
#include <iostream>

int main() {
    int const lowBound = 1;
    int const upBound = 10;

    // loop over "left" operand
    // invariant: m sets of products have been calculated and x = lowBound + m
    for (int x = lowBound; x != upBound; ++x) {
        // loop over "right" operand
        // invariant: n products have been calculated and y = lowBound + n
        for (int y = lowBound; y != upBound; ++y) {
            std::cout << x << " * " << y << " = " << x * y << std::endl;
        } //for
    } // for

    return 0;
} // main()
