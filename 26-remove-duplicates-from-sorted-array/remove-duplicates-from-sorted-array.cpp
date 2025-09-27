#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        int k = 1; // index to place unique elements
        for (int i = 1; i < (int)nums.size(); i++) {
            if (nums[i] != nums[i-1]) {
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};
