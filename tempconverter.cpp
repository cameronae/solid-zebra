#include <iostream>

int main()
{
    double temp, newtemp;
    char unit1, unit2;

    std::cout << "what unit (F, C, K) would you like to convert from?\n";
    std::cin >> unit1;

    std::cout << "What unit would you like to convert to?\n ";
    std::cin >> unit2;

    if(unit1 == 'F' || unit1 == 'f' && unit2 == 'C' || unit2 == 'c')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = (temp-32) / 1.8;
        std::cout << newtemp << "°C\n";
    }
    else if (unit1 == 'F' || unit1 == 'f' && unit2 == 'K' || unit2 == 'k')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = ((temp-32) / 1.8) + 273.15;
        std::cout << newtemp << "°K\n";
    }
    else if ( unit1 == 'C' || unit1 == 'c' && unit2 == 'F' || unit2 == 'f')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = (temp * 1.8) + 32;
        std::cout << newtemp << "°F\n";
    }
    else if ( unit1 == 'C' || unit1 == 'c' && unit2 == 'K' || unit2 == 'k')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = temp + 273.15;
        std::cout << newtemp << "°K\n";
    }
    else if ( unit1 == 'K' || unit1 == 'k' && unit2 == 'F' || unit2 == 'f')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = temp - (273.15 * 1.8) + 32;
        std::cout << newtemp << "°F\n";
    }
    else if ( unit1 == 'K' || unit1 == 'k' && unit2 == 'C' || unit2 == 'c')
    {
        std::cout << "what is the tempature\n";
        std::cin >> temp;

        newtemp = temp - 273.15;
        std::cout << newtemp << "°C\n";
    }
    else{
        std::cout << "enter a valid command.";
    }
return 0;
}