//factorial of a given number
#include<iostream>
using namespace std;

int main() {
   int num,fact=1;
   cout << "Enter number :  ";
   cin >> num;
   
   for (int i=1; i<=num; i++) {
      fact=fact*i;
   }

   cout << "Factorial =" << fact <<endl;
   return 0;
}