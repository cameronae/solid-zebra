#include <iostream>

int main()
{
    int row, col;
    char symbol;
    /*int number;
    std::cout << "What number would you like to count to? ";
    std::cin >> number;
    for(int i = 1; i < number + 1; i+=2)//adds two at a time to i instead of 1
    {
        std::cout << i << '\n';
    }*/

    //nested loop
    std::cout << "What symbol would you like to use ";
    std::cin >> symbol;

    std::cout << "Enter the number of rows: ";
    std:: cin >> row;

    std::cout << "Enter the number of columns: ";
    std::cin >> col;

    for(int i = 0; i < row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
    return 0;
}