// This project takes an input from a user and multiplies it by two
#include <iostream>

int userInput()
{
    std::cout << "Please enter an integer: ";
    // User inputs value which is assigned to num
    int num {};
    std::cin >> num;

    return num;

}
// This function multiplies the input by two
void doubleInteger(int num)
{
    std::cout << "The value: " << num << " multiplied by two is: " << num * 2;
}
int main()
{
    //Input function is used as an argument for the multiplication function
    doubleInteger(userInput());

    return 0;
}