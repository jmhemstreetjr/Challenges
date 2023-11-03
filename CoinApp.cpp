// CoinApp.cpp : Get an amount of money in pennies and the app converts it to money. Did it with subtratcion and modulo for funsies
//

#include <iostream>

int main()
{
    int cents = 0;
    int centsM = 0;
    std::cout << "Enter the money in cents: ";
    std::cin >> cents;

    cents = centsM;
    
    int dollars = cents / 100;
    cents = cents - (dollars * 100);

    int quarters = cents / 25;
    cents = cents - (quarters * 25);

    int dimes = cents / 10;
    cents = cents - (dimes * 10);

    int nickels = cents / 5;
    cents = cents - (nickels * 5);

    int pennies = cents;
    
    std::cout << "Here is what you get the long way:" << std::endl;
    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;




    dollars = centsM / 100;
    centsM = cents % 100;

    quarters = centsM / 25;
    centsM = centsM % 25;

    dimes = centsM / 10;
    centsM = centsM % 10;

    nickels = centsM / 5;
    centsM = centsM % 5;

    pennies = centsM;

     

    std::cout << "Here is what you get with modulo:" << std::endl;
    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;
    


    


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
