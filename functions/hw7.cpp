#include<iostream>
using namespace std;
bool starts_with(string input, string pattern, int pos){
    int len = (int)pattern.size();
    bool result = true;
    int i = 0;
    while(len--){
        if(input[pos] != pattern[i]){
            result = false;
            break;
        }
        pos++;
        i++;
    }
    return result;
}
string replace_str(string input, string pattern, string to){
    string result = "";
    for(int i = 0; i < (int)input.size(); i++){
        if(starts_with(input, pattern, i)){
            result += to;
            i += (int)pattern.size() - 1;
        }
        else
        result += input[i];
    }
    return result;
}
int main(){
    cout << replace_str("aabcabaaad", "aa", "");
    return 0;
}