#include <iostream>
using namespace std;
  
int main(){
    int base, exp, result = 1;
     
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    for(int i = 0; i < exp; i++){
        result = result * base;
    }
      
    cout << base << "^" << exp << " = " << result;
     
    return 0;
}