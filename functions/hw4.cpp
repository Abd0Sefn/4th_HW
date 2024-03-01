#include<iostream>
using namespace std;
bool is_palindrome_arr(int arr[], int n){
    bool is_pal = true;
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[n-i-1]){
            is_pal = false;
            break;
        }
    }
    return is_pal;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << is_palindrome_arr(arr,n);
    return 0;
}