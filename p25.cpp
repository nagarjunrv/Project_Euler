#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;
int main() {
    int max_cycle = 0;
    unordered_map<int, int> cycle;
    int num = 1, cycle_len = 0;
    for(int den =1; den <= 1000; den++) {
        num = 1;
        cycle.clear();
        cycle.insert(1);
        cycle_len = 1;
        while(true){
            while(num < den){
                num *= 10;
                cycle_len++;
            }
            cycle_len--;
            num = num % den;
            if (num == 0)
                break;
            if(cycle.count(num) > 0) {
                std::cout << den << ":" << cycle.size() << endl;
                if(max_cycle <= int(cycle.size()))
                    max_cycle = den;
            break;
            }
            cycle.insert(num,cycle_len);
        }
        
    }
    std::cout << max_cycle << std::endl;
}

