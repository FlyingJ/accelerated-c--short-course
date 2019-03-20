#include <iostream>

int main() {
    std::cout << '\t' << "This line starts with a character literal TAB." << '\n'
              << "\tThis line starts with a TAB in the string." << '\n'
              << "This line has a character literal" << '\t' << "in the middle." << '\n'
              << "This \t one has it in the string." << '\n'
              << "This line has two literals" << '\t' << '\t' << "in the middle." << '\n'
              << "This \t\t one has two in the string."
              << std::endl;

    return 0;
}
