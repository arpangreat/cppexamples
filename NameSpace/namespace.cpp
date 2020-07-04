#include <iostream>
#include <string>


namespace my {
    void print(const std::string& text) {
        std::cout << text << std::endl;
    }
}


namespace mynew {
    void print(const std::string& text) {
        std::cout << text;
    }
}



using namespace my;
int main() {
    print("Hello");
    mynew::print("Hello");
    std::printf("Hello");
}
