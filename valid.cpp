#include <iostream>

int main(){
    int input;
    std::cout << "Please enter an integer: ";
    std::cin >> input;
    while (input < 0 || input > 100){
        std::cout << "\nPlease re-enter: ";
        std::cin >> input;
        }
    std::cout << "\nNumber squared is " << input*input << std::endl;
    return 0;
}
