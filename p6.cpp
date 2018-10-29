#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    long n = 100, ans = 0;
    for(int i = 1; i <n; ++i) {
        for(int j = i+1; j <= 100; ++j) {
            ans += i*j;
        }
    }
    ans *= 2;
    cout << ans << endl;
}

