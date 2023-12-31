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
int RandomNumberInRange(int From , int To){
    return rand() % (From - To + 1) + From;
}
char GetRandomCharacter(enCharType CharType){
    switch (CharType)
    {
    case enCharType::Capital:
        return char (RandomNumberInRange(65, 90));
        break;
    case enCharType::Small:
        return char (RandomNumberInRange(97, 122));
        break;
    case enCharType::Special:
        return char (RandomNumberInRange(33, 47));
        break;
    case enCharType::Digits:
        return char (RandomNumberInRange(48, 57));
        break;
    default:
        return char (RandomNumberInRange(48, 57));
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

// void ReadArray(int Array[100] , int& ArrayLength){
    
//     for (int i = 0 ; i < ArrayLength ; i++){
//             Array[i] =  RandomNumberInRange(1 , 100);
//     }
// }
void PrintArray (string Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << "Array[" << i + 1 << "] " << Array[i] << "\n";
    }
    cout << endl;
}
void FillArrayWithKeys(string arr[100],int Length){
    for(int i = 0;i <= Length; i++){
        arr[i] = GenerateKey();
    }
}

int main(){
    srand(time(NULL));
    string arr1[100];

    int ArrayLength = ReadPositiveNumber("Please Enter Array Length: ");

    FillArrayWithKeys(arr1 , ArrayLength);
    PrintArray(arr1 , ArrayLength);



    return 0;
}
//////___________________________________________________________________________________________////////////




