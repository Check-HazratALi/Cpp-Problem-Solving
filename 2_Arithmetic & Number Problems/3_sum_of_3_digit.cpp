#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a 3-digit number: ";
    cin>>num;

    if(num<0)num = num;

    if (num>=100 && num<=999)
    {
        int d1= num/100;
        int d2= (num/10)-(d1*10);
        int d3= num%10;

        int sum= d1+d2+d3;
        cout<<"Sum of digits: "<<sum<<endl;
    }else{
        cout<<"Not a 3-digit number!"<<endl;
    }

    return 0;
    
}