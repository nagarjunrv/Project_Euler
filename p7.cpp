#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    vector<long> primes = {2};
    int size = 10001;
    bool p_flag = true;
    auto start = high_resolution_clock::now();
    for(long cur_num = 3; primes.size() != size; cur_num+=2) {
        for(auto i : primes) {
            if(i*i > cur_num)
                break;
            if(cur_num % i == 0) {
                p_flag = false;
                break;
            }
        }
        if(p_flag)
            primes.emplace_back(cur_num);
        p_flag = true;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << primes[size-1] << endl;
    cout << duration.count() << endl;
}
