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

void PrintArray (int Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << "Array[" << i + 1 << "] " << Array[i] << "\n";
    }
    cout << endl;
}
int RandomNumberInRange(int From ,int To){
    return rand() % (From - To + 1) + From;
}

void FilArrayWithRandomNumbers(int Array[100],int ArrayLength){
    for (int i = 0 ; i < ArrayLength ; i++){
            cout << "Please Enter Array " << "{" << i + 1 << "}" << "Element\n";
            Array[i] =  RandomNumberInRange(-100 , 100);
    }
}
int CountNegativeNumberInArray(int Array[100], int ArrayLength){
    int Count = 0;
    for(int i = 0; i < ArrayLength ; i++){
        if(Array[i] < 0){
            Count += 1;
        }
    }
    return Count;
}

int main(){
    srand(time(NULL));
    int arr1[100];
    int Length = ReadPositiveNumber("Please Enter The Number Of Elements You Want In Array:");
    FilArrayWithRandomNumbers(arr1, Length);
    PrintArray(arr1 , Length);
    cout << "\n Even Count In Array Is: " << CountNegativeNumberInArray(arr1 , Length) <<endl;
    return 0;
}
//////___________________________________________________________________________________________////////////




