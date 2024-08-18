#include <iostream>
#include <ctime>

char userChoice();
char computerChoice();
void seeUserChoice(char choice);
void determineWinner(char player, char computer);

char playerChoice;

int main()
{
    char player;
    char computer;

    player = userChoice();
    std::cout << "your choice is: ";
    seeUserChoice(player);
    computer = computerChoice();
    std::cout << "computers choice is: ";
    seeUserChoice(computer);
    determineWinner(player, computer);

    return 0;
}

char userChoice()
{
    char player;
    do
    {
        std::cout << "choose one to play:"
                     "\n";
        std::cout << "r for rock"
                     "\n";
        std::cout << "s for scissors"
                     "\n";
        std::cout << "p for paper"
                     "\n";
        std::cin >> player;
    } while (
        player != 'r' && player != 'p' && player != 's');

    return player;
}
char computerChoice()
{
    srand(time(0));
    int compChoice = (rand() % 3) + 1;

    switch (compChoice)
    {
    case 1:
        return 'r';

    case 2:
        return 'p';

    case 3:
        return 's';
    }
}
void seeUserChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "rock \n";
        break;
    case 'p':
        std::cout << "paper \n";
        break;
    case 's':
        std::cout << "scissors \n";
        break;
    }
}
void determineWinner(char player, char computer)
{

    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "it is a tie \n";
        }
        else if (computer == 'p')
        {
            std::cout << "you lost! \n";
        }
        else
        {
            std::cout << "you won!!!! \n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "you won!!! \n";
        }
        else if (computer == 'p')
        {
            std::cout << "it is a tie \n";
        }
        else
        {
            std::cout << "you lost! \n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "you lost! \n";
        }
        else if (computer == 'p')
        {
            std::cout << "you won!!! \n";
        }
        else
        {
            std::cout << "it is a tie \n";
        }
        break;
    }
}