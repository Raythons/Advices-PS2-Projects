#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enCharType {
    Capital = 1,
    Small = 2,
    Special = 3,
    Digits = 4
    };
int ReadPositiveNumber (string Message){
    int N = 0;
    do
    {
        cout << Message<< endl;
        cin >> N;
    } while (N <= 0);
    return N;
}
int RandomNumber(int From , int To){ // 
    int RandNum = rand() % (From - To +1) + From;
    return RandNum ;
}
char GetRandomCharacter(enCharType CharType){
    switch (CharType)
    {
    case enCharType::Capital:
        return char (RandomNumber(65, 90));
        break;
    case enCharType::Small:
        return char (RandomNumber(97, 122));
        break;
    case enCharType::Special:
        return char (RandomNumber(33, 47));
        break;
    case enCharType::Digits:
        return char (RandomNumber(48, 57));
        break;
    default:
        return char (RandomNumber(48, 57));
        break;
    };
}
string GenerateWord(enCharType CharType , short Length){
    string Word = "";
    for(int i = 0; i < Length ; i ++){
        Word += GetRandomCharacter(CharType);
    }
    return Word;
} 
string GenerateKey(){
    string Key = "";
    Key = GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4) + "-";
    Key += GenerateWord(enCharType::Capital, 4);
    return Key;
}
void GenerateKeys(int KeysNumber){
    for(int i = 0; i < KeysNumber; i++){
        cout << "Key " << "[" << i << "]" << ": " << GenerateKey() << endl;
    }
}

int main(){
    srand(time(NULL));
    GenerateKeys(8);
    return 0;
}
//////___________________________________________________________________________________________////////////




