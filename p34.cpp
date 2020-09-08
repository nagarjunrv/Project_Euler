#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> fact(10, 1);
    for(int i = 1; i < 10; i++) {
        fact[i] *= fact[i-1]*i;
    }

    int sum = 0;
    for(int i = 10; i < 8*fact[9]; i++) {
        int digit_sum = 0;
        int num = i;
        while(num > 0) {
            digit_sum += fact[num%10];
            if (digit_sum > i) {
                break;
            }
            num /= 10;
        }
        if (digit_sum == i) {
            sum += i;
        }
    }
    cout << sum << endl;
}

