#include <iostream>
#include <cmath>
#include <string>
using namespace std;

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
void FillArrayFrom1ToN(int Array[100],int Length){
    for (int i = 0; i <= Length; i ++){
        Array[i] = i +1;
    }
}
int GetRandomNumber(int From, int To){
    return rand() % (From - To + 1) + From;
}
void Swap(int& Number1 , int& Number2){
    int Tmp = Number1;
    Number1 = Number2;
    Number2 = Tmp;
}
void ShuffleArray(int Array[100], int Length){
    for (int i = 0; i < Length ; i++){
        Swap(Array[i], Array[GetRandomNumber(0, 10)]);
    }
}

// void ReadArray(int Array[100] , int& ArrayLength){
    
//     for (int i = 0 ; i < ArrayLength ; i++){
//             Array[i] =  RandomNumberInRange(1 , 100);
//     }
// }
void PrintArray (int Array[100] , int ArrayLength){
    for(int i = 0 ; i < ArrayLength; i ++ ){
        cout << Array[i] << " ";
    }
    cout << endl;
}

int main(){
    srand(time(NULL));
    int arr[100];
    int ArrayLength = ReadPositiveNumber("Please Enter Array Length: ");
    FillArrayFrom1ToN(arr , ArrayLength);
    PrintArray(arr , ArrayLength);
    cout << "After Shuffling is :" << endl;
    ShuffleArray(arr, ArrayLength);
    PrintArray(arr , ArrayLength);

    return 0;
}
//////___________________________________________________________________________________________////////////




