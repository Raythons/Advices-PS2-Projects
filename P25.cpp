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
int GetMinNumberInRandomArray(int Array[100], int ArrayLength){
    int Min = Array[0];
    for(int i = 0; i < ArrayLength; i++){
            if(Array[i] < Min) {
                Min = Array[i];
            }
    }
    return Min;
}
int main(){
    srand(time(NULL));
    int ArrayLength = 0;
    int arr[100];
    ReadArray(arr , ArrayLength);
    PrintArray(arr, ArrayLength);
    cout << "Min Is : "  << GetMinNumberInRandomArray(arr ,ArrayLength);
    return 0;
}
//////___________________________________________________________________________________________////////////




