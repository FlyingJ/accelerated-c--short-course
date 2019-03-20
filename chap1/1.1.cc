#include <iostream>
#include <string>

int main() {
    std::string const hello = "Hello";
    std::string const message = hello + ", world" + "!";

    std::cout << message << std::endl;

    return 0;
} // main()
