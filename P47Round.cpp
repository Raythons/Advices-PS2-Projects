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
float GetFraction(float Number){
    return  Number -  (int)Number;
}

int MyRound(float Number){
    int IntPart;
    IntPart = (int)IntPart;
    
    float Friction = GetFraction(IntPart);
    if(abs(Friction) > 0.5){
        if(Number >0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else {
        return IntPart;
    }

}


int main(){
    srand(time(NULL));
    float Number = -10.7;
    cout << "My Abs Function: " << MyRound(Number) << endl;
    cout << "c++ Round Function: " << round(Number) << endl;
    return 0;
}
//////___________________________________________________________________________________________////////////




