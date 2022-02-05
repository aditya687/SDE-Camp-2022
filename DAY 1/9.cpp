//type casting of int, double and float
#include <iostream>
using namespace std;

int main() {
    //taking float and int
    float c = 89.65;
    int b = 450;
    int a = 11;
    
    //from int to double
    double d = (double)b/a;
    cout << "enter the number = " << d << endl;
    
    //from float to int
    int e= (int)c;
    cout << "enter the second number = " << e<< endl;

    return 0;
}