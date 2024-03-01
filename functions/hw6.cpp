#include<iostream>
using namespace std;
bool is_prime(int num){
    bool is_prime1 = true;
    for(int i = 2; i <= num / 2 ; i++){
        if(num % i == 0){
            is_prime1 = false;
            break;
        }
    }
    if(num == 0 || num == 1)
    is_prime1 = false;
    return is_prime1;
}
int nth_prime(int n) {
     int i = 0;
    while(n){
        if(is_prime(i)){
            n--;
        }
        i++;
    }
    return --i;
}
int main(){
    cout << nth_prime(1);
}