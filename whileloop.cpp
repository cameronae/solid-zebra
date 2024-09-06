#include <iostream>

int main()
{
   /* std::string name;
   
    while (name.empty())
    {
        std::cout << "please enter your name ";
        std::getline(std::cin, name);
    }
    
        std::cout << "Hello " << name;
        return 0;*/
        int number = 0;
        char enter;
        do
        {
            std:: cout << "enter a letter ";
            std:: cin >> enter;
            number++;
            
        }
        while(number < 10);

        std::cout << "good job \n";
}