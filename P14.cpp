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
void PrintNormalNumber(int Number){
        short AsciNumber = 65;
        for (int i = 65 + Number - 1; i >= 65 ; i--){
            for (int j = 1;j <= Number - (65 + Number -1 - i); j++){
                cout << char(i);
            }
        }
        
}

int main() {
    PrintNormalNumber(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
//////___________________________________________________________________________________________////////////




