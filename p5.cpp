#include <iostream>
#include <algorithm>

using namespace std;

long gcd(long a, long b) {
    while(b > 0) {
        if(b > a)
            swap (a,b);
        long temp = b;
        b = a-b;
        a = temp;
    }
    return a;
}

long lcm(long a, long b) {
    long g = gcd(a,b);
    long ans = (a*b)/g;
    return ans;
}

int main() {
    long ans = 1;
    for(int i = 2; i <= 20; ++i) {
        ans = lcm(ans, i);
    }
    cout << ans << endl;
}
