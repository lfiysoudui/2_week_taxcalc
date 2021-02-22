#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;



int main(){
    float a = 0,tax = 0;
    cin >> a;
    if (a <= 750){
        tax = a*0.01;
    }
    else if (a <= 2250) {
        tax = 7.5 + (a-750)*0.02;
    }
    else if (a <= 3750) {
        tax = 37.5 + (a-2250)*0.02;
    }
    else if (a <= 5250) {
        tax = 82.5 + (a-3750)*0.04;
    }
    else if (a <= 7000) {
        tax = 142.5 + (a-5250)*0.05;
    }
    else {
        tax = 230 + (a-7000)*0.06;
    }
    cout <<fixed << setprecision(2)<< tax ;
}  
