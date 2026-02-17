class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = 2;
        int sum=2;
        int result = 2;
    
        for (int i=0; i<nums.size()-2; i++){
            if(nums[i]+ nums[i+1] == nums[j]){
                result++;
                if(sum < result) sum = result;
            }else{
                result=2;
            }
            j++;
        }
        return sum;
    }
};