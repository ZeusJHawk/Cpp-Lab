#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin >> n >> a;
    long long current = 0,sum = 0; 
    for (int i = 1; i <= n; ++i) {
        current = current * 10 + a; 
        sum += current; 
    }
    cout <<sum<< endl;
    return 0;
}