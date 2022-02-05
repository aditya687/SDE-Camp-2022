//check input character is vowel or consonant
#include <iostream>
using namespace std;
int main() {
   char v = 'o';
   if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u' )
   cout << v << " : Vowel" << endl;
   else
   cout << v << " : Consonant" << endl;
   return 0;
}