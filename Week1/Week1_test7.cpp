#include <iostream>
using namespace std;
int main() {
    long long f[21]; 
    f[1] = 1; f[2] = 1; 
    for (int i = 3; i <= 20; ++i) {f[i] = f[i-1] + f[i-2];} 
    for (int i = 1; i <= 20; ++i) {
        cout << "第" << i << "个月：" << f[i] << "对" <<'\n';
    }
    return 0;
}