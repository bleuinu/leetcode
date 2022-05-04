class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        const int SIZE = nums.size();
        
        for(int i=1; i<SIZE; ++i) {
            nums[i] += nums[i-1];
        }
        
        return nums;
    }
};