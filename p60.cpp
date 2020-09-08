#include "primes.h"
#include <iostream>

int main() {
    auto mp = get_ordered_primes_set(100);
    for (auto i : mp) {
        cout << i << endl;
    }
}