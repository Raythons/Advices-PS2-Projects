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
void AllDigitsFrequency(int Number){
        for(int i = 0; i < 10; i ++){
            short Frequency = 0;
            Frequency = DigitsFrequency(i , Number);
            if(Frequency > 0){
                cout << "The Frequency Of " << i <<  " is :" << Frequency << endl;
            }
        }
}

int main() {
    int Number = ReadPositiveNumber("Please Enter Number");
    AllDigitsFrequency(Number); 
    
    return 0;
}
//////___________________________________________________________________________________________////////////




