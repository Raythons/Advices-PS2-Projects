#include <iostream>
using namespace std;


void PrintTableHeader(){
    cout << "\n\n\t\t\t Multiplication Table From 1 To 10 \n\n";
    cout << "\t";
    for (int i = 1 ; i < 11; i++){
        cout << i << "\t";
    }
    cout << "\n__________________________________________________________________________________\n";
}
string ColumnSeperator(int i){
    if (i <10)
        return "    |";
    else 
        return "   |";
}
void PrintTableMulti(){
    PrintTableHeader();
    for(int i = 1; i < 11; i++){
        cout << " " << i << ColumnSeperator(i) << "\t";
        for (int j = 1; j < 11; j++)
        {
            cout << i*j << "\t";
        }
        cout << "\n";
    }
}
int main() {
    PrintTableMulti();
    return 0;
}







