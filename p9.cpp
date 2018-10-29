#include <iostream>

using namespace std;

bool isPythTriplet(int a, int b, int c) {
    return (a*a + b*b == c*c);
}

int main() {
    int a, b, c;
    for(a = 1; a <= 997; ++a) {
        for(b = a+1; b <= 998; ++b) {
            c = 1000 - a - b;
            if(c <= b)
                break;
            if(isPythTriplet(a, b, c)) {
                cout << a*b*c << endl;
                return 0;
            }
        }
    }
}
