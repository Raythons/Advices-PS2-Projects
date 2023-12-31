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
void PrintAToZ(){
        for (int i = 65; i <= 90 ; i++){
            for (int j = 65;j <= 90 ; j++){
                for (int k = 65; k <= 90; k++)
                {
                    cout << char(i) << char(j) << char(k) << endl;
                }
                
            }
            cout << "\n";
        }
        
}

int main() {
    PrintAToZ();
    return 0;
}
//////___________________________________________________________________________________________////////////




