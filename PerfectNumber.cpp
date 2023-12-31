#include <iostream>
#include <cmath>
using namespace std;
enum enPerfectNotPerfect
{
    Perfect = 1,
    NotPerfect = 2
};
int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// using enums more readble

// bool IsPerfectNumber(int Number)
// {
//     int Sum = 0;
//     for (int i = 1; i < Number; i++)
//     {
//         if (Number % i == 0)
//         {
//             Sum += i;
//         }
//     }
//     return Sum == Number;
// }
enPerfectNotPerfect CheckPerfect(int N)
{
    int Sum = 0;
    for (int i = 1; i < N; i++)
    {
        if (N % i == 0)
        {
            Sum += i;
        }
    }
    if (Sum == N)
        return enPerfectNotPerfect::Perfect;
    else
        return enPerfectNotPerfect::NotPerfect;
}
void PrintIsPerfectNumber(int Number)
{
    switch (CheckPerfect(Number))
    {
    case enPerfectNotPerfect::Perfect:
        cout << Number << " Is Perfect Number";
        break;
    case enPerfectNotPerfect::NotPerfect:
        cout << Number << " Is Not Perfect Number";
        break;
    }
};
int main()
{
    PrintIsPerfectNumber(ReadPositiveNumber("Please Enter Number To check if Its Perfect or Not: "));
    return 0;
}
//////___________________________________________________________________________________________////////////
