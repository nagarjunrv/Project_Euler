#include <set>
#include <vector>
#include <iostream>

using namespace std;

set<long> get_ordered_primes_set(long n) {
    set<long> ret;
    vector<bool> nums(n+1, true);
    for(long i = 2; i*i <= n; i++) {
        
        if(nums[i]) {
            for(long j = i*i; j <= n; j+=i) {
                nums[j] = false;
            }
        }
    }

    for(long i = 2; i <= n; i++) {
        if(nums[i]) {
            ret.insert(i);
        }
    }

}