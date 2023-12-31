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
    cout << "Array Elements are :  ";
    for(int i = 0 ; i < ArrayLength; i ++ ){
        cout << Array[i] << " ";
    }
    cout << endl;
}
void CopyArray(int arr1[100] , int arr2[100] ,int ArrayLength){
    for (int i= 0; i < ArrayLength; i++)
    {
        arr2[i] = arr1[i];
    }
}
int main(){
    srand(time(NULL));
    int ArrayLength = 0;
    int arr[100];
    int MyArr2[100];
    ReadArray(arr , ArrayLength);
    PrintArray(arr, ArrayLength);
    CopyArray(arr , MyArr2, ArrayLength);
    cout << " Array 2 Is: \n";
    PrintArray(MyArr2, ArrayLength);
    return 0;
}
//////___________________________________________________________________________________________////////////




