#include<iostream>
#include<cstdio>      // For printf
using namespace std;

int main(){
    int x, y, z;
    cin>>x>>y>>z
    double avg;
    avg = double(x+y+z)/3;
    
    printf("Average :%.2f", avg);    // .2f means 2 decimal places
    return 0;
}