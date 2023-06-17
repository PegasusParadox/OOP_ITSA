#include <iostream>

int main() {
    long long int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    std::cout << num1 << "+" << num2 << "=" << num1 + num2 << std::endl;
    std::cout << num1 << "*" << num2 << "=" << num1 * num2 << std::endl;
    std::cout << num1 << "-" << num2 << "=" << num1 - num2 << std::endl;
    
    if (num1 % num2 < 0) {
        std::cout << num1 << "/" << num2 << "=" << num1 / num2 - 1 << "..." << num1 % num2 + num2 << std::endl;
    } else {
        std::cout << num1 << "/" << num2 << "=" << num1 / num2 << "..." << num1 % num2 << std::endl;
    }
    
    return 0;
}
