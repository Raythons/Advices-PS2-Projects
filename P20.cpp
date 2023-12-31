#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enCharacterType {
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
char PrintRandomCharacter(enCharacterType CharType){
    switch (CharType)
    {
    case enCharacterType::Capital:
        return char (RandomNumber(65, 90));
        break;
    case enCharacterType::Small:
        return char (RandomNumber(97, 122));
        break;
    case enCharacterType::Special:
        return char (RandomNumber(33, 47));
        break;
    case enCharacterType::Digits:
        return char (RandomNumber(48, 57));
        break;
    default:
        return char (RandomNumber(48, 57));
        break;
    };
}

int main(){
    srand((unsigned)time(NULL));
    cout << PrintRandomCharacter(enCharacterType::Capital) << endl;
    cout << PrintRandomCharacter(enCharacterType::Small) << endl;
    cout << PrintRandomCharacter(enCharacterType::Special) << endl;
    cout << PrintRandomCharacter(enCharacterType::Digits) << endl;
    return 0;
}
//////___________________________________________________________________________________________////////////




