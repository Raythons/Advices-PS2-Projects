#include <iostream>
#include <cmath>
#include <string>
using namespace std;
// Ask User How Many Rounds
// Start Each Round  Player Vs Computer
// Show Result Each Round
//

enum enGameChoice
{
    Stone = 1,
    Paper = 2,
    Scissors = 3
};
enum enWinner
{
    Player = 1,
    Computer = 2,
    Draw = 3
};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

struct strGameResult
{
    short GameRounds = 0;
    short Player1Wins = 0;
    short ComputerWins = 0;
    short Draw = 0;
    enWinner GameWinner;
    string WinnerName;
};

int ReadNumberInRange(string Message, int From, int To)
{
    int N = 0;
    do
    {
        cout << Message << "Between " << endl;
        cin >> N;
    } while (N <= From && N >= To);
    return N;
}

int ReadHowManyRounds()
{
    int N = 0;
    do
    {
        cout << "Enter Number Of Rounds Between 1 , 10" << endl;
        cin >> N;
    } while (N <= 1 && N >= 10);
    return N;
}

int GetRandomNumber(int From, int To)
{
    return rand() % (From - To - 1) + From;
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
    {
        return enWinner::Draw;
    };
    switch (RoundInfo.Player1Choice)
    {
    case enGameChoice::Stone:
        if (RoundInfo.ComputerChoice == enGameChoice::Paper)
        {
            return enWinner::Computer;
        }
        break;
    case enGameChoice::Paper:
        if (RoundInfo.ComputerChoice == enGameChoice::Scissors)
        {
            return enWinner::Computer;
        }
        break;
    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::Stone)
        {
            return enWinner::Computer;
        }
        break;
    }
    return enWinner::Player;
}
enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
    if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Player;
    else if (ComputerWinTimes > Player1WinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

string WinnerName(enWinner Winner)
{
    string arrWinnerName[3] = {"Player1", "Computer", "No Winner"};
    return arrWinnerName[Winner - 1];
}

strGameResult FillGameResult(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes)
{
    strGameResult GameResults;
    GameResults.GameRounds = GameRounds;
    GameResults.Player1Wins = Player1WinTimes;
    GameResults.ComputerWins = ComputerWinTimes;
    GameResults.Draw = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);
    return GameResults;
}
void SetWinnerScreenColor(enWinner Winner)
{
    switch (Winner)
    {
    case enWinner::Player:
        system("color 2F");
        break;
    case enWinner::Computer:
        system("color 4F");
        break;
    default:
        system("color 6F");
        break;
    }
}
string ChoiceName(enGameChoice Choice)
{
    string Choices[3] = {"Stone", "Paper", "Stone"};
    return Choices[Choice - 1];
}

void PrintRoundResult(stRoundInfo RoundInfo)
{
    cout << "\n____________Round [" << RoundInfo.RoundNumber << "] ____________\n\n";
    cout << "Player1  Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "] \n";
    cout << "__________________________________\n"
         << endl;
}

enGameChoice ReadComputerChoice()
{
    return (enGameChoice)GetRandomNumber(1, 3);
}

enGameChoice ReadPlayer1Choice()
{
    short Choice = 1;
    do
    {
        cout << "\nYour Choice: [1]:Stone,[2]:Paper,[3]:Scissors? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return (enGameChoice)Choice;
}

strGameResult PlayGame(int HowManyRounds)
{

    stRoundInfo RoundInfo;
    short Player1Wins = 0, ComputerWins = 0, Draw = 0;
    for (int GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\n Round [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = ReadComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player)
        {
            Player1Wins++;
        }
        else if (RoundInfo.Winner == enWinner::Computer)
        {
            ComputerWins++;
        }
        else
        {
            Draw++;
        }
        SetWinnerScreenColor(RoundInfo.Winner);
        PrintRoundResult(RoundInfo);
    };
    return FillGameResult(HowManyRounds, Player1Wins, ComputerWins, Draw);
}

void ShowGameOverScreen()
{
    cout << "\t\t"
         << "__________________________________________________________\n\n";
    cout << "\t\t"
         << "                 +++ G a m e  O v e r +++\n";
    cout << "\t\t"
         << "__________________________________________________________\n\n";
}

// string GameWinner (strGameResult GameResult){
//         if(GameResult.Player1Result > GameResult.ComputerResult)
//             return WinnerToString(enWinner::Player);
//         else if (GameResult.Player1Result < GameResult.ComputerResult){
//             return WinnerToString(enWinner::Computer);
//         } else{
//             return WinnerToString(enWinner::Tie);
//         }
// }
void ShowFinalGameResults(strGameResult GameResults)
{
    cout << "\t\t"
         << "_____________________ [Game Results ]_____________________\n\n";
    cout << "\t\t"
         << "Game Rounds        : " << GameResults.GameRounds << endl;
    cout << "\t\t"
         << "Player1 won times  : " << GameResults.Player1Wins << endl;
    cout << "\t\t"
         << "Computer won times : " << GameResults.ComputerWins << endl;
    cout << "\t\t"
         << "Draw times         : " << GameResults.Draw << endl;
    cout << "\t\t"
         << "Final Winner       : " << GameResults.WinnerName << endl;
    cout << "\t\t"
         << "___________________________________________________________\n";
    SetWinnerScreenColor(GameResults.GameWinner);
}

void RestScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    string PlayAgain = "y";
    do
    {
        RestScreen();
        strGameResult GameResults = PlayGame(ReadHowManyRounds());
        cin >> PlayAgain;
        cout << "\n";
    } while (PlayAgain == "Y" || PlayAgain == "y");
}

int main()
{
    srand((unsigned)time(NULL));
    StartGame();
    return 0;
}

//////___________________________________________________________________________________________////////////

// void PrintGameResult(strGameResult Result){
//     cout << "__________________GameResult________________________\n";
//     cout << " \t\tPlayer 1 Wins " << Result.Player1Result << endl;
//     cout << " \t\tComputer Wins " << Result.ComputerResult << endl;
//     cout << " \t\tTie Rounds " << Result.TieResult << endl;
//     cout << " \t\tWinner Is : " << GameWinner(Result) << endl;
//     cout << "____________________________________________________" << endl;
// }
