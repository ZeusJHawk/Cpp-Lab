#include <iostream>
using namespace std;
int main() {
    int peaches = 1; 
    for (int i = 9; i >= 1; --i) {
        peaches = (peaches + 1) * 2; 
    }
    cout <<peaches<<'\n';
    return 0;
}