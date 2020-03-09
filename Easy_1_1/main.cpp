#include <iostream>
#include "src/Stack.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    auto a = Stack(30);
    std::cout << a.Size() << std::endl;
    std::cout << a.ContainedNumber() << std::endl;
    a.Push("abc");
    std::cout << a.ContainedNumber() << std::endl;
    std::cout << *a.Front() << std::endl;
    for (int i = 0; i <a.Size(); ++i){
        try {
            std::cout << *a.Front() << " " << a.ContainedNumber() <<  std::endl;
            a.Push("i+40");

        }
        catch (std::exception b){
            std::cout << b.what() << std::endl;
        }
    }
    return 0;
}
