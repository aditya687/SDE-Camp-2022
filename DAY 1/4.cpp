//calculator using switchcase statements
# include <iostream>
using namespace std;

int main() {

  char cal;
  float a, b;

  cout << "Enter the operator:  ";
  cin >> cal;

  cout << "Enter two operands: ";
  cin >> a >> b;

  switch(cal) {

    case '+':
      cout << a << " + " << b << " = " << a + b;
      break;

    case '-':
      cout << a << " - " << b<< " = " << a - b;
      break;

    case '*':
      cout << a << " * " << b << " = " << a * b;
      break;

    case '/':
      cout << a << " / " << b << " = " << a/ b;
      break;

    default:
      cout << "Invalid operation";
      break;
  }

  return 0;
}
