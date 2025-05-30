#include <iostream>
#include <string>

int main(){
    
    int age3;
    std::string full_name;

    std::cout << "Please type your full name and age: " << std::endl;

    std::getline(std::cin,full_name);

    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 << " years old!" << std::endl;

    std::cerr << "Error message: Something is wrong" << std::endl;
    std::clog << "Log message: Something happened" << std::endl;

    return 0;
}