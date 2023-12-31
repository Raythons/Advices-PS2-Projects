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
void PrintInvertedNumber(int Number){
        for (int i = Number; i >= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {   
                cout << i ;
            }
            cout << endl;
        }
        
}

int main() {
    PrintInvertedNumber(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
//////___________________________________________________________________________________________////////////




