#include<iostream>
#include<cmath>      // for abs() function 
using namespace std;

int main(){
    int a, b;
    
    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;
    
    // allways positive
    int diff = abs(a - b);
    
    cout << "difference : " << diff << endl;
    
    return 0;
}