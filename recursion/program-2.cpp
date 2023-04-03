//palindrome in c++ program use recursion...

#include <iostream>
using namespace std;

bool is_palindrome(string str){
    int n = str.size();
    int l = 0, r = n - 1;
    while(l < r){
        if(str[l] != str[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    cout<<"Enter the string: ";
    string str;
    cin>>str;

    bool ans = is_palindrome(str);
    if(ans){
        cout<<"is palindrome!";
    }
    else{
        cout<<"not palindrome!";
    }

return 0;
}
