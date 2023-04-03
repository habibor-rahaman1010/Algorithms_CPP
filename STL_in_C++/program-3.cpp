//pair in c++ program...

#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int>p;
    p.first = 1;
    p.second = 100;
    cout<<"Key: " <<p.first <<" ";
    cout<<"Value: " <<p.second <<"\n";

    p.first = 2;
    p.second = 200;
    cout<<"Key: " <<p.first <<" ";
    cout<<"Value: " <<p.second <<"\n";

    p.first = 3;
    p.second = 300;
    cout<<"Key: " <<p.first <<" ";
    cout<<"Value: " <<p.second <<"\n";

    pair<string, int>p2;
    p2.first = "one";
    p2.second = 10;
    cout<<"Key: " <<p2.first <<" ";
    cout<<"Value: " <<p2.second <<"\n";

    p2.first = "two";
    p2.second = 20;
    cout<<"Key: " <<p2.first <<" ";
    cout<<"Value: " <<p2.second <<"\n";

    p2.first = "three";
    p2.second = 30;
    cout<<"Key: " <<p2.first <<" ";
    cout<<"Value: " <<p2.second <<"\n";


return 0;
}
