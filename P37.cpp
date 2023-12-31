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
void AddElementArray (int Array[100], int& Length, int NumberToAdd){
    Length++;
    Array[Length - 1] = NumberToAdd;
}
void InputUserNumbersInArray(int Array[100], int &Length){
    bool AddMore = true;
    do
    {
        AddElementArray(Array , Length , ReadPositiveNumber("Please Enter Number To Add To Array: "));
        cout << "\nPlease Enter [1] To Add Another Array Element  and Enter [0] if You Want To Stop: \n";
        cin >> AddMore;
    } while (AddMore);
    
}
void PrintArray (int Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << "Array[" << i + 1 << "] " << Array[i] << "\n";
    }
    cout << endl;
}
void CopyArrayUsingAddElementArray(int arr1[100] , int arr2[100], int arr1Length ,int& Array2Length){
    for (int i= 0; i < arr1Length; i++)
    {
        AddElementArray(arr2 ,Array2Length, arr1[i]);
    }
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

int main(){
    srand(time(NULL));
    int arr1[100];
    int Length = 0;
    ReadArray(arr1, Length);
    PrintArray(arr1 , Length);

    int arr2[100];
    int Length2 = 0;
    CopyArrayUsingAddElementArray(arr1, arr2 ,Length, Length2);
    cout << "\n Array2 is: \n";
    PrintArray(arr2 , Length2);
    return 0;
}
//////___________________________________________________________________________________________////////////




