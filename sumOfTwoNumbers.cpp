#include<iostream>
int sumOfTwoNumbers(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    int sum = sumOfTwoNumbers(num1, num2);
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}