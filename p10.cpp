#include <iostream>
#include <vector>

using namespace std;

int main() {
    long n = 1999999;
    vector<bool> nums((n-1)/2, true);
    long sum = 2, i;
    for(i = 3; i*i < n; i+=2) {
        if(nums[(i-3)/2]) {
            sum += i;
            for(long j = i*i; j <= n; j+=(2*i)) {
                nums[(j-3)/2] = false;
            }
        }
    }
    for(; i <=n; i+=2) {
        if(nums[(i-3)/2])
            sum += i;
    }
    cout << sum << endl;
}
