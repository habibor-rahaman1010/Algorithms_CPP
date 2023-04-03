//pair in c++ program...

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> paire1 = make_pair(1, 23);
    pair<string, string> paire2 = make_pair("Name", "Habibor Rahaman");
    pair<char, string> paire3 = make_pair('P', "Programming");
    pair<double, int> paire4 = make_pair(1.2, 24);

    cout<<"Key: " <<paire1.first <<" " <<"Value: " <<paire1.second <<"\n";
    cout<<"Key: " <<paire2.first <<" " <<"Value: " <<paire2.second <<"\n";
    cout<<"Key: " <<paire3.first <<" " <<"Value: " <<paire3.second <<"\n";
    cout<<"Key: " <<paire4.first <<" " <<"Value: " <<paire4.second <<"\n";

return 0;
}
