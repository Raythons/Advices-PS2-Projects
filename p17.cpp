#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadString(string Message){
    string The_String = "";
    do
    {
        cout << Message << endl;
        cin >> The_String;
    } while (The_String == "" || The_String == " ");
    return The_String;
}
bool GuessPassword(string Password){
        int Trial = 0;
        string Word = "";
        for (int i = 65; i <= 90 ; i++){
            for (int j = 65;j <= 90 ; j++){
                for (int k = 65; k <= 90; k++){
                    Trial +=1;
                    string Word = "";
                    Word  = Word + char(i);
                    Word  = Word + char(j);
                    Word  = Word + char(k);
                    cout << "Trial" << "[" << Trial << "] " << Word << endl;
                    if (Word == Password){
                        return true;
                    }
                    Word = "";
                }
                
            }
            cout << "\n";
        }
        
}

int main() {
    GuessPassword(ReadString("Please Enter Three Character Password: "));
    return 0;
}
//////___________________________________________________________________________________________////////////




