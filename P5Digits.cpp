#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message){
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
void PrintReversedDigits(int Number){
        int Remainder = 0;
        while(Number > 0){
        Remainder = Number % 10;
        Number = Number/ 10;
        cout << Remainder << "\n";
        };
}
int main() {
    PrintReversedDigits(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
//////___________________________________________________________________________________________////////////




