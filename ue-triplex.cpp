#include <iostream>

void PrintIntro(const int Difficulty) 
{
    std::cout <<
        "                                  |>>>\n" <<
        "                                  |\n" <<
        "                    |>>>      _  _|_  _         |>>>\n" <<
        "                    |        |;| |;| |;|        |\n" <<
        "                _  _|_  _    \\.    .  /    _  _|_  _\n" <<
        "               |;|_|;|_|;|    \\:. ,  /    |;|_|;|_|;|\n" <<
        "               \\..      /    ||;   . |    \\.    .  /\n" <<
        "                \\.  ,  /     ||:  .  |     \\:  .  /\n" <<
        "                 ||:   |_   _ ||_ . _ | _   _||:   |\n" <<
        "                 ||:  .|||_|;|_|;|_|;|_|;|_|;||:.  |\n" <<
        "                 ||:   ||.    .     .      . ||:  .|\n" <<
        "                 ||: . || .     . .   .  ,   ||:   |       \\,/\n" <<
        "                 ||:   ||:  ,  _______   .   ||: , |            /`\\\n" <<
        "                 ||:   || .   /+++++++\    . ||:   |\n" <<
        "                 ||:   ||.    |+++++++| .    ||: . |\n" <<
        "              __ ||: . ||: ,  |+++++++|.  . _||_   |\n" <<
        "     ____--`~    '--~~__|.    |+++++__|----~    ~`---,              ___\n" <<
        "-~--~                   ~---__|,--~'                  ~~----_____-~'   `~----~~\n\n\n";
    std::cout << "Your are standing in front of the castle gates and want to get in." << std::endl;
    std::cout << "A guard of military rank " << Difficulty << " asks you for the secret." << std::endl;
    std::cout << std::endl;
}

bool PlayGame(const int Difficulty) 
{
    PrintIntro(Difficulty);

    // Declare code variables
    int CodeA = 4;
    int CodeB = 7;
    int CodeC = 8;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    // Print code hints
    std::cout << "The secret consists out of three numbers...\n";
    std::cout << "Their sum is: " << CodeSum << std::endl;
    std::cout << "Their product is: " << CodeProduct << std::endl << std::endl;

    int GuessA, GuessB, GuessC;
    std::cout << "What do you reply to the guard?: ";
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "You entered: " << GuessA << " " << GuessB << " " << GuessC << std::endl;
    std::cout << "Your sum is: " << GuessSum << std::endl;
    std::cout << "Your product is: " << GuessProduct << std::endl << std::endl;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "The guard nods and lets you pass. Well done! But wait there is another guard approaching...\n\n";
        return true;
    }
    else
    {
        std::cout << "The guard raises his pike and signals you to move away.\nYou disguise yourself and try again...\n";
        return false;
    }
}

void ClearCin() 
{
    std::cin.clear();
    std::cin.ignore();
}

int main()
{
    
    const int MaxDifficulty = 5;
    int LevelDifficulty = 1;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        ClearCin();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    std::cout << "Congratulations! You entered the castle.\n";

    return 0;
}