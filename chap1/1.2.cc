#include <iostream>
#include <string>

int main() {
    std::string const exclam = "!";
    std::string const message = "Hello" + ", world" + exclam;
        // cannot concatenate two string literals

    std::cout << message << std::endl;

    return 0;
} // main()
