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
int DigitsFrequency(short Digit , int Number){
        int Remainder = 0;
        int Frequency = 0;
        while(Number > 0){
            Remainder = Number % 10;
            Number = Number / 10;
            if(Remainder == Digit){
                Frequency += 1;
            }
        };
    return Frequency;
}
int main() {
    int Number = ReadPositiveNumber("Please Enter Number");
    short Digit = ReadPositiveNumber("Please Enter Digit:");
    cout << "\n Digit Frequency of  : " << Digit << " Is: \n"
        << DigitsFrequency(Digit , Number) 
        << "\n";
    
    return 0;
}
//////___________________________________________________________________________________________////////////




