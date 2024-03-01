#include<iostream>
using namespace std;
void read(){
    cin >>double &a >>double &b;
}
double add(double a, double b){
    return a + b;
}
double subtract(double a, double b){
    return a - b;
}
double mul(double a, double b){
    return a*b;
}
double div(double a, double b){
    if(b)
    return a/b;
    cout << "can't divide by zero";
}
int main(){
   read();
}