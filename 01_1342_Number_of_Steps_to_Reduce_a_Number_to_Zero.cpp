#include <iostream>
#include <cassert>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while (num > 0) {
            if (num & 1) num--;      // odd
            else num >>= 1;          // even
            steps++;
        }
        return steps;
    }
};

int main() {
    Solution s;
    assert(s.numberOfSteps(14) == 6);
    assert(s.numberOfSteps(8) == 4);
    assert(s.numberOfSteps(123) == 12);
    assert(s.numberOfSteps(0) == 0);
    assert(s.numberOfSteps(1) == 1);
    cout << "1342: all tests passed\n";
}
