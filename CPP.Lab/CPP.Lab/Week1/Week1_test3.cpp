#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str, original;
    cin >> str;
    original = str; 
    reverse(str.begin(), str.end());
    if (str == original) {cout << "Yes" <<'\n';} 
    else {cout << "No" <<'\n';}
    return 0;
}