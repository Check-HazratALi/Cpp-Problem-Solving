#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a, b, c;
    
    cout << "Input three numbers: ";
    cin >> a >> b >> c;
    
    int sum = a + b + c;
    double avg = double(sum) / 3;
    
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(2);  // .2f means 2 decimal places
    cout << "Average: " << avg << endl;
    
    return 0;
}