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
        for (int i = 1; i <= Number; i++)
        {
            for (int j = 1; j <= i; j++)
            {   
                cout << i;
            }
            cout << endl;
        }
        
}

int main() {
    PrintNormalNumber(ReadPositiveNumber("Please Enter Number"));
    return 0;
}
//////___________________________________________________________________________________________////////////




