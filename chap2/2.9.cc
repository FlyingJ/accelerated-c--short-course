// this program takes two numbers from the user and prints which number is
// larger than the other
#include <iostream>

int main() {
    std::cout << "Please enter a number: ";
    int x;
    std::cin >> x;
    std::cout << "Please enter a second number: ";
    int y;
    std::cin >> y;

    // three cases:
    // x > y
    // x < y
    // x == y
    if (x > y) {
        std::cout << x << " is larger than " << y;
    } else if (x < y) {
        std::cout << y << " is larger than " << x;
    } else {
        std::cout << x << " is equal to " << y;
    } // if
    std::cout << std::endl;

    return 0;
} // main()
