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
    ArrayLength = ReadPositiveNumber("Please Enter The Number Of Elements");
    
    for (int i = 0 ; i < ArrayLength ; i++){
            cout << "Please Enter Array " << "{" << i + 1 << "}" << "Element\n";
            Array[i] =  RandomNumberInRange(1 , 100);
    }
}
void PrintArray (int Array[100] , int ArrayLength){
    for(int i = 0 ; i < ArrayLength; i ++ ){
        cout << "Array {" << i << "}: " << Array[i] << "\n";
    }
}
int GetRandomArraySum(int Array[100], int ArrayLength){
    int Sum = 0;
    for(int i = 0; i < ArrayLength; i++){
        Sum += Array[i];
    }
    return Sum;
}
float GetAverageRandomArray(int arr [100], int Length){
    return (float )GetRandomArraySum(arr, Length) / Length;
}
int main(){
    srand(time(NULL));
    int ArrayLength = 0;
    int arr[100];
    ReadArray(arr , ArrayLength);
    PrintArray(arr, ArrayLength);
    cout << "Min Is : "  << GetRandomArraySum(arr ,ArrayLength);
    return 0;
}
//////___________________________________________________________________________________________////////////




