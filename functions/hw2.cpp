#include<iostream>
using namespace std;
string reverse_str(const string &str){
    string rev = str;
    for(int i = 0; i < (int)str.size(); i++){
        rev[i] = str[(int)str.size() - 1 - i];
    }
     return rev;
}
int main(){
    cout << reverse_str("AHMED");
    /*string x = ;
    x[0] = 'a';
    x[1] = 'a';
    cout << x;*/
    return 0;
}