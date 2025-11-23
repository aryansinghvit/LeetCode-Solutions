class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        for(int j=1; j<nums.size();j++){
            if(nums[j]==nums[j-1]){
                continue;
            }else{
                i++;
                nums[i]=nums[j];
            }

        }
        return{i+1};
    }
};