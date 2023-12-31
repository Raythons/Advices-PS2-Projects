#include <iostream>
#include <cmath>
using namespace std;

enum enPrimeNotPrime  {Prime = 1, NotPrime = 2};
int ReadPositiveNumber(string Message){
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enPrimeNotPrime IsPrime (int Number){
    int M = round(Number /2);
    for(int Counter = 2; Counter <= M ; Counter++){
        if(Number % Counter == 0){
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}
void PrintNumberType(int N){
        if(IsPrime(N) == enPrimeNotPrime::Prime)
        cout << N  <<" Is Prime Number\n";
        else 
        cout << N <<" Is Not Prime Number\n";
}
void PrintNumberTypeToN(int N){
    for (int i = 2; i <= N; i++){
        PrintNumberType(i);
    }
}

int main() {
    PrintNumberTypeToN(ReadPositiveNumber("Please Enter Positive Number"));
    return 0;
}







