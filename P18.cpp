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
string EncryptText(string Text , short EncryptKey){
    for(int i=0; i <= Text.length(); i++){
        Text[i] = char((int) Text[i] + EncryptKey); 
    }
    return Text;
}
string DecryptText(string Text, short EncryptKey){
    for(int i=0; i <= Text.length(); i++){
        Text[i] = char((int)Text[i] - EncryptKey); 
    }
    return Text;
};

int main() {
    string Name = ReadString("Please Enter Name to Encrypt: ");
    string AfterEncryption = EncryptText(Name , 3);
    string AfterDecryption = DecryptText(AfterEncryption , 3);

    cout << "Name Before Encryption: " << Name << endl;
    cout << "Name After Encryption: " << AfterEncryption << endl;
    cout << "Name  After Decryption: " << AfterDecryption << endl;
    return 0;
}
//////___________________________________________________________________________________________////////////




