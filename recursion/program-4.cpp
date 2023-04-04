//string revers using recursion in c++ program...

#include <iostream>
#include <string>
using namespace std;

string reverse_print(string str){
    int n = str.size();
    if(n == 0){
        return str;
    }
    else{
        return reverse_print(str.substr(1)) + str[0];
    }
}


int main(){
    string str;
    cout<<"Enter string: ";
    cin>>str;

    string ans = reverse_print(str);
    cout<<ans <<"\n";

return 0;
}
