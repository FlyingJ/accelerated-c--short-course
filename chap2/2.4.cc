#include <iostream>
#include <string>

int main() {
    // ask for the person's name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    std::string const greeting = "Hello, " + name + "!";

    // ask for amount of padding
    std::cout << "Number of spaces for pad? ";
    std::string::size_type  pad;
    std::cin >> pad;

    // the number of rows and columns to write
    std::string::size_type const rows = 1 + 2 + 2 * pad;
                                       // greeting, top/bottom, pad T/B

    // write a blank line to seperate the output from the input
    std::cout << std::endl;

    // write rows rows of output
    // invariant: we have written r rows so far
    for (std::string::size_type r = 0; r != rows; ++r) {
        // is it time to write the greeting?
        if (r == pad + 1) {
            // write line with greeting
            std::string spaces(pad, ' ');
            std::cout << "*" + spaces + greeting + spaces + "*";
        } else {
            // are we on the border?
            if (r == 0 || r == rows - 1) {
                std::string border(2 + greeting.size() + 2 * pad, '*');
                std::cout << border;
            } else {
                std::string spaces(2 * pad + greeting.size(), ' ');
                std::cout << "*" + spaces + "*";
            } // if
        } // if
        std::cout << std::endl;
    } // for

    return 0;
} // main()
