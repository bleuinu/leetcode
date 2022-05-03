class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) || decreasing(nums);
    }
    
    bool increasing(vector<int> &nums) {
        for(int i=0; i<nums.size()-1; ++i)
            if (nums[i] > nums[i+1]) return false;
        return true;
    }
    
    bool decreasing(vector<int> &nums) {
        for(int i=0; i<nums.size()-1; ++i) 
            if (nums[i] < nums[i+1]) return false;
        return true;
    }
};