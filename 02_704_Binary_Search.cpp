#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = (int)nums.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] == target) return mid;
            if (nums[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int> a = {-1, 0, 3, 5, 9, 12};
    assert(s.search(a, 9) == 4);
    assert(s.search(a, 2) == -1);
    assert(s.search(a, -1) == 0);
    assert(s.search(a, 12) == 5);
    vector<int> one = {5}, empty;
    assert(s.search(one, 5) == 0);
    assert(s.search(empty, 1) == -1);
    cout << "704: all tests passed\n";
}
