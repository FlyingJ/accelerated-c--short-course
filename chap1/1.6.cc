// this program illustrates what can happen when multiple words are input for
// a single std::cin (buffers input and uses for subsequent cin)
#include <iostream>
#include <string>

int main() {
    std::cout << "What is your name? ";  // ask for name
    std::string name;                    // define string variable name
    std::cin >> name;                    // read from stdin into name
    std::cout << "Hello, " << name
              << std::endl << "And what is yours? ";
    std::cin >> name;                    // read from stdin into name
    std::cout << "Hello, " << name
              << "; nice to meet you too!" << std::endl;

    return 0;
} // main()
