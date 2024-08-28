//A PROGRAM IN C++ TO CREATEW A ROCK PAPER SCISSORS GAME USING USERS AND COMPUTERS CHOICE  
#include <iostream>

char ROCK = 'r';
char PAPER = 'p';
char SCISSORS = 's';

using namespace std;

char getComputerOption()
{
    char options[] = {ROCK, PAPER, SCISSORS};

    
    int index = rand() % 3;

    return options[index];
}



char getUserOption()
{
    char c;
    cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options" << endl;
    cout << "-----------------------------------" << endl;
    cout << "(r) for rock " << endl
         << "(p) for paper" << endl
         << "(s) for scissors " << endl;
    cin >> c;

    while (c != 'r' && c != 'p' && c != 's')
    {
        cout << "Please enter one of the following options only. " << endl;
        cout << "(r) for rock " << endl
             << "(p) for paper" << endl
             << "(s) for scissors " << endl;
        cin >> c;
    }

    return c;
}

void showSelectedOption(char option)
{
    if (option == 'r')
        cout << "Rock" << endl;
    if (option == 'p')
        cout << "Paper" << endl;
    if (option == 's')
        cout << "Scissors" << endl;
}

void chooseWinner(char uChoice, char cChoice)
{
    if (uChoice == ROCK && cChoice == PAPER)
    {
        cout << "Computer Wins! Paper wraps Rock." << endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS)
    {
        cout << "Computer Wins! Scissors cut Paper." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == ROCK)
    {
        cout << "Computer Wins! Rock smashes Scissors." << endl;
    }
    else if (uChoice == ROCK && cChoice == SCISSORS)
    {
        cout << "You Win! Rock smashes Scissors." << endl;
    }
    else if (uChoice == PAPER && cChoice == ROCK)
    {
        cout << "You Win! Paper wraps Rock." << endl;
    }
    else if (uChoice == SCISSORS && cChoice == PAPER)
    {
        cout << "You Win! Scissors cut Paper." << endl;
    }
    else
    {
        cout << "Tie. Play again to win the Game." << endl;
    }
}

int main()
{

    char uChoice;
    char cChoice;

    uChoice = getUserOption();
    cout << "Your choice is: ";
    showSelectedOption(uChoice);

    cout << "Computer's choice is: ";
    cChoice = getComputerOption();
    showSelectedOption(cChoice);

    chooseWinner(uChoice, cChoice);

    return 0;
}
