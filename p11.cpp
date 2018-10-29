#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>

using namespace std;

long maxProduct(vector<vector<int>> &vec, int i, int j) {
    long prodr = 1, prodd = 1, prodld = 1, prodrd = 1;
    for(int idx = 0; idx<4 && idx+j < vec[0].size(); ++idx) {
        prodr *= vec[i][idx+j];
    }
    for(int idx = 0; idx<4 && i+idx < vec.size(); ++idx) {
        prodd *= vec[i][idx+j];
    }
    for(int idx = 0; idx<4 && i+idx < vec.size() && j + idx < vec[0].size(); ++idx) {
        prodrd *= vec[i+idx][idx+j];
    }
    for(int idx = 0; idx<4 && i+idx < vec.size() && j - idx > 0; ++idx) {
        prodld *= vec[i+idx][-idx+j];
    }
    return max(max(prodr, prodd), max(prodrd, prodld));
}

int main() {
    vector<vector<int>> vec;
    string line;
    ifstream infile("p11.txt");
    while(getline(infile, line)) {
        stringstream ss(line);
        int ipt;
        vector<int> v;
        while (ss >> ipt) {
            v.push_back(ipt);
        }
        vec.push_back(v);
    }
    long ans = 0;
    for(int i = 0; i < vec.size(); ++i) {
        for(int j = 0; j < vec[0].size(); ++j) {
            ans = max(ans, maxProduct(vec, i, j));
        }
    }
    cout << ans << endl;
}
