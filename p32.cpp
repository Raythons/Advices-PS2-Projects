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
void FilArrayWithRandomNumber(int Array[100],int Length){
    for (int i = 0; i <= Length; i ++){
        Array[i] = RandomNumberInRange(1, 100);
    }
}
void Swap(int& Number1 , int& Number2){
    int Tmp = Number1;
    Number1 = Number2;
    Number2 = Tmp;
}

// void ReadArray(int Array[100] , int& ArrayLength){
    
//     for (int i = 0 ; i < ArrayLength ; i++){
//             Array[i] =  RandomNumberInRange(1 , 100);
//     }
// }
void PrintArray (int Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << Array[i] << " ";
    }
    cout << endl;
}
void CopyReverseArray(int Array1[100], int Array2[100], int Length){
    for(int i = 0; i <= Length; i++){ 
        Array2[i] = Array1[Length - 1 - i];
    }
}

int main(){
    srand(time(NULL));
    int arr1[100];
    int arr2[100];

    int ArrayLength = ReadPositiveNumber("Please Enter Array Length: ");

    FilArrayWithRandomNumber(arr1 , ArrayLength);
    PrintArray(arr1 , ArrayLength);

    cout << "Array 2 Is is :" << endl;
    CopyReverseArray(arr1, arr2, ArrayLength);
    PrintArray(arr2, ArrayLength);

    return 0;
}
//////___________________________________________________________________________________________////////////




