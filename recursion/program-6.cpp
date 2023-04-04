#include <iostream>

using namespace std;

char getCapital(string str) {
    if (str[0] >= 'A' && str[0] <= 'Z') {
        return str[0];
    }
    else if (str.length() == 1) {
        return '\0';
    }
    else {
        return getCapital(str.substr(1));
    }
}

int main() {
    string str = "heLlO";
    cout << getCapital(str) << "\n";
    return 0;
}

