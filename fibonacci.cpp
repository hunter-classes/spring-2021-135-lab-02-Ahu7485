#include <iostream>

int main(){
    long int num1 = 0;
    long int num2 = 1;
    long int array[59];
    array[0] = 0;
    array[1] = 1;
    for (int i = 2; i < 60; i++){
        array[i] = num1 + num2;
        num1 = num2;
        num2 = array[i];
    }
    for (int i = 0; i < 60; i++){
        std::cout << array[i] << "\n"; 
    }

    std::cout << std::endl;
    
    return 0;
}