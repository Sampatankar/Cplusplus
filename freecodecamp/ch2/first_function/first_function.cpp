#include <iostream>

// Function to add numbers together
int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

// Function to display numbers and then use the addNumbers function:
int main(){

    int first_number {13}; //Statement
    int second_number {7}; //Statement

    std::cout << "First Number : " << first_number << std::endl; //display this
    std::cout << "Second Number : " << second_number << std::endl; //display this

    //sum statement:
    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    //use sum passed through the addNumbers function:
    sum = addNumbers(25,7);
    std::cout << "Sum utilising function : " << sum << std::endl;

    return 0;

}