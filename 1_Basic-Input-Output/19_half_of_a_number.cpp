#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int num;
    cout << "Input a number: ";
    cin >> num;
    
    double result = double(num) / 2;
    
    cout << fixed << setprecision(2);
    cout << num << " ÷ 2 = " << result << endl;
    
    return 0;
}