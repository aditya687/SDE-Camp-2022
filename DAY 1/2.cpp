//check age is greater than 18

#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    if(age>18){
        cout<< "Elgible for voting" <<endl;
    }
    else if(age<18){
        cout<< "Not eligible for voting" <<endl;
    }
    else{
        cout<< "Invalid" <<endl;
    }   
    return 0;
}


