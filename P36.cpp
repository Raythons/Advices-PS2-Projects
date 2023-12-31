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


int main(){
    srand(time(NULL));
    int arr1[100];
    int Length = 0;
    InputUserNumbersInArray(arr1 , Length);
    cout << "\n Array is: \n";
    PrintArray(arr1 , Length);
    return 0;
}
//////___________________________________________________________________________________________////////////




