// ask for a person's name and generate a framed greeting
#include <iostream>
#include <string>

int main() {
    std::cout << "Please enter your first name: ";
    std::string name;
    std::cin >> name;

    // build the message that we intend to write
    std::string const greeting = "Hello, " + name + "!";

    // build the second and fourth lines of output
    std::string const spaces(greeting.size(), ' ');
    std::string const second = "* " + spaces + " *";

    // build the first and fifth lines of output
    std::string const first(second.size(), '*');

    // write it all
    std::cout << '\n'
              << first << '\n'
              << second << '\n'
              << "* " << greeting << " *" << '\n'
              << second << '\n'
              << first << '\n';

    return 0;
} // main()
