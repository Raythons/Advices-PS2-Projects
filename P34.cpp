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

void FillArrayWithRandomNumbers(int Array[100] , int ArrayLength){
    for (int i = 0 ; i < ArrayLength ; i++){
            Array[i] =  RandomNumberInRange(1 , 100);
    }
}
void PrintArray (int Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << "Array[" << i + 1 << "] " << Array[i] << "\n";
    }
    cout << endl;
}
int FindNumberInArray(int Array[100],int NumberToCheck, int Length){
    for (int i = 0 ; i < Length ; i ++){
        if(NumberToCheck == Array[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    srand(time(NULL));
    int arr1[100];

    int ArrayLength =  ReadPositiveNumber("Please Enter Array Length: ");
    FillArrayWithRandomNumbers(arr1 , ArrayLength);
    cout << "\n Array 1 elements; \n";
    PrintArray(arr1 , ArrayLength);
    int SearchNumber = ReadPositiveNumber("Enter Number You Search For");
    cout << "The Number You Looking For Is: " << SearchNumber;

    int NumberPosition =   FindNumberInArray(arr1 , SearchNumber , ArrayLength);
    if(NumberPosition == -1)
        cout << "Number You Search For is Not In Array :";
    else
        cout << "\n"<< NumberPosition;
    return 0;
}
//////___________________________________________________________________________________________////////////




