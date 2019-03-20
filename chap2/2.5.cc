// draw a square, rectangle and triangle
#include <iostream>
#include <string>

void DrawSquare() {
    std::string::size_type sideLength = 5;

    // invariant: we've written r rows so far
    for (std::string::size_type r = 0; r != sideLength; ++r) {
        // are we at top or bottom?
        if (r == 0 || r == sideLength - 1) {
            std::string line(sideLength, '*');
            std::cout << line;
        } else {
            std::string spaces(sideLength - 2, ' ');
            std::cout << "*" + spaces + "*";
        } // if
        std::cout << std::endl;
    } // for
}

void DrawRectangle() {
    std::string::size_type length = 5;
    std::string::size_type width = 3;

    // invariant: we've written r rows so far
    for (std::string::size_type r = 0; r != width; ++r) {
        // are we at top or bottom?
        if (r == 0 || r == width - 1) {
            std::string line(length, '*');
            std::cout << line;
        } else {
            std::string spaces(length - 2, ' ');
            std::cout << "*" + spaces + "*";
        } // if
        std::cout << std::endl;
    } // for
}

void DrawTriangle() {
    std::string::size_type length = 5;

    // invariant: we've written r rows so far
    for (std::string::size_type r = 0; r != length; ++r) {
        // invariant: we've written c columns so far
        for (std::string::size_type c = 0; c != r + 1; ++c) {
            if (c == 0 || c == r || r == length - 1) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        } // for
        std::cout << std::endl;
    } // for
}

int main() {
    DrawSquare();
    std::cout << std::endl;
    DrawRectangle();
    std::cout << std::endl;
    DrawTriangle();
    std::cout << std::endl;

    return 0;
} // main()
