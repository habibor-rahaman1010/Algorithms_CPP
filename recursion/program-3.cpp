//palindrome in c++ program using recursion...

#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str){
    if(str == "" || str.size() == 1){
        return true;
    }
    int n = str.size();
    string small_str = str.substr(1, n - 2);
    return is_palindrome(small_str) && (str[0] == str.back());
}

int main() {
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    bool ans = is_palindrome(str);

    if(ans){
        cout<<"is palindrome! \n";
    }
    else{
        cout<<"not palindrome \n";
    }

return 0;
}
