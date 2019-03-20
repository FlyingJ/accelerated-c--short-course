// program that counts down from 10 to -5
#include <iostream>

int main() {
    int top = 10;
    int bottom = -5;

    for (int i = top; i != bottom - 1; --i) {
        std::cout << i << std::endl;
    } // for

    return 0;
} // main()
