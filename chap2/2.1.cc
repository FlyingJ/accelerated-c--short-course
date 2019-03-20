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

    // the number of blanks surrounding the greeting
    int const pad = 0;

    // the number of rows and columns to write
    int const rows = 1 + 2 + 2 * pad;  // greeting, top/bottom, pad T/B
    std::string::size_type const cols = greeting.size() + 2 * pad + 2;
                                       // greeting, L/R, pad L/R

    // write a blank line to seperate the output from the input
    std::cout << std::endl;

    // write rows rows of output
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r) {
        std::string::size_type c = 0;

        // invariant: we have written c characters in the current row, so far
        while (c != cols) {
            // is it time to write the greeting?
            if (r == pad + 1 && c == pad + 1) {
                std::cout << greeting;
                c += greeting.size();
            } else {
                // are we on the border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    std::cout << "*";
                else
                    std::cout << " ";
                ++c;
            } // if
        } // while
        std::cout << std::endl;
    } // for

    return 0;
} // main()
