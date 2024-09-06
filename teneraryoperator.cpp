#include <iostream>
//pass or fail calculator
int main()
{
    int grade;
    int attendence;
    std::cout << "What grade did you get on the test? " << '\n';
    std:: cin >> grade;
    std::cout << "how many unexcused absences did you have ? " << '\n';
    std::cin >> attendence;
    //is grade >= 65? if yes then pass : else oop 
    grade >= 65 ? std::cout << "You passed! " : std::cout << "oop";

    //using if statement with and operator in order for something to be true or false
    if(grade >= 65 && attendence <= 6)
    {
        std::cout << "congrats you passed the class ";
    }
    else{
        std::cout << "you did not pass the class see you next year! ";
    }
    return 0;
}