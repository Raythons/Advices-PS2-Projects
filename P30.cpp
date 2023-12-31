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
void ReadArray(int Array[100] , int& ArrayLength){
    
    for (int i = 0 ; i < ArrayLength ; i++){
            Array[i] =  RandomNumberInRange(1 , 100);
    }
}
void PrintArray (int Array[100] , int ArrayLength){
    for(int i = 0 ; i < ArrayLength; i ++ ){
        cout << Array[i] << " ";
    }
    cout << endl;
}
void SumArraysIn3rd (int SourceArr1[100], int SourceArr2[100] , int DestinaionArr[100],int ArrayLength){
    for(int i = 0 ; i < ArrayLength; i++){
            DestinaionArr[i] = SourceArr1[i] + SourceArr2[i];
    }
}
int main(){
    srand(time(NULL));
    int ArrayLength = ReadPositiveNumber("Please Enter The Number Of Elements");
    int arr1[100];
    ReadArray(arr1 , ArrayLength);
    cout << "Array 1 Is: \n";
    PrintArray(arr1, ArrayLength);

    int arr2[100];
    ReadArray(arr2 , ArrayLength);
    cout << " Array 2 Is: \n";
    PrintArray(arr2, ArrayLength);
    
    int arr3[100];
    cout << "Array 3 Is: \n";
    SumArraysIn3rd(arr1 ,arr2 , arr3, ArrayLength);
    PrintArray(arr3, ArrayLength);
    return 0;
}
//////___________________________________________________________________________________________////////////




