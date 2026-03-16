#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int firstDigit = num;
    while(firstDigit >= 10 || firstDigit <= -10) {
        firstDigit /= 10;  // Keep dividing by 10 until one digit left
    }
    if(firstDigit < 0) firstDigit = -firstDigit;
    
    cout << "First digit: " << firstDigit << endl;
    return 0;
}