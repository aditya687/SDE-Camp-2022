#include<iostream>
using namespace std;
int main() {
	int i, j, rows=5;
  
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
	return 0;
}