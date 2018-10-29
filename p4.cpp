#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool isPalindrome(long n) {
    string n1 = to_string(n);
    string n2(n1);
    reverse(n2.begin(), n2.end());

    return n1 == n2;
}

int main() {
    long ans = 0;
    for(int i = 999; i >= 100; i--) {
        for(int j = 999; j >= i; j--) {
            long n = i*j;
            if(n < ans)
                break;
            if(isPalindrome(n)) {
                ans = max(ans, n);
            }
        }
    }
    cout << ans << endl;
}

