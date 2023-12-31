#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message){
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
int ReverseNumber(int Number){
        int Remainder = 0;
        int Reversed = 0;
        while(Number > 0){
            Remainder = Number % 10;
            Number = Number/ 10;
            Reversed = Reversed * 10 + Remainder;
        };
    return Reversed;
}
void PrintDigits(int Number){
        int Remainder = 0;
        int Reversed = 0;
        while(Number > 0){
            Remainder = Number % 10;
            Number = Number/ 10;
            cout << Remainder << "\n";
        };
}

int main() {
        PrintDigits(ReverseNumber(ReadPositiveNumber("Please Enter Number")));
    return 0;
}
//////___________________________________________________________________________________________////////////




