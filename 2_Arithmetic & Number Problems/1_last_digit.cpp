#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int lastDigit = num % 10;  
    if(lastDigit < 0) lastDigit = abs(lastDigit);  
    
    cout << "Last digit: " << lastDigit << endl;
    return 0;
}
