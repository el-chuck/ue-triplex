#include <iostream>

int main()
{
    // Print welcome message
    std::cout << "Your are standing in front of the castle gates and want to get in." << std:: endl;
    std::cout << "A guard asks you for the secret." << std::endl;
    std::cout << std::endl;

    // Declare code variables
    int CodeA = 4;
    int CodeB = 7;
    int CodeC = 8;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print code hints
    std::cout << "The secret consists out of three numbers..." << std::endl;
    std::cout << "Their sum is: " << CodeSum << std::endl;
    std::cout << "Their product is: " << CodeProduct << std::endl;
    std::cout << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "What do you reply to the guard?: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    
    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;
    std::cout << "Your sum is: " << GuessSum << std::endl;
    std::cout << "Your product is: " << GuessProduct << std::endl;
}