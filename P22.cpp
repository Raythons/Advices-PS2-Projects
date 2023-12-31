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

void ReadArray(int Array[100] , int& ArrayLength){
    ArrayLength = ReadPositiveNumber("Please Enter The Number Of Elements");

    for (int i = 0 ; i < ArrayLength ; i++){
            cout << "Please Enter Array " << "{" << i + 1 << "}" << "Element\n";
            cin >> Array[i];
    }
}
void PrintArray (int Array[100] , int ArrayLength){
    for(int i = 0 ; i < ArrayLength; i ++ ){
        cout << "Array {" << i << "}: " << Array[i] << "\n";
    }
}
int RepeatedNumber(int CheckNumber , int Array[100], int ArrayLength){
    int Repeated = 0;
    for (int i = 0 ; i < ArrayLength; i ++){
        if(CheckNumber == Array[i]){
            Repeated += 1;
        }
    }
    return Repeated;
}
int main(){
    int ArrayLength = 0;
    int arr[100];
    ReadArray(arr , ArrayLength);
    PrintArray(arr, ArrayLength);
    cout << RepeatedNumber(ReadPositiveNumber("Please Entr Number To Check"), arr , ArrayLength);
    srand(time(NULL));
    return 0;
}
//////___________________________________________________________________________________________////////////




