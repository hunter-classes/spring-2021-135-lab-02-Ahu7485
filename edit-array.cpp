#include <iostream>

int main(){
    int array[10];
    for (int i = 0; i < 10; i++){
        array[i] = 1;
    }
    int num1;   
    int num2;
    do {
        for (int index = 0; index < 10; index++){
            std::cout << array[index] << " ";
        }
        std::cout << std::endl;
        std::cout << "\nInput Index: ";
        std::cin >> num1;
        std::cout << "\nInput Value: ";
        std::cin >> num2;
        std::cout << "\n";
        array[num1] = num2;
    }
    while(num1 > 0 && num1 < 9);

    std::cout << "Index out of range. Exit.\n";

    return 0;
}