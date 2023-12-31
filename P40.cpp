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
// void InputUserNumbersInArray(int Array[100], int &Length){
//     bool AddMore = true;
//     do
//     {
//         AddElementArray(Array , Length , ReadPositiveNumber("Please Enter Number To Add To Array: "));
//         cout << "\nPlease Enter [1] To Add Another Array Element  and Enter [0] if You Want To Stop: \n";
//         cin >> AddMore;
//     } while (AddMore);
    
// }
void PrintArray (int Array[100] , int Length){
    for(int i = 0 ; i < Length; i ++ ){
        cout << "Array[" << i + 1 << "] " << Array[i] << "\n";
    }
    cout << endl;
}
int FindNumberPositionInArray(int Array[100],int NumberToCheck, int Length){
    for (int i = 0 ; i < Length ; i ++){
        if(NumberToCheck == Array[i]){
            return i;
        }
    }
    return -1;
}
bool IsNumberInArray(int Array[100],int NumberToCheck, int Length){
    return FindNumberPositionInArray(Array , NumberToCheck, Length ) != -1;
}


void CopyDistinctNumbersToArray(int arrSource[100] , int arrDestination[100], int arr1Length ,int& arrDestinationLength){
    for (int i= 0; i < arr1Length; i++)
    {
        if(!IsNumberInArray(arrDestination, arrSource[i], arrDestinationLength)){
            AddElementArray(arrDestination ,arrDestinationLength, arrSource[i]);
        }
    }
}
// int RandomNumberInRange(int From , int To){
//     return rand() % (From - To + 1) + From;
// }

// void ReadArray(int Array[100] , int& ArrayLength){
//     ArrayLength = ReadPositiveNumber("Please Enter The Number Of Elements");
    
//     for (int i = 0 ; i < ArrayLength ; i++){
//             cout << "Please Enter Array " << "{" << i + 1 << "}" << "Element\n";
//             Array[i] =  RandomNumberInRange(1 , 100);
//     }
// }

int main(){
    srand(time(NULL));
    int arr1[100] = {10,10,10, 50,50,70, 70 , 70, 70 ,90};
    int Length = 10;
    int arr2[100];
    int Array2Length = 0;
    CopyDistinctNumbersToArray(arr1 , arr2 , Length , Array2Length);
    PrintArray(arr2, Array2Length);

    return 0;
}
//////___________________________________________________________________________________________////////////




