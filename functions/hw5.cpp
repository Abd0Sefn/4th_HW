#include<iostream>
using namespace std;
int power(int b, int p){
    int res = 1;
    while(p--)
        res*= b;
    return res;
}
void set_powers(int arr[], int len = 5, int m = 2){
    for(int i = 0; i < len; i++){
        arr[i] = power(m,i);
    }
}
int main(){
    int arr[4];
    set_powers(arr, 4, 3);
    for(int i = 0; i < 4; i++)
    cout << arr[i] << " ";
    return 0;
}