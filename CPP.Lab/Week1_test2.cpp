#include <iostream>
using namespace std;
int main() {
    int score;
    cin >> score;
    if (score >= 10) { cout << "经典" <<'\n';} 
    else if (score >= 8) {cout << "非常好" <<'\n';}
    else if (score >= 6) {cout << "一般" <<'\n';} 
    else if (score >= 1) {cout << "烂片" <<'\n';}
    else {cout << "输入不合法" <<'\n';}
    return 0;
}